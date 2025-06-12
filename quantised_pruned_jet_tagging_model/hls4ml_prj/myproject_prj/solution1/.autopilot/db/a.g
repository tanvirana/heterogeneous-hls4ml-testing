#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /mnt/ccnas2/tdp/tr720/final-year-project-workspace/heterogeneous-hls4ml-testing/quantised_pruned_jet_tagging_model/hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
