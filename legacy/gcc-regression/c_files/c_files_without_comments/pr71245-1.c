 
 
 

typedef union
{
  unsigned long long ll;
  double d;
} u_t;

u_t d = { .d = 5.0 };

void foo_d (void)
{
  u_t tmp;
  
  tmp.ll = __atomic_load_n (&d.ll, __ATOMIC_SEQ_CST);
  tmp.d += 1.0;
  __atomic_store_n (&d.ll, tmp.ll, __ATOMIC_SEQ_CST);
}

 

