 
 
 

int foo (int parm)
{
  int var = 0;
  int bar (void)
  {
    return parm + var;
  }
  parm++;
  var++;
  return bar ();
}

int
main (void)
{
  return foo (4) - 6;
}

 
 
 

