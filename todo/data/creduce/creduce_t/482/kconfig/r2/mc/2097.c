


#define NO_LONGLONG



static long __undefined;



static uint8_t g_3 = 255U;
static uint16_t g_31 = 0x19A6;



inline static int8_t  func_27(void);





inline static int8_t  func_27(void)
{ 
    int32_t l_30 = 0x4ADF2985;
    int32_t l_32 = (-1);
    g_31 = (safe_mul_func_float_f_f(l_30, l_30));
    l_32 |= (l_30 ^= g_3);
    return l_30;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



