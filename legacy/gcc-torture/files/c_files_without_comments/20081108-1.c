 

void f (void);
void g (void);

void
h (int a, void *b)
{
  ((void *)(int (*)[++a])b ? f : g) ();
}

