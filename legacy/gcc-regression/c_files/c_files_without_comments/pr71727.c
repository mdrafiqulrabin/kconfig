 
 

struct test_struct_s
{
  long a;
  long b;
  long c;
  long d;
  unsigned long e;
};


char _a;
struct test_struct_s xarray[128];

void
_start (void)
{
  struct test_struct_s *new_entry;

  new_entry = &xarray[0];
  new_entry->a = 1;
  new_entry->b = 2;
  new_entry->c = 3;
  new_entry->d = 4;
  new_entry->e = 5;

  return;
}

 
 

