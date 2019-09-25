 
 

 

#ifndef __cplusplus
#define bool _Bool
#endif

bool r;

void
f1 (int a)
{
  r = !a == 0;
  r = !a != 0;
  r = !a == 1;	 
  r = !a != 1;	 
}

void
f2 (int a)
{
  r = !a > 0;	 
  r = !a >= 0;	 
  r = !a < 0;	 
  r = !a <= 0;	 
  r = !a > 1;	 
  r = !a >= 1;	 
  r = !a < 1;	 
  r = !a <= 1;	 
}

