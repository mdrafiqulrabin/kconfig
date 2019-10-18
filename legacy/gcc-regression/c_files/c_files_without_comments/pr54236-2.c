 
 
 

 
 
 
 

 

 
 

 

 
 

int
test_000 (int a, int c, int b, int d)
{
   
  return a + (b & 1);
}

int
test_001 (int a, int c, int b, int d)
{
   
  return a + b + (c & 1);
}

int
test_002 (int a, int c, int b, int d)
{
   
  return a + b + c + (d & 1);
}

int
test_003 (int a, int c, int b, int d)
{
   
  return (b & 1) + a;
}

int
test_004 (int a, int c, int b, int d)
{
   
  return a + (c & 1) + b;
}

int
test_005 (int a, int c, int b, int d)
{
   
  return a + b + (d & 1) + c;
}

int
test_006 (int a, int c, int b, int d)
{
   
  return (c & 1) + a + b;
}

int
test_007 (int a, int c, int b, int d)
{
   
  return a + (d & 1) + b + c;
}

int
test_008 (int a, int c, int b, int d)
{
   
  return (d & 1) + a + b + c;
}

int
test_009 (int a, int c, int b, int d)
{
   
  return a + b + (b & 1);
}

int
test_010 (int a, int c, int b, int d)
{
   
  return a + (b & 1) + b;
}

int
test_011 (int a, int c, int b, int d)
{
   
  return (b & 1) + a + b;
}

int
test_012 (int a, int c, int b, int d)
{
   
  return a + b + d + (b & 1);
}

int
test_013 (int a, int c, int b, int d)
{
   
  return a + d + (b & 1) + b;
}

int
test_014 (int a, int c, int b, int d)
{
   
  return a + (b & 1) + d + b;
}

int
test_015 (int a, int c, int b, int d)
{
   
  return (b & 1) + a + d + b;
}

int
test_016 (int a, int b, int c, int d)
{
   
   
  return a + (a & 1);
}

int
test_017 (int a, int b, int c, int d)
{
   
  return a + a + (a & 1);
}

int
test_018 (int a, int b, int c, int d)
{
   
  return a + (a & 1) + a;
}

int
test_019 (int a, int b, int c, int d)
{
   
  return (a & 1) + a + a;
}

int
test_020 (int a, int b, int c, int d)
{
   
  return b + b + (a & 1);
}

int
test_021 (int a, int b, int c, int d)
{
   
  return b + (a & 1) + b;
}

int
test_022 (int a, int b, int c, int d)
{
   
  return (a & 1) + b + b;
}

int
test_023 (int a, int b, int c, int d)
{
   
  return a + ((b >> 31) & 1);
}

int
test_024 (int a, int b, int c, int d)
{
   
  return ((b >> 31) & 1) + a;
}

int
test_025 (int a, int b, int c, int d)
{
   
  return ((a >> 31) & 1) + a;
}

int
test_026 (int a, int b, int c, int d)
{
   
  return a + ((a >> 31) & 1);
}

int
test_027 (int a, int b, int c, int d)
{
   
  return a + b + ((c >> 31) & 1);
}

int
test_028 (int a, int b, int c, int d)
{
   
  return a + ((c >> 31) & 1) + b;
}

int
test_029 (int a, int b, int c, int d)
{
   
  return ((c >> 31) & 1) + a + b;
}

int
test_030 (int a, int b, int c, int d)
{
   
  return a + b + c + ((d >> 31) & 1);
}

int
test_031 (int a, int b, int c, int d)
{
   
  return a + b + ((d >> 31) & 1) + c;
}

int
test_032 (int a, int b, int c, int d)
{
   
  return a + ((d >> 31) & 1) + b + c;
}

int
test_033 (int a, int b, int c, int d)
{
   
  return ((d >> 31) & 1) + a + b + c;
}

int
test_034 (int a, int b, int c, int d)
{
   
  return a + a + ((d >> 31) & 1);
}

int
test_035 (int a, int b, int c, int d)
{
   
  return a + ((d >> 31) & 1) + a;
}

int
test_036 (int a, int b, int c, int d)
{
   
  return ((d >> 31) & 1) + a + a;
}

