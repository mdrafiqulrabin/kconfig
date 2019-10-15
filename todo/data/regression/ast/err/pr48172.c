#include "tree-vect.h"

extern void *memset(void *s, int c, __SIZE_TYPE__ n);
extern void abort (void);

#define ASIZE 1028
#define HALF (ASIZE/2)

int main() {
  unsigned int array[ASIZE];
  int i;

  check_vect ();

  memset(array, 0, sizeof(array));

   
  for (i = 0; i < HALF; i++)
    array[i] = i;

   
  for (i = 0; i < HALF-1; i++)
    array[HALF+i] = array[2*i] + array[2*i + 1];

   
  for (i = 0; i < HALF - 1; i++)
    if (array[HALF+i] != array[2*i] + array[2*i + 1])
      abort ();

  return 0;
}


