 
 
 

struct S{};

void foo(struct S *p)
{
  *p = (struct S){};
}

