 
 
 

int fct1 (void);
int fct2 (void);

int
fct (unsigned nb)
{
  if ((nb >> 5) != 0)
    return fct1 ();
  else
    return fct2 ();
}

