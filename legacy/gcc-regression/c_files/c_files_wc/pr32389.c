 

 
 
 

double f1();
int f2() {
  __builtin_ia32_stmxcsr();
  return f1();
}

