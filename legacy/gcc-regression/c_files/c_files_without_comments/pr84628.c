 
 
 

int f0 (void);
__attribute__((error ("err"))) void f1 (void) { f0 (); f0 (); }
__attribute__((error ("err"))) void f2 (void) { f0 (); f0 (); }
 

