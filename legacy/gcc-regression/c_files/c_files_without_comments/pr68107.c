 
 

#define N ((__SIZE_MAX__ / sizeof (int)) / 2 + 1)

typedef int (*T1)[N];  
typedef int (*T2)[N - 1];
typedef int (*T3)[N][N];  
typedef int (*T4)[N - 1][N - 1];  
typedef int (**T5)[N];  

struct S {
  int (*q1)[N];  
  int (*q2)[N - 1];
  int (*q3)[N][N];  
  int (*q4)[N - 1][N - 1];  
  int (**q5)[N];  
};

void fn1 (int (*p1)[N]);  
void fn2 (int (*p1)[N - 1]);
void fn3 (int (*p3)[N][N]);  
void fn4 (int (*p4)[N - 1][N - 1]);  
void fn5 (int (**p5)[N]);  

void
fn (void)
{
  int (*n1)[N];  
  int (*n2)[N - 1];
  int (*n3)[N][N];  
  int (*n4)[N - 1][N - 1];  
  int (**n5)[N];  

  sizeof (int (*)[N]);  
  sizeof (int [N]);  
}

