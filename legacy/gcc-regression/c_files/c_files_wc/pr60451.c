 
 

void
foo (unsigned char *a, unsigned char *b, unsigned char *c, int size)
{
  int i;

  for (i = 0; i < size; i++)
    a[i] = (unsigned char) ((unsigned int)1 + b[i] * c[i] * 117);
}

 

