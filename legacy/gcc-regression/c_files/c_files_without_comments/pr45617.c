 
 
 

int f1 (int x)
{
  return (x >> 23) > 12;
}
int f2 (int x)
{
  return x > ((13 << 23) - 1);
}
int f3 (int x)
{
  return (x >> 23) >= 12;
}
int f4 (int x)
{
  return x >= (12 << 23);
}

 

