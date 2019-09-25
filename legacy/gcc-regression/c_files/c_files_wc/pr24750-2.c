 

int
f (short *a, char *y)
{
  __asm__ ("" : : :
#ifndef __PIC__
	   "r0",
#endif
	   "r1", "r2", "r3", "r4", "r5", "r6", "r7",
	    
	   "r9", "r10", "r11", "r12", "r13");
  return y[*a];
}

