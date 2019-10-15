 
 
 

int
foo (void)
{
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  asm goto ("" : : : : lab);
  return 0;
lab:
  return 1;
}

 
 

