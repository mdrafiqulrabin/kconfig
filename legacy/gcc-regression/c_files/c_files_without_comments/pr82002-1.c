 
 

void a (char *);
void
b ()
{
  char c[10000000000];
  c[1099511627776] = 'b';
  a (c);
  a (c);
}

