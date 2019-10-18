



static long __undefined;



static int16_t g_4 = 0xFDA7L;
static uint16_t g_27 = 1UL;
static int16_t g_41 = (-2L);
static uint16_t g_43 = 0x3E1BL;
static uint32_t g_47 = 0UL;
static int16_t g_48 = 3L;



static int32_t  func_26(void);
static uint16_t  func_39(float  p_40);





static int32_t  func_26(void)
{ 
    int32_t l_42 = 0x5243B9C3L;
    int32_t l_45 = 6L;
    g_27 = 0xAF8716B5L;
    g_48 = ((uint16_t)(g_27 = (~(((uint32_t)((uint16_t)(((0xD732ADAAL | ((int16_t)((uint16_t)func_39((l_42 = (g_41 = g_27))) << (uint16_t)10) + (int16_t)l_45)) , l_42) , (-(uint16_t)(g_27 ^ g_27))) >> (uint16_t)10) - (uint32_t)(g_47 = l_45)) ^ __builtin_popcountll(g_27)))) << (uint16_t)g_4);
    return g_47;
}




static uint16_t  func_39(float  p_40)
{ 
    int32_t l_44 = (-1L);
    g_43 = (-4L);
    return l_44;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



