 
 
 

 

_Float128
do_fabs (_Float128 a)
{
  return __builtin_fabsq (a);
}

_Float128
do_copysign (_Float128 a, _Float128 b)
{
  return __builtin_copysignq (a, b);
}

_Float128
do_inf (void)
{
  return __builtin_infq ();
}

_Float128
do_nan (void)
{
  return __builtin_nanq ("");
}

_Float128
do_nans (void)
{
  return __builtin_nansq ("");
}

_Float128
do_huge_val (void)
{
  return __builtin_huge_valq ();
}

 
 
 

