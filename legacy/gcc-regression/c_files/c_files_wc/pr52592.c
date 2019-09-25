 
 
 

#define T(type, name) \
type name (type);		\
__attribute__((cold))		\
int f##name (type x)		\
{				\
  return (int) name (x);	\
}

T (double, round)
T (float, roundf)
T (long double, roundl)
T (double, rint)
T (float, rintf)
T (long double, rintl)

 
 

