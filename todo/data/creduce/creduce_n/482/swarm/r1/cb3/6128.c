



static long __undefined;



static uint32_t g_3 = 18446744073709551609UL;
static int32_t g_29 = 0x2FD2D1A4L;
static float g_30 = 0x7.6874BEp+66;
static uint32_t g_32 = 0x486AEBA4L;



static uint64_t  func_26(void);





static uint64_t  func_26(void)
{ 
    int64_t l_27 = 0x3303773672D714F9LL;
    int32_t *l_28 = &g_29;
    uint32_t *l_31 = &g_32;
    (*l_28) = (0xFBB6BC3EC3D4E703LL || l_27);
    g_29 = __builtin_ia32_crc32qi(((*l_31) = 0x785B6478L), g_3);
    return g_29;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc_bytes (&g_30, sizeof(g_30), "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



