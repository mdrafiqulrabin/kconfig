


#define NO_LONGLONG



static long __undefined;



static uint16_t g_4 = 0xF4A8;
static int32_t g_5 = 0xF72D4EA6;
static uint32_t g_6 = 0x3EEE2FDE;



static int32_t  func_1(void);





static int32_t  func_1(void)
{ 
    g_6 = ((uint16_t)g_4 << (uint16_t)(g_5 = g_4));
    return g_4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



