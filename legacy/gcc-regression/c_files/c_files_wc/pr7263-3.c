 
 
 
#include "pr7263-3.h"
__complex__  bar ()  
{
  return _Complex_I_ext;
}

__extension__ __complex__ 
bar2 ()
{
  return _Complex_I;
}

__complex__ bar3 ()  
{
  return _Complex_I;  
}

