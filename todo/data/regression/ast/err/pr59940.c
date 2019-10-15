 
 
 

int f (unsigned int);
typedef int sitype __attribute__((mode(SI)));

int
g (void)
{
  sitype si = 12;
  unsigned int ui = -1;  
  unsigned char uc;
  ui = si;  
  si = 0x80000000;  
  si = 3.2f;  
  uc = 256;  
  si = 0x800000000;  
  return f (si)  
         + f (si);  
}

int
y (void)
{
  f ();  
  g (0xa);  
}

