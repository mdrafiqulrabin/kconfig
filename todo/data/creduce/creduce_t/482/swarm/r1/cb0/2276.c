



static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
};





static int8_t  func_28(void);
static int16_t  func_34(int8_t  p_35);
static int8_t  func_36(uint16_t  p_37, int32_t  p_38, uint32_t  p_39);
static int32_t  func_57(int8_t  p_58, uint32_t  p_59, uint16_t  p_60);
static uint16_t  func_63(struct S0  p_64, uint16_t  p_65, int8_t  p_66);
static struct S0  func_67(uint32_t  p_68, int32_t  p_69, uint32_t  p_70, uint32_t  p_71);
static int16_t  func_77(int32_t  p_78, int8_t  p_79, uint32_t  p_80);
static int32_t  func_81(uint32_t  p_82, uint32_t  p_83, uint16_t  p_84, int8_t  p_85);
static int16_t  func_92(struct S0  p_93);
static int32_t  func_94(uint32_t  p_95, float  p_96, int16_t  p_97);





static int8_t  func_28(void)
{ 
    uint32_t l_40 = 0UL;
    int32_t l_72 = 0x280563ADL;
    uint32_t l_520 = 0UL;
    uint32_t l_677[9][8][3] = {{{0xA8DEC3E7L,0x6333A572L,0x26E0E5A1L},{0xC4909D22L,0x6F4B2CBBL,0x6F4B2CBBL},{0xA8DEC3E7L,0x47020AB7L,0x7DC27522L},{0xD6A50E4DL,0xDDEC1613L,6UL},{0UL,0x7DC27522L,0xA8DEC3E7L},{0x9CCB45F2L,0UL,0xF63483B9L},{0x7DC27522L,0x7DC27522L,0xBD113D3CL},{2UL,0xDDEC1613L,0UL}},{{0x6333A572L,0x47020AB7L,18446744073709551608UL},{6UL,0x6F4B2CBBL,0xDDEC1613L},{18446744073709551608UL,0x6333A572L,18446744073709551608UL},{0x5A414D3CL,0UL,0UL},{0UL,18446744073709551615UL,0xBD113D3CL},{0x6F4B2CBBL,2UL,0xF63483B9L},{0x2C0F2089L,0xA8DEC3E7L,0xA8DEC3E7L},{0x6F4B2CBBL,0UL,0UL}},{{18446744073709551608UL,0xA8DEC3E7L,0xBD113D3CL},{0UL,0UL,0xC4909D22L},{0x2FBA7ADAL,0x6333A572L,0UL},{0UL,0UL,2UL},{0UL,0xA8DEC3E7L,0x26E0E5A1L},{0x5A414D3CL,0UL,0xDDEC1613L},{0xBD113D3CL,0x2C0F2089L,0xA8DEC3E7L},{0xDDEC1613L,0x5A414D3CL,0xDDEC1613L}},{{18446744073709551615UL,0x47020AB7L,0x26E0E5A1L},{0x9CCB45F2L,0x86028B1FL,2UL},{0x2C0F2089L,0UL,0UL},{6UL,0xC4909D22L,0xC4909D22L},{0x2C0F2089L,18446744073709551608UL,0xBD113D3CL},{0x9CCB45F2L,0x6F4B2CBBL,0UL},{18446744073709551615UL,0xBD113D3CL,0x2C0F2089L},{0xDDEC1613L,2UL,0xD6A50E4DL}},{{0xBD113D3CL,0xBD113D3CL,0x6333A572L},{0x5A414D3CL,0x6F4B2CBBL,0xF63483B9L},{0UL,18446744073709551608UL,0x2FBA7ADAL},{0UL,0xC4909D22L,0x6F4B2CBBL},{0x2FBA7ADAL,0UL,0x2FBA7ADAL},{0UL,0x86028B1FL,0xF63483B9L},{18446744073709551608UL,0x47020AB7L,0x6333A572L},{0xC4909D22L,0x5A414D3CL,0xD6A50E4DL}},{{0x7DC27522L,0x2C0F2089L,0x2C0F2089L},{0xC4909D22L,0UL,0UL},{18446744073709551608UL,0xA8DEC3E7L,0xBD113D3CL},{0UL,0UL,0xC4909D22L},{0x2FBA7ADAL,0x6333A572L,0UL},{0UL,0UL,2UL},{0UL,0xA8DEC3E7L,0x26E0E5A1L},{0x5A414D3CL,0UL,0xDDEC1613L}},{{0xBD113D3CL,0x2C0F2089L,0xA8DEC3E7L},{0xDDEC1613L,0x5A414D3CL,0xDDEC1613L},{18446744073709551615UL,0x47020AB7L,0x26E0E5A1L},{0x9CCB45F2L,0x86028B1FL,2UL},{0x2C0F2089L,0UL,0UL},{6UL,0xC4909D22L,0xC4909D22L},{0x2C0F2089L,18446744073709551608UL,0xBD113D3CL},{0x9CCB45F2L,0x6F4B2CBBL,0UL}},{{18446744073709551615UL,0xBD113D3CL,0x2C0F2089L},{0xDDEC1613L,2UL,0xD6A50E4DL},{0xBD113D3CL,0xBD113D3CL,0x6333A572L},{0x5A414D3CL,0x6F4B2CBBL,0xF63483B9L},{0UL,18446744073709551608UL,0x2FBA7ADAL},{0UL,0xC4909D22L,0x6F4B2CBBL},{0x2FBA7ADAL,0UL,0x2FBA7ADAL},{0UL,0x86028B1FL,0xF63483B9L}},{{18446744073709551608UL,0x47020AB7L,0x6333A572L},{0xC4909D22L,0x5A414D3CL,0xD6A50E4DL},{0x7DC27522L,0x2C0F2089L,0x2C0F2089L},{0xC4909D22L,0UL,0UL},{18446744073709551608UL,0xA8DEC3E7L,0xBD113D3CL},{0UL,0UL,0xC4909D22L},{0x2FBA7ADAL,0x6333A572L,0UL},{0UL,0UL,2UL}}};
    uint16_t l_1257 = 65534UL;
    float l_1269 = 0xE.F04E94p+17;
    int16_t l_1276 = (-6L);
    int32_t l_1292 = 1L;
    uint16_t l_1312 = 0x3A7BL;
    int8_t l_1373 = 0xB4L;
    struct S0 l_1374 = {0x687F30CAL,0x118BC02CL};
    uint32_t l_1418 = 4294967295UL;
    uint16_t l_1434 = 0x78C0L;
    int32_t l_1447 = 0x053E5972L;
    int16_t l_1467[4][7] = {{0xE472L,(-1L),(-1L),0xE472L,0xE472L,(-1L),(-1L)},{(-4L),4L,(-4L),4L,(-4L),4L,(-4L)},{0xE472L,0xE472L,(-1L),(-1L),0xE472L,0xE472L,(-1L)},{0x1C1BL,4L,0x1C1BL,4L,0x1C1BL,4L,0x1C1BL}};
    int32_t l_1492 = 0x869C0754L;
    int32_t l_1503[3][7][9] = {{{1L,(-1L),0x50A0B6D8L,0xACBC008CL,8L,1L,0xF82C7026L,0x68A4A299L,0x374F75CDL},{3L,3L,0x18848A30L,0x87BC3566L,0xB6ED948EL,(-5L),8L,5L,0xBE0C4206L},{4L,0x00C7F618L,3L,3L,1L,0xD7079D54L,0L,1L,0xACBC008CL},{4L,0x5BEA4FBAL,(-1L),0xD7079D54L,0xA59A61B3L,0xF82C7026L,1L,0x87BC3566L,1L},{3L,5L,3L,(-1L),0xF3284850L,0xBE0C4206L,(-3L),0xBE0C4206L,0xF3284850L},{1L,1L,1L,1L,0xED56D4D8L,0xC8D1290BL,(-3L),0x84893C51L,5L},{0x0F3DE5C4L,8L,0xE181FE94L,0x6BF646FFL,0xEF1DBEA6L,0x87BC3566L,3L,0x50A0B6D8L,1L}},{{0xEF1DBEA6L,(-3L),0x357C519FL,0xB6ED948EL,0xED56D4D8L,0x84893C51L,0x04415C83L,0x526E5312L,4L},{0x10968349L,(-1L),0x0F3DE5C4L,0L,0xF3284850L,0xB71004BCL,0xBE0C4206L,0xB6ED948EL,0x5BEA4FBAL},{0x27B3A058L,(-1L),8L,0xED56D4D8L,0xA59A61B3L,(-3L),0L,0x234797E3L,0x526E5312L},{8L,0xE25B8957L,0x04415C83L,0x0F3DE5C4L,1L,0L,4L,0xDE24D31CL,0x526E5312L},{0xE181FE94L,0xB2913DC0L,0xC8D1290BL,8L,0xB6ED948EL,0xCCFC00ABL,0x357C519FL,(-7L),0x5BEA4FBAL},{8L,0L,(-1L),4L,8L,0x374F75CDL,0x374F75CDL,8L,4L},{(-5L),1L,(-5L),(-7L),3L,0x27B3A058L,(-1L),0xD7079D54L,1L}},{{(-1L),0xEF1DBEA6L,0xE25B8957L,0x5BEA4FBAL,0x374F75CDL,3L,1L,(-3L),5L},{5L,0x6BF646FFL,0L,(-7L),0x10968349L,(-1L),0x0F3DE5C4L,0L,0xF3284850L},{0x84893C51L,0x04415C83L,0x526E5312L,4L,(-1L),0xDFCEDCCAL,(-1L),0L,1L},{(-7L),0x29744A37L,0xB2913DC0L,8L,0xDFCEDCCAL,1L,0xB6ED948EL,0x20BC4F0CL,0xACBC008CL},{0x234797E3L,0xACBC008CL,0xB6ED948EL,0x0F3DE5C4L,0xE25B8957L,0x29744A37L,0xA59A61B3L,0x20BC4F0CL,0xBE0C4206L},{0xB71004BCL,0x234797E3L,(-3L),0xED56D4D8L,0x49240A4BL,0xB6ED948EL,0x815CD7BEL,0L,0x374F75CDL},{0xE25B8957L,1L,0xDE12C38BL,0xF3284850L,0xBE0C4206L,(-3L),0xBE0C4206L,0xF3284850L,(-1L)}}};
    struct S0 l_1511[3][3][8] = {{{{1UL,0L},{1UL,0x32E0B4FCL},{1UL,0L},{0xC1DF23CDL,0xF795EFD0L},{18446744073709551615UL,-9L},{0xEE768ADFL,-5L},{18446744073709551615UL,-10L},{0x53A6B346L,0L}},{{0xE304FF30L,-8L},{18446744073709551615UL,-9L},{1UL,0x847C2D61L},{0xEE768ADFL,-5L},{0xEE768ADFL,-5L},{1UL,0x847C2D61L},{18446744073709551615UL,-9L},{0xE304FF30L,-8L}},{{0xE304FF30L,-8L},{0xC1DF23CDL,0xF795EFD0L},{0xD4FBE157L,0x3F879DD7L},{1UL,0L},{18446744073709551615UL,-9L},{18446744073709551613UL,1L},{1UL,0x847C2D61L},{18446744073709551613UL,1L}}},{{{1UL,0L},{18446744073709551615UL,-7L},{0x53A6B346L,0L},{18446744073709551615UL,-7L},{1UL,0L},{18446744073709551613UL,1L},{1UL,0x32E0B4FCL},{18446744073709551615UL,-9L}},{{18446744073709551615UL,-10L},{0xC1DF23CDL,0xF795EFD0L},{18446744073709551615UL,-7L},{0x66407A60L,0x41983A76L},{1UL,0x847C2D61L},{1UL,0x847C2D61L},{0x66407A60L,0x41983A76L},{18446744073709551615UL,-7L}},{{18446744073709551615UL,-9L},{18446744073709551615UL,-9L},{18446744073709551615UL,-7L},{0xE304FF30L,-8L},{0xD4FBE157L,0x3F879DD7L},{0xEE768ADFL,-5L},{1UL,0x32E0B4FCL},{18446744073709551615UL,-10L}}},{{{1UL,0x847C2D61L},{1UL,0x32E0B4FCL},{0x53A6B346L,0L},{18446744073709551615UL,-9L},{0x53A6B346L,0L},{1UL,0x32E0B4FCL},{1UL,0x847C2D61L},{18446744073709551615UL,-10L}},{{1UL,0x32E0B4FCL},{0xEE768ADFL,-5L},{0xD4FBE157L,0x3F879DD7L},{0xE304FF30L,-8L},{18446744073709551615UL,-7L},{18446744073709551615UL,-9L},{18446744073709551615UL,-9L},{18446744073709551615UL,-7L}},{{0x66407A60L,0x41983A76L},{1UL,0x847C2D61L},{1UL,0x847C2D61L},{0x66407A60L,0x41983A76L},{18446744073709551615UL,-7L},{0xC1DF23CDL,0xF795EFD0L},{18446744073709551615UL,-10L},{18446744073709551615UL,-9L}}}};
    int16_t l_1537 = 0x59A7L;
    int i, j, k;
    l_72 = ((((safe_sub_func_int32_t_s_s((~((safe_mul_func_int16_t_s_s(func_34(func_36((l_40 == (l_40 < ((-8L) || (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((1L || (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_40, 8)), (safe_add_func_int32_t_s_s(l_40, 0x7F039D3CL)))), ((safe_add_func_int32_t_s_s(func_57((safe_mul_func_uint16_t_u_u(func_63(func_67(l_72, l_40, l_40, l_40), l_40, l_72), l_520)), l_72, l_40), 0xC9810007L)) & l_677[2][5][2])))), l_40)), l_677[3][2][0])), l_677[8][3][2]))))), l_520, l_677[2][5][2])), l_520)) < l_72)), l_677[0][5][0])) != l_677[4][6][2]) ^ l_520) && l_72);
    l_72 = (__builtin_bswap32(((__builtin_ctzl(__builtin_ffsl(__builtin_bswap32(l_677[7][7][0]))) <= ((0x2DA20552L != l_520) || l_1257)) == ((+l_520) >= (safe_rshift_func_uint16_t_u_s((__builtin_popcountll(l_1257) < l_1257), l_1257))))) ^ l_40);
    if ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(l_40, ((safe_sub_func_int16_t_s_s(__builtin_popcountl(l_520), ((l_677[2][5][2] <= (l_1257 && l_520)) >= (l_677[4][0][0] != (l_677[1][6][2] >= 0x64749FB4L))))) & l_1257))) ^ l_72) > l_72), l_72)), 1UL)))
    { 
        uint32_t l_1270 = 9UL;
        int32_t l_1277[3];
        int i;
        for (i = 0; i < 3; i = i + 1)
            l_1277[i] = 1L;
        l_1270 &= l_72;
        l_1277[0] = (safe_mul_func_int16_t_s_s(l_72, ((safe_lshift_func_int16_t_s_u(l_520, (+(0x93E5E2A6L < ((l_1276 && l_677[5][3][2]) <= l_40))))) >= l_40)));
    }
    else
    { 
        float l_1284 = 0x3.504497p+62;
        int32_t l_1285 = 0x65917E76L;
        for (l_1257 = 0; (l_1257 != 20); l_1257 = safe_add_func_int16_t_s_s(l_1257, 4))
        { 
            uint32_t l_1291 = 0xC8EA6B9AL;
            l_1285 = (l_72 > (((0xC.1E2023p+81 == ((safe_mul_func_float_f_f(((safe_mul_func_float_f_f((l_1284 == (l_1285 == (safe_sub_func_float_f_f((+((safe_mul_func_float_f_f(l_1285, ((func_94(l_1291, l_1285, l_1285) >= l_1291) == 0x0.8p+1))) >= (-0x10.Fp+1))), 0x8.5600BDp-4)))), 0x9.F2ACA7p-23)) < l_1285), 0x7.078E43p+61)) >= l_1291)) >= 0x1.5p+1) > 0x2.172A3Dp+2));
        }
    }
    for (l_40 = 0; (l_40 <= 2); l_40 += 1)
    { 
        int16_t l_1297 = 0L;
        int16_t l_1335 = 0x4F4DL;
        int32_t l_1338 = 0x44F1F50CL;
        uint32_t l_1339[10][10][2] = {{{0UL,0UL},{1UL,0UL},{0UL,0x99E0606BL},{0x124855BEL,0UL},{1UL,0x124855BEL},{0UL,0x99E0606BL},{0UL,0x124855BEL},{1UL,0UL},{0x124855BEL,0x99E0606BL},{0UL,0UL}},{{1UL,0UL},{0UL,0x99E0606BL},{0x124855BEL,0UL},{1UL,0x124855BEL},{0UL,0x99E0606BL},{0UL,0x124855BEL},{1UL,0UL},{0x124855BEL,0x99E0606BL},{0UL,0UL},{1UL,0UL}},{{0UL,0x99E0606BL},{0x124855BEL,0UL},{1UL,0x124855BEL},{0UL,0x99E0606BL},{0UL,0x124855BEL},{1UL,0UL},{0x124855BEL,0x99E0606BL},{0UL,0UL},{1UL,0UL},{0UL,0x99E0606BL}},{{0x124855BEL,0UL},{1UL,0x124855BEL},{0UL,0x99E0606BL},{0UL,0x124855BEL},{1UL,0UL},{0x124855BEL,0x99E0606BL},{0UL,0UL},{1UL,0UL},{0UL,0x99E0606BL},{0x124855BEL,0UL}},{{1UL,0x124855BEL},{0UL,0x99E0606BL},{0UL,0x124855BEL},{1UL,0UL},{0x124855BEL,0x99E0606BL},{0UL,0UL},{1UL,0UL},{0UL,0x99E0606BL},{0x124855BEL,0UL},{1UL,0x124855BEL}},{{0UL,0x99E0606BL},{0UL,0x124855BEL},{1UL,0UL},{0x124855BEL,0x99E0606BL},{0UL,0UL},{1UL,0UL},{0UL,0UL},{0x99E0606BL,0xA7B516DCL},{1UL,0x99E0606BL},{0xA7B516DCL,0UL}},{{0xA7B516DCL,0x99E0606BL},{1UL,0xA7B516DCL},{0x99E0606BL,0UL},{1UL,1UL},{1UL,1UL},{1UL,0UL},{0x99E0606BL,0xA7B516DCL},{1UL,0x99E0606BL},{0xA7B516DCL,0UL},{0xA7B516DCL,0x99E0606BL}},{{1UL,0xA7B516DCL},{0x99E0606BL,0UL},{1UL,1UL},{1UL,1UL},{1UL,0UL},{0x99E0606BL,0xA7B516DCL},{1UL,0x99E0606BL},{0xA7B516DCL,0UL},{0xA7B516DCL,0x99E0606BL},{1UL,0xA7B516DCL}},{{0x99E0606BL,0UL},{1UL,1UL},{1UL,1UL},{1UL,0UL},{0x99E0606BL,0xA7B516DCL},{1UL,0x99E0606BL},{0xA7B516DCL,0UL},{0xA7B516DCL,0x99E0606BL},{1UL,0xA7B516DCL},{0x99E0606BL,0UL}},{{1UL,1UL},{1UL,1UL},{1UL,0UL},{0x99E0606BL,0xA7B516DCL},{1UL,0x99E0606BL},{0xA7B516DCL,0UL},{0xA7B516DCL,0x99E0606BL},{1UL,0xA7B516DCL},{0x99E0606BL,0UL},{1UL,1UL}}};
        int8_t l_1371 = 0xD2L;
        int32_t l_1417 = (-8L);
        int32_t l_1469 = (-8L);
        int32_t l_1495[10] = {(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L)};
        int8_t l_1534 = 0xA2L;
        float l_1540 = 0x3.404C44p-45;
        struct S0 l_1550 = {18446744073709551611UL,0x1DECC5F5L};
        int8_t l_1593[7][1][10] = {{{(-9L),(-9L),0x70L,(-9L),(-9L),0x70L,(-9L),(-9L),0x70L,(-9L)}},{{(-9L),0L,0L,(-9L),0L,0L,(-9L),0L,0L,(-9L)}},{{0L,(-9L),0L,0L,(-9L),0L,0L,(-9L),0L,0L}},{{(-9L),(-9L),0x70L,(-9L),(-9L),0x70L,(-9L),(-9L),0x70L,(-9L)}},{{(-9L),0L,0L,(-9L),0L,0L,(-9L),0L,0L,(-9L)}},{{0L,(-9L),0L,0L,(-9L),0L,0L,(-9L),0L,0L}},{{(-9L),(-9L),0x70L,(-9L),(-9L),0x70L,(-9L),(-9L),0x70L,(-9L)}}};
        int32_t l_1623 = 0x439B68C5L;
        int i, j, k;
        l_1292 &= (l_1276 || 65532UL);
        if ((0xE671L & ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_1297, ((safe_mod_func_uint16_t_u_u(l_1297, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((0x6B67AD0FL & (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((-1L) == 0x2CD5L), func_94(l_1297, l_1297, (((safe_sub_func_int32_t_s_s(((((safe_mul_func_uint16_t_u_u(l_1297, l_1297)) | l_1297) > l_1297) < l_1257), l_40)) > 8L) != l_677[4][4][1])))), 8))), 1L)), l_677[3][0][2])))) | l_1312))), l_1297)) == l_677[2][5][2])))
        { 
            uint32_t l_1313[8] = {2UL,0x9D95874DL,2UL,0x9D95874DL,2UL,0x9D95874DL,2UL,0x9D95874DL};
            int32_t l_1336[3];
            uint32_t l_1344 = 0xA79D254BL;
            struct S0 l_1372 = {4UL,-1L};
            uint32_t l_1414 = 0x4D5CA232L;
            uint16_t l_1416[8][10] = {{65530UL,2UL,65529UL,0x47E7L,2UL,1UL,0UL,0x8E05L,0x299BL,0x8E05L},{0xAB59L,0UL,0x6BF0L,1UL,0x6BF0L,0UL,65529UL,0x3324L,0x299BL,0x6BF0L},{0x5A50L,0x6BF0L,1UL,65526UL,0UL,1UL,0x299BL,65529UL,65529UL,0x3324L},{2UL,0x6BF0L,0UL,0UL,65531UL,0x47E7L,65529UL,0x6BF0L,0x4635L,0UL},{1UL,3UL,0x5A50L,65531UL,0x299BL,0x299BL,65531UL,0x5A50L,3UL,1UL},{3UL,0UL,1UL,0x3324L,1UL,1UL,0UL,65531UL,1UL,65529UL},{0UL,65529UL,65530UL,0UL,1UL,0xAB59L,0xFD25L,1UL,0x47E7L,1UL},{1UL,0UL,3UL,0UL,0x299BL,65532UL,2UL,65532UL,0x299BL,0UL}};
            uint32_t l_1470 = 0x4F65D31CL;
            uint32_t l_1494 = 4UL;
            int i, j;
            for (i = 0; i < 3; i = i + 1)
                l_1336[i] = 0x9A1F6739L;
            if ((l_1297 || (__builtin_ffs(l_1297) | l_1313[1])))
            { 
                uint32_t l_1316 = 0UL;
                int16_t l_1325[9] = {(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L)};
                int32_t l_1337 = 1L;
                int32_t l_1342 = 0L;
                struct S0 l_1347 = {0x2C785649L,-5L};
                int i;
                if ((0x9454L != (l_1297 == (safe_sub_func_uint32_t_u_u(0xDBCD9F7DL, l_1313[4])))))
                { 
                    int32_t l_1334 = 1L;
                    struct S0 l_1348 = {18446744073709551612UL,0xC53BEE90L};
                    l_1316 = l_1297;
                    l_1337 = ((safe_add_func_uint16_t_u_u((func_81(l_1313[2], l_1297, l_1276, (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((0xEA50L | (l_1325[1] == func_94(l_1313[3], (safe_add_func_float_f_f((((-0x4.Ap-1) != __builtin_parityll(((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_1334, l_1292)), l_40)) & l_40) == l_677[0][6][1]), 0L)) | 0x4F3B4852L))) < l_1335), l_1313[1])), l_1336[0]))) & l_1334) < l_1334), 1UL)), l_1297))) < l_1325[1]), 0x8E21L)) || l_1316);
                    --l_1339[5][1][1];
                    for (l_1337 = 0; (l_1337 <= 2); l_1337 += 1)
                    { 
                        int32_t l_1343[1][4] = {{1L,1L,1L,1L}};
                        int32_t l_1358[3];
                        int i, j;
                        for (i = 0; i < 3; i = i + 1)
                            l_1358[i] = (-2L);
                        --l_1344;
                        l_1348 = l_1347;
                        l_1358[0] |= ((((((0L == (((l_1313[(l_1337 + 1)] < (l_1336[0] <= 0L)) | (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(0xFAA9591DL, l_1336[0])), ((+((func_57((((65534UL != 0x5D08L) || (l_1313[(l_1337 + 1)] || l_1343[0][0])) & l_1336[1]), l_1343[0][3], l_1313[(l_1337 + 1)]) && l_1343[0][2]) || l_1348.f0)) < l_1334))), l_1343[0][1])), l_1342))) || l_1313[1])) <= l_1344) >= l_1348.f1) >= 0xEE49L) || l_1339[5][1][1]) >= l_1343[0][0]);
                    }
                }
                else
                { 
                    int16_t l_1361[8][9][2] = {{{0xC23AL,(-10L)},{0xE5D6L,0x8E2FL},{(-1L),0x1C71L},{1L,(-1L)},{(-1L),0xB217L},{(-1L),(-1L)},{1L,0x1C71L},{(-1L),0x8E2FL},{0xE5D6L,(-10L)}},{{0xC23AL,1L},{1L,(-1L)},{1L,(-1L)},{(-10L),0x2CEAL},{1L,1L},{0xC23AL,(-1L)},{0xB217L,(-10L)},{0x579AL,0x1C71L},{1L,0x2CEAL}},{{1L,0x6013L},{(-1L),0xC23AL},{1L,1L},{0x579AL,0x8E2FL},{0x6013L,0x8E2FL},{0x579AL,1L},{1L,0xC23AL},{(-1L),0x6013L},{1L,0x2CEAL}},{{1L,0x1C71L},{0x579AL,(-10L)},{0xB217L,(-1L)},{0xC23AL,1L},{1L,0x2CEAL},{(-10L),(-1L)},{1L,(-1L)},{1L,1L},{0xC23AL,(-10L)}},{{0xE5D6L,0x8E2FL},{(-1L),0x1C71L},{1L,(-1L)},{(-1L),0xB217L},{(-1L),(-1L)},{1L,0x1C71L},{(-1L),0x8E2FL},{0xE5D6L,(-10L)},{0xC23AL,1L}},{{1L,(-1L)},{1L,(-1L)},{(-10L),0x2CEAL},{1L,1L},{0xC23AL,(-1L)},{0xB217L,(-10L)},{0x579AL,0x1C71L},{1L,0x2CEAL},{1L,0x6013L}},{{(-1L),0xC23AL},{1L,1L},{0x579AL,0x8E2FL},{1L,0xC23AL},{0x8025L,1L},{7L,0x6013L},{(-1L),1L},{(-3L),0xB217L},{1L,6L}},{{0x8025L,0x579AL},{0x8474L,(-1L)},{0x6013L,1L},{0x869CL,0xB217L},{0x579AL,0x37EBL},{(-3L),0xE5D6L},{7L,7L},{0x6013L,0x579AL},{(-6L),0xC23AL}}};
                    int i, j, k;
                    if (((((((safe_lshift_func_int16_t_s_s(l_1361[6][4][1], 15)) >= (l_1312 < (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_1361[6][5][0], (safe_mul_func_int16_t_s_s(((l_1292 >= ((safe_lshift_func_int16_t_s_u(l_1316, 6)) | l_1347.f1)) | (!(__builtin_clzl(l_1335) || ((0xE9A3B466L ^ 0x2E1D473CL) || 0xA2DC0114L)))), l_1276)))), l_1371)))) <= l_1361[6][4][1]) < 1L) > (-9L)) >= l_1336[0]))
                    { 
                        l_1372 = l_1372;
                    }
                    else
                    { 
                        int32_t l_1377 = 0x837E12D9L;
                        l_1373 = l_1338;
                        l_1374 = l_1372;
                        l_1372 = func_67((l_1377 >= ((!l_1276) < ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_1313[4], (safe_rshift_func_int16_t_s_s(0x05B3L, __builtin_popcount(l_1377))))), (safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_u(__builtin_parity((l_1313[1] > (l_1377 != (l_1313[5] <= 0x6205L)))), 4)) >= 0x89C5L) == l_1372.f1), 15)))) && l_1361[7][0][0]) || l_1335) || l_1325[1]) ^ l_1337) != l_40), 0L)), 0x9498L)), 1UL)) == l_1338))), l_1313[7], l_1335, l_1371);
                    }
                }
            }
            else
            { 
                int8_t l_1395[3][5][3] = {{{0x71L,0L,9L},{0xD6L,(-1L),9L},{0x6AL,0xD6L,9L},{1L,1L,0x71L},{0x6AL,0x71L,0xD6L}},{{0xD6L,0x71L,0x6AL},{0x71L,1L,1L},{9L,0xD6L,0x6AL},{9L,(-1L),0xD6L},{9L,0L,0x71L}},{{9L,0x1DL,9L},{0x71L,0L,9L},{0xD6L,(-1L),9L},{0x6AL,0xD6L,9L},{1L,1L,0x71L}}};
                struct S0 l_1404[8] = {{1UL,0x886BDCA5L},{0x88BF27D2L,9L},{1UL,0x886BDCA5L},{0x88BF27D2L,9L},{1UL,0x886BDCA5L},{0x88BF27D2L,9L},{1UL,0x886BDCA5L},{0x88BF27D2L,9L}};
                int i, j, k;
                l_1404[7] = func_67((l_677[0][1][1] & l_1395[0][0][2]), (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((0xA2D4F670L > l_1336[0]), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_1372.f0, l_1373)), 10)))), (l_1395[0][0][2] && 0x29B1F58FL))), l_1395[0][0][2], l_1312);
            }
            for (l_1372.f0 = 0; (l_1372.f0 <= 2); l_1372.f0 += 1)
            { 
                uint32_t l_1405[10] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
                int32_t l_1409 = (-1L);
                int i;
                l_1372.f1 ^= l_1405[1];
                l_1409 = (func_77(l_1339[0][3][1], (+l_72), l_1292) < (safe_rshift_func_uint16_t_u_u(l_1372.f0, 15)));
                for (l_1292 = 0; (l_1292 <= 2); l_1292 += 1)
                { 
                    int i, j, k;
                    return l_677[(l_1292 + 3)][l_1292][l_1292];
                }
            }
            for (l_1344 = 0; (l_1344 <= 2); l_1344 += 1)
            { 
                uint32_t l_1415 = 18446744073709551615UL;
                int32_t l_1461 = (-1L);
                int32_t l_1463 = 0x6FDB139BL;
                int32_t l_1464 = 0x0AEA34E5L;
                int32_t l_1465 = 0x6EEEB9B6L;
                int32_t l_1466[6];
                struct S0 l_1473 = {0x078B3030L,-8L};
                uint32_t l_1485 = 0UL;
                int i;
                for (i = 0; i < 6; i = i + 1)
                    l_1466[i] = (-1L);
                l_1415 ^= (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_1371 != (l_1344 & l_1414)), __builtin_bswap32(l_72))), 9UL));
                for (l_1373 = 2; (l_1373 >= 0); l_1373 -= 1)
                { 
                    int i, j, k;
                    l_1416[3][9] = l_677[(l_1373 + 3)][(l_1373 + 3)][l_1344];
                    return l_1417;
                }
                if (l_1418)
                { 
                    uint32_t l_1433 = 1UL;
                    l_1338 = ((safe_add_func_float_f_f((safe_add_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f(((safe_sub_func_float_f_f(((l_1415 > (((0x9.42E0B1p+12 == (((l_1373 <= l_1416[3][9]) == (func_77((safe_mul_func_uint16_t_u_u((((0x9880B018L & l_1416[3][9]) & ((safe_mul_func_int16_t_s_s((l_1371 ^ l_677[2][2][2]), l_1414)) <= l_1415)) | 4294967295UL), l_1433)), l_1344, l_1415) < l_1433)) >= l_1276)) >= 0x1.4DFF62p-48) > l_1371)) == l_1416[3][9]), l_1338)) >= 0x0.Bp+1), (-0x4.Ap+1))), l_1313[1])), l_1416[3][9])), l_1434)) > (-0x9.Fp-1));
                }
                else
                { 
                    uint32_t l_1441 = 1UL;
                    int32_t l_1444[9] = {0xABA88334L,0xABA88334L,0L,0xABA88334L,0xABA88334L,0L,0xABA88334L,0xABA88334L,0L};
                    int i;
                    for (l_1414 = 0; (l_1414 <= 2); l_1414 += 1)
                    { 
                        float l_1442 = 0x3.6C5C87p+45;
                        int32_t l_1443 = 0xE137C059L;
                        l_1372 = l_1372;
                        l_1417 = ((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((((func_63(func_67(l_1313[3], (safe_lshift_func_uint16_t_u_s(65535UL, 4)), ((((l_1418 & 0x43E7L) | l_1372.f1) | (((0x8542L | l_1441) == 0x997CB2EBL) & 0x32A7L)) & 0x318AFF0BL), l_1374.f0), l_1344, l_1313[7]) && l_1415) ^ l_1441) > l_1414) == 9UL) & 0L), l_1336[1])), l_1415)) | l_1443);
                    }
                    if (l_1444[6])
                        break;
                }
                for (l_1414 = 0; (l_1414 <= 2); l_1414 += 1)
                { 
                    int32_t l_1448 = 8L;
                    l_1448 = (safe_mul_func_float_f_f(l_1447, l_1371));
                }
                for (l_1257 = 0; (l_1257 <= 2); l_1257 += 1)
                { 
                    int16_t l_1458[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int32_t l_1459 = (-1L);
                    int32_t l_1460 = (-8L);
                    int32_t l_1462 = 0L;
                    int32_t l_1468 = (-3L);
                    uint16_t l_1493[8];
                    int i;
                    for (i = 0; i < 8; i = i + 1)
                        l_1493[i] = 0x4C78L;
                    for (l_1372.f0 = 0; (l_1372.f0 <= 2); l_1372.f0 += 1)
                    { 
                        int32_t l_1454 = 0xD696056BL;
                        int32_t l_1457 = 0xF56697B8L;
                        l_1292 |= (!func_36((l_1418 || ((1L != (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_1454 <= l_1454), ((safe_add_func_int16_t_s_s(((0UL | (0xAF3A3FF4L <= ((((4294967294UL && 2L) == l_1457) != 0x7CD2L) ^ l_1457))) | 0UL), l_1415)) & 1L))), l_1458[2]))) || l_1457)), l_1344, l_677[1][6][0]));
                        l_1454 = (l_1276 == l_1336[0]);
                    }
                    --l_1470;
                    for (l_1469 = 0; (l_1469 <= 2); l_1469 += 1)
                    { 
                        l_1473 = l_1372;
                    }
                    if (((l_1468 && l_1339[4][7][0]) < (safe_rshift_func_int16_t_s_s(l_1416[3][6], (safe_mod_func_int32_t_s_s(0L, ((safe_rshift_func_uint16_t_u_s((((~l_1313[7]) | 7L) || (safe_add_func_int16_t_s_s((l_1463 & (safe_mod_func_uint32_t_u_u(l_1485, l_1460))), l_1344))), l_1297)) | l_1335)))))))
                    { 
                        l_1292 = l_1344;
                        l_1492 = (!(~((safe_add_func_int16_t_s_s(l_1313[2], ((safe_mod_func_int32_t_s_s(l_1485, l_40)) >= l_677[7][2][2]))) && 0xA0A2L)));
                    }
                    else
                    { 
                        l_1495[9] = (l_1493[4] <= l_1494);
                        l_72 |= ((safe_rshift_func_int16_t_s_u(l_1458[2], 7)) & l_1338);
                        l_1338 |= l_1297;
                    }
                }
            }
            l_1469 = (l_1335 || l_40);
        }
        else
        { 
            uint32_t l_1502 = 0xE93651B0L;
            int32_t l_1524 = 0xD0ED1913L;
            int32_t l_1526 = 0xA70B9129L;
            for (l_1418 = 0; (l_1418 <= 9); l_1418 += 1)
            { 
                uint32_t l_1499 = 0UL;
                for (l_1371 = 6; (l_1371 >= 1); l_1371 -= 1)
                { 
                    int32_t l_1505[5];
                    float l_1525 = (-0x1.3p-1);
                    int i;
                    for (i = 0; i < 5; i = i + 1)
                        l_1505[i] = (-6L);
                    for (l_1434 = 0; (l_1434 <= 9); l_1434 += 1)
                    { 
                        float l_1498 = 0x0.1p+1;
                        int i, j, k;
                        l_1498 = l_1495[l_1371];
                        l_1417 = l_677[(l_40 + 2)][(l_1371 + 1)][l_40];
                        l_1495[l_1371] = l_1499;
                        l_1505[1] &= (((safe_sub_func_int16_t_s_s(l_677[(l_40 + 2)][(l_1371 + 1)][l_40], l_1492)) < l_1502) < ((func_94(l_1503[1][3][5], ((!(__builtin_ffs(((l_1495[l_1371] == 3L) != (l_1502 || 4294967287UL))) < l_677[(l_40 + 2)][(l_1371 + 1)][l_40])) < (-0x1.Bp-1)), l_1502) || 0x744A6B69L) > 0xE806DF21L));
                    }
                    if ((__builtin_clzl((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_1499, (safe_unary_minus_func_int16_t_s(((func_92(l_1511[1][0][5]) >= (__builtin_ffsl(l_1499) < l_1505[3])) != (safe_mul_func_int16_t_s_s(0xA9D3L, l_677[8][3][1]))))))), 9))) < l_1502))
                    { 
                        uint16_t l_1518 = 0xFF18L;
                        if (l_1499)
                            break;
                        l_1505[1] = (safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((0xB593L > l_1518) > l_1373) & 1UL), l_1518)) >= l_1499), ((safe_mul_func_uint16_t_u_u((~l_1338), l_1505[1])) ^ (safe_mod_func_int16_t_s_s(0xAD39L, l_1518)))));
                        return l_1467[1][0];
                    }
                    else
                    { 
                        l_1524 = (l_1505[0] > l_1434);
                        if (l_1499)
                            continue;
                        return l_1505[2];
                    }
                }
                for (l_1257 = 0; (l_1257 <= 2); l_1257 += 1)
                { 
                    l_1526 ^= (l_1502 & l_1297);
                }
            }
            l_1338 |= (safe_mul_func_int16_t_s_s(l_1335, (safe_lshift_func_int16_t_s_u(0L, 7))));
            l_1495[9] = ((((-0x3.7p+1) == 0xA.E851BAp-61) >= l_1495[1]) == (-0x8.0p+1));
        }
        l_1511[1][0][5].f1 = l_1335;
        for (l_1447 = 2; (l_1447 >= 0); l_1447 -= 1)
        { 
            uint32_t l_1531[10][3][5] = {{{6UL,0x366C441FL,3UL,0x0C3E46C3L,0xB1B4FA9DL},{1UL,4294967291UL,0x7EF7A027L,4294967295UL,5UL},{4294967295UL,0x7EF7A027L,6UL,0xD0B2EC90L,0x87D80650L}},{{0x0C3E46C3L,0xFA12FACEL,1UL,0xA256EB33L,0UL},{0x87CBB1D3L,4294967295UL,9UL,4294967287UL,0UL},{0x32191F91L,1UL,0xB1B4FA9DL,0x87D80650L,0x87D80650L}},{{0x366C441FL,0x87D80650L,0x366C441FL,1UL,5UL},{0xD0B2EC90L,1UL,0xA56419A8L,4UL,0xB1B4FA9DL},{3UL,1UL,4UL,0x60ED7587L,1UL}},{{0x40B02BC6L,5UL,0xA56419A8L,0xB1B4FA9DL,1UL},{0xB1B4FA9DL,4294967287UL,0x366C441FL,4UL,0xCAF199EFL},{4294967291UL,4294967286UL,0xB1B4FA9DL,4294967295UL,1UL}},{{5UL,1UL,9UL,1UL,0x006C0A67L},{5UL,0xB1B4FA9DL,1UL,4294967295UL,4294967291UL},{4294967291UL,6UL,6UL,4294967291UL,1UL}},{{0xB1B4FA9DL,0x60ED7587L,0x7EF7A027L,4294967286UL,0xA256EB33L},{1UL,0x60ED7587L,0xD0B2EC90L,0x0C3E46C3L,0x87D80650L},{0xD0B2EC90L,9UL,0xB1B4FA9DL,1UL,1UL}},{{4294967286UL,4294967295UL,0x006C0A67L,0x40B02BC6L,1UL},{0x8F626083L,0xA256EB33L,0x7EF7A027L,4294967295UL,0xA56419A8L},{0x006C0A67L,0x366C441FL,4294967295UL,1UL,0xD0B2EC90L}},{{5UL,0x366C441FL,0x40B02BC6L,6UL,4294967295UL},{4294967295UL,0xA256EB33L,0xA56419A8L,0xA256EB33L,4294967295UL},{4UL,4294967295UL,0x9CB5F7D2L,1UL,0x32191F91L}},{{4294967287UL,9UL,4294967295UL,0x87CBB1D3L,1UL},{4294967291UL,0x60ED7587L,1UL,4294967295UL,0x32191F91L},{4294967295UL,0x87CBB1D3L,0xA256EB33L,1UL,4294967295UL}},{{0x32191F91L,4294967291UL,4294967286UL,0xB1B4FA9DL,4294967295UL},{4294967288UL,1UL,4UL,5UL,0xD0B2EC90L},{0xCAF199EFL,4294967295UL,4UL,9UL,0xA56419A8L}}};
            int32_t l_1599 = 0x9C5EE3A7L;
            int16_t l_1624[9][9][2] = {{{0x1302L,3L},{0x649CL,0x635FL},{1L,1L},{(-1L),(-1L)},{(-1L),(-1L)},{0x1358L,1L},{3L,0x51FFL},{(-1L),0x3060L},{0xEA5CL,(-1L)}},{{0x1CBCL,(-1L)},{0x1CBCL,(-1L)},{0xEA5CL,0x3060L},{(-1L),0x51FFL},{3L,1L},{0x1358L,(-1L)},{(-1L),(-1L)},{(-1L),1L},{1L,0x635FL}},{{0x649CL,3L},{0x1302L,0x1B86L},{0x970FL,1L},{1L,0x74FCL},{0xBDD7L,0xA07CL},{(-2L),0x1302L},{0L,0xBDD7L},{1L,0xEA5CL},{0L,0x649CL}},{{0x6C7CL,0L},{0x3060L,0L},{0x6C7CL,0x649CL},{0L,0xEA5CL},{1L,0xBDD7L},{0L,0x1302L},{(-2L),0xA07CL},{0xBDD7L,0x74FCL},{1L,1L}},{{0x970FL,0x1B86L},{0x1302L,3L},{0x649CL,0x635FL},{1L,1L},{(-1L),(-1L)},{(-1L),(-1L)},{0x1358L,1L},{3L,0x51FFL},{(-1L),0x3060L}},{{0xEA5CL,(-1L)},{0x1CBCL,(-1L)},{0x1CBCL,(-1L)},{0xEA5CL,0x3060L},{(-1L),0x51FFL},{3L,1L},{0x1358L,(-1L)},{(-1L),(-1L)},{(-1L),1L}},{{1L,0x635FL},{0x649CL,3L},{0x1302L,0x1B86L},{0x970FL,1L},{1L,0x74FCL},{0xBDD7L,0xA07CL},{(-2L),(-1L)},{0x51FFL,(-2L)},{0L,0xF1A5L}},{{0xEA5CL,9L},{0x970FL,(-1L)},{0x649CL,(-1L)},{0x970FL,9L},{0xEA5CL,0xF1A5L},{0L,(-2L)},{0x51FFL,(-1L)},{(-2L),1L},{(-2L),0xBD53L}},{{0x6C7CL,(-1L)},{0L,0x1358L},{(-1L),0x74FCL},{9L,1L},{0xBDD7L,(-1L)},{0x1B86L,(-1L)},{1L,1L},{0x3060L,0x6C7CL},{0x74FCL,(-1L)}}};
            uint32_t l_1661 = 0xC17BB240L;
            int i, j, k;
            l_1495[9] = l_1469;
            l_1531[8][2][3] = (l_1495[4] > l_1339[0][2][0]);
            if ((safe_sub_func_uint32_t_u_u(l_1534, (safe_add_func_uint32_t_u_u(l_1537, (safe_sub_func_int32_t_s_s(l_1534, 0xD8EEF3DBL)))))))
            { 
                int32_t l_1541 = (-1L);
                l_1541 ^= (l_1335 < 7UL);
                if (l_1531[7][0][1])
                    continue;
                if (l_1339[5][1][1])
                    continue;
                for (l_1534 = 0; (l_1534 <= 2); l_1534 += 1)
                { 
                    int32_t l_1542 = 0x7865E054L;
                    uint32_t l_1549 = 0xCD776BE3L;
                    if (((l_1542 > (__builtin_popcountll((l_1447 <= (l_1541 <= (safe_lshift_func_uint16_t_u_u((l_1541 | (l_1531[8][2][3] >= ((safe_mul_func_int16_t_s_s((l_1542 <= (safe_sub_func_int16_t_s_s(l_1469, l_1549))), 1UL)) | 0xB3B6L))), l_1531[5][2][2]))))) >= l_1531[4][0][3])) | l_1541))
                    { 
                        uint16_t l_1556 = 0UL;
                        int32_t l_1557 = 0x83BB1A16L;
                        l_1557 &= ((func_92(l_1550) <= (safe_mul_func_uint16_t_u_u((!l_1541), (l_1541 >= (safe_mul_func_uint16_t_u_u(l_1531[0][0][4], l_1531[8][2][3])))))) < l_1556);
                    }
                    else
                    { 
                        int16_t l_1564[9] = {0x5C01L,0x5C01L,0x5C01L,0x5C01L,0x5C01L,0x5C01L,0x5C01L,0x5C01L,0x5C01L};
                        int i;
                        l_1338 = ((0x1.6p+1 >= (safe_mul_func_float_f_f((safe_sub_func_float_f_f(__builtin_ctzl(l_1541), ((l_1338 != (safe_add_func_float_f_f(((l_1564[2] >= 0x4.FC9F07p-88) < l_1564[1]), l_1531[4][2][3]))) < l_1542))), l_1541))) < l_1417);
                        return l_1550.f0;
                    }
                    l_1492 ^= l_1541;
                    for (l_1417 = 3; (l_1417 >= 0); l_1417 -= 1)
                    { 
                        int i, j;
                        l_1495[9] = (l_1495[(l_1417 + 2)] | l_1467[l_1447][l_40]);
                        l_1495[2] = 0x1.3p-1;
                        return l_1541;
                    }
                }
            }
            else
            { 
                uint32_t l_1565 = 4294967295UL;
                uint16_t l_1575 = 65534UL;
                int32_t l_1586[4][9][6] = {{{0x20E10198L,(-1L),0xAA8EAC71L,0xDCEAAFDBL,0x1206B567L,0xBE04636BL},{(-1L),0x8683B720L,0x151E8F34L,0x3907A206L,(-7L),0x18876186L},{0x265E3556L,0x6D539030L,0x5BC00AF4L,0x4F3134E9L,0L,0xBC594A99L},{(-2L),0L,0x70A70FF9L,0x40907A18L,0xBCD108F0L,0xE6435483L},{0xDCEAAFDBL,0x505500A2L,0x265E3556L,0x505500A2L,0xDCEAAFDBL,0x962312C8L},{0L,0x251A2229L,1L,7L,0x2EA63F8FL,(-7L)},{4L,(-10L),0x518F6D93L,0x251A2229L,1L,(-7L)},{0L,(-1L),1L,0x0BF7BBE2L,0L,0x962312C8L},{1L,6L,0x265E3556L,0xBE04636BL,(-1L),0xE6435483L}},{{(-7L),0x265E3556L,0x70A70FF9L,0L,0x42FA5008L,0xBC594A99L},{0x0BF7BBE2L,0x7938533AL,0x5BC00AF4L,0x962312C8L,0x783513E8L,0x18876186L},{3L,0x42FA5008L,0x151E8F34L,(-3L),(-10L),0xBE04636BL},{1L,(-7L),0xAA8EAC71L,8L,0x0AB984A9L,(-3L)},{7L,0xBE04636BL,1L,8L,1L,0x0AB984A9L},{0x230866B5L,(-2L),0x90DCD081L,0x90DCD081L,(-2L),0x230866B5L},{6L,1L,0x1206B567L,0x518F6D93L,(-3L),1L},{0x251A2229L,0xEC978C4CL,0xE6435483L,0x42FA5008L,0x6D539030L,0x505500A2L},{0x251A2229L,(-1L),0x42FA5008L,0x518F6D93L,0x962312C8L,0x8683B720L}},{{6L,(-3L),0x8384B3CEL,0x90DCD081L,0xD74FD8C4L,0L},{0x230866B5L,7L,(-7L),8L,0x90DCD081L,(-1L)},{7L,0xBC594A99L,1L,8L,(-4L),0x42FA5008L},{1L,(-7L),0L,(-3L),6L,0x2EA63F8FL},{3L,0x4CF66605L,0x4F3134E9L,0x962312C8L,0x7938533AL,0x518F6D93L},{0x0BF7BBE2L,8L,0xBC594A99L,0x505500A2L,1L,3L},{0L,0x8683B720L,0x18876186L,0xAA8EAC71L,0x18876186L,0x8683B720L},{0x8384B3CEL,0xE6435483L,0x2EA63F8FL,0x18876186L,7L,0x1206B567L},{6L,(-2L),3L,0xDCEAAFDBL,1L,0x42FA5008L}},{{0x42FA5008L,(-2L),0L,(-1L),7L,0x3907A206L},{0x505500A2L,0xE6435483L,(-7L),(-1L),0x18876186L,(-3L)},{0xBC594A99L,0x8683B720L,(-3L),0x0BF7BBE2L,1L,0x70A70FF9L},{0L,1L,0x518F6D93L,0x40907A18L,0x265E3556L,(-10L)},{0x251A2229L,(-10L),1L,(-3L),1L,0x40907A18L},{3L,0L,0xE6435483L,0xBC594A99L,(-3L),(-2L)},{0xE6435483L,0xD74FD8C4L,0x7938533AL,(-1L),(-2L),(-7L)},{0x4F3134E9L,(-1L),0x151E8F34L,0xEC978C4CL,0xEC978C4CL,0x151E8F34L},{0L,0L,0x505500A2L,0x0AB984A9L,8L,0x8384B3CEL}}};
                struct S0 l_1589 = {0x40E099AEL,-1L};
                uint16_t l_1608 = 65535UL;
                int32_t l_1618 = 0x14F6681BL;
                uint16_t l_1642 = 65535UL;
                int i, j, k;
                if (l_1531[8][2][3])
                { 
                    int8_t l_1572 = 0xE9L;
                    int32_t l_1576[1][4][5] = {{{0x7C4BCC8EL,1L,1L,0x7C4BCC8EL,0xB7D06DD8L},{0x7C4BCC8EL,1L,1L,0x7C4BCC8EL,0xB7D06DD8L},{0x7C4BCC8EL,1L,1L,0x7C4BCC8EL,0xB7D06DD8L},{0x7C4BCC8EL,1L,1L,0x7C4BCC8EL,0xB7D06DD8L}}};
                    uint32_t l_1587 = 0xF5D0DF0EL;
                    int i, j, k;
                    l_1565 = l_1373;
                    l_1576[0][2][1] = (safe_mod_func_uint16_t_u_u(((65530UL > 0x0392L) <= l_1550.f1), ((safe_rshift_func_int16_t_s_u((l_1531[9][0][0] ^ (safe_sub_func_int16_t_s_s(__builtin_ctzl(l_1469), (l_1572 != (((((((safe_sub_func_uint16_t_u_u((l_1575 == (l_1531[1][2][4] < 0x352FL)), 0UL)) | l_1565) != (-1L)) == l_1338) > l_1467[1][0]) ^ 0x8CA5L) > 0xFCFCAED5L))))), l_1572)) | 0xE50F4BD3L)));
                    for (l_1276 = 2; (l_1276 >= 0); l_1276 -= 1)
                    { 
                        if (l_1418)
                            break;
                        l_1586[1][1][5] ^= (safe_mul_func_int16_t_s_s(l_1575, (((4L <= ((l_1576[0][2][0] < ((l_1292 > l_1531[8][2][3]) | (l_1469 ^ ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(65527UL, (safe_lshift_func_int16_t_s_s(((l_1550.f1 > (+__builtin_ffsll(l_1565))) > 0xBADB76ADL), 0)))) ^ 1UL), 65528UL)) > l_1575)))) == 0xDEB6L)) >= l_1576[0][0][4]) < 0x5E9D7529L)));
                        l_1338 = l_1587;
                        return l_1531[8][2][3];
                    }
                }
                else
                { 
                    int32_t l_1598 = 0x77C01816L;
                    uint32_t l_1609 = 1UL;
                    for (l_1257 = 0; (l_1257 <= 2); l_1257 += 1)
                    { 
                        struct S0 l_1588 = {18446744073709551612UL,1L};
                        l_1589 = l_1588;
                        l_1374.f1 ^= (l_1338 == ((!((l_1503[0][2][4] == (safe_lshift_func_int16_t_s_s((((l_1537 != l_1593[2][0][9]) | l_1338) | ((safe_mul_func_int16_t_s_s(l_1503[0][1][6], (safe_sub_func_int16_t_s_s((l_1598 ^ l_1588.f1), 5UL)))) | l_1588.f0)), l_520))) >= 0x06B507A4L)) && l_1599));
                        l_1469 = (__builtin_clzl((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(__builtin_ctzll(((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(65532UL, l_1550.f0)) > (4294967289UL ^ l_1588.f1)) <= l_1374.f1), l_1297)) == ((l_1608 <= ((l_1588.f0 | l_1588.f0) & 0x9CF6L)) ^ l_1598))), l_1586[0][8][0])), 0xC95FL))) && l_1609);
                        l_1599 &= (((l_1598 >= ((safe_sub_func_uint32_t_u_u((l_1589.f0 < (__builtin_ia32_crc32qi((!l_1589.f0), ((!(((l_1588.f0 >= (((0x44ECL == l_1495[9]) > (l_1565 < (safe_mod_func_uint32_t_u_u(func_94(l_1417, l_1598, l_1588.f1), l_1531[7][0][1])))) != l_1609)) ^ l_1575) == 0UL)) > l_1609)) <= l_1593[2][0][9])), l_1511[1][0][5].f1)) & l_1598)) >= l_1550.f1) > l_1609);
                    }
                    if (l_1618)
                        break;
                }
                if ((((l_1511[1][0][5].f1 && (l_1531[8][2][3] > (l_1618 | l_677[7][6][0]))) < 0xFC85L) | (l_1589.f1 == (func_81(l_1511[1][0][5].f0, ((((l_1338 != (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(func_34(l_1586[1][1][5]), l_1623)), l_677[8][1][2]))) <= l_1586[1][1][5]) || l_1599) > l_1537), l_1467[1][5], l_1624[4][4][1]) | 0x21F9L))))
                { 
                    uint32_t l_1628 = 0UL;
                    uint16_t l_1643 = 65530UL;
                    if (l_1575)
                    { 
                        int8_t l_1625 = (-8L);
                        int32_t l_1646 = 0x598D358FL;
                        l_1643 = ((l_1625 || ((safe_sub_func_int16_t_s_s(l_1492, l_1628)) || (((+((l_1624[8][6][1] & (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_1625, __builtin_ffsll(l_1575))), ((safe_mod_func_uint16_t_u_u((l_1257 == (safe_mod_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(0xD22EL, l_1628)), l_1628)) > l_1642) ^ (-1L)) > l_1628), l_1624[4][4][1]))), l_1467[1][5])) || l_1625)))) <= l_1531[2][1][1])) > l_1624[0][4][1]) != (-3L)))) == 2L);
                        l_1646 ^= ((safe_rshift_func_uint16_t_u_u(0UL, l_1628)) <= l_1625);
                        l_1599 = (safe_sub_func_uint32_t_u_u((l_1608 ^ (4294967294UL == (-8L))), ((safe_mul_func_int16_t_s_s(l_1624[5][6][0], (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((5L > (safe_mul_func_int16_t_s_s(l_1643, 0xF2D9L))) >= __builtin_clzl(l_1417)), l_1624[3][7][1])), l_1643)))) == l_1531[8][2][3])));
                    }
                    else
                    { 
                        uint32_t l_1657 = 1UL;
                        l_1586[1][0][4] = l_1657;
                        l_1469 = (0x8.FB0D61p-77 != (safe_mul_func_float_f_f(((+l_1643) >= (l_1628 != l_1589.f1)), 0x1.Dp+1)));
                    }
                    if (l_1624[4][4][1])
                        break;
                }
                else
                { 
                    if (l_1618)
                        break;
                }
            }
            if (l_1661)
                continue;
            for (l_1417 = 0; (l_1417 <= 2); l_1417 += 1)
            { 
                return l_1292;
            }
        }
    }
    return l_1418;
}




