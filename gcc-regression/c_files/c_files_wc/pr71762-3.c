 

static _Bool
foo (_Bool a, _Bool b)
{
  int x = a && ! b;
  return x != 0;
}

int y = 1;
int main()
{
  register _Bool x
   
#if __i386__ || __x86_64__
      __asm__("%esi")
#endif
    ;
  if (foo (x, y))
    __builtin_abort ();
  return 0;
}

