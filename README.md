# CSE237C Fall 2021 ReLU Optimizer Final Project
![convolutional-relu_optimization](/assets/merged_relu_overview.png)
## Project Overview
![hls4ml_workflow](/assets/hls4ml_overview.jpg)
hls4ml is a Python library used to generate HLS for machine learning models defined using the most popular Python ML libraries, e.g., Tensorflow, Keras. Right now, hls4ml best supports converting Keras models into HLS, so that's what we'll be focusing on in this project. The goal of hls4ml is to generate HLS that is low-latency and resource-efficient. To achieve this, they execute the entire ML model on-chip, using a dataflow model of computation, where each dataflow stage consists of a single neural network layer. In between each dataflow stage, data is streamed using FIFOs that are implemented using BRAMs. This implies that the more layers you have, the more FIFOs you need, which costs more BRAMs, making it costly to implement deeper networks. This project aims to cut down on BRAM utilization by merging two neural network layers that commonly appear next to each other in Convolutional Neural Networks (CNNs).

In CNNs, it has been shown that using the ReLU activation function leads to high accuracy. As such, it is common to apply the ReLU activation function to the output of the convolutional layers, resulting in a layer structure where nearly every convolutional layer is followed by a ReLU layer. For this project, we leverage this knowledge and merge each convolutional layer with the ReLU layer that follows it (if it exists). 

Preliminary work has shown that doing so in HLS results in lowered BRAM and LUT utilization on a small CNN trained on the CIFAR-10 dataset. But, this work was done manually. We first generated the HLS for the small CNN with hls4ml and then manually edited the outputted HLS to apply this optimization. Manually editing HLS to apply this optimization every time is time-consuming and error-prone, so the goal of this project is to automate this process in hls4ml such that hls4ml can recognize this convolutional-relu layer pattern in its input Keras model and generate HLS with merged convolutional-relu layers. 

This is possible using hls4ml's Optimizer class. The way hls4ml works is that it first reads in the input Keras model and then deconstructs it into hls4ml's own Internal Representation (IR) called HLSModel, which is another Python class. hls4ml then uses the IR to generate HLS using its templated HLS files. The Optimizer class works on the IR. Once the model is represented in the IR, the user can then turn on an "optimization flag," letting hls4ml know to perform certain optimization passes on the IR. After these optimizations have been applied, then the HLS is generated. Therefore, for this project, you will extend hls4ml and implement a convolutional-relu optimization pass.

## Repo Structure
```
(📂 Directory that will be created)    
(📄 File that will be created)

 📂 Directory that is already included 
 📄 File that is already included

📂cse237c_fa21_relu_optimizer
├── 📂 assets
|   ├── 📄 hls4ml_overview.jpg
|   └── 📄 merged_relu_overview.jpg
|
├──(📂 my-hls-tiny2-non-merged-relu)  <===== Build with your unmodified hls4ml env
├──(📂 my-hls-tiny2-auto-merged-relu) <===== Build with your dev hls4ml env
├── 📂 my-hls-tiny2-manually-merged-relu
|
├── 📂 hls4ml-master
|   ├── ...
|   ├── 📂 hls4ml <===== Edit this source code
|   └── ...
|
├── 📄 unmodified_tiny2.yml
├── 📄 dev_tiny2.yml <===== Edit this file
├── 📂 tiny2-trained-model
|   ├── 📄 model_best.h5
|   └── 📄 model_best_nosoftmax.h5
|
├── 📄 unmodified_convert.py
├── 📄 dev_convert.py <===== Edit this file
├── 📂 updated_c++_hls_files
|   ├── 📄 myproject_test.cpp
|   └── 📄 nnet_dense_resource.h
|
├── 📄 unmodified_requirements.txt
└── 📄 dev_requirements.txt
```

## Setting Up Your Environment
0. (Optional) Set the `$TMPDIR` environment variable to some location with at least 1 GB of storage space (With this variable set, `pip` will temporarily download/build packages in this location instead of the default one which is usually `/tmp`)  
```
export TMPDIR=/path/to/location/with/storage/space
```

