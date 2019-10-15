 
 

static void *p;
static double *d;
static int r;
__extension__ static _Bool b;

void
fn0 (int n)
{
  p = __builtin_alloca_with_align (n, 6);  

  r += __builtin_isfinite (0);  
  r += __builtin_isinf (0);  
  r += __builtin_isinf_sign (0);  
  r += __builtin_isnan (0);  
  r += __builtin_isnormal (0);  
  r += __builtin_signbit (0);  

  r += __builtin_isgreater (0, 0);  
  r += __builtin_isgreaterequal (0, 0);  
  r += __builtin_isless (0, 0);  
  r += __builtin_islessequal (0, 0);  
  r += __builtin_islessgreater (0, 0);  
  r += __builtin_isunordered (0, 0);  

  r += __builtin_fpclassify (1, 2, n, 4, 5, n);  
  r += __builtin_fpclassify (1, 2, 3, 4, 5, 6);  

  d = __builtin_assume_aligned (p, n, p);  

  b = __builtin_add_overflow (n, *d, &r);  
  b = __builtin_add_overflow (n, 5, d);  
  b = __builtin_sub_overflow (n, *d, &r);  
  b = __builtin_sub_overflow (n, 5, d);  
  b = __builtin_mul_overflow (n, *d, &r);  
  b = __builtin_mul_overflow (n, 5, d);  
}

int
fn1 (void)
{
  if (__builtin_constant_p ())  
    return 0;
  if (__builtin_constant_p (1, 2))  
    return 1;
  if (__builtin_isfinite ())  
    return 3;
  if (__builtin_isfinite (1, 2))  
    return 4;
  if (__builtin_isless (0))  
    return 5;
  if (__builtin_isless (1, 2, 3))  
    return 6;
  if (__builtin_fpclassify (1, 2, 3, 4, 5))  
    return 7;
  if (__builtin_fpclassify (1, 2, 3, 4, 5, r, 6))  
    return 8;
  if (__builtin_assume_aligned (p))  
    return 9;
  if (__builtin_assume_aligned (p, r, p, p))  
    return 10;
  if (__builtin_add_overflow ())  
    return 11;
  if (__builtin_add_overflow (1, 2, 3, &r))  
    return 12;
  return -1;
}

