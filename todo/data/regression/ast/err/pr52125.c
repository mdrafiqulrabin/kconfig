 

int a, b, c, d;

NOMIPS16 void
foo (void)
{
  asm ("%1 %z3"
       : "=m" (a), "=m" (b)
       : "m" (c), "m" (d));
}

 
 
 
 
 
 
 
 

