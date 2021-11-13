#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/armita/Andy/hls4ml_conv2d_investigation/my-hls-test-quantized-tiny2_linebuffer_merged/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
