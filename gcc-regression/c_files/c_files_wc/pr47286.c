 
 
 

struct thread_info { int preempt_count; };
static inline struct thread_info *current_thread_info(void)
{
  register struct thread_info *sp asm("esp");
  return sp;
}
void testcase(void)
{
  current_thread_info()->preempt_count += 1;
}

 

 

