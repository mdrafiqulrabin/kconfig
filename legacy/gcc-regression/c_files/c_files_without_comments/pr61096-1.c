 
 
 
 

typedef enum { A } schar;
extern int e;
struct S
{
  int a[3];
};
struct f
{
  int w;
  int x[];
};
struct g
{
  struct f f;  
};

char w1[] = L"foo";  
__WCHAR_TYPE__ w2[] = "foo";  
__WCHAR_TYPE__ w3[] = U"foo";  
schar a1[] = "foo";  
int a2[] = (int[]) { 1 };  

int a3 = e;  
int a4 = (e, 1);  
int a5 = a1[0];  
int a6 = &a3 - &a4;  
int a7[] = a7;  

struct S s = { { 1 }, { 3 } };  
 
struct g g1 = { {0, { 1 } } };  
struct g g2 = { .f[0] = 1 };  

__extension__ int a8 = { };  
int a9[10] = {[1.2] = 2 };  
int a10[10] = {[e] = 2 };  
__extension__ int a11[10] = {[1 ... e] = 1 };  
int a12 = {[1] = 2 };  
int a13[2] = {[-1] = 4 };  
int a14[2] = {[64] = 4 };  
__extension__ int a15[10] = {[2 ... 1] = 4 };  
__extension__ int a16[10] = {[2 ... 100] = 4 };  
int a17[] = { .B = 1 };  
int a18[] = { e };  
char a19[1] = { "x", "x" };  

void
bar (void)
{
  struct f f = { 2, "c" };  
}

struct
{
  char *v;
} sx[] = { .v = 0 };  

