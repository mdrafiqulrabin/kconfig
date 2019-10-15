 
 
 

void b (void);

void
__attribute__ ((naked))
a (void)
{
  b ();
}

