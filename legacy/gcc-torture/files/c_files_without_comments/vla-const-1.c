 
 
 
int a;
void g(void *);
void f(void) { int b[(__SIZE_TYPE__)&a]; g(b); }

