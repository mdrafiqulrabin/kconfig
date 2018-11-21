 
 
 

void load_kernel(void *setup_addr)
{
    unsigned int seg = (unsigned int)setup_addr >> 4;
    asm("movl %0, %%es" : : "r"(seg));
}

