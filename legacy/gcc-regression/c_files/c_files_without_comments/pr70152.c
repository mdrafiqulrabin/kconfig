 
 
 

int a;
int foo (void);
int setjmp (char *);
char buf[64];

static int
bar (int x)
{
  x = 0;
  setjmp (buf);
  for (;;)
    {
    switch (x)
      case 5:
	x = foo ();
    }
}

void
baz (void)
{
  bar (a);
}

