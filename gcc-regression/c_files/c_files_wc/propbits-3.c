 
 

__attribute__((noinline))
static int f(int x)
{
  extern int limit;
  extern int f2(int);

  if (x == limit)
    return x;
  int k = f(x + 1);
  return f2 (k); 
}

int main(int argc, char **argv)
{
  int k = f(argc & 0xff); 
  return k;
}

   

