 
 
 
 
 

 

#ifndef TYPE
#define TYPE long double
#endif

int sbr (TYPE a) { return __builtin_signbit (a); }
int sbm (TYPE *a) { return __builtin_signbit (*a); }
int sbo (TYPE *a) { return __builtin_signbit (a[4]); }
int sbi (TYPE *a, unsigned long n) { return __builtin_signbit (a[n]); }
void sbs (int *p, TYPE a) { *p = __builtin_signbit (a); }

 

 
 
 
 
 
 
 
 


