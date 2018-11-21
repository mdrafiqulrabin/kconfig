 
 

#include <stdlib.h>
#include <stdio.h>

int main() 
{
  unsigned int x, y, idx, H = 1024, W = 1024;
  
  int * tmps = (int *)malloc(H*W*sizeof(int));
  
   
  
  for(x = 1; x < H; x++) 
    {
      for(y = 1; y < W; y++) 
	{
	  idx = x*W+y;
	  tmps[idx % 4096] = idx;	  
	}
    }
  
  for(x = 1; x < 8; x++)
    printf("tmps[%d]=%d\n", x, tmps[x]);
  
  return 0;
}
 

 
 

