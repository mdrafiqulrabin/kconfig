 

 
 

struct {
  short b;
  long c;
} a = {};

void
d ()
{
  __atomic_fetch_add(&a.b, 0, 5);
}

