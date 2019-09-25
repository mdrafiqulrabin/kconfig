 
 
 

#include <x86intrin.h>

void *p;

void extern
prefetchw__test (void)
{
    _m_prefetchw (p);
}

