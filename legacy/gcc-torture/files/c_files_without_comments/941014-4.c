 

f (int *re)
{
  int *loops = 0, *loope = 0;
  unsigned dat0 = 0;
  static void *debug = &&firstdebug;

 firstdebug:
  g (loops, loope);

  if (dat0 & 1)
    re[(dat0 >> 2) & 3] = 0;
}

