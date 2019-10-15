 
 
 

typedef int __attribute__ ((vector_size (16))) vectype;
vectype v;

void
foo (int c)
{
  vectype *p = __builtin_malloc (sizeof (vectype));
  __transaction_atomic
  {
    *p = v;
    if (c)
      __transaction_cancel;
  }
}

