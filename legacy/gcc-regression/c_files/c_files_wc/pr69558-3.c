 
 
 

 

#define C \
  foo ();

__attribute__((deprecated)) void foo (void);

void bar (void)
{
  _Pragma ("GCC diagnostic push")
  _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
  C
  _Pragma ("GCC diagnostic pop")
}

