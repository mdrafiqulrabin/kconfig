 
 
 
 
 
 

long long f (long long *c)
{
  long long t = c[0];
  asm ("nop" : : : "r0", "r3", "r4", "r5",
		   "r6", "r7", "r8", "r9",
		   "r10", "r11", "r12", "memory");
  return t >> 1;
}


