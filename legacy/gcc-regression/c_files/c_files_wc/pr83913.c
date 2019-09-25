 
 

int jo, z4;

int
be (long unsigned int l7, int nt)
{
  int en;

  jo = l7;
  for (en = 0; en < 24; ++en)
    {
      jo = (jo / z4) * (!!jo >= ((!!nt) & 2));
      if (jo == 0)
        nt = 0;
      else
        {
          nt = z4;
          ++z4;
          nt = (long unsigned int) nt == (l7 + 1);
        }
    }

  return nt;
}

