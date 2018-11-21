 
 
 
 
 
 
 
 

int
test_func_00 (int a)
{
   
  return __builtin_bswap32 (a);
}

unsigned int
test_func_01 (unsigned int a)
{
   
  return __builtin_bswap32 (a);
}

int
test_func_02 (int a)
{
   
  return (((a >> 0) & 0xFF) << 24)
	 | (((a >> 8) & 0xFF) << 16)
	 | (((a >> 16) & 0xFF) << 8)
	 | (((a >> 24) & 0xFF) << 0);
}

unsigned int
test_func_03 (unsigned int a)
{
   
  return (((a >> 0) & 0xFF) << 24)
	 | (((a >> 8) & 0xFF) << 16)
	 | (((a >> 16) & 0xFF) << 8)
	 | (((a >> 24) & 0xFF) << 0);
}

int
test_func_04 (int a)
{
   
  return __builtin_bswap32 (a) >> 16;
}

unsigned short
test_func_05 (unsigned short a)
{
   
  return __builtin_bswap32 (a) >> 16;
}

long long
test_func_06 (long long a)
{
   
  return __builtin_bswap64 (a);
}

long long
test_func_07 (long long a)
{
   
  return __builtin_bswap64 (a) >> 32;
}


