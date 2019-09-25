 
 
 
 

int
foo (char x)
{
  int a;

  for (;;)
    {
      x += 59;
      if (x != 0)
        a = 0;
      else
        return 0;
    }
}

