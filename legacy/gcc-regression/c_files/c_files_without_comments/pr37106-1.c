 
 
 
 

#define SIZE 256
float a[SIZE], b[SIZE], c[SIZE];

void opt3 (void) __attribute__((__optimize__(3)));

void
opt3 (void)
{
  int i;

  for (i = 0; i < SIZE; i++)
    a[i] = b[i] + c[i];
}

void
not_opt3 (void)
{
  int i;

  for (i = 0; i < SIZE; i++)
    a[i] = b[i] - c[i];
}

