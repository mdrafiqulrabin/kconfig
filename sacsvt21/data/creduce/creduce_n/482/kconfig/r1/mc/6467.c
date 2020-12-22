


#define NO_LONGLONG



static long __undefined;


union U0 {
   unsigned f0 : 10;
   int16_t  f1;
   int32_t  f2;
   const int8_t * const  f3;
   int32_t  f4;
};


static int16_t g_8 = 0x4C00;
static int32_t g_10[4][10] = {{1,0,0x65C2DD78,0x65C2DD78,0,1,0,0x65C2DD78,0x65C2DD78,0},{1,0,0x65C2DD78,0x65C2DD78,0,1,0,0x65C2DD78,0x65C2DD78,0},{1,0,0x65C2DD78,0x65C2DD78,0,1,0,0x65C2DD78,0x65C2DD78,0},{1,0,0x65C2DD78,0x65C2DD78,0,1,0,0x65C2DD78,0x65C2DD78,0}};
static union U0 g_11 = {0xF5AC3D6C};



static union U0  func_1(void);





static union U0  func_1(void)
{ 
    int8_t l_4 = (-10);
    int16_t *l_7 = &g_8;
    int32_t *l_9 = &g_10[1][5];
    (*l_9) = ((int16_t)l_4 >> (int16_t)((uint16_t)l_4 + (uint16_t)((*l_7) = l_4)));
    return g_11;
    
    
    }





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



