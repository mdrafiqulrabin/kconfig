 
 
 

void
foo ()
{
  int i;
  asm ();		   
  asm (1);		   
  asm (int);		   
  asm (: "=r" (i));	   
  asm (1 : "=r" (i));	   
  asm (int : "=r" (i));	   
  asm (: : "r" (i));	   
  asm (1 : : "r" (i));	   
  asm (int : : "r" (i));   
  asm (: : : "memory");	   
  asm (1 : : : "memory");  
}

