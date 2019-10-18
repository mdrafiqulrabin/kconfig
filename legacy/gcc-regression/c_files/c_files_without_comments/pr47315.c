 
 

__attribute__ ((__target__ ("avx")))
float bar (float f) {}

void foo (float f)
{
    bar (f);
}