static int16_t  func_34(int8_t  p_35)
{ 
    float l_681 = 0x7.4FFF54p-52;
    int32_t l_682 = 0L;
    int8_t l_683 = 0x53L;
    struct S0 l_705 = {0x810406F6L,0x2221CEB9L};
    int32_t l_710 = 0x45347FB7L;
    int32_t l_714 = 0x254EB83FL;
    int32_t l_716 = 0L;
    int32_t l_720 = 1L;
    int32_t l_721 = 0L;
    int32_t l_722 = (-8L);
    int32_t l_724 = 0L;
    uint16_t l_725 = 0x2809L;
    uint32_t l_860[2][10] = {{0UL,0x239F71B1L,0x239F71B1L,0UL,0xFA289992L,0UL,0x239F71B1L,0x239F71B1L,0UL,0xFA289992L},{0UL,0x239F71B1L,0x239F71B1L,0UL,0xFA289992L,0UL,0x239F71B1L,0x239F71B1L,0UL,0xFA289992L}};
    struct S0 l_861 = {0x170C6AE6L,0xF96B7953L};
    int16_t l_885[5];
    int32_t l_957 = 4L;
    uint16_t l_1104 = 65534UL;
    int32_t l_1178 = 9L;
    uint32_t l_1190 = 18446744073709551612UL;
    int16_t l_1256 = 0x6A32L;
    int i, j;
    for (i = 0; i < 5; i = i + 1)
        l_885[i] = (-2L);
    if (func_57(((safe_sub_func_uint32_t_u_u(l_682, (-7L))) > l_683), l_683, p_35))
    { 
        float l_699[1];
        int32_t l_701[5] = {0x7DDB96E6L,0x7DDB96E6L,0x7DDB96E6L,0x7DDB96E6L,0x7DDB96E6L};
        struct S0 l_706 = {18446744073709551615UL,-1L};
        int32_t l_715 = 0x2D8B8AB7L;
        int8_t l_719 = 0xF6L;
        int32_t l_756 = 0L;
        struct S0 l_758 = {18446744073709551611UL,0xE1095AAFL};
        int16_t l_774[4] = {0xDD78L,0xDD78L,0xDD78L,0xDD78L};
        int i;
        for (i = 0; i < 1; i = i + 1)
            l_699[i] = 0x8.811F22p-64;
        for (l_683 = (-29); (l_683 == (-5)); l_683 = safe_add_func_uint16_t_u_u(l_683, 1))
        { 
            uint32_t l_696 = 0UL;
            struct S0 l_704 = {1UL,-9L};
            int32_t l_707 = 0xC55500E8L;
            int32_t l_708 = 0xD22B5CDEL;
            int32_t l_709 = 1L;
            int32_t l_711 = 1L;
            int32_t l_712 = 0x2EE47EB8L;
            int32_t l_713 = 0xC2EB0DCBL;
            int32_t l_717 = (-1L);
            int32_t l_718 = (-9L);
            int32_t l_723 = 0x212FAE31L;
            for (l_682 = 11; (l_682 != (-10)); --l_682)
            { 
                uint32_t l_700 = 0x7B3D880AL;
                l_701[4] |= (0x5AA96D2EL && func_94(p_35, ((safe_mul_func_float_f_f(p_35, 0x5.61FFF6p-23)) != (((safe_sub_func_float_f_f(p_35, (((safe_sub_func_float_f_f(((safe_add_func_float_f_f(__builtin_ctz(l_696), (safe_sub_func_float_f_f((0x2.D4243Fp+20 > ((p_35 <= p_35) == 0x5.100BDEp-38)), 0xB.793531p+86)))) != 0xA.2D795Bp-90), 0x1.4p-1)) <= l_699[0]) >= l_700))) == p_35) < 0x5.3D0F02p+39)), l_683));
                for (p_35 = 0; (p_35 < 29); p_35 = safe_add_func_int16_t_s_s(p_35, 1))
                { 
                    l_705 = l_704;
                }
                l_706 = l_705;
                l_705.f1 = l_706.f1;
            }
            l_701[4] ^= (-1L);
            --l_725;
        }
        l_714 = p_35;
        l_720 = ((safe_lshift_func_int16_t_s_s(func_81((safe_lshift_func_int16_t_s_s(4L, (0xF3747FB9L | (l_701[4] >= 0x10273F78L)))), p_35, (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_714, (l_706.f1 >= (safe_sub_func_int16_t_s_s(((l_706.f0 & (+l_701[2])) && 0xAD101628L), p_35))))), l_715)), l_721), 12)) == l_705.f0);
        for (l_724 = 4; (l_724 > 29); l_724 = safe_add_func_uint32_t_u_u(l_724, 9))
        { 
            struct S0 l_743[6][1][8] = {{{{0UL,3L},{0x8C768773L,-10L},{0xE27D1C35L,-1L},{0x8C768773L,-10L},{0UL,3L},{18446744073709551615UL,0xD278E7F5L},{0xEA730889L,0xFC4B509DL},{0x3A7A8000L,0x1542E635L}}},{{{0x8C768773L,-10L},{0x12813191L,0L},{18446744073709551615UL,1L},{0xE27D1C35L,-1L},{0xE27D1C35L,-1L},{18446744073709551615UL,1L},{0x12813191L,0L},{0x8C768773L,-10L}}},{{{0x945D926BL,0x9531716EL},{18446744073709551615UL,0xD278E7F5L},{18446744073709551615UL,1L},{0x9205A8B6L,0x695079ACL},{0xEA730889L,0xFC4B509DL},{0UL,3L},{0xEA730889L,0xFC4B509DL},{0x9205A8B6L,0x695079ACL}}},{{{0xE27D1C35L,-1L},{0xA4282D4DL,-1L},{0xE27D1C35L,-1L},{0x3A7A8000L,0x1542E635L},{0x9205A8B6L,0x695079ACL},{0UL,3L},{18446744073709551615UL,1L},{18446744073709551615UL,1L}}},{{{18446744073709551615UL,1L},{18446744073709551615UL,0xD278E7F5L},{0x945D926BL,0x9531716EL},{0x945D926BL,0x9531716EL},{18446744073709551615UL,0xD278E7F5L},{18446744073709551615UL,1L},{0x9205A8B6L,0x695079ACL},{0xEA730889L,0xFC4B509DL}}},{{{18446744073709551615UL,1L},{0x12813191L,0L},{0x8C768773L,-10L},{18446744073709551615UL,0xD278E7F5L},{0x9205A8B6L,0x695079ACL},{18446744073709551615UL,0xD278E7F5L},{0x8C768773L,-10L},{0x12813191L,0L}}}};
            uint32_t l_769 = 0x61D446E0L;
            int32_t l_876 = 0x52A40F37L;
            float l_906 = 0x0.Fp-1;
            int i, j, k;
            if (((l_706.f1 < p_35) & ((p_35 >= ((func_63(l_743[4][0][1], p_35, p_35) > p_35) != p_35)) <= p_35)))
            { 
                uint16_t l_751 = 0UL;
                uint32_t l_752 = 0UL;
                struct S0 l_753 = {0x2ADF1B88L,0L};
                uint32_t l_765 = 0xBADD165CL;
                l_714 = (((p_35 > func_63(l_743[0][0][7], func_36(p_35, p_35, p_35), ((0x2FA4A608L == (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_743[4][0][1].f1, (~((p_35 ^ p_35) & p_35)))) > 65531UL), p_35)), p_35))) ^ l_751))) < (-0x9.5p+1)) > l_751);
                if (p_35)
                { 
                    int32_t l_766 = 0x7FCE7A57L;
                    int32_t l_768 = 0xB44406BCL;
                    if (l_752)
                        break;
                    l_753 = l_706;
                    if (((0x5D4B6D1DL || (safe_sub_func_int32_t_s_s(__builtin_parityll(l_756), (3L <= l_715)))) > l_719))
                    { 
                        uint32_t l_757 = 0x34F684ADL;
                        if (l_757)
                            break;
                    }
                    else
                    { 
                        l_758 = func_67(p_35, l_720, l_743[4][0][1].f0, l_743[4][0][1].f0);
                    }
                    if (l_743[4][0][1].f1)
                    { 
                        struct S0 l_767 = {0xA4A4AD37L,0L};
                        l_767 = func_67(p_35, l_714, (safe_mod_func_int32_t_s_s(3L, (((p_35 || (l_758.f1 ^ (((-1L) | (0L == (!(safe_rshift_func_uint16_t_u_u(l_758.f1, (!func_36(((p_35 && l_765) && l_716), l_743[4][0][1].f1, p_35))))))) < p_35))) <= p_35) || 0L))), l_766);
                        --l_769;
                    }
                    else
                    { 
                        uint32_t l_772 = 1UL;
                        if (l_772)
                            break;
                        l_743[4][0][1].f1 = p_35;
                    }
                }
                else
                { 
                    struct S0 l_776[3][6][9] = {{{{0UL,0x64713C11L},{0UL,0x64713C11L},{0x90C4707CL,0x6D569D73L},{1UL,0x45C82BCBL},{0xBEFC22C6L,0x6C3EBFE8L},{18446744073709551615UL,3L},{0UL,0x64713C11L},{0xBEFC22C6L,0x6C3EBFE8L},{18446744073709551612UL,0x91C7A3A5L}},{{0x9D33B920L,0x009B0B09L},{0UL,-9L},{0xEA6B8C3BL,0x58AF02ACL},{0x48FCE1A7L,-1L},{0x48FCE1A7L,-1L},{0xEA6B8C3BL,0x58AF02ACL},{0UL,-9L},{0x9D33B920L,0x009B0B09L},{8UL,6L}},{{18446744073709551615UL,0L},{3UL,-2L},{0x92F90E00L,7L},{18446744073709551615UL,0L},{0x539DEBB5L,0xD083C329L},{1UL,0x45C82BCBL},{3UL,-2L},{3UL,-2L},{1UL,0x45C82BCBL}},{{5UL,8L},{0x112BDC52L,-2L},{0UL,-9L},{0x112BDC52L,-2L},{5UL,8L},{0x48FCE1A7L,-1L},{0x112BDC52L,-2L},{18446744073709551607UL,0x477A4362L},{0x9D33B920L,0x009B0B09L}},{{3UL,-2L},{0x539DEBB5L,0xD083C329L},{7UL,0x60F45CFDL},{18446744073709551615UL,0L},{0x539DEBB5L,0xD083C329L},{0x92F90E00L,7L},{0x539DEBB5L,0xD083C329L},{18446744073709551615UL,0L},{7UL,0x60F45CFDL}},{{5UL,8L},{5UL,8L},{0x9D33B920L,0x009B0B09L},{18446744073709551607UL,0x477A4362L},{0x112BDC52L,-2L},{0x48FCE1A7L,-1L},{5UL,8L},{0x112BDC52L,-2L},{0UL,-9L}}},{{{18446744073709551615UL,0L},{0x539DEBB5L,0xD083C329L},{1UL,0x45C82BCBL},{3UL,-2L},{3UL,-2L},{1UL,0x45C82BCBL},{0x539DEBB5L,0xD083C329L},{18446744073709551615UL,0L},{0x92F90E00L,7L}},{{18446744073709551615UL,0x7EA81E90L},{0x112BDC52L,-2L},{0x9D33B920L,0x009B0B09L},{18446744073709551615UL,0x7EA81E90L},{0xFF5E8D81L,0xF3B4A81AL},{4UL,7L},{0x112BDC52L,-2L},{0x112BDC52L,-2L},{4UL,7L}},{{0x937D202CL,-8L},{3UL,-2L},{7UL,0x60F45CFDL},{3UL,-2L},{0x937D202CL,-8L},{0xBEFC22C6L,0x6C3EBFE8L},{3UL,-2L},{18446744073709551615UL,0L},{0x92F90E00L,7L}},{{0x112BDC52L,-2L},{0xFF5E8D81L,0xF3B4A81AL},{0UL,-9L},{18446744073709551607UL,0x477A4362L},{0xFF5E8D81L,0xF3B4A81AL},{0x9D33B920L,0x009B0B09L},{0xFF5E8D81L,0xF3B4A81AL},{18446744073709551607UL,0x477A4362L},{0UL,-9L}},{{0x937D202CL,-8L},{0x937D202CL,-8L},{0x92F90E00L,7L},{18446744073709551615UL,0L},{3UL,-2L},{0xBEFC22C6L,0x6C3EBFE8L},{0x937D202CL,-8L},{3UL,-2L},{7UL,0x60F45CFDL}},{{18446744073709551615UL,0x7EA81E90L},{0xFF5E8D81L,0xF3B4A81AL},{4UL,7L},{0x112BDC52L,-2L},{0x112BDC52L,-2L},{4UL,7L},{0xFF5E8D81L,0xF3B4A81AL},{18446744073709551615UL,0x7EA81E90L},{0x9D33B920L,0x009B0B09L}}},{{{18446744073709551615UL,0L},{3UL,-2L},{0x92F90E00L,7L},{18446744073709551615UL,0L},{0x539DEBB5L,0xD083C329L},{1UL,0x45C82BCBL},{3UL,-2L},{3UL,-2L},{1UL,0x45C82BCBL}},{{5UL,8L},{0x112BDC52L,-2L},{0UL,-9L},{0x112BDC52L,-2L},{5UL,8L},{0x48FCE1A7L,-1L},{0x112BDC52L,-2L},{18446744073709551607UL,0x477A4362L},{0x9D33B920L,0x009B0B09L}},{{3UL,-2L},{0x539DEBB5L,0xD083C329L},{7UL,0x60F45CFDL},{18446744073709551615UL,0L},{0x539DEBB5L,0xD083C329L},{0x92F90E00L,7L},{0x539DEBB5L,0xD083C329L},{18446744073709551615UL,0L},{7UL,0x60F45CFDL}},{{5UL,8L},{5UL,8L},{0x9D33B920L,0x009B0B09L},{18446744073709551607UL,0x477A4362L},{0x112BDC52L,-2L},{0x48FCE1A7L,-1L},{5UL,8L},{0x112BDC52L,-2L},{0UL,-9L}},{{18446744073709551615UL,0L},{0x539DEBB5L,0xD083C329L},{1UL,0x45C82BCBL},{3UL,-2L},{3UL,-2L},{1UL,0x45C82BCBL},{0x539DEBB5L,0xD083C329L},{18446744073709551615UL,0L},{0x92F90E00L,7L}},{{18446744073709551615UL,0x7EA81E90L},{0x112BDC52L,-2L},{0x9D33B920L,0x009B0B09L},{18446744073709551615UL,0x7EA81E90L},{0xFF5E8D81L,0xF3B4A81AL},{4UL,7L},{0x112BDC52L,-2L},{0x112BDC52L,-2L},{4UL,7L}}}};
                    int i, j, k;
                    if (((4294967295UL == l_720) || (l_743[4][0][1].f1 ^ p_35)))
                    { 
                        int32_t l_773 = 3L;
                        l_758 = func_67(p_35, (l_773 && p_35), (l_774[1] | (~p_35)), p_35);
                    }
                    else
                    { 
                        uint32_t l_792[10] = {0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L,0x067B8904L};
                        int i;
                        if (p_35)
                            break;
                        l_776[1][3][0] = l_753;
                        l_701[1] = (safe_sub_func_int16_t_s_s((!(l_743[4][0][1].f1 & (__builtin_clzll(p_35) | (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((+(((l_776[1][3][0].f1 & (safe_mul_func_uint16_t_u_u((p_35 != (!l_743[4][0][1].f0)), (p_35 | p_35)))) >= (0L < p_35)) ^ l_743[4][0][1].f0)), l_792[7])) >= p_35), l_792[7])), 5))))), l_705.f0));
                    }
                    for (l_706.f1 = 2; (l_706.f1 >= 0); l_706.f1 -= 1)
                    { 
                        int i;
                        l_701[(l_706.f1 + 1)] = (safe_mul_func_float_f_f(((((l_701[l_706.f1] > ((l_701[(l_706.f1 + 1)] < l_776[1][3][0].f0) >= ((l_776[1][3][0].f1 > (safe_mul_func_float_f_f(l_765, (safe_add_func_float_f_f((safe_mul_func_float_f_f(((!l_743[4][0][1].f0) != (safe_mul_func_float_f_f(l_776[1][3][0].f1, (safe_mul_func_float_f_f((safe_add_func_float_f_f((safe_sub_func_float_f_f(l_724, (((+l_769) == p_35) < p_35))), (-0x4.Ep-1))), (-0x1.6p+1)))))), p_35)), l_769))))) <= l_776[1][3][0].f0))) < l_743[4][0][1].f1) < 0x0.Ap-1) == 0x6.392454p-81), l_743[4][0][1].f1));
                        l_716 = p_35;
                        l_701[l_706.f1] ^= ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(l_776[1][3][0].f1, 0xDAE4D4DDL)), 11)), l_724)) || p_35);
                        l_701[(l_706.f1 + 1)] ^= (!((0x2DC6L != (~l_710)) ^ (safe_add_func_uint32_t_u_u(p_35, p_35))));
                    }
                }
                l_701[4] = (+(safe_sub_func_float_f_f(p_35, ((safe_mul_func_float_f_f((safe_sub_func_float_f_f(((safe_add_func_float_f_f(0x9.3p+1, l_719)) != func_77(p_35, p_35, l_753.f1)), (l_719 == ((((safe_mul_func_float_f_f((l_751 <= 0x7.9DFBFBp-17), p_35)) == p_35) < 0x0.9p+1) < (-0x9.4p+1))))), p_35)) >= l_743[4][0][1].f1))));
            }
            else
            { 
                struct S0 l_834 = {0x16598B80L,0x3F7B407FL};
                int16_t l_922 = 0x2964L;
                int32_t l_932[1];
                int i;
                for (i = 0; i < 1; i = i + 1)
                    l_932[i] = 0x0D3A5F49L;
                if ((func_36(p_35, ((safe_rshift_func_uint16_t_u_u(func_63(l_834, l_720, l_834.f1), 2)) != (safe_mod_func_int32_t_s_s(p_35, ((((safe_rshift_func_uint16_t_u_u(p_35, 11)) & (__builtin_parityll((safe_lshift_func_int16_t_s_u(p_35, 0))) == 1UL)) <= 0x43BC9CBAL) & l_715)))), p_35) != (-5L)))
                { 
                    int32_t l_844 = 0xD593671FL;
                    for (l_719 = (-28); (l_719 <= 11); l_719 = safe_add_func_int32_t_s_s(l_719, 1))
                    { 
                        uint16_t l_843 = 0x1388L;
                        float l_857[7] = {(-0x1.0p+1),0xB.D340C0p+42,0xB.D340C0p+42,(-0x1.0p+1),0xB.D340C0p+42,0xB.D340C0p+42,(-0x1.0p+1)};
                        int i;
                        l_843 = l_834.f0;
                        if (p_35)
                            break;
                        l_861 = func_67(l_844, ((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((-1L) & func_77(((func_81((safe_sub_func_int16_t_s_s((+(safe_lshift_func_int16_t_s_u((~((p_35 < p_35) & ((safe_lshift_func_uint16_t_u_u(l_834.f1, 12)) ^ (p_35 == (safe_mod_func_int32_t_s_s(p_35, (p_35 & (l_725 || p_35)))))))), p_35))), l_843)), l_844, p_35, l_843) | l_834.f0) ^ p_35), l_860[0][4], l_844)) | p_35), 0xD82FL)) == l_834.f1), l_743[4][0][1].f0)) | p_35), p_35, l_843);
                        l_876 |= ((safe_add_func_int32_t_s_s(func_94((safe_mul_func_int16_t_s_s(l_844, (0UL & 0xA49C0BE1L))), ((safe_mul_func_float_f_f(((safe_add_func_float_f_f((safe_add_func_float_f_f((p_35 < (((safe_mul_func_float_f_f(((safe_add_func_float_f_f(p_35, (l_861.f0 > ((__builtin_parityll(l_844) >= l_844) <= 0x8.08C3D7p-60)))) != p_35), l_774[1])) < l_743[4][0][1].f1) < l_701[2])), l_701[4])), l_843)) <= p_35), l_743[4][0][1].f0)) < l_844), l_834.f0), l_834.f1)) <= l_844);
                    }
                }
                else
                { 
                    int8_t l_888[2][7][6] = {{{1L,0x4FL,1L,0x1CL,(-1L),0xE0L},{0x39L,0L,1L,0x40L,0x31L,(-1L)},{0L,0L,0x1CL,0x40L,0x40L,0x1CL},{0x39L,0x39L,0x4FL,0x1CL,1L,1L},{1L,0x3FL,0x39L,0L,0L,0x4FL},{0L,(-1L),8L,0x08L,8L,(-1L)},{0x1CL,0x08L,0L,0x31L,0L,0xF8L}},{{0x31L,0L,0xF8L,8L,0x40L,0x4FL},{0x3FL,0L,1L,1L,0L,0x3FL},{0L,0x08L,(-1L),0x39L,8L,0xE0L},{1L,(-1L),0x40L,0L,0x99L,1L},{1L,0x39L,0L,0x39L,1L,8L},{0L,8L,0x99L,1L,1L,0x1CL},{0x3FL,0xE0L,1L,8L,0x1CL,0x1CL}}};
                    int i, j, k;
                    l_705 = func_67((p_35 ^ (func_92(l_743[4][0][1]) || (l_834.f0 && (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(8L, (l_834.f0 == (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_885[0], 3)), ((+9UL) ^ (safe_unary_minus_func_uint32_t_u((l_834.f0 != p_35))))))))), l_834.f1))))), l_888[0][5][4], p_35, p_35);
                    for (l_682 = 0; (l_682 > 6); l_682 = safe_add_func_uint16_t_u_u(l_682, 1))
                    { 
                        uint32_t l_891 = 0x80460F77L;
                        l_876 = l_891;
                    }
                }
                for (l_861.f0 = 29; (l_861.f0 != 3); l_861.f0 = safe_sub_func_uint32_t_u_u(l_861.f0, 2))
                { 
                    int8_t l_894 = 0x4FL;
                    if (l_894)
                        break;
                    return p_35;
                }
                if (l_834.f0)
                { 
                    float l_899 = 0x2.808515p+30;
                    int32_t l_907 = 0x71167D85L;
                    int16_t l_908 = 0x4861L;
                    for (l_682 = 0; (l_682 >= 18); l_682 = safe_add_func_uint16_t_u_u(l_682, 1))
                    { 
                        uint16_t l_900 = 7UL;
                        l_900 |= (safe_lshift_func_int16_t_s_u(0xB92CL, 9));
                        l_908 = ((((+l_769) & (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((p_35 & __builtin_ia32_crc32qi(p_35, l_834.f1)), 5)), 0x9A3EL))) > l_900) >= (l_907 | (l_743[4][0][1].f0 != p_35)));
                        l_701[3] = (((p_35 != (+p_35)) <= (safe_rshift_func_uint16_t_u_u(p_35, 6))) > (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_35 >= (safe_sub_func_uint16_t_u_u(l_743[4][0][1].f1, (safe_mul_func_int16_t_s_s(1L, (safe_sub_func_uint16_t_u_u((__builtin_ffs((((((l_758.f1 | p_35) & 0x431AL) && 0x0E7FDFFEL) && p_35) != l_922)) != 0UL), p_35))))))), 14)), (-5L))));
                    }
                    for (l_710 = 4; (l_710 >= 0); l_710 -= 1)
                    { 
                        int i;
                        l_701[l_710] |= (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((p_35 || p_35))), (l_774[0] <= (l_834.f0 & ((safe_sub_func_uint32_t_u_u(l_908, p_35)) != p_35)))));
                        l_701[l_710] = l_907;
                        l_706.f1 &= ((safe_add_func_uint32_t_u_u((0x8624E012L >= l_876), ((safe_rshift_func_uint16_t_u_s((0xC4510639L != (l_932[0] && ((safe_mod_func_int16_t_s_s(p_35, (safe_lshift_func_uint16_t_u_s((p_35 > (l_743[4][0][1].f1 && ((p_35 != (safe_mod_func_uint32_t_u_u(l_701[0], p_35))) < l_932[0]))), l_743[4][0][1].f0)))) || p_35))), 2)) & p_35))) & l_705.f0);
                    }
                }
                else
                { 
                    float l_943 = 0x2.D8E9D6p-46;
                    l_758 = func_67(((l_743[4][0][1].f1 ^ p_35) <= p_35), l_876, p_35, l_724);
                    if (((safe_sub_func_uint32_t_u_u(p_35, (__builtin_parityl(p_35) > __builtin_clzll(p_35)))) && l_769))
                    { 
                        l_743[4][0][1].f1 &= 0x20C9A1C3L;
                        l_743[4][0][1] = l_758;
                        l_705 = l_706;
                        l_876 = p_35;
                    }
                    else
                    { 
                        return l_725;
                    }
                    l_706 = l_705;
                }
                if (p_35)
                    break;
            }
            if (((-1L) != p_35))
            { 
                for (l_683 = 1; (l_683 >= 0); l_683 -= 1)
                { 
                    int i, j;
                    l_701[2] &= (safe_lshift_func_int16_t_s_s(((l_860[l_683][(l_683 + 3)] == (l_876 | (safe_sub_func_uint16_t_u_u(l_706.f0, p_35)))) != (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((__builtin_parityll(p_35) && 0L), (safe_mul_func_int16_t_s_s(l_774[3], l_860[l_683][(l_683 + 3)])))) | 2UL), 7L))), l_743[4][0][1].f1));
                }
                if (p_35)
                    continue;
            }
            else
            { 
                l_721 = (safe_unary_minus_func_uint32_t_u(p_35));
            }
        }
    }
    else
    { 
        int8_t l_958 = 0x18L;
        float l_968 = (-0x1.0p-1);
        struct S0 l_969[9][4][7] = {{{{0xC0F73177L,9L},{8UL,0xE2B411CCL},{9UL,0xDAA8B29AL},{7UL,0x2A99C62AL},{0xEF8F7B1BL,1L},{0x1C58AF66L,-1L},{18446744073709551612UL,0xA1F781BDL}},{{0x18108C6CL,2L},{0x5AA7B6D3L,-7L},{18446744073709551615UL,0x3AD817F4L},{0xA9962E4EL,0L},{0x3116A95CL,0xA670B657L},{18446744073709551615UL,0xB744B184L},{0x2726041DL,0x5454DB5FL}},{{1UL,1L},{0x83E7B001L,0x56ACD504L},{0x323593E1L,0x2B13E93EL},{0xBB633B86L,0x3903C2F4L},{0xC8D605FAL,0xBB6A1B2FL},{0x2D125B2CL,1L},{18446744073709551615UL,1L}},{{8UL,0xBAA5D66FL},{0x83B3CFA6L,0x96726382L},{7UL,0x2A99C62AL},{18446744073709551612UL,0xB9B76EF1L},{0x1E7108FEL,-1L},{1UL,2L},{6UL,0x3863A581L}}},{{{0UL,0xC06AFF0AL},{18446744073709551615UL,0x3AD817F4L},{0xD651A1CAL,0x6CB992D4L},{18446744073709551612UL,0xB9B76EF1L},{0xE610815AL,0L},{0x915D3B6BL,0xE18B9751L},{0xE7A2DE49L,3L}},{{0x83E7B001L,0x56ACD504L},{0x117A2FB8L,-10L},{18446744073709551612UL,0xA1F781BDL},{0xBB633B86L,0x3903C2F4L},{18446744073709551612UL,0x9E4C2049L},{1UL,0L},{18446744073709551615UL,0xE0F571BCL}},{{9UL,0xDAA8B29AL},{3UL,9L},{18446744073709551615UL,-2L},{0xA9962E4EL,0L},{18446744073709551612UL,0x0F5CAD14L},{18446744073709551615UL,-9L},{18446744073709551615UL,0xA41210D8L}},{{0xAB865A33L,-4L},{0xEF8F7B1BL,1L},{0UL,0x775ABB0DL},{7UL,0x2A99C62AL},{0x64256A23L,0x4745621EL},{18446744073709551615UL,-1L},{0xC8D605FAL,0xBB6A1B2FL}}},{{{0UL,-6L},{18446744073709551606UL,0x7E804C97L},{1UL,2L},{0x117A2FB8L,-10L},{0x56175A06L,0x6F03E443L},{0x58D76CE1L,-1L},{0xE89F4D29L,0L}},{{0xD651A1CAL,0x6CB992D4L},{0x9F57BDBCL,0x59DD10E9L},{1UL,0xEF1D50BCL},{0xAB865A33L,-4L},{18446744073709551606UL,0L},{1UL,-1L},{0x56175A06L,0x6F03E443L}},{{0UL,0x775ABB0DL},{0xE0707CC5L,0xCCA4D98FL},{0x28BD1A89L,0x59D0B230L},{0x015C049AL,1L},{0x64D9971CL,4L},{0x015C049AL,1L},{0x28BD1A89L,0x59D0B230L}},{{0xC0F73177L,9L},{0xC0F73177L,9L},{0x915D3B6BL,0xE18B9751L},{8UL,0xBAA5D66FL},{18446744073709551615UL,8L},{4UL,0x95CBFC47L},{5UL,0L}}},{{{0x72A525B8L,5L},{0xDCF461D9L,0x4190BEE1L},{18446744073709551615UL,1L},{6UL,-1L},{0x3116A95CL,0xA670B657L},{6UL,0x3863A581L},{0x238A3AFBL,-10L}},{{1UL,0L},{6UL,0x7A0A830FL},{0xAB865A33L,-4L},{0x9694CCF3L,-10L},{18446744073709551615UL,8L},{0xE0707CC5L,0xCCA4D98FL},{7UL,-10L}},{{0UL,0x0CDE7990L},{0x83B3CFA6L,0x96726382L},{8UL,0L},{0x1C58AF66L,-1L},{0x64D9971CL,4L},{0UL,0x600F8097L},{0x6C18C555L,1L}},{{0xE7A2DE49L,3L},{0xA9962E4EL,0L},{0UL,0x5B364CA1L},{0xE89F4D29L,0L},{18446744073709551606UL,0L},{0x915D3B6BL,0xE18B9751L},{0x8E20A72EL,0x624121A9L}}},{{{2UL,0xAAA3648FL},{1UL,-1L},{1UL,-1L},{0x1E7108FEL,-1L},{0x56175A06L,0x6F03E443L},{1UL,0xFDE09DD2L},{8UL,0xE2B411CCL}},{{18446744073709551615UL,0x3AD817F4L},{18446744073709551612UL,0x9E4C2049L},{18446744073709551615UL,-2L},{18446744073709551612UL,0xC012EE3EL},{0x64256A23L,0x4745621EL},{0x38826B9CL,0L},{0UL,8L}},{{0x9F57BDBCL,0x59DD10E9L},{0x38826B9CL,0L},{18446744073709551615UL,-1L},{0UL,-6L},{18446744073709551612UL,0x0F5CAD14L},{1UL,0x61C98A94L},{0xC8D605FAL,0xBB6A1B2FL}},{{1UL,0xEF1D50BCL},{0x8E20A72EL,0x624121A9L},{0x0F0DC538L,0x13F8B866L},{0x075B4BFFL,-2L},{18446744073709551615UL,0xF352837EL},{0x323593E1L,0x2B13E93EL},{0x8A89D88AL,0x72C51EE4L}}},{{{18446744073709551612UL,0xA1F781BDL},{0x39AB6901L,0x51F327FAL},{18446744073709551615UL,-1L},{0xC1FD3D40L,0x90696210L},{0x18108C6CL,2L},{18446744073709551615UL,1L},{0UL,8L}},{{7UL,0x2A99C62AL},{18446744073709551606UL,0L},{1UL,4L},{0xA9962E4EL,0L},{0xEF8F7B1BL,1L},{18446744073709551615UL,1L},{0xE0E265F0L,0L}},{{18446744073709551615UL,0xA41210D8L},{0x25D60DEEL,4L},{9UL,9L},{0x015C049AL,1L},{1UL,2L},{0x323593E1L,0x2B13E93EL},{5UL,0xE90327B6L}},{{8UL,0L},{18446744073709551615UL,0x3AD817F4L},{18446744073709551615UL,-2L},{0x8C0208C9L,0L},{6UL,0x7A0A830FL},{0UL,0x0CDE7990L},{0x2D125B2CL,1L}}},{{{0x6C18C555L,1L},{3UL,9L},{3UL,-1L},{0x7DFD803CL,0L},{0x0F0DC538L,0x13F8B866L},{1UL,1L},{18446744073709551615UL,-9L}},{{0x5AA7B6D3L,-7L},{18446744073709551614UL,0xC9A6BDC4L},{1UL,-1L},{0UL,0L},{0x38826B9CL,0L},{5UL,0L},{7UL,0x2A99C62AL}},{{6UL,0L},{0x56175A06L,0x6F03E443L},{6UL,0x3863A581L},{18446744073709551615UL,0xE8B71A16L},{0UL,0x775ABB0DL},{18446744073709551615UL,0xE0F571BCL},{3UL,-1L}},{{0x8C0208C9L,0L},{18446744073709551615UL,1L},{8UL,0L},{0UL,-9L},{18446744073709551612UL,0xB9B76EF1L},{0x6C18C555L,1L},{18446744073709551612UL,0xB9B76EF1L}}},{{{3UL,9L},{0xE89F4D29L,0L},{0xE89F4D29L,0L},{3UL,9L},{18446744073709551615UL,-1L},{1UL,0L},{0x323593E1L,0x2B13E93EL}},{{0xB6BBBE53L,0xB4855CC9L},{0UL,0x600F8097L},{0x1C5199DEL,0x8BAFF07BL},{0xC9A3F454L,-1L},{1UL,-1L},{8UL,0L},{1UL,2L}},{{0x117A2FB8L,-10L},{0xE0E265F0L,0L},{1UL,-1L},{0x83E7B001L,0x56ACD504L},{18446744073709551615UL,0xA41210D8L},{18446744073709551615UL,0xE8B71A16L},{0x323593E1L,0x2B13E93EL}},{{6UL,0x3863A581L},{18446744073709551607UL,-3L},{18446744073709551615UL,0xF7666D58L},{0xC1FD3D40L,0x90696210L},{5UL,0L},{18446744073709551615UL,0x3AD817F4L},{18446744073709551612UL,0xB9B76EF1L}}},{{{18446744073709551612UL,0x0F5CAD14L},{1UL,2L},{0xC87681B6L,0xA88C1C71L},{2UL,0xAAA3648FL},{0xC8D605FAL,0xBB6A1B2FL},{0xA9962E4EL,0L},{3UL,-1L}},{{18446744073709551615UL,0xA41210D8L},{0x58D76CE1L,-1L},{18446744073709551612UL,0x9E4C2049L},{0xDCF461D9L,0x4190BEE1L},{0UL,0x600F8097L},{0xAB865A33L,-4L},{7UL,0x2A99C62AL}},{{0UL,-6L},{18446744073709551612UL,0xC012EE3EL},{0x8C0208C9L,0L},{18446744073709551615UL,0xE0F571BCL},{6UL,0x7A0A830FL},{8UL,0xBAA5D66FL},{18446744073709551615UL,-9L}},{{0x18108C6CL,2L},{0xC0F73177L,9L},{0xB6BBBE53L,0xB4855CC9L},{0x16085072L,-1L},{0xAED4DB10L,3L},{18446744073709551606UL,0L},{0x2D125B2CL,1L}}}};
        int32_t l_1023 = 0xC8862687L;
        int32_t l_1026 = 0xE767E277L;
        int32_t l_1027 = (-7L);
        int32_t l_1028 = 1L;
        float l_1191 = 0x1.Cp+1;
        int32_t l_1194 = 7L;
        int i, j, k;
        if (((safe_mul_func_uint16_t_u_u(((func_63(func_67(p_35, p_35, l_722, ((l_957 || l_958) != (__builtin_ctz(p_35) && (!((safe_mul_func_int16_t_s_s((p_35 <= (safe_sub_func_int32_t_s_s(l_885[2], 0L))), l_714)) ^ (-9L)))))), p_35, p_35) < p_35) | p_35), l_710)) >= p_35))
        { 
            int8_t l_964 = 0xE0L;
            float l_1003[7] = {0x4.48FBFEp+99,0x9.8p+1,0x4.48FBFEp+99,0x4.48FBFEp+99,0x9.8p+1,0x4.48FBFEp+99,0x4.48FBFEp+99};
            int32_t l_1033 = 1L;
            int i;
            l_969[3][1][5] = func_67(p_35, p_35, l_964, ((p_35 ^ (safe_add_func_int16_t_s_s(l_860[0][4], 0x0C22L))) || (safe_unary_minus_func_uint16_t_u((l_710 == l_964)))));
            l_682 = p_35;
            for (l_721 = 0; (l_721 >= 8); l_721 = safe_add_func_uint16_t_u_u(l_721, 1))
            { 
                uint16_t l_978 = 0x06CDL;
                uint16_t l_990 = 0xB62CL;
                int32_t l_994 = 0x80E1EB9FL;
                if ((6UL == (safe_rshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_716, l_720)) == (safe_mod_func_uint32_t_u_u(l_978, __builtin_parityl(l_720)))), p_35))))
                { 
                    uint16_t l_986 = 0UL;
                    int16_t l_989[8][2] = {{0x0017L,0x0017L},{0x7DC5L,0x0017L},{0x0017L,0x7DC5L},{0x0017L,0x0017L},{0x7DC5L,0x0017L},{0x0017L,0x7DC5L},{0x0017L,0x0017L},{0x7DC5L,0x0017L}};
                    int i, j;
                    for (l_964 = 1; (l_964 < (-1)); --l_964)
                    { 
                        float l_985 = 0x0.DC6A11p-71;
                        int32_t l_991[1][4] = {{0L,0L,0L,0L}};
                        struct S0 l_1006 = {0x91879543L,1L};
                        int i, j;
                        l_991[0][2] = (0UL > (((safe_mod_func_uint16_t_u_u(func_36(l_969[3][1][5].f0, p_35, (safe_lshift_func_uint16_t_u_s(((((l_986 || ((((((safe_sub_func_uint16_t_u_u(l_989[6][0], p_35)) > l_964) || p_35) || 1UL) < p_35) == l_990)) & l_991[0][2]) >= 4294967292UL) <= 0x90809C57L), 1))), l_969[3][1][5].f0)) == p_35) & p_35));
                        l_724 |= func_94((safe_add_func_int32_t_s_s(p_35, (l_964 != p_35))), func_81(p_35, l_994, l_969[3][1][5].f0, l_986), (((0xD8B4L <= p_35) ^ 4294967295UL) == (-3L)));
                        l_991[0][3] &= 0x0AE32A32L;
                        l_1006 = func_67(__builtin_ffs(l_969[3][1][5].f0), l_989[6][0], (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_991[0][2] < (l_958 || 5UL)), ((l_989[4][1] || (l_958 <= (safe_mul_func_int16_t_s_s(0x8AA0L, p_35)))) >= l_990))), l_958)), 0xEE14L)), p_35)), l_964);
                    }
                    for (l_861.f0 = 0; (l_861.f0 <= 10); l_861.f0 = safe_add_func_uint32_t_u_u(l_861.f0, 5))
                    { 
                        l_710 = (safe_add_func_float_f_f(l_958, (safe_add_func_float_f_f((safe_mul_func_float_f_f((!(0xD.4AD454p-66 != (l_725 != func_77((safe_sub_func_int16_t_s_s(p_35, (((p_35 ^ p_35) ^ ((+8L) >= (l_994 < ((!l_958) != p_35)))) >= l_964))), p_35, p_35)))), (-0x4.6p+1))), p_35))));
                    }
                    l_969[7][0][0] = func_67(func_36(__builtin_ia32_crc32qi((p_35 == l_994), (~(func_92(l_861) <= 0xE1B10806L))), l_994, l_860[0][4]), l_978, p_35, l_990);
                    if (l_1023)
                        break;
                }
                else
                { 
                    uint16_t l_1030[8][6][5] = {{{0UL,0xA57CL,65535UL,65527UL,0xFBD5L},{9UL,0UL,1UL,1UL,0x73AEL},{0xA57CL,1UL,1UL,1UL,6UL},{65532UL,5UL,2UL,5UL,65532UL},{65535UL,2UL,0x5908L,2UL,0UL},{0xE469L,65530UL,65532UL,0x0A12L,0x2F2CL}},{{0xA4F9L,6UL,0x7B35L,2UL,0UL},{0x093CL,0x0A12L,0x51D0L,65535UL,65532UL},{0UL,0UL,0xA57CL,65535UL,6UL},{0x51D0L,0x4BB2L,0x995BL,0xE469L,65531UL},{0UL,0UL,2UL,0xC5DAL,2UL},{2UL,2UL,1UL,0x73AEL,0xE822L}},{{1UL,0xDE43L,0x7B35L,0UL,0x5908L},{65535UL,0x4BB2L,0UL,1UL,0x6B31L},{0xC5DAL,0xDE43L,65535UL,1UL,65527UL},{0x0043L,2UL,1UL,9UL,0x093CL},{65527UL,0UL,0UL,0xFBD5L,65535UL},{9UL,1UL,0x51D0L,65529UL,1UL}},{{0xF0AEL,0UL,0UL,0xF0AEL,0UL},{0x225CL,1UL,0x093CL,0UL,65535UL},{0xDE43L,0xFBD5L,0xA4F9L,6UL,0x7B35L},{0x51D0L,0xAEB3L,0xE469L,0UL,0x4BB2L},{65527UL,65527UL,65535UL,0xF0AEL,6UL},{1UL,0x995BL,65532UL,65529UL,0UL}},{{0x4AB9L,65527UL,0xA57CL,0xFBD5L,1UL},{0x0A12L,5UL,9UL,9UL,5UL},{0x5908L,1UL,0UL,1UL,0xF0AEL},{0xD2D7L,65530UL,0UL,1UL,0xE469L},{1UL,1UL,65527UL,0UL,2UL},{0xD2D7L,0UL,0UL,0x73AEL,0x2F2CL}},{{0x5908L,0x074EL,65535UL,0xC5DAL,0xA8B8L},{0x0A12L,65532UL,65530UL,0xE469L,0xBD3BL},{0x4AB9L,2UL,65535UL,65535UL,65535UL},{1UL,0x6B31L,1UL,0UL,5UL},{65527UL,65531UL,6UL,65527UL,0x074EL},{0x51D0L,0x73AEL,0x0043L,1UL,0x6E7BL}},{{0xDE43L,1UL,6UL,0x074EL,0UL},{0x225CL,9UL,1UL,0x995BL,65532UL},{0xF0AEL,6UL,65535UL,0UL,65529UL},{9UL,5UL,65530UL,0x2F2CL,0xD2D7L},{65527UL,0x2F02L,65535UL,0x2F02L,65527UL},{0x0043L,0UL,0UL,0x6B31L,2UL}},{{0xC5DAL,0x4AB9L,65527UL,0xA8B8L,1UL},{65535UL,0xD2D7L,0UL,0UL,2UL},{1UL,0xA8B8L,0UL,0xA647L,65527UL},{2UL,1UL,9UL,0x093CL,0xD2D7L},{0UL,65535UL,0xA57CL,0x7B35L,65529UL},{0xE822L,0xE12BL,65532UL,0UL,0UL}}};
                    int i, j, k;
                    for (l_861.f0 = (-4); (l_861.f0 == 47); l_861.f0 = safe_add_func_uint16_t_u_u(l_861.f0, 1))
                    { 
                        int8_t l_1029 = 0x86L;
                        --l_1030[5][3][2];
                        return l_978;
                    }
                }
            }
            l_1033 = (l_1023 <= 0x4.240671p+73);
        }
        else
        { 
            uint32_t l_1038[6][8] = {{0x737ED513L,0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L},{0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L,0x737ED513L},{0x2E2ECF89L,0x2E2ECF89L,0x0FD35FB4L,0x2E2ECF89L,0x2E2ECF89L,0x0FD35FB4L,0x2E2ECF89L,0x2E2ECF89L},{0x737ED513L,0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L},{0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L,0x737ED513L,0x737ED513L,0x2E2ECF89L,0x737ED513L},{0x2E2ECF89L,0x2E2ECF89L,0x0FD35FB4L,0x2E2ECF89L,0x2E2ECF89L,0x0FD35FB4L,0x2E2ECF89L,0x2E2ECF89L}};
            struct S0 l_1053 = {1UL,1L};
            int32_t l_1060[1][3][9] = {{{(-1L),0x2699571BL,(-1L),(-1L),0x2699571BL,(-1L),(-1L),0x2699571BL,(-1L)},{(-1L),0x2699571BL,(-1L),(-1L),0x2699571BL,(-1L),(-1L),0x2699571BL,(-1L)},{(-1L),0x2699571BL,(-1L),(-1L),0x2699571BL,(-1L),(-1L),0x2699571BL,(-1L)}}};
            int32_t l_1074 = 0xC8BF2B7BL;
            int32_t l_1092 = 0x2FD1893BL;
            int32_t l_1094 = 0x83D280F6L;
            int32_t l_1095 = 0x4F3ED500L;
            int32_t l_1096 = 0L;
            float l_1097 = 0x2.B01267p-44;
            int32_t l_1101 = 0x7E980880L;
            int i, j, k;
            for (l_710 = (-12); (l_710 < 0); l_710 = safe_add_func_uint32_t_u_u(l_710, 1))
            { 
                uint16_t l_1045 = 65535UL;
                if ((safe_lshift_func_int16_t_s_s(((l_860[0][4] <= 0xAA3CEDFDL) >= l_1038[4][3]), 12)))
                { 
                    int16_t l_1039 = 0x9D03L;
                    int32_t l_1040[7][4][3] = {{{(-1L),0xA30563D9L,(-1L)},{0xBF48F67AL,0x5632B50CL,0xC7AE4957L},{0xC7AE4957L,0x5632B50CL,0xBF48F67AL},{(-1L),0xA30563D9L,(-1L)}},{{8L,0x869FF3E0L,0xBF48F67AL},{0x24957B2FL,0xFDCE7FA0L,0xC7AE4957L},{0x24957B2FL,0L,(-1L)},{8L,6L,8L}},{{(-1L),0L,0x24957B2FL},{0xC7AE4957L,0xFDCE7FA0L,0x24957B2FL},{0xBF48F67AL,0x869FF3E0L,8L},{(-1L),0xA30563D9L,(-1L)}},{{0xBF48F67AL,0x5632B50CL,0xC7AE4957L},{0xC7AE4957L,0x5632B50CL,0xBF48F67AL},{(-1L),0xA30563D9L,(-1L)},{8L,0x869FF3E0L,0xBF48F67AL}},{{0x24957B2FL,0xFDCE7FA0L,0xC7AE4957L},{0x24957B2FL,0L,(-1L)},{8L,6L,8L},{(-1L),0L,0x24957B2FL}},{{0xC7AE4957L,0xFDCE7FA0L,0x24957B2FL},{0xBF48F67AL,0x869FF3E0L,8L},{(-1L),0xA30563D9L,(-1L)},{0xBF48F67AL,0x5632B50CL,0xC7AE4957L}},{{0xC7AE4957L,0x5632B50CL,0xBF48F67AL},{(-1L),0xA30563D9L,(-1L)},{8L,0x869FF3E0L,0xBF48F67AL},{0x24957B2FL,0xFDCE7FA0L,0xC7AE4957L}}};
                    int i, j, k;
                    l_1040[3][2][1] = ((p_35 < (l_1039 != (l_1040[6][1][0] == (safe_mul_func_float_f_f(((safe_mul_func_float_f_f((p_35 >= l_705.f0), (p_35 > l_1045))) < (safe_mul_func_float_f_f(0x9.D4236Cp-36, (((((safe_mul_func_float_f_f(((l_957 < l_958) < 0x1.3p-1), l_682)) >= (-0x1.Cp-1)) < (-0x1.Ap-1)) < p_35) > l_1045)))), l_1040[1][3][2]))))) <= p_35);
                }
                else
                { 
                    for (l_714 = (-13); (l_714 == 5); l_714 = safe_add_func_int32_t_s_s(l_714, 1))
                    { 
                        return l_1038[4][3];
                    }
                }
            }
            if (__builtin_popcountl(p_35))
            { 
                uint16_t l_1056[3][4] = {{0x52BAL,0x52BAL,0x52BAL,0x52BAL},{0x52BAL,0x52BAL,0x52BAL,0x52BAL},{0x52BAL,0x52BAL,0x52BAL,0x52BAL}};
                int32_t l_1062 = (-3L);
                struct S0 l_1079 = {18446744073709551615UL,0L};
                int32_t l_1086 = 0L;
                int32_t l_1087 = 0xC598602CL;
                int32_t l_1089 = (-1L);
                int32_t l_1090 = 0x0D6D159AL;
                int32_t l_1091 = 0x23509307L;
                int32_t l_1093 = 0L;
                int32_t l_1098 = 0xCEB2A54EL;
                int32_t l_1099[4];
                uint16_t l_1135 = 0x6A70L;
                int i, j;
                for (i = 0; i < 4; i = i + 1)
                    l_1099[i] = 0xA87584A8L;
                if (p_35)
                { 
                    uint32_t l_1052 = 0xC961640DL;
                    int32_t l_1084 = 1L;
                    int32_t l_1100 = (-10L);
                    int32_t l_1103 = 0x87A94EEAL;
                    if (l_1052)
                    { 
                        int8_t l_1057 = (-9L);
                        l_861 = l_1053;
                        l_724 = (safe_mul_func_float_f_f(p_35, func_94(l_1056[0][3], l_1057, ((safe_add_func_uint16_t_u_u(p_35, l_1052)) | __builtin_ctzll(l_1060[0][0][3])))));
                    }
                    else
                    { 
                        int32_t l_1061 = 0x9B6BBC67L;
                        int32_t l_1063 = 0x720D5C2AL;
                        l_1061 = l_969[3][1][5].f0;
                        l_1062 |= l_1052;
                        l_1063 ^= 0x29DB73BAL;
                        l_1053.f1 |= func_92(l_969[3][1][5]);
                    }
                    l_969[0][1][2] = l_969[3][1][5];
                    if ((((safe_rshift_func_int16_t_s_u(p_35, 5)) < ((safe_add_func_uint32_t_u_u(func_81((((safe_mod_func_int32_t_s_s(l_716, l_1060[0][0][3])) & l_969[3][1][5].f0) >= (safe_mod_func_uint32_t_u_u(l_1074, l_1023))), (~4294967295UL), p_35, l_1060[0][0][6]), l_1052)) != 65534UL)) >= l_1052))
                    { 
                        uint32_t l_1076 = 18446744073709551615UL;
                        int32_t l_1085 = 0x84792E24L;
                        int32_t l_1088 = (-1L);
                        int32_t l_1102[3];
                        int i;
                        for (i = 0; i < 3; i = i + 1)
                            l_1102[i] = 0x3DC0177AL;
                        l_1062 = __builtin_bswap32(l_1076);
                        l_1053.f1 = (safe_rshift_func_int16_t_s_u(((p_35 | (func_92(l_1079) == (0x51B0FE06L <= (l_1052 || (safe_mul_func_int16_t_s_s((1L | (p_35 == (safe_mod_func_uint16_t_u_u((l_1053.f0 > l_1052), (-6L))))), p_35)))))) != p_35), 12));
                        l_1084 = l_1076;
                        --l_1104;
                    }
                    else
                    { 
                        float l_1118[10] = {0x2.A0184Ap-95,(-0x1.Cp+1),0x2.A0184Ap-95,0x2.A0184Ap-95,(-0x1.Cp+1),0x2.A0184Ap-95,0x2.A0184Ap-95,(-0x1.Cp+1),0x2.A0184Ap-95,0x2.A0184Ap-95};
                        int32_t l_1122[4][2][2] = {{{1L,1L},{(-4L),1L}},{{1L,(-4L)},{1L,1L}},{{(-4L),(-4L)},{(-4L),7L}},{{(-4L),(-4L)},{7L,(-4L)}}};
                        int i, j, k;
                        l_1103 = ((((((((safe_sub_func_float_f_f((__builtin_ctzll((l_1056[0][3] && p_35)) != (!(((p_35 > (safe_add_func_float_f_f((safe_add_func_float_f_f(p_35, (safe_mul_func_float_f_f(l_1038[4][3], 0x8.0p+1)))), 0x5.9p+1))) == (safe_add_func_float_f_f(l_1118[9], 0xD.A22097p+70))) < 0x0.1p+1))), p_35)) <= p_35) != 0x2.36C8D0p-79) > l_1027) != l_1094) <= l_1056[0][3]) <= 0x5.9D1262p+14) > p_35);
                        l_1089 = (~(safe_mod_func_uint32_t_u_u(l_1122[3][1][1], (l_1122[1][1][1] & (p_35 != 0x1E2BE056L)))));
                    }
                    l_1028 = l_1087;
                }
                else
                { 
                    l_969[2][1][2] = l_969[3][1][5];
                    for (l_705.f0 = 0; (l_705.f0 <= 30); l_705.f0 = safe_add_func_uint16_t_u_u(l_705.f0, 4))
                    { 
                        struct S0 l_1125[1][6] = {{{0UL,0x50CB6D04L},{0UL,0x50CB6D04L},{0UL,0x50CB6D04L},{0UL,0x50CB6D04L},{0UL,0x50CB6D04L},{0UL,0x50CB6D04L}}};
                        int i, j;
                        l_861 = l_1125[0][0];
                    }
                }
                if ((safe_mul_func_int16_t_s_s((p_35 == p_35), 6UL)))
                { 
                    struct S0 l_1130 = {0x6C48D094L,0L};
                    for (l_710 = 0; (l_710 >= 22); l_710 = safe_add_func_uint16_t_u_u(l_710, 1))
                    { 
                        int32_t l_1150 = 0L;
                        int32_t l_1151 = 0x5423119AL;
                        l_1151 &= (func_63(l_1130, l_1130.f0, ((((safe_lshift_func_int16_t_s_s(__builtin_ffsll((safe_mul_func_int16_t_s_s((l_1135 | ((safe_add_func_int32_t_s_s(l_1094, 9L)) >= (p_35 == (safe_mod_func_uint32_t_u_u(l_1038[1][7], (safe_mul_func_int16_t_s_s(__builtin_ctzl(((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(p_35, (l_1060[0][0][3] & l_725))), 5)), (-7L))), 12)) == l_1026) & l_724) == l_1130.f0)), 0x90BCL))))))), l_1130.f1))), 13)) & l_1150) < 2UL) & 0x17C8D0FFL)) <= 65534UL);
                    }
                    l_1091 = (__builtin_parity(__builtin_clzl(p_35)) | (l_1130.f1 && (l_1079.f0 < l_1038[5][5])));
                    for (l_1104 = (-20); (l_1104 == 36); l_1104 = safe_add_func_int16_t_s_s(l_1104, 1))
                    { 
                        l_720 ^= ((safe_sub_func_uint16_t_u_u(l_1038[4][3], l_1038[2][6])) != (!((safe_lshift_func_int16_t_s_s(l_1130.f0, l_1130.f1)) <= 0x135C3913L)));
                        return p_35;
                    }
                    for (l_1074 = 0; (l_1074 <= 7); l_1074 = safe_add_func_int32_t_s_s(l_1074, 1))
                    { 
                        int16_t l_1161[2][3][6] = {{{0xDC2FL,0xE99EL,1L,0xE99EL,0xDC2FL,0xBBA7L},{0xE99EL,0xDC2FL,0xBBA7L,0xBBA7L,0xDC2FL,0xE99EL},{1L,0xE99EL,0xBBDCL,0xDC2FL,0xBBDCL,0xE99EL}},{{0xBBDCL,1L,0xBBA7L,1L,1L,0xBBA7L},{0xBBDCL,0xBBDCL,1L,0xDC2FL,(-1L),0xDC2FL},{1L,0xBBDCL,1L,0xBBA7L,1L,1L}}};
                        struct S0 l_1172 = {1UL,0L};
                        int i, j, k;
                        l_1172 = func_67(l_1161[1][0][4], ((l_1130.f1 || p_35) > ((safe_rshift_func_uint16_t_u_u(0xABB8L, 9)) | (((((safe_add_func_int32_t_s_s((l_1130.f1 < 7L), (l_1161[1][0][4] || (safe_mul_func_uint16_t_u_u(0UL, (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_1038[4][3] ^ p_35) || 1L), 5)), 65535UL))))))) <= p_35) > 0x81A8L) & l_1056[0][2]) & 0xAB8120F3L))), l_1130.f0, p_35);
                        if (p_35)
                            continue;
                        l_1098 |= 0x1E57C61EL;
                    }
                }
                else
                { 
                    uint16_t l_1173 = 0x4C0CL;
                    l_1099[0] ^= (((__builtin_clz(__builtin_ffsl(((l_1173 | (((2L || ((-1L) != ((p_35 > p_35) | (l_1095 && (__builtin_parityl(((func_92(func_67(p_35, p_35, (((safe_add_func_uint16_t_u_u((l_1090 == 0L), l_957)) ^ l_1023) || p_35), l_1178)) & l_1173) > l_1056[0][3])) != 0x6904F968L))))) == 1UL) > l_1098)) != p_35))) >= p_35) == l_1079.f1) || 65527UL);
                    for (l_725 = 7; (l_725 >= 16); l_725 = safe_add_func_int32_t_s_s(l_725, 3))
                    { 
                        return p_35;
                    }
                }
            }
            else
            { 
                struct S0 l_1181 = {0xE281CD0AL,0x60680B24L};
                int32_t l_1237 = (-9L);
                l_705 = l_1181;
                if (l_1026)
                { 
                    return p_35;
                }
                else
                { 
                    int16_t l_1209[8] = {0x7DFAL,0x7DFAL,0x7DFAL,0x7DFAL,0x7DFAL,0x7DFAL,0x7DFAL,0x7DFAL};
                    int32_t l_1238 = 0xC1B50F0AL;
                    struct S0 l_1253 = {0x7D13F2F0L,0L};
                    int i;
                    for (l_1026 = 18; (l_1026 < (-16)); l_1026 = safe_sub_func_uint32_t_u_u(l_1026, 5))
                    { 
                        int32_t l_1212 = 1L;
                        l_721 = (func_57((__builtin_ffs((0UL != (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(0xA31CL, ((0x00C6E173L <= p_35) >= l_1190))), 1)), ((p_35 > (-1L)) != (((l_1101 & (l_722 <= p_35)) < (-8L)) > 0L)))))) > 0x52611417L), p_35, l_1181.f0) >= (-0x1.3p+1));
                        l_1181.f1 = ((safe_sub_func_float_f_f(func_63(l_1181, p_35, (p_35 | 0xA077L)), l_1194)) >= p_35);
                        l_1027 = func_94(((p_35 ^ (safe_rshift_func_uint16_t_u_u((2UL || (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(p_35, (safe_lshift_func_int16_t_s_s(l_1181.f0, 2)))) || (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((p_35 != (safe_rshift_func_uint16_t_u_u(__builtin_ctzll(l_1209[7]), 6))) == p_35), 0)), ((safe_mul_func_uint16_t_u_u((((l_1094 | p_35) == l_1053.f1) && p_35), l_1212)) && 0xAEBBL)))) | l_714), l_1212))), 11))) > 65535UL), p_35, l_1092);
                        l_1096 &= (((+(l_1212 >= (safe_lshift_func_uint16_t_u_u(0x67B4L, p_35)))) <= l_1209[1]) != l_1181.f1);
                    }
                    for (l_1101 = 0; (l_1101 == 21); l_1101 = safe_add_func_uint16_t_u_u(l_1101, 5))
                    { 
                        l_1028 = (safe_add_func_float_f_f(p_35, (((safe_sub_func_float_f_f(l_1095, ((safe_sub_func_float_f_f((safe_sub_func_float_f_f(((__builtin_clzl(((safe_lshift_func_int16_t_s_u(p_35, 13)) || p_35)) > (!(safe_sub_func_float_f_f(p_35, 0x0.Dp-1)))) > func_81(p_35, ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(1UL, l_1237)), p_35)), p_35)) >= 0L), p_35, p_35)), p_35)), 0xF.138E33p+3)) < l_1237))) == 0x1.3p-1) > p_35)));
                        l_1053 = l_1181;
                        l_1238 ^= 0xD1057974L;
                    }
                    l_1238 = ((safe_sub_func_float_f_f(((safe_add_func_float_f_f((safe_add_func_float_f_f(0x7.55B954p+47, ((p_35 <= p_35) < (safe_mul_func_float_f_f(0x0.Ep-1, ((0x9.6B6A6Dp-34 != (((((safe_add_func_float_f_f((safe_add_func_float_f_f(p_35, 0x1.Bp+1)), l_1092)) < (safe_add_func_float_f_f((l_969[3][1][5].f0 <= p_35), p_35))) > 0xC.90803Fp+89) != p_35) == l_716)) > p_35)))))), l_1181.f1)) > p_35), l_1238)) != 0x1.B355F2p-30);
                    l_705 = l_1253;
                }
                l_1256 = (safe_add_func_float_f_f(p_35, (0x2.3p-1 <= p_35)));
            }
            return p_35;
        }
        return p_35;
    }
    return p_35;
}




