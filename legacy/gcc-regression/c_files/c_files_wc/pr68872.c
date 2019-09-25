 
 
 

 

long
bar (unsigned char *ptr, unsigned char val)
{
  long ret;
  asm volatile ("stbcx. %0,0,%1" :: "r" (val), "r" (ptr));
  asm volatile ("mfcr %0,8" : "=r" (ret) ::);
  return ret;
}

