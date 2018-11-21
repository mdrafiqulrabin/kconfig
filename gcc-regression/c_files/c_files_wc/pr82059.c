 
 
 
 

struct a
{
  char b;
  struct a *c;
} d (), f;
void *e;
long g;
void
h ()
{
  struct a *i = 0;
  if (g)
    i = e;
  if (!i)
    d ();
  i->c = &f;
  i->b = *(char *) h;
}

