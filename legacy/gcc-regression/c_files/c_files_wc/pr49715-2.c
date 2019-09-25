 
 

double func(unsigned long long x)
{
  if (x <= 0x7ffffffffffffffeULL)
    return (x + 1) * 0.01;
  return 0.0;
}

 

