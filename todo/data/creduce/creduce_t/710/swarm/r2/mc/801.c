



static long __undefined;



static uint32_t g_3 = 18446744073709551614UL;
static int32_t g_45 = 1L;



static int32_t  func_29(void);
static uint64_t  func_41(uint32_t  p_42);





static int32_t  func_29(void)
{ 
    int16_t l_36 = 0x7F05L;
    uint32_t l_43 = 0x8642E5F0L;
    int32_t *l_44 = &g_45;
    (*l_44) = ((int32_t)((int32_t)((int32_t)0x7609FA85L % (int32_t)__builtin_clzll(((l_36 < g_3) == (((((uint16_t)g_3 >> (uint16_t)((uint16_t)(((((g_3 < ((g_3 != ((l_36 && ((func_41(l_36) < l_36) > g_3)) & g_3)) > g_3)) & l_43) <= l_43) == l_36) , 0UL) << (uint16_t)5)) != l_43) , l_43) , l_36)))) - (int32_t)l_36) + (int32_t)0xE74BB9CEL);
    return (*l_44);
}




static uint64_t  func_41(uint32_t  p_42)
{ 
    return g_3;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_29();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



