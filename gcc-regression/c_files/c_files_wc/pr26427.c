 
 
 
 

struct a {};
static const int d = 1;
static const struct a b = {};
static const int c = 1;
int f(const int *, const struct a *, const int*, const int*);

int g(void) {
  return f(&c, &b, &d, &c);
}

int f(const int *b, const struct a *c, const int *d, const int *e) {
  return *b == *d;
}

int main(void) {
  if (!g())
    __builtin_abort();
  return 0;
}

