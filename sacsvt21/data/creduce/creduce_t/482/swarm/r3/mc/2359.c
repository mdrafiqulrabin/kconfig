



static long __undefined;



static uint64_t g_4 = 0x40D7F825E7A66FE7LL;
static uint64_t g_31 = 0UL;



static int32_t  func_27(void);





static int32_t  func_27(void)
{ 
    float l_30[6][4] = {{0x1.7EA0D0p-25,0x0.Bp-1,0x1.7EA0D0p-25,0x1.7EA0D0p-25},{0x0.Bp-1,0x0.Bp-1,0x5.594D03p+13,0x0.Bp-1},{0x0.Bp-1,0x1.7EA0D0p-25,0x1.7EA0D0p-25,0x0.Bp-1},{0x1.7EA0D0p-25,0x0.Bp-1,0x1.7EA0D0p-25,0x1.7EA0D0p-25},{0x0.Bp-1,0x0.Bp-1,0x5.594D03p+13,0x0.Bp-1},{0x0.Bp-1,0x1.7EA0D0p-25,0x1.7EA0D0p-25,0x0.Bp-1}};
    int32_t l_32 = 0x88039D6BL;
    int i, j;
    g_31 = ((float)g_4 / (float)l_30[3][3]);
    return l_32;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



