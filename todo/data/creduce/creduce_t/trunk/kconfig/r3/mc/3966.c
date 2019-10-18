


#define NO_LONGLONG



static long __undefined;



static float g_10 = 0x5.1p-1;
static uint32_t g_11[1] = {1U};
static uint32_t g_49 = 2U;
static uint32_t g_51 = 4294967292U;
static uint32_t g_52 = 4294967295U;



static uint32_t  func_30(void);





static uint32_t  func_30(void)
{ 
    int32_t l_31 = (-1);
    int32_t l_48 = 0x97CBB402;
    int32_t l_50[5][1] = {{(-1)},{0xE8BFA085},{(-1)},{0xE8BFA085},{(-1)}};
    int32_t l_53 = 0x36FFE617;
    int32_t l_54 = 7;
    int32_t l_55 = 0xF8F0B53C;
    int32_t l_56 = 8;
    int8_t l_57 = 0xCC;
    int i, j;
    l_57 = ((l_56 = ((l_55 = (l_54 = (((((l_31 > ((((l_53 = (((0x0.A796D4p+21 <= ((g_52 = (g_51 = (l_50[1][0] = (safe_add_func_float_f_f(0x0.5p-1, (safe_div_func_float_f_f((g_10 = g_11[0]), (g_49 = (safe_mul_func_float_f_f(((safe_mul_func_float_f_f(((safe_mul_func_float_f_f((safe_sub_func_float_f_f((((l_48 = (((0xF.017A68p+71 > l_31) == (safe_mul_func_float_f_f((0xC.EF874Ap+92 > (g_11[0] <= (safe_mul_func_float_f_f(l_31, l_31)))), g_11[0]))) < g_11[0])) > l_31) <= l_31), (-0x2.Cp-1))), 0x0.DDFDAFp-30)) > g_11[0]), l_31)) < g_11[0]), l_31)))))))))) >= 0x0.Ep+1)) == 0x1.Dp+1) != g_11[0])) != 0x9.8p-1) < 0x5.55D5DFp-93) >= g_11[0])) != g_11[0]) == 0x0.033E27p-84) <= g_11[0]) < l_31))) > 0x6.AA9639p-94)) >= 0xB.4E6A83p+59);
    return g_51;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_30();
    transparent_crc_bytes (&g_10, sizeof(g_10), "g_10", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



