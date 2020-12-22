


#define NO_LONGLONG



static long __undefined;



static uint32_t g_7 = 4294967295U;
static uint8_t g_34[6][2] = {{0x40,0x40},{0x40,0x40},{0x40,0x40},{0x40,0x40},{0x40,0x40},{0x40,0x40}};



static const int32_t  func_30(void);





static const int32_t  func_30(void)
{ 
    uint32_t l_33 = 0xA28C7FFF;
    g_34[4][1] = (safe_sub_func_float_f_f(g_7, __builtin_clzll(l_33)));
    return g_7;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_30();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



