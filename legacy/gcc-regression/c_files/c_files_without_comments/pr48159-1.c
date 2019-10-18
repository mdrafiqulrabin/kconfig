 
 
 

void
foo (double x, int y, double *__restrict z, double *__restrict w)
{
  while (y--)
    *z++ = (*w++ = 0) * x;
}

