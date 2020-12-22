



static long __undefined;



static int32_t g_4 = 0xB3921DEDL;
static uint16_t g_5 = 0x5559L;



static const int32_t  func_1(void);





static const int32_t  func_1(void)
{ 
    uint32_t l_6 = 0xD9EDBDA7L;
    g_5 = (safe_add_func_float_f_f(0xA.CDB8FAp-12, g_4));
    ++l_6;
    return l_6;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



