



static long __undefined;



static uint32_t g_28 = 0UL;
static int32_t g_41 = 0x8A8FF013L;
static int32_t * const  volatile g_40 = &g_41;



inline static uint32_t  func_33(void);





inline static uint32_t  func_33(void)
{ 
    int16_t l_36 = (-1L);
    (*g_40) = (safe_mod_func_uint16_t_u_u(__builtin_clz(((l_36 <= (l_36 , (safe_mul_func_int16_t_s_s(l_36, 6L)))) , (((safe_unary_minus_func_uint8_t_u(g_28)) ^ l_36) >= (((l_36 >= ((__builtin_ffsll(((0x3FL & l_36) || l_36)) < l_36) | l_36)) , l_36) == g_28)))), l_36));
    return g_28;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_33();
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



