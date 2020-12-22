



static long __undefined;



static uint32_t g_4 = 0xC93B4E1AL;
static int8_t g_40 = 4L;
static uint16_t g_45 = 0x4886L;
static int32_t g_46 = (-6L);
static int32_t g_55 = 0xEFC16765L;
static int16_t g_61 = (-8L);
static int16_t g_64 = (-6L);



static int8_t  func_28(void);
static int32_t  func_29(int8_t  p_30, int32_t  p_31);





static int8_t  func_28(void)
{ 
    uint32_t l_32 = 4294967295UL;
    g_46 = func_29(l_32, l_32);
    for (g_45 = 0; (g_45 != 12); g_45 = safe_add_func_uint16_t_u_u(g_45, 6))
    { 
        int32_t l_65 = 0x802EEDA7L;
        g_64 = (safe_sub_func_float_f_f(((safe_add_func_float_f_f(0x0.Dp-1, (safe_add_func_float_f_f((((g_55 = g_40) < l_32) > g_46), (((((!((safe_add_func_int64_t_s_s(l_32, (((safe_rshift_func_int16_t_s_u((g_61 = ((-9L) == 0x25CF162CL)), (safe_add_func_int64_t_s_s((((l_32 < l_32) || g_45) && l_32), 0xD9236F914A126529LL)))) < g_46) , g_4))) > 0xB4D633C66883CE71LL)) || 65530UL) <= 0xA59E478DL) , 0x7.562184p-97) > 0x2.F51021p+27))))) <= g_4), l_32));
        l_65 = g_64;
    }
    return g_45;
}




static int32_t  func_29(int8_t  p_30, int32_t  p_31)
{ 
    int8_t l_33 = (-1L);
    g_45 = ((0UL != (l_33 = g_4)) , (((safe_add_func_float_f_f(((safe_mul_func_float_f_f((safe_div_func_float_f_f(l_33, (g_40 = l_33))), (safe_sub_func_float_f_f(0x1.55EBDAp+2, l_33)))) < l_33), (safe_add_func_float_f_f(l_33, l_33)))) > g_4) == l_33));
    return g_4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



