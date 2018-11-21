 
 
 
a;
c() {
  static char b[25];
  for (; a >= 0; a--)
    if (b[a])
      b[a] = '\0';
}

