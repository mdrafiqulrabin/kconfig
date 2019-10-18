 
 
 

extern void *memset (void *, int, __SIZE_TYPE__);
extern int A[];
void
fn1 (void)
{
  memset (A, 0, 1);
}

