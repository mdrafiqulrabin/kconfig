 
 
 

short int v;

int
foo (char x, int *b)
{
  int a = 1;
  for (; x < 1; x++)
    {
      int c = *b != v;
      int d = x != 0;
      a = c == d ? 2 : 0;
    }
  return a;
}

