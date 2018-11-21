 
 
 
 

int test00 (int a, int b);

int
test01 (int a, int b, int c, int d)
{
  return test00 (a, b) + c;
}

