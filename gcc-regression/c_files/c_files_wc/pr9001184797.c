 
 
 

 

struct a b;
struct a {
  long c;
  long d
} e() {
  static __thread struct a f;
  static __thread g;
  g = 5;
  h();
  if (f.c)
    g = g & 5;
  f = b;
}

