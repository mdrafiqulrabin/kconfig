 
 
 
 

extern int test00 (void);
int
test01 (int x)
{
   
  int* p = (int*)__builtin_thread_pointer ();
  p[5] = test00 ();
  return 0;
}