static int8_t  func_36(uint16_t  p_37, int32_t  p_38, uint32_t  p_39)
{ 
    int16_t l_678 = 0xC7F4L;
    return l_678;
}




static int32_t  func_57(int8_t  p_58, uint32_t  p_59, uint16_t  p_60)
{ 
    float l_521 = 0x1.Fp-1;
    int32_t l_522[1];
    float l_549 = (-0x4.7p-1);
    int32_t l_604 = 0xA8423251L;
    struct S0 l_653 = {1UL,6L};
    uint32_t l_676 = 4294967295UL;
    int i;
    for (i = 0; i < 1; i = i + 1)
        l_522[i] = 6L;
    if (__builtin_ffsll(l_522[0]))
    { 
        int32_t l_541 = 0x679E9892L;
        uint32_t l_548[8] = {0xB4914C5BL,0x3EF85132L,0xB4914C5BL,0x3EF85132L,0xB4914C5BL,0x3EF85132L,0xB4914C5BL,0x3EF85132L};
        int i;
        l_522[0] = ((safe_mul_func_int16_t_s_s(func_63(func_67((func_77((l_522[0] != (safe_add_func_int32_t_s_s(l_522[0], (safe_mod_func_uint16_t_u_u(0x9E49L, (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_522[0], 2)), (safe_rshift_func_int16_t_s_s(p_58, (safe_add_func_int32_t_s_s(((((safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_541, (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_522[0], 15)), (p_58 == (safe_lshift_func_uint16_t_u_u(3UL, l_522[0]))))))) >= p_60), 0xBA1CL)) == p_59) | l_548[4]) >= l_522[0]), l_522[0]))))))))))), l_522[0], l_548[0]) == 0x897F3031L), p_59, l_522[0], p_58), p_58, p_58), l_522[0])) <= 0L);
        for (p_58 = (-16); (p_58 < (-21)); p_58 = safe_sub_func_int32_t_s_s(p_58, 1))
        { 
            for (p_60 = 2; (p_60 == 58); p_60 = safe_add_func_uint32_t_u_u(p_60, 1))
            { 
                l_522[0] = 0x91E75EC1L;
                return p_60;
            }
        }
    }
    else
    { 
        int16_t l_558 = 0xA553L;
        int32_t l_562 = 0x8C26967FL;
        uint16_t l_575 = 7UL;
        int8_t l_649 = 1L;
        if (func_77(l_522[0], ((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u((l_558 != p_58), (l_522[0] && ((safe_mul_func_uint16_t_u_u((0x2CDFL < p_59), ((+((-1L) == (0xB6FAL || 7UL))) | l_558))) != p_58)))) != 0x669EL) >= 4294967291UL), p_58)) || l_522[0]), l_558))
        { 
            int32_t l_567 = 0xEB63E849L;
            int32_t l_589 = 5L;
            struct S0 l_614 = {0xAF0BA95AL,0L};
            l_562 = ((p_58 || p_58) | p_59);
            l_522[0] = ((p_59 >= func_81((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x5B10L, (p_59 >= ((0xCE52C00EL > 7UL) == 1UL)))), func_81((p_59 ^ __builtin_popcountll(l_567)), l_558, p_59, l_522[0]))), l_522[0], p_58, l_522[0])) != l_562);
            for (p_59 = 0; (p_59 <= 0); p_59 += 1)
            { 
                uint32_t l_573 = 0x3A8825E7L;
                int32_t l_576 = 0x564F7A1FL;
                struct S0 l_613 = {0x539DA684L,7L};
                int i;
                for (p_58 = 0; (p_58 <= 0); p_58 += 1)
                { 
                    float l_586 = 0x6.46DFD0p+35;
                    int32_t l_587 = (-4L);
                    l_575 = (safe_add_func_float_f_f((+((safe_mul_func_float_f_f((l_573 >= (((__builtin_bswap64(l_562) >= __builtin_clzl(p_59)) == l_562) <= (__builtin_clzll((!p_58)) >= (p_58 <= l_573)))), 0x0.Fp+1)) > 0x7.122441p+15)), 0x1.0p-1));
                    for (l_562 = 0; (l_562 <= 0); l_562 += 1)
                    { 
                        int i;
                        l_576 |= l_522[p_59];
                        l_587 = (safe_sub_func_int32_t_s_s(__builtin_ia32_crc32qi(p_59, ((p_60 & (l_576 < ((4294967295UL >= 0x23FF9E34L) < ((safe_rshift_func_int16_t_s_u((l_576 ^ p_60), ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((p_59 & __builtin_popcount(((safe_unary_minus_func_int32_t_s(0xEC50B3B8L)) == (-1L)))), l_575)) || l_567), 1)) && p_59))) >= 1UL)))) | l_522[p_58])), l_587));
                        l_589 = (+l_522[0]);
                    }
                    for (l_562 = 0; (l_562 >= 0); l_562 -= 1)
                    { 
                        int i;
                        l_522[p_58] = 0x9AEC6EC0L;
                        l_522[p_58] = ((safe_sub_func_float_f_f(l_522[0], p_59)) <= (p_59 < ((safe_sub_func_float_f_f((safe_sub_func_float_f_f(0xE.193891p+61, __builtin_parityl((safe_add_func_int16_t_s_s((-1L), (p_60 > ((safe_mul_func_int16_t_s_s(l_587, (safe_lshift_func_uint16_t_u_s(l_573, 10)))) & ((safe_lshift_func_int16_t_s_u((((l_587 & p_58) == p_58) && p_58), l_522[p_58])) || p_60)))))))), l_522[p_58])) <= p_58)));
                        l_604 |= func_81(l_562, p_58, l_522[p_58], p_59);
                    }
                }
                l_522[p_59] = l_562;
                l_614 = func_67(((1L != (safe_lshift_func_uint16_t_u_s((l_576 < l_567), 9))) & l_558), (0x600478BFL | (safe_mod_func_uint32_t_u_u((p_60 & ((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(func_63(l_613, p_58, l_562), 0x3CEBA0DEL)), l_522[0])) < l_604)), p_60))), p_58, p_59);
                for (l_575 = 0; (l_575 >= 26); l_575 = safe_add_func_uint16_t_u_u(l_575, 2))
                { 
                    for (l_573 = (-9); (l_573 <= 53); l_573 = safe_add_func_uint32_t_u_u(l_573, 1))
                    { 
                        uint32_t l_625 = 2UL;
                        l_576 |= ((safe_mul_func_uint16_t_u_u(p_58, ((0x4462L != (((safe_sub_func_uint32_t_u_u(p_60, p_58)) > (((safe_mod_func_int32_t_s_s((-9L), l_625)) & __builtin_ffsl(((safe_mul_func_int16_t_s_s((p_59 <= (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_58, (0x5008L < p_60))), p_60))), 1UL)) < l_575))) == 0x79AFL)) & 0x5FB412FFL)) <= l_562))) || p_60);
                        if (l_625)
                            break;
                        if (p_60)
                            break;
                    }
                }
            }
            l_614.f1 = (+l_567);
        }
        else
        { 
            int32_t l_648 = 0L;
            for (p_59 = 10; (p_59 == 44); p_59 = safe_add_func_uint16_t_u_u(p_59, 1))
            { 
                int32_t l_635[2];
                int i;
                for (i = 0; i < 2; i = i + 1)
                    l_635[i] = 0x3D2CDD21L;
                l_562 = ((((((-7L) && l_562) & l_575) ^ (l_635[1] > (((p_59 < l_558) > (safe_mod_func_int32_t_s_s((p_58 || (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0UL, ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(l_562, 10)) <= l_522[0]), p_59)) != l_558))), l_604)), 0xBAE1L))), p_60))) && l_648))) > l_562) >= l_649);
                if (l_522[0])
                    break;
            }
            for (p_58 = (-30); (p_58 < (-19)); p_58 = safe_add_func_int16_t_s_s(p_58, 1))
            { 
                uint32_t l_652 = 0UL;
                if (p_60)
                    break;
                if (l_522[0])
                    break;
                l_653 = func_67(l_648, (l_522[0] > p_59), l_652, l_522[0]);
            }
        }
        l_604 |= (safe_mod_func_uint16_t_u_u(p_60, (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((func_92(func_67((__builtin_popcountll((((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_562, (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(__builtin_ffsl(l_562), l_653.f0)), (safe_lshift_func_int16_t_s_s(l_522[0], p_60)))))), ((3UL || (((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_649, p_59)) | p_59), l_653.f0)) || 0xC2DC8BF5L) == l_653.f0)) == l_676))) != p_59) | l_522[0])) >= p_59), p_58, p_59, p_58)) & 4294967290UL) == l_562), l_676)), p_59)), l_558))));
    }
    return l_676;
}




