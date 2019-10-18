 
 
 

extern void d(void);
void a() {
  char *b;
  char c = 0;
  for (; b < (char *)a; b++) {
    if (*b)
      c = 1;
    *b = 0;
  }
  if (c)
    d();
}
 

