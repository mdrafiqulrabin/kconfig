



static long __undefined;



static uint16_t g_3 = 0xA4A1L;



static int16_t  func_1(void);





static int16_t  func_1(void)
{ 
    float l_2 = (-0x3.8p+1);
    int32_t l_4 = 0x8B72FD49L;
    g_3 = l_2;
    return l_4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



