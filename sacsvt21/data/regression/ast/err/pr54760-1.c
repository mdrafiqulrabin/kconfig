 
 
 
 
 
 

void*
test00 (void)
{
  return __builtin_thread_pointer ();
}

void
test01 (void* p)
{
  __builtin_set_thread_pointer (p);
}

