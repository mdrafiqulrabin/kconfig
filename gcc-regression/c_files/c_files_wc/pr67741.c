 

struct singlecomplex { float real, imag ; } ;
struct doublecomplex { double real, imag ; } ;
struct extendedcomplex { long double real, imag ; } ;
extern double cabs();
float cabsf(fc)
     struct singlecomplex fc;   
{
  struct doublecomplex dc ;
  dc.real=fc.real; dc.imag=fc.imag;
  return (float) cabs(dc);
}

