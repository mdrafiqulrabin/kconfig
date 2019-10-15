 
 
 
 

void b (void);

void
__attribute__ ((naked))
a (int z)
{
  if (z)
    return;
  b ();
}

