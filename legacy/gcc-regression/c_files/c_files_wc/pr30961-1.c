 
 

double
convert (long long in)
{
  double f;
  __builtin_memcpy( &f, &in, sizeof( in ) );
  return f;
}

 

