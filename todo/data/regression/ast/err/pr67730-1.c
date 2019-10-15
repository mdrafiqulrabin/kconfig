 
 
 

#include "pr67730.h"

extern void bar (unsigned char *);

unsigned char *
f (void *p)
{
   unsigned char *uc = ONEP;  
   uc = ONEP;  
   bar (ONEP);  
   return ONEP;  
}

