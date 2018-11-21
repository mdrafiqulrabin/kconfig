 
 
 

signed char v;

void
foo (int x)
{
  while (x != 0)
    {
      v = (x >= 0) + 1;
      ++x;
    }
}

