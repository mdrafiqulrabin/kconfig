macpc/maxwell/sabine:

mw-v1: 3x hrs flaky testing with GCC(4.8.2, 4.9.2, 5.2.0, and 5.4.0) on -O0.
mw-v1: 2x hrs optimization level testing with GCC(4.8.2) between -O0 and -O* for default and k10-c9.

sb-v1: 06 hrs optimization level testing with GCC(4.8.2) between -O0 and -O3 for default and k10-c9 by 2 runs.
sb-v2: 13 hrs optimization level testing with GCC(4.8.2) between -O0 and -O3 with round-robin selection of arguments for default, k3 and k10.
sb-v3: 13 hrs optimization level testing with GCC(4.8.2/5.4.0) between -O0 and -O3 with swarm arguments.
sb-v4: 13 hrs optimization level testing with GCC(4.8.2/5.4.0) between -O0 and -O3 by adding probability to round-robin selection of arguments for k10.
sb-v5: 13 hrs optimization level testing with GCC(4.8.2/5.4.0) between -O0 and -O3 by timeout=10/30 for default/probability(k=1,2,4,8,16)/swarm.
