 
 

typedef int A[];
struct S { int i; A a[5]; } s;  
extern void foo (int p[2][]);  
extern void bar (A p[2]);  

void
foo (int p[2][])  
{
}

void
bar (A p[2])  
{
}

struct T;
struct T t[5];  
struct U u[] = { { "abc" } };  
typedef struct T TT;
TT tt[5];  

