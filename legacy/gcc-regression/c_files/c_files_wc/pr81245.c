 
 
 
double sg[18];
void f(void)
{
  for (int i = 0 ;i < 18;i++)
  {
    if (sg[i] < 0.0)
      sg[i] = -1.0;
    else
      sg[i] = 1.0;
  }
}

