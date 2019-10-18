 
 

float a;
float b;
void bar ()
{
  a = __builtin_nanf ("");
  b = __builtin_powf (a, 2.5F);
}

