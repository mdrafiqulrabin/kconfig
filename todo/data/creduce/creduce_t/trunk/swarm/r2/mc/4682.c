



static long __undefined;



static uint8_t g_5 = 254UL;



static uint32_t  func_1(void);





static uint32_t  func_1(void)
{ 
    uint32_t l_4 = 4294967294UL;
    g_5 = ((int8_t)l_4 >> (int8_t)l_4);
    return l_4;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



