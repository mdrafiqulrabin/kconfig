 
 
 
 

union ieee754r_Decimal32
{
  _Decimal32 sd;
  unsigned int cc0;
};

unsigned int
__decoded32 (_Decimal32 a)
{
    union ieee754r_Decimal32 d;
    d.sd = a;
    return d.cc0;
}

