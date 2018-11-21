 
 

#include <stdio.h>
#define MB 100
#define NA 450
#define MA 400

int T[MA][MB],A[MA][NA],B[MB][NA];
void __attribute__((noinline))
MRTRBR(int MA_1, int NA_1, int MB_1)
{
  int i,j, t,k;

   
  if (MA_1 < 4 || NA_1 < 4 || MB_1 < 4)
    return;

   
  
   

  for (k = 3; k < NA_1; k++)
    for (i = 3; i < MA_1; i++)
      for (j = 3; j < MB_1; j++)
	{
	  t = T[i][j];
	  T[i][j] = t+2+A[i][k]*B[j][k];
	}
}
void main ()
{
  int j,i;
  
  for (i = 3; i < MA; i++)
    for (j = 3; j < MB; j++)
      {
	__asm__ volatile ("" : : : "memory");
	T[i][j] = (i>j?i:j);
      }
  
  MRTRBR (MA,NA,MB);
  
  for (i = MA-1; i < MA; i++)
    for (j = MB-10; j < MB; j++)
      printf ("i %d j %d T[i][j] = %d\n",i,j,T[i][j]);
}


 

 
 

