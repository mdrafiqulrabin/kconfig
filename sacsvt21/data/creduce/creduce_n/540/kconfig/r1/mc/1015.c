



static long __undefined;



static int8_t g_8 = 6L;
static int32_t g_32 = 0x4B58E17CL;
static int8_t g_38 = 0xD7L;
static int8_t g_42 = 0x7CL;
static uint8_t g_51 = 0UL;
static uint32_t g_54 = 0xE62699FFL;
static uint32_t g_56 = 0x01D4C3F1L;
static uint16_t g_57 = 65532UL;



static int8_t  func_27(void);
inline static float  func_33(int8_t  p_34, int32_t  p_35, float  p_36);





static int8_t  func_27(void)
{ 
    uint32_t l_37 = 7UL;
    int32_t l_39 = 2L;
    uint32_t l_55 = 18446744073709551615UL;
    g_56 = (safe_mul_func_float_f_f(((safe_mul_func_float_f_f(g_32, ((0x7.00C430p-81 > 0x3.0611BCp-37) == func_33(((l_37 == 0x5FFFL) || (g_38 = g_32)), (((l_39 = 0L) & (g_32 != (g_42 = ((safe_lshift_func_int16_t_s_u(0L, 3)) < 0xB91EE4CFL)))) && g_32), g_32)))) < l_37), l_55));
    g_57 = (g_56 ^ l_39);
    return g_8;
}




inline static float  func_33(int8_t  p_34, int32_t  p_35, float  p_36)
{ 
    int32_t l_52 = (-1L);
    int32_t l_53 = 0x89276496L;
    p_36 = 0x5.Bp+1;
    for (g_38 = 0; (g_38 <= 20); g_38 = safe_add_func_int32_t_s_s(g_38, 1))
    { 
        uint32_t l_47 = 0x8ED0BD2FL;
        for (g_8 = 0; (g_8 <= 12); ++g_8)
        { 
            int32_t l_50 = (-3L);
            l_47++;
            g_51 = (0x8CBDB62BL | l_50);
        }
        if (l_52)
            break;
        l_53 ^= (l_52 = 1L);
        g_54 |= p_34;
    }
    return g_42;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



