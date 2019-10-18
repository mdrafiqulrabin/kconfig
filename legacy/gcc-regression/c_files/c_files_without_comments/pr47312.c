 
 
 
 
 
 
 

extern double fma (double, double, double);
extern float fmaf (float, float, float);
extern long double fmal (long double, long double, long double);

volatile float f;
volatile double d;
volatile long double ld;

int
main ()
{
  f = fmaf (f, f, f);
  d = fma (d, d, d);
  ld = fmal (ld, ld, ld);
  __asm__ volatile ("" : : "r" (&f), "r" (&d), "r" (&ld) : "memory");
  return 0;
}

