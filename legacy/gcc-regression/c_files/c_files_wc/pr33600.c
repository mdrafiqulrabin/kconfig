 
 
int f(int n)
{
        int x;

        asm("" : "=&c"(n), "=r"(x) : "1"(n), "0"(n));

        return n;
}