1. Use `pip` to install the light-weight environment manager `virtualenv`
```
pip install virtualenv
```

2. Go to this repo, make a directory to store your virtual environments and then go to that new directory
```
cd cse237c_fa21_relu_optimizer
mkdir my-venvs && cd my-venvs
```

3. Create a new environment called `my-unmodified-hls4ml-env` which will contain an unmodified version of hls4ml (in addition to the other necessary packages) 
```
python3 -m venv my-unmodified-hls4ml-env
```

4. Activate `my-unmodified-hls4ml-env` and use `pip` to install the  python packages listed in `unmodified_requirements.txt`
```
source my-unmodified-hls4ml-env/bin/activate
pip install -r unmodified_requirements.txt
```

5. Deactivate `my-unmodified-hls4ml-env`
```
deactivate
```

6. Create another new environment called `my-dev-hls4ml-env` which will *initially* contain an unmodified version of hls4ml that you will *eventually* modify as you extend the hls4ml code to support the merged ReLU optimization
```
python3 -m venv my-dev-hls4ml-env
```

7. Activate `my-dev-hls4ml-env` and use `pip` to install the python packages listed in `dev_requirements.txt`
```
source my-dev-hls4ml-env/bin/activate
pip install -r dev_requirements.txt
```

8. Go to the included `hls4ml-master` code dir and use `pip` to install an *editable* version of `hls4ml` from this local directory (Using the `-e` flag makes it possible for you to update code in this directory and then have those updates be available when you `import hls4ml` without having to reinstall `hls4ml`)
```
cd hls4ml-master
pip install -e .
```

9. Deactivate `my-dev-hls4ml-env`
```
deactivate
```

## High Level Steps
At a very high level, you will need to do the following in order implement this optimization. Note that is not meant to be an exhaustive list of steps but rather a guide on some of the major/critical steps.
1. Update the hls4ml templates:
2. Add a new optimizer pass `relu_fuse.py`: `hls4ml/hls4ml/model/optimizer/passes/`
3. Update the rest of the config related files for the hls4ml workflow
```
⚠️ Some directories/files have neen hidden for readibility⚠️

📂cse237c_fa21_relu_optimizer
├── 📂 hls4ml-master
|   ├── 📂 hls4ml 3️⃣
|   |   ├── 📂 model
|   |   |   ├── 📂 optimizer
|   |   |   |   ├── 📂 passes
|   |   |   |   |   └── (📄 relu_fuse.py) 2️⃣
|   |   ├── 📂 templates
|   |   |   ├── 📂 vivado
|   |   |   |   ├── 📂 nnet_utils
|   |   |   |   |   └── 📄 nnet_dense_resource.h 1️⃣
```

## Tips on Getting Started

* Familiarize yourself with with the hls project in `my-hls-tiny2-manually-merged-relu`. In particular, take a look at the following directories/files. The files shown below are the files which were manually edited to implement the convolutional-relu optimization. As mentioned, you will need to edit the source code in `hls_master` so that hls4ml can automatically generate these files when presented with an hls4ml model that calls for the convolutional-relu optimization.
```
⚠️ Some directories/files have neen hidden for readibility⚠️

📂cse237c_fa21_relu_optimizer
├── 📂 my-hls-tiny2-manually-merged-relu
|   ├── 📂 firmware
|   |   ├── 📄 myproject.cpp
|   |   ├── 📄 parameters.h
|   |   ├── 📂 nnet_utils
|   |   |   └── 📄 nnet_dense_resource.h
``` 

* Activate `my-unmodified-hls4ml-env` and use it to run the following command which will build an hls project for the default/non-merged version of tiny2 (i.e., no convolutional-relu optimization). You should familiarize yourself with the hls project generated in `my-hls-tiny2-non-merged-relu` by looking at the same files mentioned in the previous tip. Take note of what is different between the files in the unmodified/non-merged project and the modified/manually-merged project. 
```
cd cse237c_fa21_relu_optimizer
source my-unmodified-hls4ml-env/bin/activate
python unmodified_convert.py -c unmodified_tiny2.yml
```
