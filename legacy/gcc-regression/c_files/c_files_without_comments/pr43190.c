 
 
 
 

typedef struct S { int i; } *T;
#define M(p) ((T) (p))

void
foo (void *p)
{
  M (p)->i++;
}

