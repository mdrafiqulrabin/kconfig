 
 
 
 

double s1[4], s2[4];
long long e[4];

int
main ()
{
  int i;
  asm volatile ("" : : : "memory");
  for (i = 0; i < 4; i++)
    e[i] = __builtin_isunordered (s1[i], s2[i]) && s1[i] != s2[i] ? -1 : 0;
  asm volatile ("" : : : "memory");
  return 0;
}

