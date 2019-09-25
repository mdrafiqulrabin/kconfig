 
 
 


#define Test(T)								\
  do {									\
    static T x;								\
    int r [_Generic (__atomic_compare_exchange_n (&x, &x, x, 0, 0, 0),	\
		     _Bool: 1, default: -1)];				\
    (void)&r;								\
  } while (0)

void f (void)
{
   
  Test (char);
  Test (signed char);
  Test (unsigned char);

  Test (int);
  Test (unsigned int);

  Test (long);
  Test (unsigned long);

  Test (long long);
  Test (unsigned long long);

  typedef enum E { e } E;
  Test (E);
}

