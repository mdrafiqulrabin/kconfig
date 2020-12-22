


#define NO_LONGLONG



static long __undefined;



static float g_7 = (-0x1.2p-1);
static uint8_t g_8 = 1U;
static int32_t g_19 = 0x1AFA9B64;
static uint8_t g_20 = 0U;
static int8_t g_21 = 1;
static uint32_t g_22 = 4294967286U;



static uint16_t  func_1(void);
static float  func_4(int32_t  p_5, uint32_t  p_6);





static uint16_t  func_1(void)
{ 
    uint32_t l_9 = 0xC0AA39ED;
    int32_t l_23 = 0x3E52509E;
    int8_t l_24 = 0x97;
    l_23 = (safe_mul_func_float_f_f(func_4(g_8, l_9), (safe_sub_func_float_f_f((safe_add_func_float_f_f((g_21 = (safe_div_func_float_f_f(l_9, ((g_19 = (safe_add_func_float_f_f(l_9, 0xB.038591p+70))) > (g_20 = l_9))))), ((g_22 = l_9) >= (0x8.3p-1 == l_9)))), g_8))));
    return l_24;
}




static float  func_4(int32_t  p_5, uint32_t  p_6)
{ 
    uint32_t l_10 = 4294967286U;
    l_10 = g_8;
    return g_7;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc_bytes (&g_7, sizeof(g_7), "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



