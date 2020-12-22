


#define NO_LONGLONG



static long __undefined;



static int32_t g_9 = (-4);
static uint32_t g_39 = 6U;
static uint16_t g_67 = 9U;



static int32_t  func_29(void);
static int32_t  func_34(uint32_t  p_35, uint32_t  p_36, int32_t  p_37, uint32_t  p_38);
static uint16_t  func_46(uint16_t  p_47, int32_t  p_48, uint32_t  p_49);





static int32_t  func_29(void)
{ 
    uint32_t l_30 = 0x4EF66B17;
    int16_t l_31 = 0x0D68;
    int32_t l_40 = 1;
    int32_t l_41 = 0x31966C47;
    uint16_t l_50 = 0x3EA3;
    int32_t l_56 = 0;
    uint32_t l_60 = 0U;
    l_31 ^= ((l_30 ^= g_9) & 0U);
    g_67 = ((int16_t)(func_34(((((g_39 &= l_31) <= ((l_40 = g_9) > l_41)) & ((((((uint32_t)0xEAF6082F + (uint32_t)(((uint16_t)65535U >> (uint16_t)func_46(l_50, ((((uint16_t)((!((((0x553A81F6 ^ ((uint16_t)(((l_56 = ((l_30 >= l_41) , g_9)) >= g_9) == (-6)) + (uint16_t)g_9)) > l_50) | l_50) == 0xC2391700)) >= g_9) << (uint16_t)10) || g_9) == g_9), l_31)) && l_56)) & g_9) != l_31) , l_41) <= g_9)) && g_39), g_9, l_30, l_60) , l_31) << (int16_t)g_9);
    return l_31;
}




static int32_t  func_34(uint32_t  p_35, uint32_t  p_36, int32_t  p_37, uint32_t  p_38)
{ 
    uint32_t l_65 = 2U;
    int32_t l_66 = 0;
    l_66 = ((uint16_t)((int16_t)(l_65 < l_65) << (int16_t)15) % (uint16_t)g_9);
    return l_66;
}




static uint16_t  func_46(uint16_t  p_47, int32_t  p_48, uint32_t  p_49)
{ 
    int32_t l_59 = 0x61CA7276;
    for (p_49 = 7; (p_49 > 19); p_49 += 1)
    { 
        return g_9;
    }
    return l_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_29();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



