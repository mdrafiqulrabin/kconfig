 
 
 
 
 

#ifdef __cplusplus
extern "C" {
#endif
extern double cos (double) __attribute__ ((nothrow, leaf, simd ("notinbranch")));
extern double sin (double) __attribute__ ((nothrow, leaf, simd ("notinbranch")));
#ifdef __cplusplus
}
#endif
double p[1024] = { 1.0 };
double q[1024] = { 1.0 };

void
foo (void)
{
  int i;
  for (i = 0; i < 1024; i++)
    p[i] = cos (q[i]);
}

void
bar (void)
{
  int i;
  for (i = 0; i < 1024; i++)
    p[i] = __builtin_sin (q[i]);
}

