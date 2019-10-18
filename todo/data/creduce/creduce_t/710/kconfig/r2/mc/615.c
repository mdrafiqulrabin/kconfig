


#define NO_LONGLONG



static long __undefined;



static int32_t g_23 = 0xE39F3FAA;
static uint8_t g_51 = 0x37;



static int32_t  func_31(void);
static int16_t  func_39(float  p_40, int16_t  p_41, const uint32_t  p_42);





static int32_t  func_31(void)
{ 
    const int32_t l_34 = 0xF5452FA8;
    int32_t l_35[9][7][1] = {{{6},{1},{0x031EA062},{7},{0xC3F30B91},{(-7)},{0xC3F30B91}},{{7},{0x031EA062},{1},{6},{1},{0x031EA062},{7}},{{0xC3F30B91},{(-7)},{0xC3F30B91},{7},{0x031EA062},{1},{6}},{{1},{0x031EA062},{7},{0xC3F30B91},{(-7)},{0xC3F30B91},{7}},{{0x031EA062},{1},{6},{1},{0x031EA062},{7},{0xC3F30B91}},{{(-7)},{0xC3F30B91},{7},{0x031EA062},{1},{6},{1}},{{0x031EA062},{7},{0xC3F30B91},{(-7)},{6},{(-10)},{6}},{{(-7)},{0x031EA062},{(-7)},{6},{(-10)},{6},{7}},{{6},{(-10)},{6},{(-7)},{0x031EA062},{(-7)},{6}}};
    int32_t l_38 = 0x37F4A1D2;
    int i, j, k;
    g_51 = (safe_sub_func_float_f_f((g_23 <= (((((g_23 | l_34) & (l_35[7][0][0] = g_23)) , (safe_div_func_int16_t_s_s(l_38, g_23))) <= ((l_34 , func_39(g_23, l_38, l_38)) <= l_34)) , 0x0.47A64Ap-51)), g_23));
    return g_23;
}




static int16_t  func_39(float  p_40, int16_t  p_41, const uint32_t  p_42)
{ 
    float l_47[10][2][3] = {{{(-0x9.1p+1),(-0x4.6p-1),0x1.Ep+1},{0x1.Ep+1,0xF.B4AB19p+78,0x6.65D632p-34}},{{(-0x9.1p+1),0x8.0A048Cp-18,0x1.2p+1},{(-0x9.1p+1),0x1.Dp+1,(-0x9.1p+1)}},{{0x1.Ep+1,0xF.761E7Fp+13,0x1.4p-1},{(-0x9.1p+1),(-0x2.4p+1),(-0x1.2p-1)}},{{(-0x9.1p+1),0x0.Cp-1,0xC.DC4B54p+3},{0x1.Ep+1,0x9.FB1158p+56,0x8.914501p+4}},{{(-0x9.1p+1),0x7.DFE98Dp-3,(-0x5.2p+1)},{(-0x9.1p+1),(-0x4.6p-1),0x1.Ep+1}},{{0x1.Ep+1,0xF.B4AB19p+78,0x6.65D632p-34},{(-0x9.1p+1),0x8.0A048Cp-18,0x1.2p+1}},{{(-0x9.1p+1),0x1.Dp+1,(-0x9.1p+1)},{0x1.Ep+1,0xF.761E7Fp+13,0x1.4p-1}},{{(-0x9.1p+1),(-0x2.4p+1),(-0x1.2p-1)},{(-0x9.1p+1),0x0.Cp-1,0xC.DC4B54p+3}},{{0x1.Ep+1,0x9.FB1158p+56,0x8.914501p+4},{(-0x9.1p+1),0x7.DFE98Dp-3,(-0x5.2p+1)}},{{(-0x9.1p+1),(-0x4.6p-1),0x1.Ep+1},{0x1.Ep+1,0xF.B4AB19p+78,0x6.65D632p-34}}};
    int32_t l_50[9] = {0x8C683368,0x8C683368,0x8C683368,0x8C683368,0x8C683368,0x8C683368,0x8C683368,0x8C683368,0x8C683368};
    int i, j, k;
    l_50[1] &= (g_23 | (((safe_div_func_uint16_t_u_u((0x53 > 0xB2), p_42)) != (safe_mul_func_uint16_t_u_u(g_23, g_23))) < p_41));
    return p_41;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



