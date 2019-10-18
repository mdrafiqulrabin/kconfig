


#define NO_LONGLONG



static long __undefined;



static int32_t g_3 = (-7);



static int32_t  func_27(void);
static int16_t  func_35(int32_t  p_36, int32_t  p_37);





static int32_t  func_27(void)
{ 
    int16_t l_30 = (-1);
    g_3 = ((uint16_t)l_30 << (uint16_t)((uint16_t)((0x9017CA4E >= ((int16_t)func_35(((g_3 & (-3)) ^ g_3), l_30) >> (int16_t)8)) | (func_35(((uint16_t)((g_3 > __builtin_bswap64(((((7U & l_30) < 65535U) <= l_30) != 0xBE6286C8))) != g_3) >> (uint16_t)5), l_30) | g_3)) >> (uint16_t)4));
    return g_3;
}




static int16_t  func_35(int32_t  p_36, int32_t  p_37)
{ 
    uint32_t l_38 = 4294967295U;
    l_38 = p_36;
    return p_37;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_3, "g_3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



