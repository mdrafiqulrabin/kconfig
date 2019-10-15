 
 

 

#include <stdlib.h>

int main(void)
{
    volatile char junk[62];
    junk[0] = 5;
    volatile __int24 staticConfig = 0;

    if (junk[0] != 5)
      abort();

    exit(0);
    return 0;
}

