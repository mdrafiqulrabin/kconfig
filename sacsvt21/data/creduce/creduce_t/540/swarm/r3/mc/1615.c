


#define NO_LONGLONG



static long __undefined;



static int32_t g_5 = 1;



static uint16_t  func_26(void);





static uint16_t  func_26(void)
{ 
    uint32_t l_27 = 0U;
    int32_t *l_30 = &g_5;
    (*l_30) = __builtin_clz((l_27 && ((uint32_t)4294967290U - (uint32_t)l_27)));
    return g_5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_5, "g_5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



