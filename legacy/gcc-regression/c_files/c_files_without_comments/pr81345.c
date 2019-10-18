 

char a[3];

void f (const char *s)
{
  __builtin_strncpy (a, s, sizeof a + 1);    
}

struct S { char a[3]; int i; };

void g (struct S *d, const char *s)
{
  __builtin_strncpy (d->a, s, sizeof d->a + 1);    
}

