 
 
 
 
 
 
 
 

typedef char bool;

int
test_00 (int* a, int* b)
{
  int i;
  unsigned int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i] == b[i];
      r = (t << 31) | (r >> 1);
    }
  return r;
}

int
test_01 (int* a, int* b)
{
  int i;
  unsigned int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i] == b[i];
      r = (t << 31) | (r >> 2);
    }
  return r;
}

int
test_02 (int* a, int* b)
{
  int i;
  unsigned int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i] == b[i];
      r = (t << 31) | (r >> 3);
    }
  return r;
}

unsigned int
test_03 (const bool* a)
{
  int i;
  unsigned int r = 0;
  for (i = 0; i < 32; ++i)
    {
      bool t = a[i];
      r = (t << 31) | (r >> 1);
    }
  return r;
}

