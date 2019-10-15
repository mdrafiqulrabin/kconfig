 
 
 
 

extern void abort (void);
typedef double V __attribute__((vector_size(16)));

union {
  unsigned long long m[2];
  V v;
} u = { { 0xffffffffff000000ULL, 0xffffffffff000000ULL } };

static inline V
foo (V x)
{
  V y = __builtin_ia32_andpd (x, u.v);
  V z = __builtin_ia32_subpd (x, y);
  return __builtin_ia32_mulpd (y, z);
}

void
test (V *x)
{
  V a = { 2.1, 2.1 };
  *x = foo (foo (a));
}

int
main ()
{
  test (&u.v);
  if (u.m[0] != 0x3acbf487f0a30550ULL || u.m[1] != u.m[0])
    abort ();
  return 0;
}

