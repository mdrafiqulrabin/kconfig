 
 
 

struct S
{
  int n;
  float *a;
};

int
foo (struct S *s)
{
  float sum = 0;
  int i;
  for (i = 0; i < s->n; i++)
    sum += s->a[i];
  return sum;
}

