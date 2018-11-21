 
 
 
 

#include <stdio.h>
#include <stdlib.h>

struct Simple {
  int value;
};

int f(struct Simple simple) {
  return simple.value;
}

int main() {
  struct Simple *psimple = (struct Simple *) malloc(sizeof(struct Simple));
  psimple->value = 42;
  free(psimple);
  printf("%d\n", f(*psimple));
  return 0;
}

 
 
 
 
 
 
 
 
 
 

