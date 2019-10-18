 
 
 

char a;
int b;

void
foo (void)
{
  int d;
  b = __builtin_mul_overflow ((char) d, 0xfe, &a);
}

