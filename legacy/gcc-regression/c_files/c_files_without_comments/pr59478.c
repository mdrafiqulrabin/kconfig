 
 
 
 
 
 
 
 
 

int
test_00 (float val)
{
  char valbytes[sizeof (float)];
  __builtin_memcpy (valbytes, &val, sizeof (float));

  int result;
  __builtin_memcpy (&result, valbytes, sizeof (int));

  return result;
}

float
test_01 (int val)
{
  char valbytes[sizeof (int)];
  __builtin_memcpy (valbytes, &val, sizeof (int));

  float result;
  __builtin_memcpy (&result, valbytes, sizeof (float));

  return result;
}

int
test_02 (float val)
{
  union { int i; float f; } tmp;
  tmp.f = val;
  return tmp.i;
}

float
test_03 (int val)
{
  union { int i; float f; } tmp;
  tmp.i = val;
  return tmp.f;
}

