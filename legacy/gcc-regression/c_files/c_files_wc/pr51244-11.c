 
 
 
 
 
 

int*
test_00 (int* s)
{
  if (s[0] == 0)
    if (!s[3])
      s = 0;
  return s;
}

int*
test_01 (int* s)
{
  if (s[0] == 0)
    if (s[3])
      s = 0;
  return s;
}

