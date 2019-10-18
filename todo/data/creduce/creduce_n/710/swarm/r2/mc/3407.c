



static long __undefined;



static int32_t g_3[10][9] = {{0x1CB4E76AL,0xE5A9864BL,0xEDFA831EL,7L,0xEDFA831EL,0xE5A9864BL,0x1CB4E76AL,0x8F5F4990L,0x462D5E48L},{5L,0x69F30CC2L,(-4L),0x8B35EDADL,(-7L),0xBC370782L,(-7L),0x8B35EDADL,(-4L)},{7L,7L,0x5052061FL,(-5L),0x462D5E48L,5L,0xE5A9864BL,0x8F5F4990L,0xE5A9864BL},{(-4L),0xC405B401L,0x69F30CC2L,0x69F30CC2L,0xC405B401L,(-4L),(-1L),0xBAC04EE7L,3L},{0x8F5F4990L,0xE6E7F737L,0x5052061FL,0xDCBA86BAL,0x1CB4E76AL,0x1CB4E76AL,0xDCBA86BAL,0x5052061FL,0xE6E7F737L},{0xC405B401L,0x9A971867L,1L,0x69F30CC2L,0xBAC04EE7L,0xAC12265EL,0x8B35EDADL,0x8B35EDADL,0xAC12265EL},{5L,0xE5A9864BL,0x8F5F4990L,0xE5A9864BL,5L,0x462D5E48L,(-5L),0x5052061FL,7L},{(-1L),0x9A971867L,0x69F30CC2L,0xBC370782L,5L,0xBC370782L,0x69F30CC2L,0x9A971867L,(-1L)},{0xE6E7F737L,0x83C8FC55L,0xEDFA831EL,5L,0x5052061FL,0x462D5E48L,0xDCBA86BAL,0x462D5E48L,0x5052061FL},{(-4L),3L,3L,(-4L),0xBC370782L,0xAC12265EL,(-7L),1L,0xBAC04EE7L}};
static int32_t g_31 = 0x5E948ECAL;
static uint32_t g_53 = 18446744073709551613UL;



inline static uint32_t  func_30(void);
inline static int16_t  func_36(int16_t  p_37, int32_t  p_38, uint32_t  p_39, uint32_t  p_40, int32_t  p_41);
inline static uint32_t  func_50(uint32_t  p_51);





inline static uint32_t  func_30(void)
{ 
    uint32_t l_42[3];
    uint32_t l_43 = 1UL;
    int i;
    for (i = 0; i < 3; i = i + 1)
        l_42[i] = 18446744073709551615UL;
    g_31 = g_3[8][4];
    g_53 = (safe_mul_func_uint16_t_u_u(((((g_3[0][3] & ((((((safe_sub_func_int16_t_s_s(func_36(l_42[0], l_43, (0x90D92204L == (((l_42[2] & ((l_43 && (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_43, ((((safe_mul_func_int16_t_s_s(((l_42[0] && func_50((l_42[1] < (-2L)))) < l_43), g_3[5][7])) , (-1L)) <= l_42[1]) ^ 0x228CL))) , l_42[2]), 8))) | 0xC8A300FFL)) , 0xE6ACL) == l_42[2])), l_43, l_42[0]), g_3[0][3])) , g_3[0][3]) < (-6L)) <= g_3[7][8]) != l_42[0]) || g_31)) , 7UL) > 2UL) & l_43), 0UL));
    for (g_53 = 0; g_53 < 10; g_53 += 1)
    {
        for (l_43 = 0; l_43 < 9; l_43 += 1)
        {
            g_3[g_53][l_43] = 2L;
        }
    }
    return l_42[0];
}




inline static int16_t  func_36(int16_t  p_37, int32_t  p_38, uint32_t  p_39, uint32_t  p_40, int32_t  p_41)
{ 
    int32_t l_52 = 0L;
    return l_52;
}




inline static uint32_t  func_50(uint32_t  p_51)
{ 
    g_31 = __builtin_clzl(p_51);
    return g_3[0][3];
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_30();
    for (i = 0; i < 10; i = i + 1)
    {
        for (j = 0; j < 9; j = j + 1)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



