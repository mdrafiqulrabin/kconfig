 
 
 

typedef int __v8si __attribute__((vector_size (32)));

void
foo (__v8si *a, __v8si *b, __v8si *c, __v8si *d)
{
  *a = __builtin_ia32_vpdpbusd_v8si (*b, *c, *d);	 
}

