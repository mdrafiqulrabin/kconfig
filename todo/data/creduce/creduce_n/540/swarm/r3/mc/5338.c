



static long __undefined;



static int16_t g_3 = 0L;
static uint16_t g_38 = 6UL;



static int32_t  func_26(void);
static float  func_32(uint32_t  p_33);





static int32_t  func_26(void)
{ 
    int32_t l_31 = 0xFB66FEBFL;
    int32_t l_37 = (-1L);
    g_38 = ((float)((float)l_31 - (float)func_32(l_31)) - (float)l_37);
    return g_38;
}




static float  func_32(uint32_t  p_33)
{ 
    uint16_t l_36 = 65527UL;
    for (p_33 = 1; (p_33 <= 12); p_33 += 5)
    { 
        return p_33;
    }
    l_36 = (p_33 > (-0x1.8p-1));
    return l_36;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



