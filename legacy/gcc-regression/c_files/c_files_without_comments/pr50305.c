 
 
 

struct event {
 unsigned long long id;
 unsigned int flag;
};

void dummy(void)
{
   
  static int __warned[300];
 __warned[0] = 1;
}

extern void *kmem_cache_alloc_trace (void *cachep);
extern void *cs_cachep;
extern int nr_cpu_ids;

struct event *
event_alloc (int cpu)
{
 static unsigned long long __attribute__((aligned(8))) perf_event_id;
 struct event *event;
 unsigned long long result;
 unsigned long tmp;

 if (cpu >= nr_cpu_ids)
  return 0;

 event = kmem_cache_alloc_trace (cs_cachep);

 __asm__ __volatile__ ("dmb" : : : "memory");

 __asm__ __volatile__("@ atomic64_add_return\n"
"1:	ldrexd	%0, %H0, [%3]\n"
"	adds	%0, %0, %4\n"
"	adc	%H0, %H0, %H4\n"
"	strexd	%1, %0, %H0, [%3]\n"
"	teq	%1, #0\n"
"	bne	1b"
 : "=&r" (result), "=&r" (tmp), "+Qo" (perf_event_id)
 : "r" (&perf_event_id), "r" (1LL)
 : "cc");

 __asm__ __volatile__ ("dmb" : : : "memory");

 event->id = result;

 if (cpu)
  event->flag = 1;

 for (cpu = 0; cpu < nr_cpu_ids; cpu++)
   kmem_cache_alloc_trace (cs_cachep);

 return event;
}


