 
 
 
 

typedef struct
{
  int x, y, z, w;
} tcb_t;

int
test_00 (int a, tcb_t* b, int c)
{
  tcb_t* tcb = (tcb_t*)__builtin_thread_pointer ();
  return (a & 5) ? tcb->x : tcb->w;
}

