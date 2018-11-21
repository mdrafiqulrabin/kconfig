 
 

int s7, p0;

void
i0 (int ke)
{
  while (ke < 1)
    {
      if (s7 == 0)
        p0 = 0;
      else
        {
          if (p0 == 0)
            s7 = 0;

          if (!!s7 || !!p0)
            s7 = 0;
          else
            p0 = 0;
        }

      ++ke;
    }
}

