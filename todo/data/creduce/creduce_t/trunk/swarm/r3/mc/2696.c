


#define NO_LONGLONG



static long __undefined;



static int32_t g_8 = 0x647DC4B4;
static uint32_t g_52[4] = {0x05F4D0C6,0x05F4D0C6,0x05F4D0C6,0x05F4D0C6};
static uint16_t g_53[1][2][8] = {{{0x121F,0x121F,0x1885,0x121F,0x121F,0x1885,0x121F,0x121F},{65535U,0x121F,65535U,65535U,0x121F,65535U,65535U,0x121F}}};
static int32_t g_73 = 9;



inline static uint32_t  func_24(void);
static float  func_27(uint8_t  p_28);
inline static int32_t  func_45(uint32_t  p_46, float  p_47, uint32_t  p_48, uint8_t  p_49);





inline static uint32_t  func_24(void)
{ 
    int32_t l_72 = 1;
    int32_t l_76[3];
    int i;
    for (i = 0; i < 3; i = i + 1)
        l_76[i] = 0;
    for (g_8 = 0; (g_8 < 21); g_8 = safe_add_func_int16_t_s_s(g_8, 6))
    { 
        uint16_t l_54 = 0x2695;
        g_53[0][1][4] = func_27((g_8 == 65535U));
        ++l_54;
        g_73 = ((safe_add_func_uint32_t_u_u((0x5F6B >= ((safe_add_func_int32_t_s_s(((g_52[2] & 0x7DFE) ^ 0xD7E9), (((safe_div_func_uint16_t_u_u(g_52[3], (~(safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((func_45(l_72, l_54, g_52[3], l_72) != (-6)) > l_54), l_54)) ^ g_52[3]), 1)), g_8)), 0))))) > g_53[0][1][6]) && g_53[0][1][7]))) | l_54)), l_54)) | l_54);
        for (l_72 = 20; (l_72 == 18); l_72 = safe_sub_func_int32_t_s_s(l_72, 8))
        { 
            l_76[2] |= l_72;
        }
    }
    return g_73;
}




static float  func_27(uint8_t  p_28)
{ 
    float l_29[1];
    int32_t l_44 = (-9);
    int i;
    for (i = 0; i < 1; i = i + 1)
        l_29[i] = 0x3.55FFF8p+51;
    l_29[0] = (-0x1.4p+1);
    g_52[3] |= (((safe_add_func_uint32_t_u_u(g_8, (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_28, g_8)), (safe_rshift_func_uint16_t_u_s(((p_28 & ((p_28 != p_28) != (safe_div_func_uint32_t_u_u((g_8 || (safe_mod_func_uint32_t_u_u(l_44, func_45(l_44, g_8, g_8, l_44)))), g_8)))) >= l_44), 1)))), l_44)))) || 4) != 4294967293U);
    return l_44;
}




inline static int32_t  func_45(uint32_t  p_46, float  p_47, uint32_t  p_48, uint8_t  p_49)
{ 
    float l_50[8] = {0x0.7p-1,0x3.263393p-31,0x3.263393p-31,0x0.7p-1,0x3.263393p-31,0x3.263393p-31,0x0.7p-1,0x3.263393p-31};
    int32_t l_51 = 0x81606DC0;
    int i;
    l_51 &= p_48;
    return l_51;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_24();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 4; i = i + 1)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i = i + 1)
    {
        for (j = 0; j < 2; j = j + 1)
        {
            for (k = 0; k < 8; k = k + 1)
            {
                transparent_crc(g_53[i][j][k], "g_53[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