static uint16_t  func_63(struct S0  p_64, uint16_t  p_65, int8_t  p_66)
{ 
    int16_t l_76[7] = {0x64F7L,0L,0x64F7L,0x64F7L,0L,0x64F7L,0x64F7L};
    int32_t l_366[6];
    int8_t l_383 = 0x37L;
    int32_t l_428 = 9L;
    int32_t l_519 = 5L;
    int i;
    for (i = 0; i < 6; i = i + 1)
        l_366[i] = 0L;
    for (p_66 = 4; (p_66 >= 0); p_66 -= 1)
    { 
        int32_t l_367 = 0x9084D83EL;
        uint16_t l_376 = 65535UL;
        int32_t l_412 = 0xAE3CA7A2L;
        int i;
        if (((l_76[(p_66 + 1)] ^ l_76[(p_66 + 1)]) < func_77(((func_81((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_66, 9)), l_76[(p_66 + 1)])), l_76[5], ((safe_rshift_func_int16_t_s_u(func_92(func_67(p_66, p_64.f1, (((l_76[(p_66 + 1)] <= (func_94((p_64.f0 == p_66), l_76[5], l_76[5]) || 0x39DDE8CCL)) | p_64.f0) & 4294967295UL), l_76[4])), l_76[4])) != l_76[(p_66 + 1)]), l_76[2]) >= 0x789064FAL) != l_76[(p_66 + 1)]), l_76[(p_66 + 1)], p_65)))
        { 
            l_367 = __builtin_parity(l_366[3]);
        }
        else
        { 
            return p_65;
        }
        for (p_65 = 1; (p_65 <= 6); p_65 += 1)
        { 
            float l_375 = 0x9.60D381p+62;
            uint32_t l_385[1][4] = {{1UL,1UL,1UL,1UL}};
            float l_396[4] = {0x0.83A6ADp+16,0x0.83A6ADp+16,0x0.83A6ADp+16,0x0.83A6ADp+16};
            int i, j;
            for (l_367 = 5; (l_367 >= 1); l_367 -= 1)
            { 
                int i;
                if (l_366[l_367])
                    break;
            }
            for (p_64.f1 = 5; (p_64.f1 >= 0); p_64.f1 -= 1)
            { 
                int8_t l_384 = (-5L);
                int32_t l_389 = 0x10DF42E3L;
                struct S0 l_414 = {0x5F873B4EL,0xCD880B42L};
                if (func_92(p_64))
                { 
                    struct S0 l_388 = {0xE3EB7B2DL,-3L};
                    int i;
                    for (p_64.f0 = 0; (p_64.f0 <= 5); p_64.f0 += 1)
                    { 
                        int i;
                        return l_366[p_64.f1];
                    }
                    if (((-1L) & (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s(l_76[p_65], (safe_add_func_int16_t_s_s(l_376, ((l_76[6] || (safe_lshift_func_int16_t_s_s((p_66 || 0xC3D5L), 12))) != ((safe_lshift_func_uint16_t_u_u((0xBD778E73L ^ (safe_mul_func_int16_t_s_s((-7L), l_383))), 9)) | 0L)))))))), 4))))
                    { 
                        int i;
                        l_388 = func_67((__builtin_bswap32(__builtin_ctzl((p_65 | __builtin_bswap64(l_384)))) >= (((l_385[0][2] >= (0xB622L != ((-8L) != (safe_rshift_func_uint16_t_u_u(((p_66 ^ l_383) >= l_384), 15))))) ^ 8UL) == l_383)), p_65, l_76[p_65], l_76[0]);
                        l_366[p_64.f1] &= 0L;
                        l_388.f1 |= p_65;
                    }
                    else
                    { 
                        return l_389;
                    }
                    return l_385[0][1];
                }
                else
                { 
                    int16_t l_403 = 0x7FDFL;
                    if (p_65)
                        break;
                    l_366[3] = (safe_sub_func_float_f_f((+((+p_64.f0) <= 0x8.Fp-1)), (__builtin_ctzl(p_64.f0) != ((safe_mul_func_float_f_f(l_396[0], 0x2.Cp+1)) > (safe_sub_func_float_f_f(__builtin_ia32_crc32qi(((l_366[3] & 0x3C67L) >= ((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(0xCDD3L, l_385[0][2])) ^ 4294967295UL), l_403)) == 0xEE54L)), l_366[5]), 0x3.3p+1))))));
                    for (p_64.f0 = 1; (p_64.f0 <= 6); p_64.f0 += 1)
                    { 
                        int16_t l_410 = (-2L);
                        struct S0 l_413 = {5UL,0x1576C691L};
                        l_413 = func_67((((safe_add_func_uint32_t_u_u(l_389, (safe_sub_func_int16_t_s_s(p_64.f1, ((safe_rshift_func_uint16_t_u_s(p_64.f1, 7)) ^ (l_389 & l_410)))))) || 1UL) != (!(p_66 == 0xDE82L))), l_412, p_64.f1, l_366[2]);
                        l_413.f1 |= p_65;
                        l_414 = p_64;
                    }
                }
            }
        }
        if ((safe_rshift_func_int16_t_s_u((p_65 <= 1L), 7)))
        { 
            int32_t l_423 = (-1L);
            struct S0 l_429 = {18446744073709551613UL,0L};
            if (l_76[2])
                break;
            l_428 ^= (((((__builtin_parityl((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((l_366[4] | func_92(func_67(l_367, l_367, (safe_rshift_func_uint16_t_u_s(l_423, (((l_76[(p_66 + 1)] && (0x8B8FDDDCL || ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_423 == (l_376 ^ p_65)), 0xFF6E82F3L)), p_65)) ^ l_423))) ^ l_366[3]) & p_65))), l_423))), p_64.f1)) != 0UL) >= 0UL) != l_412), l_423))) == p_64.f0) || 9UL) >= (-1L)) && l_376) >= 0x3CDDL);
            l_429 = l_429;
        }
        else
        { 
            uint16_t l_432 = 0x5E79L;
            int32_t l_435 = (-6L);
            uint32_t l_453[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
            int i;
            p_64.f1 = (safe_sub_func_uint32_t_u_u(((l_432 < ((safe_add_func_int32_t_s_s(__builtin_ffsl(l_435), l_76[0])) == (+((((safe_lshift_func_uint16_t_u_s((((p_66 < (p_64.f0 & l_367)) == ((safe_mul_func_int16_t_s_s((-4L), (l_76[(p_66 + 1)] || p_66))) == l_432)) < l_383), l_435)) >= 0xFDFCL) | 0xB2DCL) > l_76[6])))) | l_366[3]), p_66));
            l_435 &= 0x993F3C37L;
            for (l_412 = 0; (l_412 <= 6); l_412 += 1)
            { 
                uint32_t l_448 = 0xAFA1390DL;
                p_64.f1 ^= ((p_66 ^ ((1L <= p_64.f0) <= ((~l_383) >= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(l_428, l_448)), p_66))))) | (safe_add_func_uint16_t_u_u((p_64.f0 < __builtin_bswap64(l_76[2])), (-2L))));
                l_453[1] = (safe_sub_func_float_f_f(l_435, p_66));
                l_367 |= l_448;
            }
            for (l_383 = 2; (l_383 <= 6); l_383 += 1)
            { 
                int32_t l_468 = 0x5EAFDB94L;
                struct S0 l_472[10] = {{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL},{0x3D36E67FL,0x319E89ABL}};
                int i;
                if (l_428)
                { 
                    l_468 = ((safe_mul_func_float_f_f((safe_mul_func_float_f_f(p_64.f0, p_64.f1)), func_94((safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(0xA07E57E0L, ((safe_sub_func_int32_t_s_s((((p_65 && (((safe_lshift_func_int16_t_s_u(p_64.f1, 9)) == ((safe_rshift_func_int16_t_s_u(p_64.f0, func_92(p_64))) > ((0x7A173E98L ^ p_66) >= p_64.f1))) ^ 3UL)) >= 4294967295UL) || p_64.f1), p_64.f0)) & p_65))) || 0L) | p_66), p_65)), l_428, p_65))) <= p_66);
                }
                else
                { 
                    uint16_t l_469[10][4][6] = {{{0x3489L,0x8942L,0xBE7EL,0xBE7EL,0x8942L,0x3489L},{1UL,0x3489L,65529UL,0x8942L,65529UL,0x3489L},{65529UL,1UL,0xBE7EL,65527UL,65527UL,0xBE7EL},{65529UL,65529UL,65527UL,0x8942L,0xAF51L,0x8942L}},{{1UL,65529UL,1UL,0xBE7EL,65527UL,65527UL},{0x3489L,1UL,1UL,0x3489L,65529UL,0x8942L},{0x8942L,0x3489L,65527UL,0x3489L,0x8942L,0xBE7EL},{0x3489L,0x8942L,0xBE7EL,0xBE7EL,0x8942L,0x3489L}},{{1UL,0x3489L,65529UL,0x8942L,65529UL,0x3489L},{65529UL,1UL,0xBE7EL,65527UL,65527UL,0xBE7EL},{65529UL,65529UL,65527UL,0x8942L,0xAF51L,0x8942L},{1UL,65529UL,1UL,0xBE7EL,65527UL,65527UL}},{{0x3489L,1UL,1UL,0x3489L,65529UL,0x8942L},{0x8942L,0x3489L,65527UL,0x3489L,0x8942L,0xBE7EL},{0x3489L,0x8942L,0xBE7EL,0xBE7EL,0x8942L,0x3489L},{1UL,0x3489L,65529UL,0x8942L,65529UL,1UL}},{{0xAF51L,0x8942L,65527UL,65529UL,65529UL,65527UL},{0xAF51L,0xAF51L,65529UL,0xBE7EL,0x3489L,0xBE7EL},{0x8942L,0xAF51L,0x8942L,65527UL,65529UL,65529UL},{1UL,0x8942L,0x8942L,1UL,0xAF51L,0xBE7EL}},{{0xBE7EL,1UL,65529UL,1UL,0xBE7EL,65527UL},{1UL,0xBE7EL,65527UL,65527UL,0xBE7EL,1UL},{0x8942L,1UL,0xAF51L,0xBE7EL,0xAF51L,1UL},{0xAF51L,0x8942L,65527UL,65529UL,65529UL,65527UL}},{{0xAF51L,0xAF51L,65529UL,0xBE7EL,0x3489L,0xBE7EL},{0x8942L,0xAF51L,0x8942L,65527UL,65529UL,65529UL},{1UL,0x8942L,0x8942L,1UL,0xAF51L,0xBE7EL},{0xBE7EL,1UL,65529UL,1UL,0xBE7EL,65527UL}},{{1UL,0xBE7EL,65527UL,65527UL,0xBE7EL,1UL},{0x8942L,1UL,0xAF51L,0xBE7EL,0xAF51L,1UL},{0xAF51L,0x8942L,65527UL,65529UL,65529UL,65527UL},{0xAF51L,0xAF51L,65529UL,0xBE7EL,0x3489L,0xBE7EL}},{{0x8942L,0xAF51L,0x8942L,65527UL,65529UL,65529UL},{1UL,0x8942L,0x8942L,1UL,0xAF51L,0xBE7EL},{0xBE7EL,1UL,65529UL,1UL,0xBE7EL,65527UL},{1UL,0xBE7EL,65527UL,65527UL,0xBE7EL,1UL}},{{0x8942L,1UL,0xAF51L,0xBE7EL,0xAF51L,1UL},{0xAF51L,0x8942L,65527UL,65529UL,65529UL,65527UL},{0xAF51L,0xAF51L,65529UL,0xBE7EL,0x3489L,0xBE7EL},{0x8942L,0xAF51L,0x8942L,65527UL,65529UL,65529UL}}};
                    int i, j, k;
                    p_64 = p_64;
                    --l_469[8][0][5];
                }
                for (l_367 = 2; (l_367 <= 6); l_367 += 1)
                { 
                    int32_t l_486 = 0xC5D67E79L;
                    int8_t l_493 = 0xBAL;
                    int32_t l_500 = 0x9CE8F9D4L;
                    l_472[2] = p_64;
                    p_64.f1 = (safe_unary_minus_func_int16_t_s((5L > (func_81((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x07AE89F3L, (((safe_rshift_func_uint16_t_u_s(((__builtin_popcountll(((p_64.f1 & (safe_add_func_uint32_t_u_u(((l_432 & p_64.f1) && ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_383, (l_366[3] && p_64.f0))) & (p_64.f0 > 0x0AABL)), 12)) >= p_64.f0)), p_66))) == p_64.f1)) < l_486) != l_383), 15)) | l_468) == (-1L)))), 5)), p_65, l_486, l_76[(p_66 + 1)]) == 0x043BL))));
                    l_500 ^= ((((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(func_92(p_64), (l_472[2].f0 | l_493))), 5)), p_66)) <= (safe_rshift_func_uint16_t_u_s((p_66 == ((safe_add_func_int32_t_s_s(__builtin_ctz(l_453[5]), (safe_mod_func_uint32_t_u_u(l_493, l_383)))) ^ p_64.f0)), 12))) != p_66) | (-1L));
                }
                if (l_472[2].f0)
                    continue;
                p_64.f1 |= p_64.f0;
            }
        }
    }
    p_64.f1 = (+(safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_366[3], (func_94(l_76[0], (safe_mul_func_float_f_f(l_76[1], ((safe_sub_func_float_f_f((safe_sub_func_float_f_f(p_64.f1, (safe_add_func_float_f_f((-0x7.1p-1), 0x2.CDC2C3p+69)))), (func_77(((safe_mul_func_uint16_t_u_u((0xAC72L > ((+(safe_mul_func_int16_t_s_s((l_383 < 0x21F9L), p_66))) >= l_428)), l_76[2])) < l_383), l_428, p_65) < p_64.f1))) == p_64.f0))), l_519) ^ p_65))), 14)));
    return l_366[5];
}




