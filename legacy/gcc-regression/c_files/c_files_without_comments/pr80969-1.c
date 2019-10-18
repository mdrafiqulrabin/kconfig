 
 
 

int a[56];
int b;
int main (int argc, char *argv[]) {
  int c;
  for (; b; b++) {
    c = b;
    if (b & 1)
      c = 2;
    a[b] = c;
  }
  return 0;
}

