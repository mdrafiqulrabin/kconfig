



static long __undefined;



static int32_t g_9 = 1L;
static int32_t g_11 = (-8L);



static int32_t  func_1(void);





static int32_t  func_1(void)
{ 
    int64_t l_4 = 0x5B40194DDBC37078LL;
    int32_t *l_10 = &g_11;
    (*l_10) ^= ((int32_t)l_4 - (int32_t)(0xA9A971867B8F5F49LL < ((int16_t)((int16_t)0xFAC1L * (int16_t)g_9) << (int16_t)l_4)));
    return g_9;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



