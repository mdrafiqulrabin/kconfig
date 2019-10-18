 
 
 

unsigned int x = 1;
unsigned int y = 0;

void foo() {
  y = 1 >> (!x * 1111);
}

int main () {
    foo ();
    if (y != 1)
      __builtin_abort ();
    return 0;
}

