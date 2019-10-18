 
 

extern void foo (int, int, int) __attribute__ ((regparm(3)));

void
bar (int i1, int i2, int i3, int i4)
{
  foo (i1, i2, i3);
}

 

