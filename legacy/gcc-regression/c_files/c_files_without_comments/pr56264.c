 
 

int a, b, c;

void f(void)
{
  if(b)
    {
      for(a = 0; a < 1; a++)
	lbl:
	    c = c && b ? : 0;

      c = 0;
      goto lbl;
    }

  if(a)
    goto lbl;
}

