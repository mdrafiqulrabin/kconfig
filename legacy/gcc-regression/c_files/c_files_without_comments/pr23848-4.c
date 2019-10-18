 
 
 
 

void bar (char *, char *, char *, char *, int);
void foo (int size)
{
  char temp[size];
  temp[size-1] = '\0';
  {
    char temp2[size];
    {
      char temp3[size];
      {
	char temp4[size];
	bar (temp, temp2, temp3, temp4, size);
      }
    }
    __asm __volatile ("" : : "r" (&temp[0]), "r" (&temp2[0]) : "memory");
  }
}

 
 

