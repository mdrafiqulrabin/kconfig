 
 

extern char* bar (int);
extern char* arr[32];

void
foo (void)
{
  int i;

  for (i = 0; i < 32; i++)
    arr[i] = bar (128);
}

 
 
 
 
 

