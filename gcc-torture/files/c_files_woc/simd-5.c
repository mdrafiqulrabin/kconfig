#define vector64 __attribute__((vector_size(8)))

main(){

 vector64 int  c;
vector64 int a = {1, -1};
vector64 int b = {2, -2};
c = -a + b*b*(-1LL);
 

 printf("result is %llx\n", (long long)c); 
}

