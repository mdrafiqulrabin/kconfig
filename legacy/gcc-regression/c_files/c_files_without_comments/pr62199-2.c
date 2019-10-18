 
 
 

#ifndef __cplusplus
# define bool _Bool
#endif

bool r;

void
foo (bool b)
{
  r = !b == 1;  
  r = !b != 1;  
  r = !b > 1;  
  r = !b >= 1;  
  r = !b < 1;  
  r = !b <= 1;  
}

