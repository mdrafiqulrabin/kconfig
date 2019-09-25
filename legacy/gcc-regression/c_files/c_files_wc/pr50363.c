 
 

void
foo (int *__restrict__ * r, int n)
{
  int *p;
  for (p = *r; p < *r + n; p++)
    ;
}

