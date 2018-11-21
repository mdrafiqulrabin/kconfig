 
 

int foo (void)
{
    volatile int a = -1;
    long long b = (1LL << (sizeof (b) * 8 - 1));  
    long long x = (a & b);  
    if (x < 1LL) { ; } else { __builtin_abort(); }
    return 0;
}

 

