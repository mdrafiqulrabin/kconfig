 
 
 
 

void
test (long long *values, long long val, long long delta)
{
  unsigned i;

  for (i = 0; i < 128; i++, val += delta)
    values[i] = val;
}

