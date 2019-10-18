 
 

int
f (int *x, int b1, int b2, int b3)
{
  int foo = 0;
  for (int i1 = 0; i1 < b1; ++i1)
    for (int i2 = 0; i2 < b2; ++i2)
      for (int i3 = 0; i3 < b3; ++i3)
	foo += x[i1 * b2 * b3 + i2 * b3 + (i3 - 1)];
  return foo;
}

 

