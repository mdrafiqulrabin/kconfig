 
 
 

struct a {
    int b;
    int c;
};

void
foo (void)
{
  struct a *e;
  switch (e->c)
  {
    case 7:
    case 3:
      if (__builtin_expect(!0, 0))
	__builtin_unreachable();
  }
}

