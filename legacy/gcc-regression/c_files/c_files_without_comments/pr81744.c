 
 

typedef struct {
  int a, b;
} CompandSegment;
int a;
CompandSegment *b;
void fn1() {
  for (; a; a++)
    b[a].a = b[a].b = b[a - 1].a = b[a - 1].b = 0;
}
 