static struct S0  func_67(uint32_t  p_68, int32_t  p_69, uint32_t  p_70, uint32_t  p_71)
{ 
    float l_73 = 0x2.7122A2p-4;
    int32_t l_74 = (-1L);
    struct S0 l_75[2][9][6] = {{{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}}},{{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}},{{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L}},{{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L},{0xBE719C29L,0L},{0xBE719C29L,0L},{18446744073709551615UL,0xAC1DEA90L},{18446744073709551615UL,0xAC1DEA90L}}}};
    int i, j, k;
    l_74 = __builtin_clzll(l_74);
    return l_75[1][6][2];
}




static int16_t  func_77(int32_t  p_78, int8_t  p_79, uint32_t  p_80)
{ 
    uint32_t l_284[10][7] = {{1UL,1UL,1UL,1UL,0xC86A4F33L,1UL,0xC86A4F33L},{1UL,9UL,9UL,1UL,18446744073709551615UL,0x7D861323L,1UL},{0x7D861323L,0xC86A4F33L,18446744073709551615UL,18446744073709551615UL,0xC86A4F33L,0x7D861323L,9UL},{0xC86A4F33L,1UL,1UL,1UL,1UL,1UL,1UL},{0xC86A4F33L,9UL,0x7D861323L,0xC86A4F33L,18446744073709551615UL,18446744073709551615UL,0xC86A4F33L},{0x7D861323L,1UL,0x7D861323L,18446744073709551615UL,1UL,9UL,9UL},{1UL,0xC86A4F33L,1UL,0xC86A4F33L,1UL,1UL,1UL},{1UL,9UL,18446744073709551615UL,1UL,18446744073709551615UL,9UL,1UL},{0x7D861323L,1UL,9UL,18446744073709551615UL,1UL,18446744073709551615UL,9UL},{1UL,1UL,1UL,1UL,0xC86A4F33L,1UL,0xC86A4F33L}};
    int32_t l_288 = 0x96293D5AL;
    int32_t l_290 = 0x60569A44L;
    int8_t l_314 = (-1L);
    uint16_t l_324 = 0xA672L;
    struct S0 l_328 = {18446744073709551615UL,0xECB76A64L};
    uint32_t l_357[6];
    int i, j;
    for (i = 0; i < 6; i = i + 1)
        l_357[i] = 0UL;
    for (p_80 = 0; (p_80 <= 6); p_80 += 1)
    { 
        int8_t l_287[9];
        int16_t l_295 = 0xBA89L;
        int32_t l_313[6] = {0xE0297E41L,(-1L),(-1L),0xE0297E41L,(-1L),(-1L)};
        struct S0 l_326 = {0x198C7FE5L,0x3E916C86L};
        int i;
        for (i = 0; i < 9; i = i + 1)
            l_287[i] = (-3L);
        l_288 = ((safe_mod_func_int16_t_s_s(l_287[7], p_79)) >= l_287[7]);
        for (p_78 = 0; (p_78 <= 6); p_78 += 1)
        { 
            int32_t l_289 = 0x62C6697BL;
            struct S0 l_308 = {18446744073709551612UL,6L};
            int i, j;
            if (l_284[(p_78 + 1)][p_80])
            { 
                uint32_t l_291 = 0x62E680BFL;
                int8_t l_294 = 7L;
                struct S0 l_296 = {0x3B0049AFL,-1L};
                int8_t l_325[7] = {0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L};
                int i;
                for (l_288 = 6; (l_288 >= 0); l_288 -= 1)
                { 
                    int i, j;
                    l_289 = __builtin_ctzll(l_284[(l_288 + 3)][p_78]);
                    for (p_79 = 2; (p_79 <= 6); p_79 += 1)
                    { 
                        l_290 = p_80;
                    }
                    for (l_290 = 6; (l_290 >= 0); l_290 -= 1)
                    { 
                        l_296 = func_67((p_78 & func_81((((func_94(p_78, p_78, (__builtin_parityll(p_80) != __builtin_clzll(l_291))) & (safe_mul_func_int16_t_s_s((((p_79 ^ (-1L)) | p_79) <= (-1L)), p_79))) < l_294) == 0x541DL), p_80, p_79, l_287[7])), p_78, l_295, p_80);
                    }
                }
                l_289 = 0x31C9CF4CL;
                for (l_290 = 5; (l_290 >= 0); l_290 -= 1)
                { 
                    int16_t l_307 = 3L;
                    int32_t l_323 = 0xF02CFCB3L;
                    l_308 = func_67((safe_mod_func_uint16_t_u_u(4UL, p_79)), p_78, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_78, ((l_287[7] >= l_287[1]) <= (p_78 < (safe_rshift_func_uint16_t_u_u((p_80 | ((((safe_sub_func_uint16_t_u_u(l_295, p_80)) != l_288) <= p_79) > l_294)), 0)))))), p_78)), l_307);
                    l_313[1] = (safe_mod_func_int16_t_s_s((__builtin_clzl((safe_add_func_int32_t_s_s(((-1L) <= func_94(p_78, p_79, func_81(l_296.f0, p_78, p_78, (l_294 >= 0L)))), l_307))) == l_307), 1UL));
                    if (func_81(p_78, (l_313[4] ^ 8UL), p_80, ((0UL & l_314) ^ 0xC399L)))
                    { 
                        l_296.f1 = (safe_sub_func_uint16_t_u_u(func_81((l_313[5] <= l_288), l_296.f0, p_79, l_284[(p_78 + 1)][p_80]), ((safe_add_func_int16_t_s_s(l_296.f0, p_78)) >= (__builtin_ffs((l_287[7] >= p_79)) <= p_79))));
                        l_323 |= (safe_mul_func_uint16_t_u_u(0xDE0BL, (safe_rshift_func_uint16_t_u_u(l_307, 2))));
                        l_288 ^= l_291;
                        return l_324;
                    }
                    else
                    { 
                        l_325[0] &= p_78;
                        l_288 &= p_79;
                    }
                }
            }
            else
            { 
                struct S0 l_327[5] = {{0x0B1ACB79L,0xAD0A982EL},{0x0B1ACB79L,0xAD0A982EL},{0x0B1ACB79L,0xAD0A982EL},{0x0B1ACB79L,0xAD0A982EL},{0x0B1ACB79L,0xAD0A982EL}};
                int i;
                l_327[1] = l_326;
                l_289 = ((0L <= 4294967287UL) <= (func_92(l_308) ^ __builtin_ffs(p_78)));
            }
            l_328 = l_308;
            if (l_328.f0)
            { 
                return p_80;
            }
            else
            { 
                float l_329 = 0x1.3p-1;
                int32_t l_341 = (-10L);
                l_313[1] ^= (l_326.f1 <= l_284[(p_78 + 1)][p_80]);
                for (l_326.f0 = 0; (l_326.f0 <= 6); l_326.f0 += 1)
                { 
                    int32_t l_330 = 0xAA756BD6L;
                    for (l_326.f1 = 0; (l_326.f1 <= 6); l_326.f1 += 1)
                    { 
                        float l_344 = 0xD.5A36F3p+97;
                        int32_t l_345 = 1L;
                        int32_t l_346 = 9L;
                        float l_354[7];
                        int i;
                        for (i = 0; i < 7; i = i + 1)
                            l_354[i] = 0x9.2p-1;
                        l_330 &= p_79;
                        l_346 |= (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((p_80 <= (safe_mul_func_int16_t_s_s(p_78, ((safe_rshift_func_uint16_t_u_u((func_94(func_81(p_80, l_284[8][5], (safe_lshift_func_uint16_t_u_s(l_341, p_79)), (safe_lshift_func_uint16_t_u_u((((p_79 <= p_80) ^ (p_80 | 4294967287UL)) | p_78), p_78))), p_78, l_330) & p_80), 13)) >= p_78)))), l_345)), l_330));
                        l_354[4] = func_94(l_346, ((safe_sub_func_float_f_f(p_78, ((safe_sub_func_float_f_f(((!p_80) > (safe_mul_func_float_f_f(((p_78 <= 0xE.2EF163p+2) < l_313[1]), func_94(((((l_330 < l_330) && ((0x5786D4CBL && 0xEA497638L) && p_78)) ^ l_287[7]) > l_326.f0), l_330, l_345)))), p_79)) < p_79))) != l_345), l_341);
                        l_330 = l_289;
                    }
                }
                l_341 = (p_80 != p_78);
            }
        }
        for (l_314 = 6; (l_314 >= 0); l_314 -= 1)
        { 
            int i, j;
            l_357[3] = (safe_lshift_func_int16_t_s_u(l_284[(p_80 + 3)][l_314], 0));
            l_328 = l_328;
            for (l_328.f1 = 0; (l_328.f1 <= 6); l_328.f1 += 1)
            { 
                int i, j;
                l_313[1] &= __builtin_ctzl(l_284[(l_328.f1 + 3)][p_80]);
            }
        }
        for (l_328.f1 = 6; (l_328.f1 >= 0); l_328.f1 -= 1)
        { 
            int32_t l_365 = 0xEF1B2614L;
            l_288 ^= (safe_lshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(l_328.f1, ((safe_add_func_int32_t_s_s((p_78 || (0x7ED5L > p_78)), l_313[1])) && (-1L)))) > (l_295 > __builtin_ctzl((l_287[7] & 9UL)))) || 0xBEE0CA48L), 13));
            for (p_78 = 1; (p_78 <= 6); p_78 += 1)
            { 
                l_288 = (l_324 & l_328.f1);
            }
            l_365 = (~p_79);
        }
    }
    return l_328.f1;
}




