


#define NO_LONGLONG



static long __undefined;



static uint16_t g_8 = 8U;
static int32_t g_48 = (-1);
static int32_t * volatile g_47 = &g_48;



inline static uint16_t  func_30(void);
static int32_t  func_40(uint8_t  p_41, int16_t  p_42, uint32_t  p_43, uint16_t  p_44);





inline static uint16_t  func_30(void)
{ 
    const uint8_t l_39 = 0U;
    int16_t l_46 = 0xC477;
    (*g_47) = ((uint16_t)((uint16_t)((int32_t)g_8 - (int32_t)((l_39 && func_40(l_39, l_39, g_8, ((__builtin_parityl(g_8) ^ (-1)) | (g_8 < 0)))) == 0)) + (uint16_t)g_8) << (uint16_t)l_46);
    return g_48;
}




static int32_t  func_40(uint8_t  p_41, int16_t  p_42, uint32_t  p_43, uint16_t  p_44)
{ 
    uint32_t l_45 = 0xD02268F6;
    return l_45;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_30();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



