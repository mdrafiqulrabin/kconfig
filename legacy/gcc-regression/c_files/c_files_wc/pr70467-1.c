 
 
 

void foo (unsigned long long *);

void
bar (void)
{
  unsigned long long a;
  foo (&a);
  a &= 0x7fffffffffffffffULL;
  foo (&a);
  a &= 0xffffffff7fffffffULL;
  foo (&a);
  a &= 0x7fffffff00000000ULL;
  foo (&a);
  a &= 0x000000007fffffffULL;
  foo (&a);
  a &= 0x00000000ffffffffULL;
  foo (&a);
  a &= 0xffffffff00000000ULL;
  foo (&a);
  a |= 0x7fffffffffffffffULL;
  foo (&a);
  a |= 0xffffffff7fffffffULL;
  foo (&a);
  a |= 0x7fffffff00000000ULL;
  foo (&a);
  a |= 0x000000007fffffffULL;
  foo (&a);
  a |= 0x00000000ffffffffULL;
  foo (&a);
  a |= 0xffffffff00000000ULL;
  foo (&a);
  a ^= 0x7fffffffffffffffULL;
  foo (&a);
  a ^= 0xffffffff7fffffffULL;
  foo (&a);
  a ^= 0x7fffffff00000000ULL;
  foo (&a);
  a ^= 0x000000007fffffffULL;
  foo (&a);
  a ^= 0x00000000ffffffffULL;
  foo (&a);
  a ^= 0xffffffff00000000ULL;
  foo (&a);
}

 
 
 
 
 
 

