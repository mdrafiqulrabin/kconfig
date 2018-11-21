 
 
 
 

 
int cmp (char *p, char *q)
{
  char *pa = __builtin_assume_aligned (p, 4);
  char *qa = __builtin_assume_aligned (q, 4);
  if (__builtin_memcmp (pa, qa, 16) != 0)
    return 1;
  return 0;
}
 
int cmp2 (char *p)
{
  if (__builtin_memcmp (p, "fish", 4) != 0)
    return 1;
  return 0;
}

