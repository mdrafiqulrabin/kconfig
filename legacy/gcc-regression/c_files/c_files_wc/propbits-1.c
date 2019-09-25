 
 

__attribute__((noinline)) 
static int f(int x)
{
  int some_op(int);
  return some_op (x);
}

int main(void)
{
  int a = f(1);
  int b = f(2);
  int c = f(4);
  return a + b + c;
}

 

