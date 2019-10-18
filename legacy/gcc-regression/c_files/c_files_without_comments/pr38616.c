 
 
 
 

#include <stdio.h> 

extern int strcmp (const char *, const char *);

#define BUFFER "1234567890abcdefghijklmno"
int main (void)
{
  char buffer[1024]="";
  sprintf (buffer, "%s", BUFFER);
  return strcmp (buffer, BUFFER);
}

