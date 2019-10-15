 
 

struct s {
    __INT64_TYPE__ a;
    __INT64_TYPE__ b;
};
void test(struct s __seg_gs *x) {
    x->a += 1;
    x->b -= 1;
}

 
 
 

