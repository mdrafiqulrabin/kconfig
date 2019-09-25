 
 

 

struct { long base; int tail; void * volatile ptr; } *s;
int foo1a (void) { return (s == &s->base); }
int foo1b (void) { return (&s->base == s); }
int foo2 (void) { return ((void *)s == (void *) &s->base); }
int foo4 (void) { return s->base == s->base; }
int foo5 (void) { return &s->ptr == &s->ptr; }
int foo6 (void) { return &s->ptr != &s->ptr; }
int foo7 (void) { return &s->base != &s->ptr; }

struct { union { int i; short s } u; } x;
int foo8 (void) { return &x.u.i == &x.u.s; }

 
 

