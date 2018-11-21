 
 
 

void NoBarrier_AtomicExchange (long long *ptr) {
  while (__sync_val_compare_and_swap (ptr, 1, 0) );
}

