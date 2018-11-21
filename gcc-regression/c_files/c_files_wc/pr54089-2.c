 
 
 
 

unsigned int
test (unsigned int a, int b, int c)
{
  unsigned char r = b == c;
  return ((a >> 31) | (r << 31));
}

