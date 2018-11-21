
 
 

__extension__ typedef __UINT32_TYPE__ uint32_t;

int funsigned (uint32_t a)
{
  return 0x1ffffffffL / a == 0;
}

int funsigned2 (uint32_t a)
{
  if (a < 1) return 1;
  return (-1 * 0x1ffffffffL) / a == 0;
}

 
 


