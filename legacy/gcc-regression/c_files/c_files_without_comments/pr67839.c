 
 
 
 
 
 
 
 
 
 

 
#define IO_ADDR(x) (*((volatile char *)x + __AVR_SFR_OFFSET__))
int main ()
{
  IO_ADDR(0x1f) |= 1;
  IO_ADDR(0x1f) &= 0xFE;

  IO_ADDR(0x20) |= 1;
  IO_ADDR(0x20) &= 0xFE;

  IO_ADDR(0x3f) = IO_ADDR(0x3f);

  IO_ADDR(0x40) = IO_ADDR(0x40);
  return 0;
}

