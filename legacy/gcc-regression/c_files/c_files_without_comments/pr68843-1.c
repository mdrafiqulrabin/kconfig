 
 

double
test ()
{
  double x = 1.0;
  asm ("fld %1"  
       : "=&t" (x)
       : "u" (x));
  return x;
}

