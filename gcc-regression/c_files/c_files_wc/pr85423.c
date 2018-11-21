 
 
 

int vn, xm;

void
i1 (int);

void
mb (int *ap, int ev)
{
  while (vn < 1)
    {
      i1 (vn);

      ev += *ap && ++vn;

      while (xm < 1)
        ++xm;

      if (*ap == 0)
        *ap = ev;

      ++vn;
    }
}

