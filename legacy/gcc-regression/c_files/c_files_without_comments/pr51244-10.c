 
 
 
 
int
test_00 (int* p)
{
  int nr = 15;
  volatile char* addr = (volatile char*)&p[1];

  if ((addr[(nr >> 3) ^ 7] & (1 << (nr & 7))) == 0)
    return 40;
  else
    return 50;
}

