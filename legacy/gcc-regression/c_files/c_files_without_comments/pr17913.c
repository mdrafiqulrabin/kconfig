 
 
 

void f (void) 
{ 
  void *p = &&a;
  1 ? 1 : ({ a : 1; }); 
  goto *p;
}

