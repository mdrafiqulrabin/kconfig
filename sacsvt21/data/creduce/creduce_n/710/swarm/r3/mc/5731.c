



static long __undefined;



static int32_t g_4 = (-1L);
static uint32_t g_35 = 0x47941CE3L;



inline static uint32_t  func_31(void);





inline static uint32_t  func_31(void)
{ 
    int64_t l_32 = (-1L);
    l_32 = __builtin_ffsll(g_4);
    g_35 = (safe_mul_func_float_f_f(g_4, 0x1.9ADB82p+53));
    return l_32;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



