 
 

int f0(int i)
{
  if (i == 0) return 0;
  return i/10;
}
int f1(int i)
{
  return i?i/10:0;
}

int f2(int i)
{
  if (i == 0) return 0;
  return i%10;
}
int f3(int i)
{
  return i?i%10:0;
}

int f4(int i)
{
  if (i == 0) return 0;
  return i<<10;
}
int f5(int i)
{
  return i?i<<10:0;
}

 
 

