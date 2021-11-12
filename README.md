# CSE237C Fall 2021 ReLU Optimizer Final Project

## Project Overview
hls4ml is a Python library used to generate HLS for machine learning models defined using the most popular Python ML libraries, e.g., Tensorflow, Keras. Right now, hls4ml best supports converting Keras models into HLS, so that's what we'll be focusing on in this project. The goal of hls4ml is to generate HLS that is low-latency and resource-efficient. To achieve this, they execute the entire ML model on-chip, using a dataflow model of computation, where each dataflow stage consists of a single neural network layer. In between each dataflow stage, data is streamed using FIFOs that are implemented using BRAMs. This implies that the more layers you have, the more FIFOs you need, which costs more BRAMs, making it costly to implement deeper networks. This project aims to cut down on BRAM utilization by merging two neural network layers that commonly appear next to each other in Convolutional Neural Networks (CNNs).

In CNNs, it has been shown that using the ReLU activation function leads to high accuracy. As such, it is common to apply the ReLU activation function to the output of the convolutional layers, resulting in a layer structure where nearly every convolutional layer is followed by a ReLU layer. For this project, we leverage this knowledge and merge each convolutional layer with the ReLU layer that follows it (if it exists). 

Preliminary work has shown that doing so in HLS results in lowered BRAM and LUT utilization on a small CNN trained on the CIFAR-10 dataset. But, this work was done manually. We first generated the HLS for the small CNN with hls4ml and then manually edited the outputted HLS to apply this optimization. Manually editing HLS to apply this optimization every time is time-consuming and error-prone, so the goal of this project is to automate this process in hls4ml such that hls4ml can recognize this convolutional-relu layer pattern in its input Keras model and generate HLS with merged convolutional-relu layers. 

This is possible using hls4ml's Optimizer class. The way hls4ml works is that it first reads in the input Keras model and then deconstructs it into hls4ml's own Internal Representation (IR) called HLSModel, which is another Python class. hls4ml then uses the IR to generate HLS using its templated HLS files. The Optimizer class works on the IR. Once the model is represented in the IR, the user can then turn on an "optimization flag," letting hls4ml know to perform certain optimization passes on the IR. After these optimizations have been applied, then the HLS is generated. Therefore, for this project, you will extend hls4ml and implement a convolutional-relu optimization pass.

## Repo Structure

## Getting Started
