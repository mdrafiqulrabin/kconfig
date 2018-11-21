 
 

int a[200];
char b;
void abort (void);

int main() {
  int i;
  b = 100;
  for (; b; b--) {
    a[b] = 2;
    a[b + 2] = 1;
  }

  if (a[0] != 0 || a[1] != 2 || a[2] != 2)
    abort ();
  for (i = 3; i < 103; i++)
    if (a[i] != 1)
    abort ();

  return 0;
}

 

