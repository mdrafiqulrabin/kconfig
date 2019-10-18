


#define NO_LONGLONG



static long __undefined;


union U1 {
   uint32_t  f0;
};


static uint32_t g_3 = 4294967292U;
static int32_t g_45 = 0;
static uint32_t g_46 = 5U;



static int32_t  func_28(void);
static int32_t  func_29(uint16_t  p_30, uint32_t  p_31, uint32_t  p_32, uint32_t  p_33, union U1  p_34);





static int32_t  func_28(void)
{ 
    int32_t l_35 = (-1);
    int32_t l_36 = (-1);
    int32_t l_37 = (-1);
    int32_t l_44 = 0xC0DE450B;
    union U1 l_47 = {0x3A60813C};
    if (func_29(l_35, (l_37 = l_36), l_35, (g_46 &= ((int16_t)((int16_t)(g_3 , l_36) << (int16_t)l_36) + (int16_t)((int16_t)(-9) - (int16_t)__builtin_clzl((g_45 = (l_44 = 0xB996A530)))))), l_47))
    { 
        uint32_t l_51 = 0x7A14A9C7;
        return l_51;
    }
    else
    { 
        return l_47.f0;
    }
}




static int32_t  func_29(uint16_t  p_30, uint32_t  p_31, uint32_t  p_32, uint32_t  p_33, union U1  p_34)
{ 
    uint32_t l_49 = 0x83800955;
    int32_t l_50 = 0x26B5CFDA;
    l_49 = (~g_45);
    l_50 = (g_3 == p_31);
    l_50 &= 0x3A4C6382;
    return p_32;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



