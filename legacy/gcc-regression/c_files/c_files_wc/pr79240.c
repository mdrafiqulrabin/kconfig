 

 
 

int
foo (int a)
{
  return sizeof (int) * a + 16 - a * sizeof (int) % 16;
}

