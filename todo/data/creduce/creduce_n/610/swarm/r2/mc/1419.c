



static long __undefined;



static uint16_t g_3 = 1UL;
static int32_t g_30 = 0x13EC752FL;



inline static uint32_t  func_25(void);





inline static uint32_t  func_25(void)
{ 
    int32_t l_26 = (-2L);
    int32_t *l_29 = &g_30;
    l_26 |= 0xCABFC393L;
    (*l_29) = ((int16_t)4L >> (int16_t)l_26);
    return (*l_29);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_25();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



