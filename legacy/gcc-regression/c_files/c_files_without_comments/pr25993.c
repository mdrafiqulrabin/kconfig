 
 
 

#ifndef __ASSEMBLER__
extern int func(void);
#else
#ifdef __sun__
.globl func
#else
.global func
#endif
.type func,@function
.align 4
func:
        ret
.size func,.-func
#endif

