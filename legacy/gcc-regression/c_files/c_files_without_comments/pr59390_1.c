 
 

extern double fma (double, double, double);
void fun() __attribute__((target("fma")));

__attribute__((target("fma")))
void 
other_fun(double *restrict out, double * restrict a, double * restrict b, double * restrict c, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        out[i] = fma(a[i], b[i], c[i]);
    }   
}

 

