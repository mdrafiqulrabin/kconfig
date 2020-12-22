



static long __undefined;



static uint64_t g_4 = 18446744073709551609UL;
static int32_t g_31 = 0xD9DCEE34L;



static const int16_t  func_27(void);





static const int16_t  func_27(void)
{ 
    uint64_t l_30 = 0x3267E6AA16542076LL;
    const uint32_t l_32 = 4294967287UL;
    l_30 = (safe_sub_func_float_f_f(g_4, 0x4.7p+1));
    g_31 = __builtin_popcountll(l_30);
    return l_32;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



