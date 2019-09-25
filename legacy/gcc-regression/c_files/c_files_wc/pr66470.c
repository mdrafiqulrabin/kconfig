 
 
 
 

extern __thread unsigned __int128 c[10];
int d;

unsigned __int128
foo (void)
{
  return c[d];
}

