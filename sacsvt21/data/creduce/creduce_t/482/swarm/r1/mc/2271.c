



static long __undefined;



static uint32_t g_20 = 0x7D7C1188L;
static float g_38 = 0xC.EFA1E1p+3;
static uint16_t g_40 = 1UL;



static int32_t  func_34(void);





static int32_t  func_34(void)
{ 
    for (g_20 = 0; (g_20 <= 21); g_20 += 9)
    { 
        uint32_t l_39 = 0x9BCA7B5CL;
        g_38 = (-(float)0x1.Ap-1);
        g_40 = (g_38 = l_39);
    }
    return g_20;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_34();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc_bytes (&g_38, sizeof(g_38), "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



