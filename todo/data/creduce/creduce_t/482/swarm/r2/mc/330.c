


#define NO_LONGLONG



static long __undefined;



static uint32_t g_6 = 0x12265E3E;



static uint8_t  func_1(void);





static uint8_t  func_1(void)
{ 
    int32_t l_4 = 0x69F30CC2;
    int32_t l_5 = (-1);
    g_6 = (l_5 = ((int16_t)0x7186 << (int16_t)l_4));
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



