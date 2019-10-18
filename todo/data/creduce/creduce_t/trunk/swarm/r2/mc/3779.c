



static long __undefined;



static uint16_t g_5 = 0xBEB0L;
static uint32_t g_38[8] = {0x49744027L,0x49744027L,0x49744027L,0x49744027L,0x49744027L,0x49744027L,0x49744027L,0x49744027L};



static float  func_26(void);





static float  func_26(void)
{ 
    int16_t l_29 = 0x32F3L;
    int64_t l_30 = 1L;
    uint32_t l_37[3];
    int32_t l_39 = 0x58ED0BD2L;
    int i;
    for (i = 0; i < 3; i++)
        l_37[i] = 4294967295UL;
    l_39 = ((float)((l_29 <= (l_30 == ((g_5 == (g_38[4] = ((float)(__builtin_ffsll((__builtin_parityl(((int16_t)((uint16_t)g_5 * (uint16_t)g_5) * (int16_t)__builtin_ffs(l_37[2]))) > __builtin_ffsl(l_37[2]))) >= l_37[1]) - (float)g_5))) <= 0xE.AF9031p-58))) <= 0x3.A7C6DDp+80) * (float)l_30);
    return g_38[5];
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



