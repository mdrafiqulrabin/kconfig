 
 

int fn1(char *p1, char *p2) {
  int a;
  for (;;)
    switch (*p2) {
    case 'c':
      while (--a > 0)
        *p1++ = ' ';
      p1++;
      a--;
    }
}

