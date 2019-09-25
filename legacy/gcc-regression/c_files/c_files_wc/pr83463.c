 
 
 

int *a;
void *memcpy ();
void
m (void *p1)
{
  memcpy (0, p1, 0);
}

void
p ()
{
  m (p + (long) a);
}

