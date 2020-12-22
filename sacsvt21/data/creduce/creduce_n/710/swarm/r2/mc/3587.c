



static long __undefined;



static int32_t g_10[8] = {5L,5L,5L,5L,5L,5L,5L,5L};
static int32_t g_28[5] = {0x7D1AFD06L,0x7D1AFD06L,0x7D1AFD06L,0x7D1AFD06L,0x7D1AFD06L};
static uint8_t g_34 = 0x9DL;
static uint16_t g_35[6] = {0xD635L,0xD635L,0xD635L,0xD635L,0xD635L,0xD635L};



inline static const int32_t  func_27(void);





inline static const int32_t  func_27(void)
{ 
    uint64_t l_33 = 0x56EC7E434392F209LL;
    for (g_28[4] = 6; (g_28[4] != 24); g_28[4] = safe_add_func_uint8_t_u_u(g_28[4], 1))
    { 
        g_35[4] = (safe_add_func_float_f_f(l_33, g_34));
        return l_33;
    }
    return l_33;
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_27();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_35[i], "g_35[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



