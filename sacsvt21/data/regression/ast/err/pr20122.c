 

#include <stdarg.h>
#include "tree-vect.h"

short Kernshort[24] __attribute__ ((__aligned__(__BIGGEST_ALIGNMENT__)));
static void VecBug(short Kernel[8][24]) __attribute__((noinline));
static void VecBug2(short Kernel[8][24]) __attribute__((noinline));

 
static void VecBug(short Kernel[8][24])
{
  int k,i;
    for (k = 0; k<8; k++)
        for (i = 0; i<24; i++)
            Kernshort[i] = Kernel[k][i];
}

 
static void VecBug2(short Kernel[8][24])
{
  int k,i;
  short Kernshort2[24] __attribute__ ((__aligned__(__BIGGEST_ALIGNMENT__)));
    for (k = 0; k<8; k++)
        for (i = 0; i<24; i++)
            Kernshort2[i] = Kernel[k][i];

    for (k = 0; k<8; k++)
        for (i = 0; i<24; i++)
            if (Kernshort2[i] != Kernel[k][i])
                abort ();
}

int main (int argc, char **argv)
{
    check_vect ();

    short Kernel[8][24];
    int k,i;

    for (k = 0; k<8; k++)
      for (i = 0; i<24; i++)
	{
	  Kernel[k][i] = 0;
	   
	  __asm__ volatile ("" : : : "memory");
	}

    VecBug(Kernel);
    VecBug2(Kernel);

    return 0;
}

 
 
 

