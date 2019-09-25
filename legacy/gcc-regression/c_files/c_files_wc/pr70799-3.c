 
 
 
 
 

unsigned long long a, b, c;

void test1 (void)
{
  a = (b << 55) | c;
}

void test2 (void)
{
  a = (b >> 55) | c;
}

