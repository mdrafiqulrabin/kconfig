 
 
 

struct S
{
  int s:1;
};

struct S bar (void);

#if __SIZEOF_INT__ < 4
#define int __INT32_TYPE__
#endif

int a;

void
foo (int x)
{
  struct S s = bar ();
  while (!a)
    {
      int l = 94967295;
      a = x || (s.s &= l);
    }
}

