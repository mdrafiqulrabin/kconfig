 
 
 
 
 
 

 
__attribute__((target("cpu=power6")))
double power6 (double a, double b)
{
  return __builtin_copysign (a, b);
}
 

