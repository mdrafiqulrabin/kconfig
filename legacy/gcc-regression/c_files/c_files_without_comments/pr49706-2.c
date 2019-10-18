 
 

 

#ifndef __cplusplus
#define bool _Bool
#endif

bool r;

void
same (int a, int b)
{
  r = !a == !b;
  r = !!a == !!b;
  r = !!a == !b;
  r = !a == !!b;
}

