


#define NO_LONGLONG



static long __undefined;



static uint16_t g_3 = 0xC2DB;
static volatile uint32_t g_44 = 2U;
static uint16_t g_47 = 1U;
static uint32_t g_63 = 4294967295U;
static int32_t g_65[4][6] = {{0,1,0,0,1,0},{0,1,0,0,1,0},{0,1,0,0,1,0},{0,1,0,0,1,0}};
static uint16_t g_66 = 0xA504;
static uint32_t g_67[10] = {0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA,0x2A7181CA};



static uint32_t  func_28(void);
static float  func_33(int32_t  p_34, int32_t  p_35, int32_t  p_36, uint16_t  p_37, int32_t  p_38);





static uint32_t  func_28(void)
{ 
    uint32_t l_39 = 0x6F25DB2B;
    g_65[2][0] = (safe_div_func_float_f_f(0x5.C54C97p+94, (((safe_add_func_float_f_f(func_33(g_3, g_3, ((0x847D == l_39) > __builtin_ffs(g_3)), l_39, ((!((safe_lshift_func_uint16_t_u_u(l_39, g_3)) > g_3)) >= g_3)), g_3)) > l_39) >= 0xE.323A35p-42)));
    g_66 = g_47;
    g_67[7] = g_65[0][1];
    return l_39;
}




static float  func_33(int32_t  p_34, int32_t  p_35, int32_t  p_36, uint16_t  p_37, int32_t  p_38)
{ 
    int32_t l_43 = 0x57B1A094;
    uint32_t l_62 = 0x6862EAE2;
    int32_t l_64[1][7][4] = {{{(-7),(-7),0x7BB34E4A,(-7)},{(-7),0x0D4A498A,0x0D4A498A,(-7)},{0x0D4A498A,(-7),0x0D4A498A,0x0D4A498A},{0x0D4A498A,0x0D4A498A,(-7),0x0D4A498A},{0x0D4A498A,0x7BB34E4A,0x7BB34E4A,0x0D4A498A},{0x7BB34E4A,0x0D4A498A,0x7BB34E4A,0x7BB34E4A},{0x0D4A498A,0x0D4A498A,(-7),0x0D4A498A}}};
    int i, j, k;
    --g_44;
    l_43 = p_36;
    g_47 = l_43;
    p_35 = (safe_mul_func_uint16_t_u_u((p_37--), (l_64[0][5][3] = (((__builtin_ffsll((l_64[0][5][3] |= (g_63 = ((safe_sub_func_uint16_t_u_u((5 != 0xC2F4FE10), (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((7 & (safe_lshift_func_uint16_t_u_u(1U, 0))), (g_3 ^ ((safe_lshift_func_int16_t_s_s((l_43 = p_38), p_34)) | l_62)))), 0x6899)))) & g_47)))) | g_44) < l_62) | 65535U))));
    return p_37;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_67[i], "g_67[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



