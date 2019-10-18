 
 

int foo (float f)
{
  union
  {
    float f;
    int i;
  } z = { .f = f };

  return z.i - 1;
}

