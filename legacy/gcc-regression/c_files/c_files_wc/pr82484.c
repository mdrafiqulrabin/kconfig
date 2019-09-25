 
 

void foo(volatile int *ptr);
void a (volatile int b) { foo(&b); }

