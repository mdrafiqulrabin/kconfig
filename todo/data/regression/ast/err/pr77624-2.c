 
 

void
foo (int *a)
{
  double b = 0;
  __atomic_is_lock_free (2, a, 2);	 
  __atomic_is_lock_free (2);		 
  __atomic_is_lock_free (2, b);		 
					 
					 
  __atomic_is_lock_free (2, 0);
}

void
bar (int *a)
{
  double b = 0;
  __atomic_always_lock_free (2, a, 2);	 
  __atomic_always_lock_free (2);	 
  __atomic_always_lock_free (2, b);	 
					 
					 
  __atomic_always_lock_free (2, 0);
}

