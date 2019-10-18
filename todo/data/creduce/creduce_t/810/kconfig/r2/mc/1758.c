


#define NO_LONGLONG



static long __undefined;



static int32_t g_5 = 1;
static int32_t g_10 = 0xD9E2A8D3;



static int32_t  func_1(void);





static int32_t  func_1(void)
{ 
    uint32_t l_4 = 0xA439BEB0;
    int32_t l_11 = 0xC3414B58;
    g_5 = ((int16_t)l_4 >> (int16_t)l_4);
    g_10 = ((g_5 < 0xAB39) || ((int16_t)((uint16_t)g_5 + (uint16_t)l_4) << (int16_t)l_4));
    l_11 = 0x18A52733;
    return g_10;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



