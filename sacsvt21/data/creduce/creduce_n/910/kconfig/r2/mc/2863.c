



static long __undefined;



static uint32_t g_9 = 0x3C633843L;
static int16_t g_31 = 0x61A6L;
static float g_33 = 0xE.D46758p+16;
static volatile int16_t g_38 = 0xF7D1L;
static uint16_t g_39 = 7UL;



static uint16_t  func_27(void);





static uint16_t  func_27(void)
{ 
    int64_t l_30[2];
    int32_t l_32 = 0xED890FC5L;
    int32_t l_34 = 0x34392F20L;
    int32_t l_35 = 3L;
    int64_t l_36 = 0x290CE96F8F9ED02ELL;
    int32_t l_37 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_30[i] = 0x2E4145C174734688LL;
    g_31 = ((float)g_9 + (float)(l_30[0] == 0x2.7p+1));
    --g_39;
    return g_9;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc_bytes (&g_33, sizeof(g_33), "g_33", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



