 
 

struct foo
{
  __int128 i;
}__attribute__ ((packed));

extern struct foo x, y;

void
foo (void)
{
  x = y;
}

 
 

