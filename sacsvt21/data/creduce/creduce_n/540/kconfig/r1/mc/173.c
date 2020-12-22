


#define NO_LONGLONG



static long __undefined;



static uint16_t g_3 = 0xA604;
static uint16_t g_59 = 65532U;
static int32_t g_62 = 8;



static uint16_t  func_25(void);
static int16_t  func_50(int16_t  p_51, uint16_t  p_52, uint16_t  p_53, uint32_t  p_54);





static uint16_t  func_25(void)
{ 
    int16_t l_32 = (-5);
    uint16_t l_56 = 0xACA8;
    if ((((uint32_t)g_3 + (uint32_t)((g_3 & (g_3 != ((int32_t)((int16_t)__builtin_parity((__builtin_clzl(l_32) || (~0x1BBB))) << (int16_t)((l_32 && ((int32_t)(((int16_t)((-1) || g_3) + (int16_t)l_32) || l_32) - (int32_t)0x0813C27F)) > 65534U)) - (int32_t)g_3))) < l_32)) > (-1)))
    { 
        int32_t l_47 = (-1);
        uint32_t l_58 = 0x9098934E;
        g_59 = ((int16_t)((uint32_t)(g_3 > (((0U || (((l_32 != (-(int16_t)(g_3 < (((uint32_t)((l_47 > (((uint16_t)((((__builtin_popcount((func_50(l_32, ((~0x7108) != l_32), ((l_56 || l_32) > g_3), g_3) | g_3)) | l_47) || 0x32E8) == l_47) == l_56) % (uint16_t)l_58) | g_3)) || l_58) - (uint32_t)0x4A3A207B) | 0x3620)))) || g_3) >= 7U)) ^ 0x3958) < l_58)) - (uint32_t)l_47) << (int16_t)g_3);
    }
    else
    { 
        uint32_t l_60 = 4294967293U;
        int32_t l_61 = 0x286DF497;
        uint32_t l_65 = 0xB12ACF19;
        l_61 = func_50(l_56, l_60, l_60, l_56);
        g_62 = 0x08A84A00;
        g_62 = (1 & ((int16_t)0xD795 >> (int16_t)l_65));
    }
    return g_59;
}




static int16_t  func_50(int16_t  p_51, uint16_t  p_52, uint16_t  p_53, uint32_t  p_54)
{ 
    uint32_t l_57 = 0x456014EF;
    l_57 = 0xEB6BA8A7;
    return p_54;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_25();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



