 
 

 

typedef struct
{
  void *f1;
} S;

S *a;
int b;

void
fn1 (void)
{
  for (; b; b++, a++)
    a->f1 = b;
}

