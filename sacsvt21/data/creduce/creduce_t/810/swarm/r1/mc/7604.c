


#define NO_LONGLONG



static long __undefined;



static uint16_t g_3 = 7U;
static float g_28 = 0x0.Fp-1;
static uint32_t g_29 = 4294967287U;



static float  func_26(void);





static float  func_26(void)
{ 
    int32_t l_27 = 0;
    g_29 = __builtin_clz(l_27);
    return l_27;
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
    transparent_crc(g_29, "g_29", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