static int32_t  func_81(uint32_t  p_82, uint32_t  p_83, uint16_t  p_84, int8_t  p_85)
{ 
    int32_t l_273 = 0x9E2EC00AL;
    int32_t l_274 = 0x1A57ABBEL;
    struct S0 l_281 = {1UL,0x864E8FA7L};
    int32_t l_282 = 0x7F0FC9F8L;
    int32_t l_283 = (-1L);
    l_274 |= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((p_83 < 0xC45B850CL), (((safe_mul_func_int16_t_s_s((__builtin_clzl((l_273 <= (l_273 > p_85))) < func_94(p_82, l_273, ((l_273 & 0xCD7695A7L) < l_273))), p_82)) != l_273) && 0x1720F163L))), l_273));
    l_283 ^= ((((safe_rshift_func_uint16_t_u_u(l_274, (((((safe_mul_func_uint16_t_u_u((l_273 <= (safe_mod_func_int16_t_s_s((((l_273 | l_274) > 0xA18AL) >= func_92(l_281)), func_92(l_281)))), 4UL)) | p_83) > l_281.f1) && l_273) || (-1L)))) > p_85) & 0UL) == l_282);
    l_283 ^= p_84;
    return l_273;
}




static int16_t  func_92(struct S0  p_93)
{ 
    return p_93.f1;
}




