 
 
 

int
foo (int x, int y)
{
  return ({ int a = 5; a += x; a *= y; a; }) ? : 2;
}

