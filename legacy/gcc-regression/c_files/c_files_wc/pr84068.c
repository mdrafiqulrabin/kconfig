 
 

#ifdef __SIZEOF_INT128__
typedef __int128 largeint;
#else
typedef long long largeint;
#endif

largeint a;
int b;

largeint
foo (char d, short e, int f)
{
  b = __builtin_sub_overflow_p (b, 1, (unsigned long)0);
  return a + f;
}

