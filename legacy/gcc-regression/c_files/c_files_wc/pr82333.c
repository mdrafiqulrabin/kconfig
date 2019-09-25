 
 
 
 

 

_Complex long double vld;
_Complex _Float128 vf128;

_Complex long double
fld (_Complex long double arg0)
{
  return 0;
}

_Complex _Float128
ff128 (_Complex _Float128 arg0)
{
  return 0;
}

void
tld (void)
{
  vld = fld (vld);
}

void
tf128 (void)
{
  vf128 = ff128 (vf128);
}

