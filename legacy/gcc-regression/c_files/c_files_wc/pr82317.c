 
 

 

#include <vecintrin.h>

vector double
foo (vector double a, vector double b) {
  return vec_min (a, b);
}

vector double
bar (vector double a, vector double b) {
  return vec_max (a, b);
}

