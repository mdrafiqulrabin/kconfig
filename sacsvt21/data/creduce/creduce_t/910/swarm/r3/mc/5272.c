



static long __undefined;



static uint32_t g_5 = 0xB3B9DA4DL;
static int16_t g_6 = 0x82FFL;



static uint32_t  func_1(void);
static float  func_2(int32_t  p_3);





static uint32_t  func_1(void)
{ 
    uint16_t l_4 = 0xA772L;
    int32_t l_10 = (-4L);
    g_6 = func_2(l_4);
    l_10 &= (!(safe_lshift_func_uint16_t_u_s((l_4 < g_5), l_4)));
    return l_10;
}




static float  func_2(int32_t  p_3)
{ 
    return g_5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



