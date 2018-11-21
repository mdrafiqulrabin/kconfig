 
 

extern char* bar (int) __attribute__ ((noplt));
extern char* arr[32];

void
foo (void)
{
  int i;

  for (i = 0; i < 32; i++)
    arr[i] = bar (128);
}

 
 
 
 
 

