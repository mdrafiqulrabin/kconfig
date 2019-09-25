 
 

struct foo_t {
  int limit;
} foo[3];
void
bar () {
  int i;
  for (i = 0; i < 3; i++) {
    __builtin_memset (&foo[i], 0, sizeof(*foo));
  }
}

