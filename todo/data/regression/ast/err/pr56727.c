 
 
void do_not_optimize(int b)
{
    do_not_optimize(0);
}
void do_optimize(int b)
{
    do_optimize(0);
}

void g(int b) __attribute__((alias(("do_not_optimize"))));

 
 

