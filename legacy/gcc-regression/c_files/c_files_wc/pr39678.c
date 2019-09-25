 
 
 
 

struct X {
  char c;
  __complex__ float val;
};

struct X
foo (float *p)
{  
  struct X x;
  x.c = -3;
  __real x.val = p[0];
  __imag x.val = p[1];
  return x;
}

