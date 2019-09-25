 
 

#ifdef __AVR_3_BYTE_PC__
 
#define SECTION_NAME ".foo"
#else
 
#define SECTION_NAME ".text.foo"
#endif

#include "exit-abort.h"
#include "pr71151-common.h"

int main()
{
	foo(5);
	if (y != 37)
		abort();

	foo(0);
	if (y != 67)
		abort();

	foo(7);
	if (y != 98)
		abort();
}

