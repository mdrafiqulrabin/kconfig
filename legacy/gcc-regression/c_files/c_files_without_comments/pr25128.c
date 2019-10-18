 
 

 
 
 


unsigned int bar (void);
void
foo1 (void)
{
  unsigned int a = bar ();
  if (0x10000 <= a)
    bar ();
}


void
foo2 (void)
{
  unsigned int a = bar ();
  if (0x10000 > a)
    bar ();
}


void
foo3 (void)
{
  int a = bar ();
  if (0x10000 <= a)
    bar ();
}


void
foo4 (void)
{
  int a = bar ();
  if (0x10000 > a)
    bar ();
}






