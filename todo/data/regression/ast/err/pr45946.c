 
 
 

void
__attribute__((noinline))
bar (_Decimal128, _Decimal128, _Decimal128, _Decimal128, _Decimal128,
     _Decimal128, _Decimal128, _Decimal128, _Decimal128);

void
foo (void)
{
  bar (0, 0, 0, 0, 0, 0, 0, 0, 0);
}

