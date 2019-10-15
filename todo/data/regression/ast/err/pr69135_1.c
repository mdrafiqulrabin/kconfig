 
 
 
 
 
 

int global;

void
lceil_float (float x, int b)
{
  if (b) global = __builtin_lceilf (x);
}

void
lceil_double (double x, int b)
{
  if (b) global = __builtin_lceil (x);
}

void
lfloor_float (float x, int b)
{
  if (b) global =  __builtin_lfloorf (x);
}

void
lfloor_double (double x, int b)
{
  if (b) global = __builtin_lfloor (x);
}

void
lround_float (float x, int b)
{
  if (b) global = __builtin_lroundf (x);
}

void
lround_double (double x, int b)
{
  if (b) global = __builtin_lround (x);
}

