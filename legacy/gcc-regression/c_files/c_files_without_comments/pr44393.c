 
 

int i;
void foo ()
{
  int **pp = 0, *p = 0;
  while (--i)
    {
      *p++ = 0;
      *pp++ = p;
    }
  i = *p;
}


