


#define NO_LONGLONG



static long __undefined;



static uint16_t g_4 = 7U;
static int32_t g_6 = 0x449C9FB3;



static int16_t  func_1(void);





static int16_t  func_1(void)
{ 
    float l_2 = 0xA.DF603Fp+87;
    float *l_3[4];
    int32_t *l_5 = &g_6;
    int i;
    for (i = 0; i < 4; i++)
        l_3[i] = &l_2;
    g_4 = l_2;
    (*l_5) &= 7;
    return g_6;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



