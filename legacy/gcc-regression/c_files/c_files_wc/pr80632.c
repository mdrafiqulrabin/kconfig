 
 
 

extern int bar (void);
extern void baz (void);
int a;

int
foo (void)
{
  int c = 8;
  if (bar ())
    {
      baz ();
      switch (a)
	{
	case 0:
	  c = 1;
	  break;
	case 1:
	  c = 0;
	  break;
	case 2:
	  c = 0;
	  break;
	case 3:
	  c = 0;
	  break;
	default:
	  c = 1;
	}
    }
  return c;
}