static int32_t  func_94(uint32_t  p_95, float  p_96, int16_t  p_97)
{ 
    float l_104 = (-0x1.9p-1);
    int32_t l_107 = 0x25F4349FL;
    int32_t l_126 = 8L;
    uint32_t l_173 = 0xE2D952DEL;
    uint32_t l_176 = 0UL;
    struct S0 l_182[1][9][7] = {{{{18446744073709551615UL,1L},{0x3B782AFEL,0x350F4927L},{18446744073709551615UL,1L},{0xFA259D05L,0x520BB0CEL},{0xFA259D05L,0x520BB0CEL},{18446744073709551615UL,1L},{0x3B782AFEL,0x350F4927L}},{{0x4E345E96L,-6L},{1UL,0L},{0x0A63B9AFL,0xEB84604DL},{0x0A63B9AFL,0xEB84604DL},{1UL,0L},{0x4E345E96L,-6L},{1UL,0L}},{{18446744073709551615UL,1L},{0xFA259D05L,0x520BB0CEL},{0xFA259D05L,0x520BB0CEL},{18446744073709551615UL,1L},{0x3B782AFEL,0x350F4927L},{18446744073709551615UL,1L},{0xFA259D05L,0x520BB0CEL}},{{0x19F66018L,0x576ED2DDL},{0x19F66018L,0x576ED2DDL},{0x4E345E96L,-6L},{0x0A63B9AFL,0xEB84604DL},{0x4E345E96L,-6L},{0x19F66018L,0x576ED2DDL},{0x19F66018L,0x576ED2DDL}},{{0xE4669C2BL,0x87208DD1L},{0xFA259D05L,0x520BB0CEL},{0xF752ECEAL,0x9E5138A1L},{0xFA259D05L,0x520BB0CEL},{0xE4669C2BL,0x87208DD1L},{0xE4669C2BL,0x87208DD1L},{0xFA259D05L,0x520BB0CEL}},{{0xAA7D4B22L,-7L},{1UL,0L},{0xAA7D4B22L,-7L},{0x4E345E96L,-6L},{0x4E345E96L,-6L},{0x0A63B9AFL,0xEB84604DL},{0x19F66018L,0x576ED2DDL}},{{18446744073709551615UL,1L},{0xE4669C2BL,0x87208DD1L},{0x3B782AFEL,0x350F4927L},{0x3B782AFEL,0x350F4927L},{0xE4669C2BL,0x87208DD1L},{18446744073709551615UL,1L},{0xE4669C2BL,0x87208DD1L}},{{0x0A63B9AFL,0xEB84604DL},{0xAA7D4B22L,-7L},{0xAA7D4B22L,-7L},{0x0A63B9AFL,0xEB84604DL},{0x19F66018L,0x576ED2DDL},{0x0A63B9AFL,0xEB84604DL},{0xAA7D4B22L,-7L}},{{0xFA259D05L,0x520BB0CEL},{0xFA259D05L,0x520BB0CEL},{18446744073709551615UL,1L},{0x3B782AFEL,0x350F4927L},{18446744073709551615UL,1L},{0xFA259D05L,0x520BB0CEL},{0xFA259D05L,0x520BB0CEL}}}};
    int8_t l_183 = 1L;
    int16_t l_185 = 2L;
    int32_t l_203 = 1L;
    int32_t l_235 = 0xB9CDFA9AL;
    float l_244 = 0x1.3F6F19p-49;
    uint32_t l_247[5];
    int i, j, k;
    for (i = 0; i < 5; i = i + 1)
        l_247[i] = 0xBE4E106FL;
    if ((((safe_add_func_uint32_t_u_u(p_97, p_97)) || (__builtin_popcountll((safe_lshift_func_int16_t_s_u((~(4294967288UL >= (+p_97))), 1))) > (safe_mul_func_uint16_t_u_u(l_107, l_107)))) < l_107))
    { 
        int32_t l_110 = 1L;
        int32_t l_116[5] = {0xE2D06856L,0xE2D06856L,0xE2D06856L,0xE2D06856L,0xE2D06856L};
        struct S0 l_117 = {3UL,0x63D7FDF8L};
        int i;
        l_117 = func_67(l_107, ((safe_lshift_func_int16_t_s_s(l_107, l_107)) && l_107), __builtin_clz(l_107), ((((p_97 != l_110) || (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((~0x96ABL) && 9UL), l_107)), l_107)) ^ p_95) != l_107)) && l_116[2]) <= l_110));
        return l_107;
    }
    else
    { 
        uint16_t l_118[6][8] = {{0xEFDDL,0xA598L,65531UL,65528UL,65528UL,65531UL,0xA598L,0xEFDDL},{0x39E9L,65528UL,65535UL,0x21F8L,65528UL,0x21F8L,65535UL,65528UL},{0xEFDDL,65535UL,0x39E9L,0xEFDDL,0x21F8L,0x21F8L,0xEFDDL,0x39E9L},{65528UL,65528UL,65531UL,0xA598L,0xEFDDL,65531UL,0xEFDDL,0xA598L},{0x39E9L,0xA598L,0x39E9L,0x21F8L,0xA598L,65535UL,65535UL,0xA598L},{0xA598L,65535UL,65535UL,0xA598L,0x21F8L,0x39E9L,0xA598L,0x39E9L}};
        int32_t l_119 = 0L;
        float l_167 = 0xC.C8C392p-70;
        uint32_t l_218 = 18446744073709551611UL;
        int i, j;
        for (p_97 = 0; (p_97 <= 5); p_97 += 1)
        { 
            int32_t l_123 = 0xB176A924L;
            int32_t l_177 = (-6L);
            struct S0 l_181 = {0x58F48771L,0L};
            for (p_95 = 0; (p_95 <= 5); p_95 += 1)
            { 
                int i, j;
                return l_118[p_97][(p_97 + 1)];
            }
            for (l_107 = 5; (l_107 >= 0); l_107 -= 1)
            { 
                uint32_t l_178 = 0xD7BE084EL;
                int32_t l_179 = (-1L);
                int32_t l_184 = 0xCA71B24FL;
                l_119 = p_95;
                for (p_95 = 0; (p_95 <= 5); p_95 += 1)
                { 
                    float l_120[7];
                    int32_t l_143[10] = {0x386F2BE0L,0x386F2BE0L,(-8L),(-7L),(-8L),0x386F2BE0L,0x386F2BE0L,(-8L),(-7L),(-8L)};
                    int32_t l_144 = 0x7786D11AL;
                    struct S0 l_168[7][7] = {{{0x26D99E8AL,0xAAA12BE6L},{0xD50FD98BL,0xE20E5FF1L},{3UL,-5L},{0x053B13CAL,0x591A8809L},{0xD50FD98BL,0xE20E5FF1L},{0xD50FD98BL,0xE20E5FF1L},{0x053B13CAL,0x591A8809L}},{{0UL,1L},{0x987753CBL,-5L},{0UL,1L},{3UL,-3L},{0x5938EECFL,0xE471B29BL},{3UL,-3L},{0UL,1L}},{{0x26D99E8AL,0xAAA12BE6L},{0x053B13CAL,0x591A8809L},{7UL,0x9967C0D3L},{0x26D99E8AL,0xAAA12BE6L},{0x26D99E8AL,0xAAA12BE6L},{7UL,0x9967C0D3L},{0x053B13CAL,0x591A8809L}},{{18446744073709551615UL,-5L},{3UL,-3L},{0x80EF8999L,0L},{0x987753CBL,-5L},{0x80EF8999L,0L},{3UL,-3L},{18446744073709551615UL,-5L}},{{0xD50FD98BL,0xE20E5FF1L},{0x26D99E8AL,0xAAA12BE6L},{3UL,-5L},{3UL,-5L},{0x26D99E8AL,0xAAA12BE6L},{0xD50FD98BL,0xE20E5FF1L},{3UL,-5L}},{{0x5938EECFL,0xE471B29BL},{0x987753CBL,-5L},{0x96BD77A3L,0xA1CF38B8L},{0x987753CBL,-5L},{0x5938EECFL,0xE471B29BL},{0xC4D6AA85L,8L},{0x5938EECFL,0xE471B29BL}},{{0x26D99E8AL,0xAAA12BE6L},{3UL,-5L},{3UL,-5L},{0x26D99E8AL,0xAAA12BE6L},{0xD50FD98BL,0xE20E5FF1L},{3UL,-5L},{0x053B13CAL,0x591A8809L}}};
                    int i, j;
                    for (i = 0; i < 7; i = i + 1)
                        l_120[i] = 0x0.Ap-1;
                    if (l_118[4][2])
                    { 
                        int32_t l_124 = 0xB8B4D839L;
                        l_126 = (((l_120[3] > 0x0.Ep+1) > (p_97 <= (safe_add_func_float_f_f((p_97 != l_123), __builtin_parityll(l_124))))) > (-(0xA.772618p+83 > (-0x1.4p-1))));
                    }
                    else
                    { 
                        struct S0 l_162[5][10] = {{{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL}},{{18446744073709551615UL,-1L},{18446744073709551615UL,-1L},{0x56C3ABC2L,-5L},{18446744073709551615UL,-1L},{18446744073709551615UL,-1L},{0x56C3ABC2L,-5L},{18446744073709551615UL,-1L},{18446744073709551615UL,-1L},{0x56C3ABC2L,-5L},{18446744073709551615UL,-1L}},{{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L}},{{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL},{18446744073709551615UL,-1L},{0x50E5C283L,0x37EA6E2EL},{0x50E5C283L,0x37EA6E2EL}},{{18446744073709551615UL,-1L},{18446744073709551615UL,-1L},{0x56C3ABC2L,-5L},{18446744073709551615UL,-1L},{18446744073709551615UL,-1L},{0x56C3ABC2L,-5L},{18446744073709551615UL,-1L},{18446744073709551615UL,-1L},{0x56C3ABC2L,-5L},{18446744073709551615UL,-1L}}};
                        int i, j;
                        l_144 &= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(0x6C97L, (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0xF588L, p_95)), 1UL)), (safe_rshift_func_int16_t_s_u(((p_97 != p_97) >= l_118[1][0]), ((safe_add_func_uint32_t_u_u(0xA47852D3L, (l_126 != l_143[1]))) && p_97))))))), 11)), 0));
                        l_162[0][5] = func_67((safe_mul_func_uint16_t_u_u(p_97, (((safe_lshift_func_int16_t_s_u(l_107, (+(safe_mul_func_uint16_t_u_u(65535UL, (safe_mul_func_int16_t_s_s((p_97 > l_107), (safe_rshift_func_uint16_t_u_u(((l_118[1][3] <= (((safe_mul_func_int16_t_s_s((p_95 == ((safe_rshift_func_uint16_t_u_u(__builtin_parityl(p_97), p_95)) < 6UL)), l_123)) > 9UL) < p_95)) <= l_118[0][2]), p_95))))))))) || p_97) >= l_143[5]))), l_143[1], p_95, l_123);
                        l_168[6][4] = func_67(l_126, l_123, (~(p_95 | ((~p_97) != (0xDB7EL | l_144)))), (((p_95 && ((((p_97 == ((safe_rshift_func_int16_t_s_s(p_95, 10)) && p_97)) < 0x2BF1337BL) > l_107) && 1UL)) | l_118[4][3]) | l_119));
                    }
                }
                if ((safe_add_func_uint32_t_u_u(((8UL == 0x4BC1L) || 1UL), l_123)))
                { 
                    int32_t l_180 = 0xC384FE04L;
                    for (l_123 = 5; (l_123 >= 0); l_123 -= 1)
                    { 
                        int i, j;
                        l_177 = (0xE.DE51AEp+82 == ((l_118[p_97][(l_123 + 2)] <= ((((l_118[p_97][(l_123 + 2)] > p_96) >= p_96) == (safe_add_func_float_f_f(l_173, __builtin_ffsll(((safe_mod_func_uint32_t_u_u(p_97, (((p_95 == (8L | l_119)) | 0UL) | l_176))) >= l_118[p_97][(l_123 + 2)]))))) > l_123)) > p_95));
                        l_179 &= (0xAEA0L && l_178);
                        l_126 = l_180;
                        l_182[0][4][5] = l_181;
                    }
                }
                else
                { 
                    uint16_t l_186[7][10][3] = {{{1UL,0x8BD4L,1UL},{0x5DE1L,65535UL,0xD086L},{65531UL,65535UL,65535UL},{65535UL,0x7B45L,0x1C5DL},{0x9555L,1UL,0x0A86L},{0x4CE2L,65535UL,0xB99CL},{65534UL,0x894FL,65534UL},{0xB99CL,65535UL,0x4CE2L},{0x0A86L,1UL,0x9555L},{0x1C5DL,0x7B45L,65535UL}},{{65535UL,65535UL,65531UL},{0x1C5DL,0xB99CL,0x7B45L},{0x0A86L,65531UL,0x0F12L},{0xB99CL,1UL,1UL},{65534UL,0x0A86L,0x0F12L},{0x4CE2L,0xD086L,0x7B45L},{0x9555L,0x8BD4L,65531UL},{65535UL,0UL,65535UL},{65531UL,0x8BD4L,0x9555L},{0x7B45L,0xD086L,0x4CE2L}},{{0x0F12L,0x0A86L,65534UL},{1UL,1UL,0xB99CL},{0x0F12L,65531UL,0x0A86L},{0x7B45L,0xB99CL,0x1C5DL},{65531UL,65535UL,65535UL},{65535UL,0x7B45L,0x1C5DL},{0x9555L,1UL,0x0A86L},{0x4CE2L,65535UL,0xB99CL},{65534UL,0x894FL,65534UL},{0xB99CL,65535UL,0x4CE2L}},{{0x0A86L,1UL,0x9555L},{0x1C5DL,0x7B45L,65535UL},{65535UL,65535UL,65531UL},{0x1C5DL,0xB99CL,0x7B45L},{0x0A86L,65531UL,0x0F12L},{0xB99CL,1UL,1UL},{65534UL,0x0A86L,0x0F12L},{0x4CE2L,0xD086L,0x7B45L},{0x9555L,0x8BD4L,65531UL},{65535UL,0UL,65535UL}},{{65531UL,0x8BD4L,0x9555L},{0x7B45L,0xD086L,0x4CE2L},{0x0F12L,0x0A86L,65534UL},{1UL,1UL,0xB99CL},{0x0F12L,65531UL,0x0A86L},{0x7B45L,0xB99CL,0x1C5DL},{65531UL,65535UL,65535UL},{65535UL,0x7B45L,0x1C5DL},{0x9555L,1UL,0x0A86L},{0x4CE2L,65535UL,0xB99CL}},{{65534UL,0x894FL,65534UL},{0xB99CL,65535UL,0x4CE2L},{0x0A86L,1UL,0x9555L},{0x1C5DL,0x7B45L,65535UL},{65535UL,65535UL,65531UL},{0x1C5DL,0xB99CL,0x7B45L},{0x0A86L,65531UL,0x0F12L},{0xB99CL,1UL,1UL},{65534UL,0x0A86L,0x0F12L},{0x4CE2L,0xD086L,0x7B45L}},{{0x9555L,0x8BD4L,65531UL},{65535UL,0UL,65535UL},{65531UL,0x8BD4L,0x9555L},{0x7B45L,0xD086L,0x4CE2L},{0x0F12L,0x0A86L,65534UL},{1UL,0x5DE1L,1UL},{0x9555L,65535UL,0x894FL},{0UL,1UL,0x4CE2L},{65535UL,1UL,1UL},{65535UL,0UL,0x4CE2L}}};
                    uint16_t l_202 = 0UL;
                    int i, j, k;
                    --l_186[4][1][1];
                    for (l_176 = 0; (l_176 <= 5); l_176 += 1)
                    { 
                        int32_t l_197 = 0xFB1311ADL;
                        int32_t l_204[4];
                        int i;
                        for (i = 0; i < 4; i = i + 1)
                            l_204[i] = 0x6BC24C8DL;
                        l_177 ^= ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_197, (safe_lshift_func_uint16_t_u_s((p_95 != (safe_lshift_func_uint16_t_u_u(p_97, l_202))), l_118[3][5])))), l_202)) > l_203), 0xA7A5L)), 8)) & ((p_95 | 1L) ^ l_123));
                        l_204[2] |= 0xB206E1C7L;
                        l_203 |= (((p_97 || l_202) & p_97) & (safe_sub_func_uint16_t_u_u((((1UL && 9UL) ^ 0xE3D2101FL) > l_204[2]), (!p_95))));
                        l_203 = ((0UL && (safe_sub_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((0x9D1DL != (-9L)), (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((1L > l_179) >= l_178), ((((((((safe_rshift_func_uint16_t_u_s((l_178 ^ p_97), (((l_177 & l_202) <= l_218) | p_97))) | (-6L)) == l_177) <= p_95) | p_97) == 0x9324AF3CL) >= l_182[0][4][5].f1) > p_95))) > l_184), 7L)))) != p_95) & l_204[1]), l_202))) || p_95);
                    }
                    for (l_176 = 0; (l_176 <= 5); l_176 += 1)
                    { 
                        float l_231[7][6] = {{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2},{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2},{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2},{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2},{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2},{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2},{0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2,0xE.28736Ep-2}};
                        int i, j;
                        l_119 ^= ((safe_mod_func_int16_t_s_s(((p_95 && (safe_mul_func_int16_t_s_s((__builtin_parity(l_202) > (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1L, (safe_add_func_uint16_t_u_u(l_186[3][9][2], p_97)))), l_123)), (!((safe_rshift_func_int16_t_s_s(p_95, 12)) <= 0x26139D5EL))))), p_95))) < l_179), p_97)) | (-1L));
                    }
                }
            }
        }
        l_119 = __builtin_clz(l_176);
        l_119 = p_95;
        l_182[0][4][5].f1 &= l_235;
    }
    if (__builtin_parityll((p_97 | __builtin_ffsl((((safe_add_func_int32_t_s_s(l_182[0][4][5].f0, __builtin_clzl((p_95 <= l_235)))) == l_203) <= (safe_mod_func_int32_t_s_s(((((((safe_rshift_func_int16_t_s_u(((l_185 < (safe_mul_func_uint16_t_u_u(l_182[0][4][5].f0, p_95))) || 9L), l_173)) | l_203) == p_97) <= p_97) > l_203) <= l_185), l_203)))))))
    { 
        int32_t l_250[6] = {(-1L),0x38F8759FL,0x38F8759FL,(-1L),0x38F8759FL,0x38F8759FL};
        int i;
        p_96 = ((safe_mul_func_float_f_f(((l_247[0] <= (safe_add_func_float_f_f((p_97 > __builtin_parityl(l_250[3])), p_95))) <= (safe_sub_func_float_f_f(l_250[1], ((safe_mul_func_float_f_f(0x1.5FDD9Bp-89, p_95)) != (p_95 < l_182[0][4][5].f1))))), p_97)) == (-0x10.Ep-1));
    }
    else
    { 
        float l_255[10][7][3] = {{{0x3.B37AEEp-84,0x1.2p-1,0x7.1p-1},{0xF.2929E3p-48,0x3.B37AEEp-84,0x3.B37AEEp-84},{0x3.B37AEEp-84,0xC.9FA7D3p-36,0x3.BB01C6p+94},{0xD.81482Dp-20,0x1.8p-1,0x3.BB01C6p+94},{(-0x1.Bp-1),0x3.BB01C6p+94,0x3.B37AEEp-84},{(-0x2.Dp+1),0x0.Fp-1,0x7.1p-1},{0x3.BB01C6p+94,0x3.BB01C6p+94,0x0.Fp-1}},{{0x1.2p-1,0x1.8p-1,0x3.7E9741p-3},{0x1.2p-1,0xC.9FA7D3p-36,(-0x2.Dp+1)},{0x3.BB01C6p+94,0x3.B37AEEp-84,0x1.8p-1},{(-0x2.Dp+1),0x1.2p-1,(-0x2.Dp+1)},{(-0x1.Bp-1),0x0.2p+1,0x3.7E9741p-3},{0xD.81482Dp-20,0x0.2p+1,0x0.Fp-1},{0x3.B37AEEp-84,0x1.2p-1,0x7.1p-1}},{{0xF.2929E3p-48,0x3.B37AEEp-84,0x3.B37AEEp-84},{0x3.B37AEEp-84,0xC.9FA7D3p-36,0x3.BB01C6p+94},{0xD.81482Dp-20,0x1.8p-1,0x3.BB01C6p+94},{(-0x1.Bp-1),0x3.BB01C6p+94,0x3.B37AEEp-84},{(-0x2.Dp+1),0x0.Fp-1,0x7.1p-1},{0x3.BB01C6p+94,0x3.BB01C6p+94,0x0.Fp-1},{0x1.2p-1,0x1.8p-1,0x3.7E9741p-3}},{{0x1.2p-1,0xC.9FA7D3p-36,(-0x2.Dp+1)},{0x3.BB01C6p+94,0x3.B37AEEp-84,0x1.8p-1},{(-0x2.Dp+1),0x1.2p-1,(-0x2.Dp+1)},{(-0x1.Bp-1),0x0.2p+1,0x3.7E9741p-3},{0xD.81482Dp-20,0x0.2p+1,0x0.Fp-1},{0x3.B37AEEp-84,0x1.2p-1,0x7.1p-1},{0xF.2929E3p-48,0x3.B37AEEp-84,0x3.B37AEEp-84}},{{0x3.B37AEEp-84,0xC.9FA7D3p-36,0x3.BB01C6p+94},{0xD.81482Dp-20,0x1.8p-1,0x3.BB01C6p+94},{(-0x1.Bp-1),0x3.BB01C6p+94,0x3.B37AEEp-84},{(-0x2.Dp+1),0x0.Fp-1,0x7.1p-1},{0x3.BB01C6p+94,0x3.BB01C6p+94,0x0.Fp-1},{0x1.2p-1,0x1.8p-1,0x3.7E9741p-3},{0x1.2p-1,0xC.9FA7D3p-36,(-0x2.Dp+1)}},{{0x3.BB01C6p+94,0x3.B37AEEp-84,0x1.8p-1},{(-0x2.Dp+1),0x1.2p-1,(-0x2.Dp+1)},{(-0x1.Bp-1),0x0.2p+1,0x3.7E9741p-3},{0xD.81482Dp-20,0x0.2p+1,0x0.Fp-1},{0x3.B37AEEp-84,0x1.2p-1,0x7.1p-1},{0xF.2929E3p-48,0x3.B37AEEp-84,0x3.B37AEEp-84},{0x3.B37AEEp-84,0xC.9FA7D3p-36,0x3.BB01C6p+94}},{{0xD.81482Dp-20,0x1.8p-1,0x3.BB01C6p+94},{0x0.2p+1,0x0.Fp-1,0xF.2929E3p-48},{0x1.8p-1,0x1.2p-1,0xD.81482Dp-20},{0x0.Fp-1,0x0.Fp-1,0x1.2p-1},{(-0x1.Bp-1),0x3.B37AEEp-84,0x7.1p-1},{(-0x1.Bp-1),0x3.7E9741p-3,0x1.8p-1},{0x0.Fp-1,0xF.2929E3p-48,0x3.B37AEEp-84}},{{0x1.8p-1,(-0x1.Bp-1),0x1.8p-1},{0x0.2p+1,0xC.9FA7D3p-36,0x7.1p-1},{(-0x2.Dp+1),0xC.9FA7D3p-36,0x1.2p-1},{0xF.2929E3p-48,(-0x1.Bp-1),0xD.81482Dp-20},{0x3.BB01C6p+94,0xF.2929E3p-48,0xF.2929E3p-48},{0xF.2929E3p-48,0x3.7E9741p-3,0x0.Fp-1},{(-0x2.Dp+1),0x3.B37AEEp-84,0x0.Fp-1}},{{0x0.2p+1,0x0.Fp-1,0xF.2929E3p-48},{0x1.8p-1,0x1.2p-1,0xD.81482Dp-20},{0x0.Fp-1,0x0.Fp-1,0x1.2p-1},{(-0x1.Bp-1),0x3.B37AEEp-84,0x7.1p-1},{(-0x1.Bp-1),0x3.7E9741p-3,0x1.8p-1},{0x0.Fp-1,0xF.2929E3p-48,0x3.B37AEEp-84},{0x1.8p-1,(-0x1.Bp-1),0x1.8p-1}},{{0x0.2p+1,0xC.9FA7D3p-36,0x7.1p-1},{(-0x2.Dp+1),0xC.9FA7D3p-36,0x1.2p-1},{0xF.2929E3p-48,(-0x1.Bp-1),0xD.81482Dp-20},{0x3.BB01C6p+94,0xF.2929E3p-48,0xF.2929E3p-48},{0xF.2929E3p-48,0x3.7E9741p-3,0x0.Fp-1},{(-0x2.Dp+1),0x3.B37AEEp-84,0x0.Fp-1},{0x0.2p+1,0x0.Fp-1,0xF.2929E3p-48}}};
        int32_t l_256 = 0x1F3E7179L;
        int16_t l_259[6][3] = {{0L,0L,0L},{0xE7BBL,0xE7BBL,0xE7BBL},{0L,0L,0L},{0xE7BBL,0xE7BBL,0xE7BBL},{0L,0L,0L},{0xE7BBL,0xE7BBL,0xE7BBL}};
        int32_t l_265 = 0L;
        int i, j, k;
        l_256 = p_95;
        for (l_256 = 0; (l_256 != 21); l_256 = safe_add_func_uint16_t_u_u(l_256, 1))
        { 
            int16_t l_260 = 6L;
            struct S0 l_266 = {18446744073709551615UL,0x2321C0B2L};
            l_182[0][4][5].f1 = ((l_259[4][2] != ((l_260 ^ (safe_mul_func_int16_t_s_s(p_97, p_95))) < p_95)) != p_95);
            l_265 = (safe_mod_func_uint16_t_u_u(l_185, p_97));
            l_266 = l_182[0][8][4];
            if (p_95)
                break;
        }
    }
    return l_126;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_28();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



