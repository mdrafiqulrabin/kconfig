



static long __undefined;



static int8_t g_3 = 0L;
static volatile int16_t g_44 = 0x168FL;
static uint32_t g_45 = 8UL;
static float g_63 = 0x5.082F4Ep+94;
static int32_t g_64 = 1L;
static uint8_t g_65 = 0x3AL;
static uint32_t g_66 = 0x1B705618L;



inline static int32_t  func_26(void);
static float  func_51(uint32_t  p_52, int8_t  p_53, uint32_t  p_54);





inline static int32_t  func_26(void)
{ 
    int16_t l_31 = 0xC9C3L;
    int32_t l_40 = (-3L);
    g_65 = (0x2.6A205Bp+65 < (safe_mul_func_float_f_f((safe_div_func_float_f_f(l_31, (safe_sub_func_float_f_f((safe_div_func_float_f_f((safe_mul_func_float_f_f((safe_add_func_float_f_f((l_40 > ((g_3 == (safe_add_func_float_f_f(((+((g_44 == g_3) >= ((g_45 = __builtin_clzll(g_3)) > (+(safe_mul_func_float_f_f((safe_div_func_float_f_f(func_51(__builtin_clzll(l_31), g_3, g_3), 0x7.7AB5BFp-86)), g_3)))))) > g_3), g_3))) <= (-0x1.1p+1))), g_3)), (-0x1.Bp-1))), 0x1.7p+1)), l_31)))), 0x0.0p-1)));
    g_66 = l_31;
    for (l_40 = 23; (l_40 > (-22)); --l_40)
    { 
        return g_64;
    }
    return l_31;
}




static float  func_51(uint32_t  p_52, int8_t  p_53, uint32_t  p_54)
{ 
    uint32_t l_59 = 0xC8AF9534L;
    int32_t l_62 = 0L;
    g_64 = (safe_sub_func_float_f_f((safe_sub_func_float_f_f(g_3, ((-0x7.4p+1) > (l_59 = g_3)))), (safe_div_func_float_f_f(((g_63 = l_62) > (-0x8.Bp+1)), l_62))));
    return g_64;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc_bytes (&g_63, sizeof(g_63), "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



