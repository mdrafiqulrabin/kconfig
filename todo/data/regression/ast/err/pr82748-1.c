 
 
 

 

_Float128
do_fabs_f (_Float128 a)
{
  return __builtin_fabsq (a);
}

_Float128
do_copysign_f (_Float128 a, _Float128 b)
{
  return __builtin_copysignq (a, b);
}

_Float128
do_inf_f (void)
{
  return __builtin_infq ();
}

_Float128
do_nan_f (void)
{
  return __builtin_nanq ("");
}

_Float128
do_nans_f (void)
{
  return __builtin_nansq ("");
}

_Float128
do_huge_val_f (void)
{
  return __builtin_huge_valq ();
}

long double
do_fabs_ld (long double a)
{
  return __builtin_fabsq (a);
}

long double
do_copysign_ld (long double a, long double b)
{
  return __builtin_copysignq (a, b);
}

long double
do_inf_ld (void)
{
  return __builtin_infq ();
}

long double
do_nan_ld (void)
{
  return __builtin_nanq ("");
}

long double
do_nans_ld (void)
{
  return __builtin_nansq ("");
}

long double
do_huge_val_ld (void)
{
  return __builtin_huge_valq ();
}

 
 
 

