



static long __undefined;



static int8_t g_6 = 0x72L;



static uint16_t  func_1(void);





static uint16_t  func_1(void)
{ 
    uint32_t l_4 = 0xF2F4A8B1L;
    float *l_5 = (void*)0;
    g_6 = (safe_add_func_float_f_f((-0x2.9p-1), l_4));
    return l_4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



