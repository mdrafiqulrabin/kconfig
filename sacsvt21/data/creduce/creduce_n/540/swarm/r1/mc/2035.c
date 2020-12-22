



static long __undefined;



static uint16_t g_7 = 0x9C17L;
static int32_t g_42 = 0x4886255DL;
static uint16_t g_44 = 65528UL;
static uint32_t g_49 = 4294967290UL;
static int64_t g_50 = (-2L);



static int32_t  func_26(void);
inline static int32_t  func_39(uint32_t  p_40);





static int32_t  func_26(void)
{ 
    uint16_t l_27 = 0x15D0L;
    int32_t *l_41 = &g_42;
    uint16_t *l_43 = &g_44;
    uint32_t *l_48 = &g_49;
    float l_53 = (-0x6.Ep+1);
    (*l_41) = ((l_27 || 0UL) == ((l_27 | ((uint16_t)((uint16_t)(4294967293UL ^ ((*l_48) = (((int16_t)(-1L) >> (int16_t)(+((uint16_t)(((int64_t)g_7 % (int64_t)g_7) < func_39((g_7 >= ((*l_43) &= (((*l_41) = (1UL || l_27)) < g_7))))) >> (uint16_t)g_7))) == g_7))) + (uint16_t)g_7) << (uint16_t)g_7)) > l_27));
    g_50 |= (*l_41);
    for (g_44 = 0; (g_44 > 41); g_44 += 9)
    { 
        (*l_41) = func_39(g_50);
        return g_7;
    }
    (*l_41) |= 0x435E45DBL;
    return g_50;
}




inline static int32_t  func_39(uint32_t  p_40)
{ 
    int32_t *l_45 = &g_42;
    int32_t **l_46 = (void*)0;
    int32_t **l_47 = &l_45;
    (*l_47) = l_45;
    return g_44;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



