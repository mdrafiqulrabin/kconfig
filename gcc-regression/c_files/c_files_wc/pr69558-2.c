 
 
 

 

__attribute__((deprecated)) void foo (void);

void bar (void)
{
  _Pragma ("GCC diagnostic push")
  _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
  foo ();
  _Pragma ("GCC diagnostic pop")
}

