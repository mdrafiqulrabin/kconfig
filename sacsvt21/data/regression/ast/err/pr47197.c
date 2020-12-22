 
 
 

 

#include <altivec.h>

void func(unsigned char *buf, unsigned len)
{
        vec_dst(buf, (len >= 256 ? 0 : len) | 512, 2);
}

