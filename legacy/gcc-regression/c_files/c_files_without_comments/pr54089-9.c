 
 
 
 
 
 
 
 

typedef char bool;

int
test_00 (int* a, int* b)
{
  int i;
  int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i] == b[i];
      r = (r << 1) | t;
    }
  return r;
}

int
test_01 (int* a, int* b)
{
  int i;
  int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i] == b[i];
      r = (r << 2) | t;
    }
  return r;
}

int
test_02 (int* a, int* b)
{
  int i;
  int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i] == b[i];
      r = (r << 3) | t;
    }
  return r;
}

int
test_03 (const bool* a)
{
  int i;
  int r = 0;
  for (i = 0; i < 16; ++i)
    {
      bool t = a[i];
      r = (r << 1) | (t & 1);
    }
  return r;
}

