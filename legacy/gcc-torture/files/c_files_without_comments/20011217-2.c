 
 

inline int
finite (double __x)
{
  return (__extension__
	  (((((union { double __d; int __i[2]; }) {__d: __x}).__i[1]
	     | 0x800fffffu) + 1) >> 31));
}

int
main (void)
{
  double x = 1.0;
  
  return finite (x);
}

