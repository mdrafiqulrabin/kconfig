 
 
 
 

int test_goto2 (int f)
{
  int i;
  for (i = 0; ({_Bool a = i < 10;a;}); i++)
  {
    if (i == f)
      goto lab2;
  }
  return 4;
lab2:
  return 8;
}

int main ()
{
  test_goto2 (30);
  return 0;
}

 

