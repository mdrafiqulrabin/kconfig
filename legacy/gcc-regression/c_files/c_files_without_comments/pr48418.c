 
 
 

int
foo (int x)
{
  const int a = sizeof (int) * __CHAR_BIT__;
  const int b = -7;
  int c = 0;
  c += x << a;				    
  c += x << b;				    
  c += x << (sizeof (int) * __CHAR_BIT__);  
  c += x << -7;				    
  c += x >> a;				    
  c += x >> b;				    
  c += x >> (sizeof (int) * __CHAR_BIT__);  
  c += x >> -7;				    
  return c;
}

