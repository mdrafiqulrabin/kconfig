 
 
 
 
 

typedef struct
{
  int x, y, z, w;
} tcb_t;

int
test_00 (int a, tcb_t* b)
{
  tcb_t* tcb = (a & 5) ? (tcb_t*)__builtin_thread_pointer () : b;
  return tcb->w + tcb->x;
}

