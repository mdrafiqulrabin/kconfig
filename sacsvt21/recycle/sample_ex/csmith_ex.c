#include <stdio.h>
#include <stdint.h>

//global variable
int g = 0;

//inline-function
inline int cube(int s)
{
    return s*s*s;
}

int print_ud()
{
    return 1;
}

//argc
int main(int argc, char* argv[])
{
    //arrays
    int arr[1];
    
    //bitfields
    struct bitf {
        unsigned int a: 13;
    };
    
    //comma_operators
    int co1,co2,co3[]={1,2,3};
    
    //compound_assignment
    g += 1;
    
    //consts
    const int c=10;
    
    //divs
    g = g / 1;
    
    //embedded_assigns
    int e1,e2;
    e1 = e2 = 0;
    
    //pre_incr_operator
    ++g;
    
    //pre_decr_operator
    --g;
    
    //post_incr_operator
    g++;
    
    //post_decr_operator
    g--;
    
    //unary_plus_operator
    g = +7;
    
    //jump
    for(;;) {
        if(g == 0) continue;
        else if (g < 0) break;
        else goto last;
    }
    last:
    printf("\nat jump");
    
    //longlong
    long long ll = 0;
    
    //int8
    int8_t *x8 = "Hello int8_t!\n";
    
    //uint8
    uint8_t *y8 = "Hello uint8_t!\n";
    
    //float
    float f = 0.0f;
    
    //math64
    int64_t t; //>>64,long long, double, m64, etc
    
    //inline-function at top
    
    //muls
    g = g * 0;
    
    //safe_math: safe_mul_func_uint8_t_u_u, safe_sub_func_int8_t_s_s, etc
    
    //packed-struct
    typedef struct
    {
        char Data1;
        int Data2;
        unsigned short Data3;
        char Data4;
        
    }__attribute__((packed, aligned(1))) sSampleStruct;
    #pragma pack(2)
    struct T {
        int i;
        short j;
        double k;
    };
    
    //paranoid
    int *p;
    assert (p != 0);
    
    //pointers
    int *q;
    
    //structs
    struct st0
    {
        int x, y;
    } s1;
    
    //unions
    union un0 {
        int x;
        int y;
    } u1;
    
    //volatiles
    volatile int v = 10;
    
    //volatile_pointers
    volatile char *vpch;
    
    //const_pointers
    const char *cpch;
    
    //global variable at top
    
    //builtins
    printf("builtins");
    print_ud(); //user defined
    
    return 0;
}
