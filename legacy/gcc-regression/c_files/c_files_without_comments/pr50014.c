 
 

int f(unsigned char *s, int n)
{
  int sum = 0;
  int i;

  for (i = 0; i < n; i++)
    sum += 256 * s[i];

  return sum;
}



