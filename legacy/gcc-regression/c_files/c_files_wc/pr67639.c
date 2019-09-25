 
void
foo (int p)
{
  int t; 
  register long x asm ("rhubarb") = p;  
  __asm ("" : "=r" (t), "=r" (t), "=r" (t), "=r" (x) : "0" (x));
}

