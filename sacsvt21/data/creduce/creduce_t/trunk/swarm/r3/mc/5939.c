


#define NO_LONGLONG



static long __undefined;



static int16_t g_3 = 3;
static uint32_t g_4 = 0x29A3DF60;



static uint32_t  func_1(void);





static uint32_t  func_1(void)
{ 
    g_4 = (-(float)g_3);
    return g_4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



