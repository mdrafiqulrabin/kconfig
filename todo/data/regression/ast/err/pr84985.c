 
 
int main() {
  int a;
  asm("" : "=d"(a) : "0"(a), "0ae"(&a));
}

