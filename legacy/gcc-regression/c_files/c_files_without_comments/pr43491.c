 
 

#define REGISTER register

#if defined __arm__
# define REG1 asm("r4")
#elif defined __i386__
# define REG1 asm("ebx")
#elif defined __mips__
# define REG1 asm("s0")
#elif defined __x86_64__
# define REG1 asm("rbp")
#else
# undef REGISTER
# define REGISTER
# define REG1
#endif

REGISTER long data_0 REG1;
long data_3; 

long foo(long data, long v)
{
	long i;
	long t, u;

	if (data)
		i = data_0 + data_3;
	else {
		v = 2;
		i = 5;
	}
	t = data_0 + data_3;
	u = i;
	return v * t * u;
}

 

 
 

