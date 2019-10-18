 
 

 
   
double out;

static void foo(void)
{
    double t1, t2, t3, t4;
    
    t4 = t1 >= t2 ? t1 : t2;
    t4 = t4 >= t3 ? t4 : t3;
    out = t4;
}

