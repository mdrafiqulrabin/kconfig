 
 
 

int a, c;
int b[1];
static inline int
fn1() {
  switch (a)
  case 0:
  case 2:
    return 1;
  return 0;
}
void fn2() {
  int i;
  for (;; ++i) {
    c = b[i];
    int d = !fn1();
    if (d)
      __asm__("");
  }
}

