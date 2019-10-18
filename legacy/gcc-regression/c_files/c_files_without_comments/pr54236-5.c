 
 
 

 
 
 

 
 
 

 
 
 
 

 
 
 

int
test_00 (int x, int y)
{
   
  if (y)
    ++x;
  return x;
}

int
test_01 (int x, int y)
{
   
  if (y)
    --x;
  return x;
}

int
test_02 (int x, int y)
{
   
  if (!y)
    ++x;
  return x;
}

int
test_03 (int x, int y)
{
   
  if (!y)
    --x;
  return x;
}

int
test_04 (int x, int y)
{
   
  if (y == x)
    ++x;
  return x;
}

int
test_05 (int x, int y)
{
   
  if (y < 4)
    ++x;
  return x;
}

int
test_06 (int x)
{
   
  return x > 0 ? x + 1 : x;
}

int
test_07 (int x)
{
   
  return x > 0 ? x - 1 : x;
}

