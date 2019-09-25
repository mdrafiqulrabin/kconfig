 
 
 
 

double
atan2 (double y, double x)
{
  double res = 0.0;
  asm ("fpatan" : "=t" (res) : "u" (y), "0" (x) : "st(1)");
  return res;
}

