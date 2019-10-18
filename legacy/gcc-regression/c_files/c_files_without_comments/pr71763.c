 
 
 

int a, b;
float c;

void fn2(void);

void fn1(void)
{
        long d;

        for (d = 3; d; d--) {
                for (a = 0; a <= 1; a++) {
                        b &= 1;
                        if (b) {
                                for (;;) {
                                        fn2();
                                        c = d;
                                }
                        }
                }
        }
}

