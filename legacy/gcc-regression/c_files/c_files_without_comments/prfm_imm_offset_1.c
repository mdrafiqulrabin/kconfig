 
 

 

#define ARRSIZE 65
int *bad_addr[ARRSIZE];

void
prefetch_for_read (void)
{
  int i;
  for (i = 0; i < ARRSIZE; i++)
    __builtin_prefetch (bad_addr[i] + 2, 0, 0);
}

 

