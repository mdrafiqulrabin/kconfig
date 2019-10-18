 
 
 

extern void bar (char *);

void
foo (void)
{
  char c[0x80000000UL];
  bar (c);
}

