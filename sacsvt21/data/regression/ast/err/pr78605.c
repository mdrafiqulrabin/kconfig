 

char d[10];

int f (int i)
{
  return __builtin_sprintf (d, "%i %i", i, i);
}

int g (float f)
{
  return __builtin_sprintf (d, "%.2f %.2f", f, f);
}

