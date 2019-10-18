 
 
 
 
 
 
 
 
 
 
 
 

long long
do_xex (_Decimal64 arg)
{
  return __builtin_dxex (arg);
}

long long
do_xexq (_Decimal128 arg)
{
  return __builtin_dxexq (arg);
}

_Decimal64
do_iex (long long exp, _Decimal64 arg)
{
  return __builtin_diex (exp, arg);
}

_Decimal128
do_iexq (long long exp, _Decimal128 arg)
{
  return __builtin_diexq (exp, arg);
}

