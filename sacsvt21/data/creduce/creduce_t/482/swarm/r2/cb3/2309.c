



static long __undefined;



static int32_t g_3 = 1L;
static float g_28 = 0x1.3p+1;
static volatile int64_t g_32 = 0xFF5452FA814B11F3LL;
static int64_t g_35 = 1L;
static volatile float g_37 = 0x0.5p-1;
static volatile float *g_36 = &g_37;



static uint32_t  func_26(void);





static uint32_t  func_26(void)
{ 
    float *l_27 = &g_28;
    int32_t l_31 = (-1L);
    int64_t *l_33 = (void*)0;
    int64_t *l_34 = &g_35;
    (*g_36) = ((g_3 , ((*l_27) = g_3)) != (-(((((((((*l_34) = (((0x13D0L & ((safe_unary_minus_func_int16_t_s(((l_31 , l_31) , __builtin_ia32_crc32qi(g_3, l_31)))) && ((g_32 , l_31) ^ l_31))) , 1UL) == l_31)) >= 0x44D996497440271DLL) ^ 0xB8CFF26AF9031EA0LL) , g_36) != g_36) <= g_3) <= 0x9.Fp-1) <= l_31)));
    return g_3;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc_bytes (&g_28, sizeof(g_28), "g_28", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc_bytes (&g_37, sizeof(g_37), "g_37", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



