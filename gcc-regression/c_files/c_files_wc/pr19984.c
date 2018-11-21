 
 
 


double nan (const char *);

const double nok = nan ("");	 

const double ok = __builtin_nan ("");

double
foo ()
{
  double ok2 = nan ("");
  return ok2;
}

