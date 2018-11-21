 
 
 
 

int
bar (int x)
{
  asm goto ("" : : "i" (x) : : lab);  
 
  __builtin_unreachable ();
lab:
  return 0;
}


