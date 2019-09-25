 
 
 

struct rcu_reader_data
{
  unsigned ctr;
  _Bool waiting;
}

extern __thread rcu_reader;

void rcu_read_lock()
{
  struct rcu_reader_data *x = &rcu_reader;
  _Bool val = 0;

  __atomic_store(&x->waiting, &val, 0);
}

