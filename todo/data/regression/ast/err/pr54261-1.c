 
 

#ifdef SYNC_FALLBACK
 
__attribute__((__noinline__, __noclone__))
int
# if __INT_MAX__ == 0x7fff
 __sync_fetch_and_add_2
# else
 __sync_fetch_and_add_4
# endif
 (int *at, int val)
{
  int tmp = *at;
  asm ("");
  *at = tmp + val;
  return tmp;
}
#endif

__attribute__((__noinline__, __noclone__))
void g (int *at, int val)
{
  asm ("");
  __sync_fetch_and_add (at, val);
}

int main(void)
{
   
  static int x = 41;
  int a = 1;
  g (&x, a);

  if (x != 42)
    __builtin_abort ();
  __builtin_exit (0);
}

