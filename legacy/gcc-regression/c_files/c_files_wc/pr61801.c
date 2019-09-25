 
 
 

int a, c;
int bar (void);
void baz (void);

void
foo (void)
{
  int d;
  if (bar ())
    {
      int e;
      baz ();
      asm volatile ("" : "=a" (e) : "0" (a), "i" (0));
      d = e;
    }
  c = d;
}

