 
 
 

extern int A[];

void
foo ()
{
  int i, j;
  for (i = 0; i < 4; i++)
    for (j = 255; j >= 0; j--)
      A[j] = 0;
}

