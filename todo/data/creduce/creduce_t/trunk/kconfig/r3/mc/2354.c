



static long __undefined;



static uint32_t g_2 = 9UL;
static int32_t g_3 = 0x532FE223L;
static int16_t g_7[3] = {0x1879L,0x1879L,0x1879L};



static int16_t  func_1(void);





static int16_t  func_1(void)
{ 
    uint32_t l_6 = 4294967295UL;
    g_3 = g_2;
    g_7[1] = (safe_mul_func_float_f_f(l_6, g_2));
    for (g_3 = (-11); (g_3 >= (-3)); g_3 = safe_add_func_uint16_t_u_u(g_3, 1))
    { 
        float l_12 = 0xE.5E81A7p-34;
        for (l_6 = 0; (l_6 > 42); l_6 = safe_add_func_int32_t_s_s(l_6, 7))
        { 
            return l_6;
        }
    }
    return g_7[1];
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i = i + 1)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



