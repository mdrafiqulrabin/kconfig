 
 

extern __int128 a;

struct foo
{
  __int128 i;
}__attribute__ ((packed));

extern struct foo x;

void
foo (void)
{
  x.i = a;
}

 
 

