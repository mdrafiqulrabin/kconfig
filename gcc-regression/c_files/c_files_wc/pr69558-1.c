 
 
 

 

#define A \
  _Pragma ("GCC diagnostic push") \
  _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#define B \
  _Pragma ("GCC diagnostic pop")

__attribute__((deprecated)) void foo (void);

void bar (void)
{
  A
  foo ();
  B
}

