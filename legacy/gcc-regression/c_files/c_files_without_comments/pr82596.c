 

#define SIZE_MAX  __SIZE_MAX__
#define SSIZE_MAX __PTRDIFF_MAX__
#define SSIZE_MIN (-SSIZE_MAX - 1)

void sink (int, ...);

#define T(arg) sink (arg)

void test_cststring (int i)
{
  T (""[SSIZE_MIN]);                       
  T (""[SSIZE_MIN + 1]);                   
  T (""[-1]);                              
  T (""[0]);
  T (""[1]);                               
  T ("0"[2]);                              
  T ("012"[2]);
  T ("012"[3]);
  T ("012"[4]);                            
  T ("0123"[SSIZE_MAX]);                   
  T ("0123"[SIZE_MAX]);                    
}

