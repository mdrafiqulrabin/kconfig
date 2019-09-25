 
 

 
 
 
extern int bar (void);

#define FOO(x) \
  void foo##x (void) { int a = bar (); if (a == x) bar (); } \
  void bar##x (void) { int a = bar (); if (a == -x) bar (); } \
  void foon##x (void) { int a = bar (); if (a != x) bar (); } \
  void barn##x (void) { int a = bar (); if (a != -x) bar (); } \
  

FOO (1)
FOO (2)
FOO (3)
FOO (4)
FOO (5)
FOO (6)
FOO (7)
FOO (8)
FOO (9)



