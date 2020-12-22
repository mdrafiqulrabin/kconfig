


#define NO_LONGLONG



static long __undefined;



static uint32_t g_4 = 0xF2F4A8B1;
static int16_t g_6 = 4;



static int16_t  func_1(void);





static int16_t  func_1(void)
{ 
    int32_t l_5 = 0x2D4EA680;
    g_6 = ((int16_t)g_4 << (int16_t)l_5);
    return l_5;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



