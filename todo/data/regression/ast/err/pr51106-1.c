 
 
 

int
foo (int x)
{
  asm goto ("" : : "i" (x) : : lab);  
   
  return 1;
lab:
  return 0;
}


