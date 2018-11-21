 
 
 

 

#include <altivec.h>

int main (int argc, char *argv[])
{
	__vector int v1,v2;
	v1 = v2 = vec_splats ((int) 42);
	return 0;
}
 


