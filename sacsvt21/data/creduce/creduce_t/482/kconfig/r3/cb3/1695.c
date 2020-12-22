


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const int8_t  f1;
   uint16_t  f2;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 7;
   signed f1 : 6;
   unsigned f2 : 22;
   signed f3 : 12;
   signed f4 : 3;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int16_t  f0;
   const signed f1 : 2;
   unsigned f2 : 9;
   signed f3 : 27;
   signed f4 : 6;
   signed f5 : 30;
   signed f6 : 15;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   unsigned f0 : 23;
   const unsigned f1 : 9;
   unsigned f2 : 7;
   signed f3 : 18;
   uint32_t  f4;
   unsigned f5 : 22;
   unsigned f6 : 16;
   unsigned : 0;
   const signed f7 : 9;
   signed f8 : 14;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   unsigned f0 : 17;
   uint8_t  f1;
};
#pragma pack(pop)

struct S5 {
   signed f0 : 16;
};

#pragma pack(push)
#pragma pack(1)
struct S6 {
   struct S4  f0;
   struct S2  f1;
   struct S4  f2;
   struct S0  f3;
   uint8_t  f4;
   struct S5  f5;
   const signed f6 : 27;
   int32_t  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S8 {
   signed f0 : 20;
   unsigned f1 : 8;
};
#pragma pack(pop)


static uint32_t g_3 = 4294967290U;
static struct S8 g_42 = {832,8};
static struct S1 g_48 = {2,-5,1725,-9,-1};
static struct S3 g_54 = {2392,12,0,183,4294967287U,61,171,-8,-117};
static struct S6 g_66 = {{259,0xEC},{0x73B9,1,15,-736,-6,-29862,-146},{359,1U},{4294967295U,0x59,0U},255U,{-24},3391,0xF5124410};
static struct S8 g_103 = {986,13};
static uint32_t g_108 = 0U;
static int8_t g_111 = 0x70;
static struct S8 g_114 = {1,9};
static float g_130 = 0x1.Dp-1;
static int16_t g_165 = (-4);
static uint16_t g_212 = 65530U;
static uint32_t g_242 = 0U;
static uint32_t g_247[3] = {0x0DFAA9D0,0x0DFAA9D0,0x0DFAA9D0};
static int8_t g_273 = 0xE2;
static uint32_t g_295 = 0x33F0894F;
static int32_t g_356 = 0x2CBC7DD9;
static int16_t g_415 = 0;
static uint8_t g_418 = 253U;
static int16_t g_446 = 0xC1A3;
static float g_448 = 0xF.B126C3p-50;
static struct S2 g_488 = {0x576D,-1,9,-8278,4,-8169,16};
static struct S3 g_489 = {921,12,7,-242,0xB0F3172F,496,169,18,120};
static uint32_t g_576[10] = {0xA0B905ED,0U,0xA0B905ED,0x6D491EDC,0x6D491EDC,0xA0B905ED,0U,0xA0B905ED,0x6D491EDC,0x6D491EDC};
static int32_t g_626 = 0x8148781B;
static uint32_t g_627 = 0x487A7D7A;
static int32_t g_651 = 0;
static int16_t g_740 = 5;
static int32_t g_755 = 0x3EA23015;
static uint8_t g_817 = 0xC2;
static int16_t g_898 = 0xC068;
static float g_899 = (-0x1.4p+1);
static int32_t g_900 = 0xFF23CED2;
static int32_t g_901[8][2][10] = {{{(-3),0x2D034E44,0x8AE8D7D9,0x2D034E44,(-3),0x03280863,0,5,0x75DACB59,(-1)},{0xFE91FF18,0,0x8AE8D7D9,5,(-1),5,0x8AE8D7D9,0,0xFE91FF18,(-1)}},{{0x75DACB59,5,0,0x03280863,(-3),0x2D034E44,0x8AE8D7D9,0x2D034E44,(-3),0x03280863},{1,0,1,(-1),0xFE91FF18,0,0x8AE8D7D9,5,(-1),5}},{{(-3),0x3C4ED8A8,(-1),0x03280863,(-1),0x3C4ED8A8,(-3),5,1,(-1)},{1,5,(-3),0x3C4ED8A8,(-1),0x03280863,(-1),0x3C4ED8A8,(-3),5}},{{(-1),5,0x8AE8D7D9,0,0xFE91FF18,(-1),(-3),(-1),(-3),(-1)},{0,0x3C4ED8A8,0xFE91FF18,0x3C4ED8A8,0,(-1),0x8AE8D7D9,0x03280863,1,0}},{{(-1),(-1),0xFE91FF18,0x03280863,0x75DACB59,0x03280863,0xFE91FF18,(-1),(-1),0},{1,0x03280863,0x8AE8D7D9,(-1),0,0x3C4ED8A8,0xFE91FF18,0x3C4ED8A8,0,(-1)}},{{(-3),(-1),(-3),(-1),0xFE91FF18,0,0x8AE8D7D9,5,(-1),5},{(-3),0x3C4ED8A8,(-1),0x03280863,(-1),0x3C4ED8A8,(-3),5,1,(-1)}},{{1,5,(-3),0x3C4ED8A8,(-1),0x03280863,(-1),0x3C4ED8A8,(-3),5},{(-1),5,0x8AE8D7D9,0,0xFE91FF18,(-1),(-3),(-1),(-3),(-1)}},{{0,0x3C4ED8A8,0xFE91FF18,0x3C4ED8A8,0,(-1),0x8AE8D7D9,0x03280863,1,0},{(-1),(-1),0xFE91FF18,0x03280863,0x75DACB59,0x03280863,0xFE91FF18,(-1),(-1),0}}};
static float g_903 = 0x0.Dp-1;
static uint32_t g_904 = 0x09A0440C;
static int16_t g_954 = 0xA056;
static int16_t g_955[3] = {(-8),(-8),(-8)};
static uint16_t g_956 = 0x7877;
static int8_t g_1103 = 0x3B;
static uint8_t g_1180[6] = {0x78,0U,0U,0x78,0U,0U};
static struct S3 g_1227 = {2249,14,2,-97,0xD4E1F6AD,1826,184,-9,-68};
static int32_t g_1314 = 0x83C33C34;
static float g_1364[7][3] = {{0x8.F03034p-71,0x5.F1FE4Ap-54,0x5.F1FE4Ap-54},{(-0x1.6p+1),0x5.F1FE4Ap-54,0xB.BEC72Ap-93},{(-0x2.4p-1),0x8.F03034p-71,0x8.3p-1},{(-0x1.6p+1),(-0x1.6p+1),0x8.3p-1},{0x8.F03034p-71,(-0x2.4p-1),0xB.BEC72Ap-93},{0x5.F1FE4Ap-54,(-0x1.6p+1),0x5.F1FE4Ap-54},{0x5.F1FE4Ap-54,0x8.F03034p-71,(-0x1.6p+1)}};
static int32_t g_1439 = 0;
static int32_t g_1440 = 0x62422292;



inline static struct S5  func_28(void);
inline static const struct S5  func_29(const uint16_t  p_30, int32_t  p_31, struct S8  p_32, int32_t  p_33, struct S8  p_34);
static struct S8  func_43(struct S1  p_44, int32_t  p_45, struct S1  p_46, int16_t  p_47);
static uint32_t  func_49(int32_t  p_50, struct S3  p_51, uint16_t  p_52, uint16_t  p_53);
inline static int16_t  func_56(struct S8  p_57, int8_t  p_58, const struct S3  p_59);
static struct S8  func_60(struct S6  p_61, uint8_t  p_62, int16_t  p_63, const struct S3  p_64, int8_t  p_65);
static uint16_t  func_75(const uint32_t  p_76, int32_t  p_77, struct S2  p_78, struct S3  p_79);
static struct S2  func_80(struct S0  p_81);
inline static struct S0  func_82(struct S8  p_83, int16_t  p_84, struct S0  p_85);
inline static struct S8  func_86(struct S4  p_87, struct S3  p_88);





inline static struct S5  func_28(void)
{ 
    uint16_t l_37 = 0x8F25;
    int32_t l_39 = 0x5D5D909C;
    int32_t l_40 = 0xB8A442F2;
    int32_t l_41[7] = {0x8AC29BA1,0x8AC29BA1,0x8AC29BA1,0x8AC29BA1,0x8AC29BA1,0x8AC29BA1,0x8AC29BA1};
    uint32_t l_1224 = 0x06F9E241;
    uint32_t l_1225 = 4294967288U;
    struct S2 l_1226 = {0,0,14,2169,3,18279,-131};
    int32_t l_1228 = 0x7287927D;
    struct S5 l_1278 = {-186};
    int32_t l_1303 = 0x8AE93302;
    float l_1305[4][7] = {{(-0x6.7p-1),0x6.0953CFp+50,(-0x6.7p-1),(-0x6.7p-1),0x6.0953CFp+50,(-0x6.7p-1),(-0x6.7p-1)},{0x6.0953CFp+50,0x6.0953CFp+50,0xA.335030p-18,0x6.0953CFp+50,0x6.0953CFp+50,0xA.335030p-18,0x6.0953CFp+50},{0x6.0953CFp+50,(-0x6.7p-1),(-0x6.7p-1),0x6.0953CFp+50,(-0x6.7p-1),(-0x6.7p-1),0x6.0953CFp+50},{(-0x6.7p-1),0x6.0953CFp+50,(-0x6.7p-1),(-0x6.7p-1),0x6.0953CFp+50,(-0x6.7p-1),0xA.335030p-18}};
    uint32_t l_1317 = 0x73F4172D;
    struct S8 l_1321 = {-198,7};
    uint16_t l_1352 = 65526U;
    int16_t l_1357 = 0;
    float l_1369 = 0x2.628407p+95;
    struct S1 l_1372 = {-9,-7,161,-13,-1};
    uint8_t l_1441[10] = {0xB1,0xDB,0xB1,1U,1U,0xB1,0xDB,0xB1,1U,1U};
    int8_t l_1468 = (-1);
    int16_t l_1479 = 0xA8ED;
    int8_t l_1505 = 0x3D;
    struct S8 l_1508 = {-391,12};
    int32_t l_1509 = 0xB6FC297A;
    int32_t l_1510 = 0xD435A730;
    struct S5 l_1536 = {-238};
    int i, j;
lbl_1415:
    g_66.f5 = func_29((l_40 = (l_39 = (safe_sub_func_int8_t_s_s((l_37 = 0x47), ((safe_unary_minus_func_uint32_t_u(g_3)) >= 0x14BE))))), l_41[3], g_42, (0x42 || 0x34), func_43(g_48, (func_49((0xFA8275BA & l_41[3]), g_54, l_41[3], g_48.f4) ^ l_41[3]), g_48, l_41[6]));
    if (__builtin_ffs((safe_sub_func_uint32_t_u_u(g_900, l_37))))
    { 
        int8_t l_1204 = 0xED;
        struct S3 l_1223 = {2474,4,8,272,1U,1341,220,6,71};
        float l_1237 = 0xE.BBBA10p-8;
        int32_t l_1242 = 0x29F83670;
        struct S8 l_1340[6] = {{-93,13},{-93,13},{-93,13},{-93,13},{-93,13},{-93,13}};
        uint8_t l_1341 = 0x9E;
        int i;
        g_42 = g_103;
        if (((safe_add_func_int8_t_s_s(0, ((safe_lshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((l_1204 ^ 0), __builtin_ctzll(l_1204))) == (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_66.f0.f0 & func_75((4294967295U != (l_1223.f3 = ((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((!(safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((!(safe_rshift_func_int16_t_s_s(func_49(g_488.f2, l_1223, l_1224, g_66.f3.f2), l_1223.f4))), g_1180[3])), 0x08A8BA95))), g_488.f1)) >= g_54.f2), g_48.f0)), 4294967294U)) & g_54.f2))), l_1225, l_1226, g_1227)), g_955[0])), l_1228))), 5)) == g_1180[3]))) && 4294967293U))
        { 
            uint32_t l_1232 = 4294967286U;
            int32_t l_1238 = 0xAB4D3322;
            int32_t l_1240 = 0xBFE7F98B;
            int32_t l_1243 = 0xFE5D1C05;
            int32_t l_1244 = 6;
            uint8_t l_1248 = 0x15;
            int32_t l_1304 = 0x3766BC3D;
            int32_t l_1316 = 0x91F44DE9;
            struct S8 l_1320 = {867,13};
            for (g_165 = 20; (g_165 <= 7); g_165 = safe_sub_func_int16_t_s_s(g_165, 3))
            { 
                int8_t l_1231 = 8;
                int32_t l_1239 = 0xCB0E2D19;
                float l_1245 = 0x4.9p-1;
                uint32_t l_1251 = 0x11B82847;
                uint32_t l_1307 = 0xEE5CB7ED;
                int32_t l_1311 = (-4);
                g_42.f0 = (0xB7D42F6B < ((l_1232 ^= l_1231) && __builtin_ctz(l_1223.f8)));
                for (l_1223.f4 = 0; (l_1223.f4 != 9); l_1223.f4++)
                { 
                    int16_t l_1241[4];
                    int32_t l_1246 = 6;
                    int32_t l_1247 = 0xCA8FC6B7;
                    struct S1 l_1259 = {9,-7,2020,34,-1};
                    int32_t l_1276 = 8;
                    const int32_t l_1277 = (-8);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1241[i] = 0xBECE;
                    for (l_39 = 0; (l_39 < (-26)); l_39--)
                    { 
                        g_66.f1.f4 |= g_489.f3;
                        g_48.f0 |= (g_651 = (65527U & l_1223.f1));
                    }
                    --l_1248;
                    --l_1251;
                    for (l_1204 = 0; (l_1204 == (-19)); l_1204--)
                    { 
                        uint8_t l_1256 = 0x58;
                        l_1256++;
                        l_1259 = g_48;
                        g_54.f3 = (safe_mul_func_uint8_t_u_u(l_41[3], (g_1103 = ((g_626 >= (safe_sub_func_uint8_t_u_u((((l_40 ^= (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((--g_956), 0)), (0x6557 || (safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_1256 >= (((g_66.f0.f1 &= l_1223.f7) ^ (safe_div_func_int32_t_s_s((__builtin_clzl(g_54.f0) >= l_1248), 4294967295U))) < l_1276)), 5)), g_488.f5)))))) <= l_1277) != l_1242), g_54.f4))) != l_1251))));
                        return l_1278;
                    }
                }
                for (g_66.f2.f1 = 0; (g_66.f2.f1 != 51); g_66.f2.f1 = safe_add_func_uint8_t_u_u(g_66.f2.f1, 1))
                { 
                    uint16_t l_1283 = 0x15DB;
                    int32_t l_1290 = 0;
                    int32_t l_1312 = (-1);
                    int32_t l_1315 = 1;
                    for (g_111 = 0; (g_111 != (-22)); g_111--)
                    { 
                        int8_t l_1306 = 3;
                        --l_1283;
                        g_488.f5 = (g_48.f4 = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((l_1290 = (4 | 0xBC)) > ((safe_lshift_func_int16_t_s_s(l_1223.f6, (g_1227.f8 <= (safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((0xE887 || l_1251), (safe_div_func_uint32_t_u_u((l_1304 = (((safe_rshift_func_uint8_t_u_s(g_66.f1.f3, (g_273 = l_1303))) == 0x6F) && g_489.f7)), g_1227.f7)))) < l_1283), 0x1FE4A325)) != g_488.f4), 0x91A9AA0C))))) ^ g_576[9])), l_1283)), g_114.f0)));
                        l_1239 = (l_1223.f5 <= __builtin_popcountl(__builtin_bswap64(l_1242)));
                        l_1307++;
                    }
                    if (g_66.f3.f2)
                        continue;
                    for (g_54.f4 = 0; (g_54.f4 <= 6); g_54.f4 += 1)
                    { 
                        int32_t l_1310 = (-1);
                        int32_t l_1313[7][7] = {{0xACBFCA3D,0x886629F7,0x886629F7,0xACBFCA3D,0x886629F7,0x886629F7,0xACBFCA3D},{0,0x2683D901,0,5,0,5,0},{0xACBFCA3D,0xACBFCA3D,(-3),0xACBFCA3D,0xACBFCA3D,(-3),0xACBFCA3D},{0,5,0,0x2683D901,0,5,0},{0x886629F7,0xACBFCA3D,0x886629F7,0x886629F7,0xACBFCA3D,0x886629F7,0x886629F7},{0,0x2683D901,0xD820ACFD,0x2683D901,0,6,0},{0xACBFCA3D,0x886629F7,0x886629F7,0xACBFCA3D,0x886629F7,0x886629F7,0xACBFCA3D}};
                        int i, j;
                        ++l_1317;
                        l_1239 ^= 0x7A9C07E5;
                    }
                    l_1321 = l_1320;
                }
                for (g_900 = 0; (g_900 < 16); g_900++)
                { 
                    uint8_t l_1326 = 251U;
                    for (l_1239 = (-30); (l_1239 == (-11)); l_1239 = safe_add_func_int16_t_s_s(l_1239, 3))
                    { 
                        --l_1326;
                        if (g_114.f1)
                            continue;
                        l_1278 = g_66.f5;
                        if (l_1311)
                            continue;
                    }
                }
            }
            l_41[5] = ((g_48.f2 >= (g_130 = g_898)) >= (safe_div_func_float_f_f((+(safe_div_func_float_f_f((((l_1321.f0 = ((l_1320.f0 != 0x9.584BC1p-22) >= (safe_sub_func_float_f_f((safe_div_func_float_f_f((l_1242 = g_576[3]), 0xE.FD1AC3p+93)), l_1223.f5)))) > 0xA.A57ABEp+4) >= ((((safe_add_func_float_f_f(((func_56(l_1340[3], l_1278.f0, g_1227) >= l_1341) > 0x7.681C8Bp-17), (-0x6.6p-1))) > l_1232) > g_1227.f0) < l_41[3])), l_1223.f4))), 0x9.277F84p-30)));
            if ((l_1340[3].f0 ^= g_956))
            { 
                int8_t l_1355 = 0;
                uint32_t l_1360 = 0x295112A9;
                int8_t l_1363 = 0xB6;
                int32_t l_1365 = 0x80B9AEC4;
                uint32_t l_1366 = 4294967286U;
                for (l_1238 = 20; (l_1238 != (-1)); --l_1238)
                { 
                    uint32_t l_1353 = 0x32C4178A;
                    int32_t l_1354 = (-7);
                    int32_t l_1356 = 0x433E818C;
                    int32_t l_1358 = (-1);
                    int32_t l_1359 = 0x0DD05D16;
                    struct S1 l_1373 = {-8,-5,450,37,-1};
                    if (func_75((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u(g_42.f0, 7)))), g_66.f3.f1, g_488, l_1223))
                    { 
                        struct S1 l_1349 = {8,-7,560,-19,-0};
                        l_1353 = (safe_div_func_uint8_t_u_u(0x9D, func_56(func_43(l_1349, ((safe_rshift_func_int8_t_s_u((l_1226.f3 == g_247[1]), l_1352)) && 65528U), g_48, g_48.f3), g_489.f7, g_1227)));
                        l_1360++;
                        g_488.f3 = g_66.f1.f6;
                    }
                    else
                    { 
                        l_1366++;
                        g_48.f3 ^= g_66.f1.f0;
                        if (g_66.f1.f3)
                            goto lbl_1391;
                    }
                    for (l_1225 = 0; (l_1225 <= 9); l_1225 += 1)
                    { 
                        int i;
                        l_1340[3].f0 = g_576[l_1225];
                        if (l_1248)
                            goto lbl_1391;
                        return g_66.f5;
                    }
                    if ((g_42.f0 = (safe_rshift_func_uint16_t_u_u(g_489.f5, g_66.f1.f0))))
                    { 
                        l_1373 = l_1372;
                        g_66.f1.f6 = ((l_1358 >= g_66.f1.f0) > l_1232);
                        return g_66.f5;
                    }
                    else
                    { 
                        g_54.f3 |= g_576[3];
                    }
                }
            }
            else
            { 
                uint16_t l_1376 = 6U;
                int32_t l_1381 = (-1);
                l_40 = (safe_sub_func_int16_t_s_s(((g_418 = ((l_1304 = (l_1376 = 0x5A7EDEBA)) >= ((safe_add_func_int32_t_s_s(g_66.f4, func_56(g_42, ((__builtin_popcountll(((__builtin_ffs(g_66.f1.f6) ^ 0x93) & (safe_add_func_int32_t_s_s(1, 0x5542013F)))) ^ l_1381) < 1U), l_1223))) & 0x21))) ^ g_489.f5), l_1320.f0));
            }
        }
        else
        { 
            int32_t l_1389 = (-2);
            struct S5 l_1390 = {-218};
            for (g_489.f4 = (-9); (g_489.f4 == 51); g_489.f4 = safe_add_func_uint32_t_u_u(g_489.f4, 9))
            { 
                float l_1384 = 0x4.Ep+1;
                g_48.f1 |= g_111;
            }
            g_899 = (safe_add_func_float_f_f((g_489.f3 < (safe_div_func_float_f_f((0x5.Ap-1 > 0x1.Bp-1), __builtin_parityll(__builtin_ia32_crc32qi(l_1223.f6, l_1389))))), l_1389));
            return l_1390;
        }
lbl_1391:
        g_48 = g_48;
        l_40 &= 0x856F0FDA;
    }
    else
    { 
        uint8_t l_1398 = 0x92;
        int32_t l_1412[6] = {0x50CB2FA6,0x52BEB6C9,0x50CB2FA6,0x50CB2FA6,0x52BEB6C9,0x50CB2FA6};
        int32_t l_1431[6][7][6] = {{{0,0x58A4EF33,0,1,0x24956D8A,0x5211A7D6},{0xF3112388,0xF785C517,0,0x941C1C2E,(-9),0},{0x1126FA3D,0x941C1C2E,0x24956D8A,0x941C1C2E,0x1126FA3D,1},{0xF3112388,0,0x590EC125,1,0x1126FA3D,0x941C1C2E},{0,0x941C1C2E,(-9),0,(-9),0x941C1C2E},{(-9),0xF785C517,0x590EC125,0x5211A7D6,0x24956D8A,1},{(-9),0x58A4EF33,0x24956D8A,0,(-1),0}},{{0,0x58A4EF33,0,1,0x24956D8A,0x5211A7D6},{0xF3112388,0xF785C517,0,0x941C1C2E,(-9),0},{0x1126FA3D,0x941C1C2E,0x24956D8A,0x941C1C2E,0x1126FA3D,1},{0xF3112388,0,0x590EC125,1,0x1126FA3D,0x941C1C2E},{0,0x941C1C2E,(-9),0,(-9),0x941C1C2E},{(-9),0xF785C517,0x590EC125,0x5211A7D6,0x24956D8A,1},{(-9),0x58A4EF33,0x24956D8A,0,(-1),0}},{{0,0x58A4EF33,0,1,0x24956D8A,0x5211A7D6},{0xF3112388,0xF785C517,0,0x941C1C2E,(-9),0},{0x1126FA3D,0x941C1C2E,0x24956D8A,0x941C1C2E,0x1126FA3D,1},{0xF3112388,0,0x590EC125,1,0x1126FA3D,0x941C1C2E},{0,0x941C1C2E,(-9),0,(-9),0x941C1C2E},{(-9),0xF785C517,0x590EC125,0x5211A7D6,(-9),0x5211A7D6},{(-1),0x82327B45,(-9),1,0xF3112388,1}},{{0x1126FA3D,0x82327B45,0x1126FA3D,0x5211A7D6,(-9),0x58A4EF33},{0,0,0x1126FA3D,0xF785C517,(-1),1},{0x590EC125,0xF785C517,(-9),0xF785C517,0x590EC125,0x5211A7D6},{0,1,0x24956D8A,0x5211A7D6,0x590EC125,0xF785C517},{0x1126FA3D,0xF785C517,(-1),1,(-1),0xF785C517},{(-1),0,0x24956D8A,0x58A4EF33,(-9),0x5211A7D6},{(-1),0x82327B45,(-9),1,0xF3112388,1}},{{0x1126FA3D,0x82327B45,0x1126FA3D,0x5211A7D6,(-9),0x58A4EF33},{0,0,0x1126FA3D,0xF785C517,(-1),1},{0x590EC125,0xF785C517,(-9),0xF785C517,0x590EC125,0x5211A7D6},{0,1,0x24956D8A,0x5211A7D6,0x590EC125,0xF785C517},{0x1126FA3D,0xF785C517,(-1),1,(-1),0xF785C517},{(-1),0,0x24956D8A,0x58A4EF33,(-9),0x5211A7D6},{(-1),0x82327B45,(-9),1,0xF3112388,1}},{{0x1126FA3D,0x82327B45,0x1126FA3D,0x5211A7D6,(-9),0x58A4EF33},{0,0,0x1126FA3D,0xF785C517,(-1),1},{0x590EC125,0xF785C517,(-9),0xF785C517,0x590EC125,0x5211A7D6},{0,1,0x24956D8A,0x5211A7D6,0x590EC125,0xF785C517},{0x1126FA3D,0xF785C517,(-1),1,(-1),0xF785C517},{(-1),0,0x24956D8A,0x58A4EF33,(-9),0x5211A7D6},{(-1),0x82327B45,(-9),1,0xF3112388,1}}};
        int i, j, k;
        if (((func_56(func_86(g_66.f0, g_54), ((((((safe_rshift_func_uint8_t_u_u((g_651 && 0x51), 7)) && ((safe_mul_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_1398, 7)), (l_39 = ((l_1412[0] = (safe_rshift_func_int16_t_s_u(func_56(l_1321, (safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((-1), 12)), ((+(safe_sub_func_uint32_t_u_u(((l_1226.f3 |= g_48.f3) && l_1226.f5), 0U))) > g_114.f1))), g_1227.f1)) < l_1372.f1), l_1226.f2)), g_489), g_66.f1.f6))) > g_111)))) <= g_66.f1.f5)) >= (-1)) > 0xEFFAF22F) < l_1398) & 1), g_1227) > 9) != 9))
        { 
            struct S5 l_1418 = {243};
            for (l_1226.f0 = (-25); (l_1226.f0 != 9); l_1226.f0++)
            { 
                if (l_1303)
                    goto lbl_1415;
                for (g_295 = 0; (g_295 <= 5); g_295 += 1)
                { 
                    int i;
                    g_66.f1.f3 = ((g_1180[g_295] > (safe_sub_func_int8_t_s_s(g_1180[g_295], g_489.f1))) && (g_740 ^= ((250U & 0x26) < g_1227.f6)));
                    for (l_39 = 0; (l_39 <= 5); l_39 += 1)
                    { 
                        return g_66.f5;
                    }
                }
                if (g_42.f1)
                    goto lbl_1415;
            }
            return l_1418;
        }
        else
        { 
            int32_t l_1421[3];
            int32_t l_1428 = 0;
            struct S8 l_1429 = {-414,12};
            int i;
            for (i = 0; i < 3; i++)
                l_1421[i] = 0xE16609A5;
            l_1278 = func_29(l_1398, (safe_lshift_func_int16_t_s_u(l_1421[2], (l_1428 = (safe_div_func_int8_t_s_s((__builtin_ctzl(l_1421[2]) >= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_1321.f0, g_576[3])), 0x4664))), l_1412[0]))))), l_1429, g_418, l_1321);
        }
        for (g_165 = 0; (g_165 <= 5); g_165 += 1)
        { 
            int32_t l_1430 = 0x1F5457EA;
            int32_t l_1432 = (-1);
            int32_t l_1433 = 5;
            int32_t l_1434 = 0x14D0A064;
            float l_1435 = 0x4.Cp+1;
            int8_t l_1436 = 5;
            int32_t l_1437 = 0xBC6746E3;
            int32_t l_1438 = 0;
            int i;
            ++l_1441[1];
        }
        return g_66.f5;
    }
    for (g_1103 = 1; (g_1103 >= 0); g_1103 -= 1)
    { 
        uint32_t l_1446[6][9][4] = {{{0xC36A9410,0x287629FC,4294967295U,0x287629FC},{0xDC59F3AB,1U,4294967294U,0xC36A9410},{0x1158D7EF,0U,0x287629FC,0x22A76E37},{4294967294U,0xDC59F3AB,0x01E31F96,0x01E31F96},{4294967294U,4294967294U,0x287629FC,4294967288U},{0x1158D7EF,0x01E31F96,4294967294U,0U},{0xDC59F3AB,0xF103937E,4294967295U,4294967294U},{0xC36A9410,0xF103937E,0xC36A9410,0U},{0xF103937E,0x01E31F96,0x5A94804B,4294967288U}},{{4294967288U,4294967294U,0xDC59F3AB,0x01E31F96},{0x22A76E37,0xDC59F3AB,0xDC59F3AB,0x22A76E37},{4294967288U,0U,0x5A94804B,0xC36A9410},{0xF103937E,1U,0xC36A9410,0x287629FC},{0xC36A9410,0x287629FC,4294967295U,0x287629FC},{0xDC59F3AB,0x5A94804B,0x287629FC,0x01E31F96},{0xC36A9410,1U,0xF103937E,4294967294U},{0x287629FC,0x22A76E37,0xDC59F3AB,0xDC59F3AB},{0x287629FC,0x287629FC,0xF103937E,0U}},{{0xC36A9410,0xDC59F3AB,0x287629FC,1U},{0x22A76E37,4294967288U,0x1158D7EF,0x287629FC},{0x01E31F96,4294967288U,0x01E31F96,1U},{4294967288U,0xDC59F3AB,4294967295U,0U},{0U,0x287629FC,0x22A76E37,0xDC59F3AB},{4294967294U,0x22A76E37,0x22A76E37,4294967294U},{0U,1U,4294967295U,0x01E31F96},{4294967288U,0x5A94804B,0x01E31F96,0xF103937E},{0x01E31F96,0xF103937E,0x1158D7EF,0xF103937E}},{{0x22A76E37,0x5A94804B,0x287629FC,0x01E31F96},{0xC36A9410,1U,0xF103937E,4294967294U},{0x287629FC,0x22A76E37,0xDC59F3AB,0xDC59F3AB},{0x287629FC,0x287629FC,0xF103937E,0U},{0xC36A9410,0xDC59F3AB,0x287629FC,1U},{0x22A76E37,4294967288U,0x1158D7EF,0x287629FC},{0x01E31F96,4294967288U,0x01E31F96,1U},{4294967288U,0xDC59F3AB,4294967295U,0U},{0U,0x287629FC,0x22A76E37,0xDC59F3AB}},{{4294967294U,0x22A76E37,0x22A76E37,4294967294U},{0U,1U,4294967295U,0x01E31F96},{4294967288U,0x5A94804B,0x01E31F96,0xF103937E},{0x01E31F96,0xF103937E,0x1158D7EF,0xF103937E},{0x22A76E37,0x5A94804B,0x287629FC,0x01E31F96},{0xC36A9410,1U,0xF103937E,4294967294U},{0x287629FC,0x22A76E37,0xDC59F3AB,0xDC59F3AB},{0x287629FC,0x287629FC,0xF103937E,0U},{0xC36A9410,0xDC59F3AB,0x287629FC,1U}},{{0x22A76E37,4294967288U,0x1158D7EF,0x287629FC},{0x01E31F96,4294967288U,0x01E31F96,1U},{4294967288U,0xDC59F3AB,4294967295U,0U},{0U,0x287629FC,0x22A76E37,0xDC59F3AB},{4294967294U,0x22A76E37,0x22A76E37,4294967294U},{0U,1U,4294967295U,0x01E31F96},{4294967288U,0x5A94804B,0x01E31F96,0xF103937E},{0x01E31F96,0xF103937E,0x1158D7EF,0xF103937E},{0x22A76E37,0x5A94804B,0x287629FC,0x01E31F96}}};
        const struct S3 l_1447 = {2847,2,0,-410,0xE494F6AB,614,74,4,34};
        uint32_t l_1451 = 4294967295U;
        const struct S3 l_1459 = {2578,14,7,359,0U,834,178,5,2};
        int32_t l_1534 = 0x54596A90;
        int32_t l_1535 = 0;
        int i, j, k;
        l_1372.f4 = (g_489.f6 ^ (((safe_sub_func_uint16_t_u_u(1U, l_1446[0][6][0])) && (((func_56(g_42, (g_111 ^= g_446), l_1447) <= g_103.f1) & 0x6D) <= 0x7BA4)) == (-6)));
        if (l_1372.f2)
            continue;
        if (((0 & (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u((l_41[6] = g_103.f0), l_1447.f6))))) <= (g_66.f1.f2 >= (l_1451 && l_1447.f4))))
        { 
            struct S8 l_1458 = {-833,14};
            for (g_489.f4 = 0; (g_489.f4 <= 1); g_489.f4 += 1)
            { 
                uint8_t l_1469[9] = {0U,0U,0U,0U,0U,0U,0U,0U,0U};
                int32_t l_1492 = 7;
                int i;
                g_42.f0 ^= __builtin_parityl((((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(__builtin_ffsll(g_489.f6), (safe_sub_func_uint16_t_u_u(func_56(l_1458, g_114.f0, l_1459), (safe_lshift_func_int16_t_s_u(((++g_295) <= l_1458.f0), 12)))))), l_1372.f4)) < (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_66.f0.f1 &= ((l_1468 <= 0xC803399C) > l_1372.f1)), l_1469[2])), 1U))) | 0x18A0));
                for (l_1225 = 0; (l_1225 <= 1); l_1225 += 1)
                { 
                    int32_t l_1482 = 0;
                    int32_t l_1491 = (-4);
                    int i, j, k;
                    l_1482 = (g_1364[0][2] = (safe_div_func_float_f_f(((((__builtin_bswap64((((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(0U, g_901[(g_1103 + 5)][l_1225][(l_1225 + 2)])), (g_901[(g_1103 + 3)][l_1225][(g_1103 + 1)] < g_900))) >= ((~(safe_add_func_uint32_t_u_u(__builtin_ctzl((0 != l_1479)), (safe_rshift_func_uint8_t_u_s(g_54.f7, 2))))) < g_1440)) | l_1458.f1)) > g_66.f1.f1) < g_901[(g_1103 + 5)][l_1225][(l_1225 + 2)]) >= g_903) < 0x0.Ep-1), 0x0.7p-1)));
                    l_1491 = ((-(safe_sub_func_float_f_f((!(l_1482 = g_1227.f6)), g_489.f1))) != (safe_sub_func_float_f_f(g_901[(g_1103 + 3)][l_1225][(g_1103 + 1)], (func_56(g_114, l_1447.f2, g_54) > (l_1459.f3 > (safe_add_func_float_f_f(0xC.519835p-22, 0x7.Fp-1)))))));
                    l_1492 = g_66.f6;
                }
            }
            for (g_212 = 17; (g_212 <= 17); g_212 = safe_add_func_uint16_t_u_u(g_212, 6))
            { 
                uint32_t l_1506[6][3][3] = {{{0U,0U,0U},{4294967295U,0xE408A0B6,4294967295U},{0U,0U,0U}},{{4294967295U,0xE408A0B6,4294967295U},{0U,0U,0U},{4294967295U,0xE408A0B6,4294967295U}},{{0U,0U,0U},{4294967295U,0xE408A0B6,1U},{7U,0U,7U}},{{1U,4294967295U,1U},{7U,0U,7U},{1U,4294967295U,1U}},{{7U,0U,7U},{1U,4294967295U,1U},{7U,0U,7U}},{{1U,4294967295U,1U},{7U,0U,7U},{1U,4294967295U,1U}}};
                int i, j, k;
                l_41[3] &= (safe_sub_func_int8_t_s_s((-1), 4));
                for (g_1440 = 0; (g_1440 <= 29); ++g_1440)
                { 
                    int8_t l_1501[6] = {6,0x47,6,6,0x47,6};
                    int32_t l_1507[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1507[i] = (-1);
                    for (g_295 = 0; (g_295 != 2); ++g_295)
                    { 
                        uint32_t l_1502 = 0x1B180A95;
                        l_1502--;
                        if (l_1505)
                            continue;
                        l_1507[4] ^= l_1506[2][2][1];
                        l_1372.f1 = g_54.f4;
                    }
                    for (g_415 = 0; (g_415 <= 2); g_415 += 1)
                    { 
                        int i, j, k;
                        l_1458.f0 = g_901[(g_415 + 3)][g_1103][(g_1103 + 1)];
                        g_130 = g_901[(g_1103 + 4)][g_1103][(g_415 + 3)];
                        if (l_1506[(g_415 + 3)][g_415][(g_1103 + 1)])
                            continue;
                    }
                }
            }
            l_1510 ^= (func_56(l_1508, ((g_66.f6 & (g_488.f2 ^ 0xDB9388F3)) | l_1509), g_1227) <= (-1));
        }
        else
        { 
            int32_t l_1513[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1513[i] = 0xCB099ED4;
            g_66.f1.f3 = ((safe_rshift_func_int16_t_s_u(l_1513[0], 12)) ^ (l_1535 = (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((-6), (safe_mod_func_int32_t_s_s(((-8) || (safe_mul_func_int16_t_s_s((0xF705 || (safe_mod_func_int16_t_s_s(((l_1447.f5 == (safe_mod_func_int16_t_s_s((g_1439 | (g_1227.f0 = (safe_mul_func_int16_t_s_s(g_66.f1.f2, ((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(g_740, (safe_sub_func_uint32_t_u_u(0U, (-1))))) == g_103.f0), 12)) || 0x1B9A116F))))), l_1459.f6))) > l_1534), l_1441[0]))), l_1447.f5))), g_54.f8)))), g_1227.f8))));
            return g_66.f5;
        }
    }
    return l_1536;
}




inline static const struct S5  func_29(const uint16_t  p_30, int32_t  p_31, struct S8  p_32, int32_t  p_33, struct S8  p_34)
{ 
    uint32_t l_1194 = 1U;
    int32_t l_1195 = 0x3DAFA7D5;
    l_1195 = l_1194;
    return g_66.f5;
}




static struct S8  func_43(struct S1  p_44, int32_t  p_45, struct S1  p_46, int16_t  p_47)
{ 
    uint32_t l_991 = 4294967287U;
    struct S8 l_994 = {-773,9};
    int32_t l_995 = (-4);
    const struct S3 l_998 = {1619,18,7,138,1U,664,41,18,113};
    uint8_t l_1015 = 0xE6;
    int32_t l_1028 = 4;
    int32_t l_1033 = (-9);
    int32_t l_1037 = 0xCA3201F3;
    int32_t l_1039 = (-3);
    int32_t l_1041 = 0xF94989FC;
    uint8_t l_1042 = 1U;
    uint8_t l_1068 = 0xF1;
    float l_1151 = 0x4.01BA53p+85;
    int8_t l_1168 = 0xDA;
    int32_t l_1183 = 0;
    int32_t l_1184 = 1;
    int32_t l_1185 = 8;
    int32_t l_1186 = (-1);
    int32_t l_1187 = (-2);
    int32_t l_1188[7];
    int16_t l_1189 = 1;
    float l_1190 = (-0x10.2p-1);
    uint16_t l_1191 = 0x6AC7;
    int i;
    for (i = 0; i < 7; i++)
        l_1188[i] = 0;
    for (g_66.f1.f0 = 0; (g_66.f1.f0 != 21); g_66.f1.f0 = safe_add_func_int32_t_s_s(g_66.f1.f0, 3))
    { 
        const struct S3 l_999 = {1541,18,0,499,0x2D2089F7,947,238,-19,-35};
        int32_t l_1000 = 0;
        int32_t l_1032 = 6;
        float l_1085[7] = {(-0x8.Fp-1),(-0x8.Fp-1),(-0x8.Fp-1),(-0x8.Fp-1),(-0x8.Fp-1),(-0x8.Fp-1),(-0x8.Fp-1)};
        int i;
        for (g_418 = 0; (g_418 == 25); g_418 = safe_add_func_uint32_t_u_u(g_418, 5))
        { 
            int32_t l_992 = 0x24F22F47;
            int32_t l_1026 = 0;
            int32_t l_1027 = 0x2B09C935;
            int32_t l_1030 = (-10);
            int32_t l_1040[7][3] = {{0xBED1E14B,0xBED1E14B,0x913358C1},{0xBED1E14B,0xBED1E14B,0x913358C1},{0xBED1E14B,0xBED1E14B,0x913358C1},{0xBED1E14B,0xBED1E14B,0x913358C1},{0xBED1E14B,0xBED1E14B,0x913358C1},{0xBED1E14B,0xBED1E14B,0x913358C1},{0xBED1E14B,0xBED1E14B,0x913358C1}};
            uint32_t l_1077[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_1077[i] = 4294967295U;
            for (g_165 = 0; (g_165 >= (-20)); g_165--)
            { 
                uint32_t l_1001 = 4294967295U;
                int32_t l_1029 = 0x4AF81FE6;
                int32_t l_1031 = 0xD71A1638;
                int32_t l_1034 = 7;
                int32_t l_1035 = 0xA5BAA005;
                int32_t l_1036 = 0xDC292AD0;
                int32_t l_1038[6] = {(-1),(-1),(-3),(-1),(-1),(-3)};
                const struct S8 l_1047 = {-845,14};
                int32_t l_1049 = 0;
                struct S1 l_1109[8][7] = {{{-1,1,1195,-7,-0},{8,1,786,55,-1},{-2,-3,1423,-14,-1},{4,-3,129,12,-0},{-9,4,586,-35,-0},{8,-1,2017,53,1},{-9,4,586,-35,-0}},{{-2,-6,1409,4,1},{-2,-5,1580,-45,-0},{-2,-5,1580,-45,-0},{-2,-6,1409,4,1},{5,5,592,-21,1},{4,-3,129,12,-0},{-1,1,1195,-7,-0}},{{-1,1,1195,-7,-0},{4,-3,129,12,-0},{5,5,592,-21,1},{-2,-6,1409,4,1},{-2,-5,1580,-45,-0},{-2,-5,1580,-45,-0},{-2,-6,1409,4,1}},{{-9,4,586,-35,-0},{8,-1,2017,53,1},{-9,4,586,-35,-0},{4,-3,129,12,-0},{-2,-3,1423,-14,-1},{8,1,786,55,-1},{-1,1,1195,-7,-0}},{{8,-1,2017,53,1},{7,4,1646,42,-0},{-9,4,586,-35,-0},{5,5,592,-21,1},{4,6,764,7,1},{5,5,592,-21,1},{-9,4,586,-35,-0}},{{-2,-3,1423,-14,-1},{-2,-3,1423,-14,-1},{5,5,592,-21,1},{10,4,1354,52,-0},{-5,1,1077,-9,-1},{8,1,786,55,-1},{8,-1,2017,53,1}},{{10,4,1354,52,-0},{-2,-3,1423,-14,-1},{-2,-5,1580,-45,-0},{8,1,786,55,-1},{8,1,786,55,-1},{-2,-5,1580,-45,-0},{-2,-3,1423,-14,-1}},{{-2,-5,1580,-45,-0},{7,4,1646,42,-0},{-2,-3,1423,-14,-1},{-9,4,586,-35,-0},{-5,1,1077,-9,-1},{4,-3,129,12,-0},{10,4,1354,52,-0}}};
                int i, j;
                l_992 = __builtin_ffs(l_991);
                l_1001 = (g_66.f1.f5 != (l_1000 = (-(0xC.73C8CCp+6 == func_56(l_994, ((p_44.f2 = p_45) <= func_56(g_103, __builtin_parityl((++g_627)), l_998)), l_999)))));
                if (((safe_rshift_func_uint8_t_u_u(((((l_994.f0 = (((0xAB296C8F | ((safe_mod_func_uint32_t_u_u(l_999.f0, (safe_add_func_uint32_t_u_u(0U, (safe_mod_func_int32_t_s_s(0x03F639EA, (safe_mul_func_uint16_t_u_u((p_46.f2 ^ ((safe_add_func_uint16_t_u_u(l_998.f2, 0xFB11)) & ((func_56(g_103, (+(p_44.f0 >= g_66.f1.f6)), l_999) < p_47) | p_46.f0))), 0x3BB5)))))))) > 0x2866)) < 1) == 0x442FBC34)) >= g_576[9]) ^ l_1015) != 0x8E976C08), g_489.f8)) < 1))
                { 
                    g_488.f6 &= func_56(g_42, ((safe_mul_func_uint16_t_u_u(p_46.f4, (safe_add_func_uint8_t_u_u(l_998.f4, (4294967295U | (safe_sub_func_uint32_t_u_u(l_992, (safe_mul_func_int16_t_s_s((p_47 = l_999.f4), l_1001))))))))) > g_66.f2.f1), l_998);
                }
                else
                { 
                    int32_t l_1024 = 0x334D712A;
                    int32_t l_1025[4][8] = {{0x36DDB34C,6,0x36DDB34C,0x36DDB34C,6,0x36DDB34C,0x36DDB34C,6},{6,0x36DDB34C,0x36DDB34C,6,0x36DDB34C,0x36DDB34C,6,0x36DDB34C},{6,6,1,6,6,1,6,6},{0x36DDB34C,6,0x36DDB34C,0x36DDB34C,6,0x36DDB34C,0x36DDB34C,6}};
                    struct S8 l_1048 = {499,11};
                    int i, j;
                    ++l_1042;
                    for (l_1032 = (-24); (l_1032 <= 11); l_1032 = safe_add_func_int8_t_s_s(l_1032, 3))
                    { 
                        l_1048 = l_1047;
                        l_1025[1][1] &= 0x22F51D41;
                        l_1038[3] = (l_1048.f1 == l_1049);
                        p_45 &= (l_1026 = ((safe_lshift_func_uint8_t_u_s((p_47 <= ((__builtin_ffs(p_44.f4) >= l_992) & (safe_add_func_int8_t_s_s(g_489.f6, l_991)))), ((safe_add_func_int16_t_s_s(1, (l_1040[1][2] = (p_44.f0 & l_1048.f1)))) == g_66.f1.f1))) != g_54.f7));
                    }
                    for (l_1029 = 6; (l_1029 >= (-7)); l_1029--)
                    { 
                        int8_t l_1061 = (-3);
                        struct S8 l_1072 = {-897,12};
                        l_1025[1][4] = (l_1035 = ((-(g_130 = (safe_add_func_float_f_f((l_1040[2][1] >= p_44.f1), (((l_1061 > (func_56(g_42, g_3, g_489) >= g_488.f1)) <= (safe_mul_func_float_f_f(__builtin_clzll(((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_1061, 0x7C68)), 0x60D949D1)) >= g_247[1])), 0x8.E29F24p+38))) == p_46.f2))))) > l_1068));
                        g_54.f3 = p_44.f3;
                        g_448 = (-0x6.04EEF0p+83);
                        p_46.f4 &= ((safe_sub_func_uint16_t_u_u(((func_56((l_1072 = g_114), (l_1035 = func_56(func_86(g_66.f0, g_489), (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(l_1077[2], ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((!(safe_rshift_func_int8_t_s_u(l_1038[4], 0))), p_44.f2)), l_1061)) < g_114.f1))) & g_900), p_44.f0)), l_999)), g_54) < p_47) == 0x0AC9), g_489.f5)) ^ p_44.f1);
                    }
                }
                if ((p_46.f1 ^= (safe_mul_func_uint16_t_u_u((((((l_1032 = ((safe_add_func_uint32_t_u_u(__builtin_ffs(func_56(g_42, (g_1103 = (g_111 = (safe_lshift_func_uint8_t_u_u(l_998.f7, (l_1031 = (safe_sub_func_uint8_t_u_u(((g_247[1] != (safe_add_func_int16_t_s_s((g_955[0] = (safe_mul_func_int8_t_s_s((g_273 |= g_956), (l_999.f2 && ((g_103.f0 <= (p_44.f0 > ((+0xF7) ^ (safe_mod_func_int8_t_s_s(((l_999.f6 == g_54.f7) <= p_44.f4), 0xEE))))) ^ l_1038[3]))))), g_901[6][0][3]))) | g_54.f3), p_44.f3))))))), g_489)), 0xFCBAA25B)) || 0x3B)) & 65535U) > 0x6DCF) == p_46.f3) > g_66.f5.f0), p_46.f0))))
                { 
                    uint8_t l_1108[5][6][8] = {{{255U,247U,0x4A,254U,251U,0x69,0U,0U},{0x4A,255U,0xC9,0xC9,255U,0x4A,0U,255U},{0xFE,0xC9,0x4A,0x69,254U,0x5F,254U,0x69},{254U,0x5F,254U,0x69,0x4A,0xC9,0xFE,255U},{0x69,0xF9,0x59,255U,255U,0x59,0xF9,0x69},{0x69,247U,255U,0xC9,0xF9,251U,0x59,251U}},{{0xC9,0x5F,0xFE,0x5F,0xC9,251U,0U,0xF9},{254U,247U,0x5F,0x4A,0x59,0x59,0x4A,0x5F},{0xF9,0xF9,0x5F,0x69,255U,255U,0U,254U},{0x59,0U,0xFE,0xF9,0xFE,0U,0x59,254U},{0U,255U,255U,0x69,0x5F,0xF9,0xF9,0x5F},{0x4A,0x59,0x59,0x4A,0x5F,247U,254U,0xF9}},{{0U,251U,0xC9,0x5F,0xFE,0x5F,0xC9,251U},{0x59,251U,0xF9,0xC9,255U,247U,0x69,0x69},{0xF9,0x59,255U,255U,0x59,0xF9,0x69,0xFE},{254U,255U,0xF9,247U,0xC9,0U,0xC9,247U},{0xC9,0U,0xC9,247U,0xF9,255U,254U,0xFE},{0x69,0xF9,0x59,255U,255U,0x59,0xF9,0x69}},{{0x69,247U,255U,0xC9,0xF9,251U,0x59,251U},{0xC9,0x5F,0xFE,0x5F,0xC9,251U,0U,0xF9},{254U,247U,0x5F,0x4A,0x59,0x59,0x4A,0x5F},{0xF9,0xF9,0x5F,0x69,255U,255U,0U,254U},{0x59,0U,0xFE,0xF9,0xFE,0U,0x59,254U},{0U,255U,255U,0x69,0x5F,0xF9,0xF9,0x5F}},{{0x4A,0x59,0x59,0x4A,0x5F,247U,254U,0xF9},{0U,251U,0xC9,0x5F,0xFE,0x5F,0xC9,251U},{0x59,251U,0xF9,0xC9,255U,247U,0x69,0x69},{0xF9,0x59,255U,255U,0x59,0xF9,247U,254U},{0xC9,0x59,0x5F,251U,255U,0x69,255U,251U},{255U,0x69,255U,251U,0x5F,0x59,0xC9,254U}}};
                    int i, j, k;
                    l_1108[2][3][5] = (safe_rshift_func_uint16_t_u_u((0x66E2 < (248U == (safe_div_func_uint16_t_u_u(g_48.f4, 0xE539)))), 10));
                    return l_1047;
                }
                else
                { 
                    const struct S4 l_1110 = {239,0x0C};
                    g_48 = l_1109[0][1];
                    g_66.f0 = l_1110;
                    g_48.f0 = 1;
                    for (g_489.f4 = 0; (g_489.f4 <= 1); g_489.f4 += 1)
                    { 
                        int i, j, k;
                        g_448 = (safe_sub_func_float_f_f(((safe_sub_func_float_f_f((safe_sub_func_float_f_f((safe_sub_func_float_f_f(g_901[(g_489.f4 + 2)][g_489.f4][(g_489.f4 + 7)], ((g_903 = (l_1037 = p_44.f3)) > (safe_sub_func_float_f_f(((l_1039 > ((g_130 = g_273) == (safe_mul_func_float_f_f((g_54.f0 < (safe_add_func_float_f_f((safe_div_func_float_f_f(p_47, __builtin_popcount(((safe_lshift_func_int16_t_s_s(1, l_999.f7)) == g_489.f0)))), l_999.f3))), l_1110.f1)))) == p_46.f2), g_446))))), 0x1.B40A86p+96)), p_46.f0)) > 0x2.95788Ep-51), g_954));
                        p_46.f0 = p_46.f4;
                        l_1028 = 0x13A6A30A;
                    }
                }
            }
        }
    }
    if ((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((l_1028 = (l_1037 = l_1015)) ^ ((g_418 <= (((safe_lshift_func_int16_t_s_u(g_111, p_46.f4)) >= ((safe_mul_func_int16_t_s_s(g_114.f0, ((-1) != (9U >= ((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u((l_1039 = p_44.f0), 12)) || (g_488.f6 > l_994.f0)) == 247U), 0x95147A30)), g_954)) | 3U))))) <= g_66.f3.f2)) | g_54.f4)) == (-5))), l_991)), l_998.f7)) ^ 0xFC4370E3), l_998.f6)) >= g_66.f3.f0) || 0x54EB) < 0x6B58), 0x9CD3)), l_998.f7)))
    { 
        uint32_t l_1152 = 0x1B2502D3;
        int32_t l_1159 = 0x40D71E65;
        int32_t l_1163 = (-7);
        uint16_t l_1166[9];
        struct S2 l_1167 = {0x6F40,0,2,1140,-1,-28685,-110};
        uint16_t l_1169 = 0xD7F0;
        int i;
        for (i = 0; i < 9; i++)
            l_1166[i] = 0xEBDA;
        g_66.f1.f3 = (l_1039 = l_1152);
        g_626 ^= (safe_div_func_uint8_t_u_u(g_48.f4, (l_1028 = func_75((((0x72BC && ((g_66.f1.f4 = (safe_div_func_uint8_t_u_u(g_66.f1.f2, ((safe_add_func_uint8_t_u_u((g_66.f0.f1 &= ((g_212++) && l_1159)), (l_1163 = (g_955[0] != (~g_755))))) & (safe_add_func_int16_t_s_s(g_273, l_1159)))))) || l_1166[3])) ^ 0U) == l_1166[3]), g_489.f5, l_1167, l_998))));
        l_1169++;
    }
    else
    { 
        int32_t l_1174 = 0x41D7BAAE;
        int32_t l_1179[6][2] = {{0x1A6CF066,(-6)},{0x1A6CF066,0x1A6CF066},{(-6),0x1A6CF066},{0x1A6CF066,(-6)},{0x1A6CF066,0x1A6CF066},{(-6),0x1A6CF066}};
        int i, j;
lbl_1178:
        for (g_1103 = 0; (g_1103 > (-9)); --g_1103)
        { 
            uint16_t l_1175[6] = {0xCF66,0x4634,0x4634,0xCF66,0x4634,0x4634};
            int i;
            ++l_1175[4];
            if (g_66.f1.f6)
                goto lbl_1178;
        }
        g_1180[3]++;
        return l_994;
    }
    l_1191++;
    return l_994;
}




static uint32_t  func_49(int32_t  p_50, struct S3  p_51, uint16_t  p_52, uint16_t  p_53)
{ 
    const uint16_t l_55 = 0x86EC;
    int32_t l_67 = (-10);
    const struct S3 l_652 = {1480,8,5,-315,4U,30,73,16,50};
    uint32_t l_660[3];
    const struct S4 l_661 = {237,0x2A};
    struct S4 l_662[6] = {{146,0x5F},{169,9U},{169,9U},{146,0x5F},{169,9U},{169,9U}};
    int32_t l_698 = 0x38B0924C;
    float l_699 = 0x6.7623EDp+19;
    int8_t l_771 = 1;
    uint16_t l_804[8];
    int32_t l_807 = 0;
    int32_t l_811 = (-7);
    int32_t l_814 = (-1);
    struct S4 l_884 = {281,0xA5};
    int32_t l_894 = 7;
    int32_t l_896 = 0x0F9E152D;
    int32_t l_897[2][2] = {{0xC62853AA,0xC62853AA},{0xC62853AA,0xC62853AA}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_660[i] = 0x34F9D22A;
    for (i = 0; i < 8; i++)
        l_804[i] = 0xBE27;
lbl_762:
    l_660[2] = (p_51.f3 = (((l_55 || ((func_56(func_60(g_66, g_66.f4, l_55, g_54, (0x64 <= (l_67 ^= (-1)))), ((((g_651 = (((!p_51.f3) <= 1U) >= p_51.f2)) && 249U) < 0xFE) | l_55), l_652) < g_54.f1) == g_66.f1.f2)) ^ g_48.f4) || g_488.f5));
    l_662[4] = l_661;
    if (g_488.f6)
    { 
        uint8_t l_667[9][5][5] = {{{0x15,0x5B,0x5C,1U,0xC0},{0x65,1U,0xFD,4U,5U},{255U,0x28,0x74,0xC4,0U},{1U,246U,0xC4,251U,0xFD},{0x11,5U,0xC4,1U,3U}},{{0U,0U,0x74,0xF5,0U},{0x74,0xC0,0xFD,0x0E,0x4F},{0xF5,0x74,0x5C,0x5C,0x74},{0x03,0xB6,0x4F,0xCB,1U},{0xDA,0U,0x0E,0x65,1U}},{{0x70,0x87,0U,0x28,0x05},{0xDA,0xCB,247U,255U,0U},{0x03,0xFD,1U,0U,0U},{0xF5,0xDA,0x7D,0x97,0x5C},{0x74,0xC4,3U,0U,0xD3}},{{0U,0xE1,0xB6,0x15,0x87},{0x11,0xD0,0x4F,0x15,247U},{1U,1U,1U,0U,0x4F},{255U,0U,0x03,0x97,0x6B},{0x65,0xFD,0xCB,0U,0xCB}},{{0x15,0x15,4U,255U,0x30},{1U,0x11,0x15,0x28,0x03},{0xD3,1U,255U,0x65,0x08},{0xC0,0x11,0x6B,0xCB,0x73},{0xFD,0x15,0x5B,0x5C,1U}},{{0x28,0xFD,251U,0x0E,246U},{251U,0U,0x63,0xF5,0U},{0x97,1U,0U,1U,0xE1},{0U,0xD0,255U,251U,0xE1},{0xD3,0x5C,0xFD,0x03,0x6B}},{{0x70,0x03,1U,2U,0x63},{0U,0U,255U,0xDA,0xDA},{0xE1,0x74,0xE1,247U,0xF5},{0x0E,0x70,0x65,0x7D,0U},{5U,0xE1,0U,0x28,0x5B}},{{0x28,0xB6,0x65,0U,0x97},{2U,255U,0xE1,255U,0x70},{0x05,0x73,255U,0x74,0x30},{0x30,0xFD,1U,0xE1,0xC4},{255U,0x14,0xFD,0x28,1U}},{{251U,0x65,0xDA,0x63,0xE1},{251U,0x87,0x0E,0x97,1U},{255U,1U,0xD3,0x11,0x74},{0x30,7U,0x15,246U,0x14},{0x05,0x4F,0x4F,0x05,0xC3}}};
        int32_t l_687 = 0xFD428859;
        struct S8 l_716 = {760,5};
        const struct S3 l_723 = {1699,11,0,-57,0U,1518,181,16,-2};
        int32_t l_739 = (-1);
        struct S5 l_756 = {-84};
        struct S8 l_803 = {393,7};
        int32_t l_813 = (-10);
        float l_850 = 0x9.AB86E6p-85;
        uint32_t l_879 = 0U;
        int i, j, k;
        for (g_66.f3.f2 = 0; (g_66.f3.f2 <= 39); g_66.f3.f2 = safe_add_func_uint16_t_u_u(g_66.f3.f2, 1))
        { 
            uint32_t l_677[3][7][7] = {{{0xD13B7DC5,0x581C0C85,4294967295U,1U,0x55B519FE,0xB9364292,4294967295U},{0x3167E651,7U,1U,8U,0xA5A1FBE7,0x581C0C85,1U},{0xD13B7DC5,1U,0x17E365F1,0x1FC7D1E6,0x3167E651,7U,0x17560F22},{4294967295U,1U,7U,1U,1U,7U,1U},{4294967295U,0xE7DAC5EF,0x17560F22,0U,0x885998D6,0x581C0C85,1U},{0xE7DAC5EF,0U,0x1FC7D1E6,4294967295U,0x8E16C062,0xB9364292,4294967295U},{8U,0x17560F22,0xD13B7DC5,0U,0xB9364292,4294967288U,0x885998D6}},{{0xC861E73C,4294967295U,0xD57CE61E,1U,1U,0xE7DAC5EF,1U},{0x1FC7D1E6,4294967295U,4294967295U,0x1FC7D1E6,7U,1U,0xA5A1FBE7},{0xB9364292,0x17560F22,1U,8U,4294967295U,4294967295U,0x17E365F1},{0x17E365F1,0U,7U,1U,0xC861E73C,1U,0xA5A1FBE7},{4294967295U,0xE7DAC5EF,4294967288U,0x8E16C062,1U,0x17560F22,1U},{0x885998D6,1U,1U,7U,1U,1U,0x885998D6},{0xA5A1FBE7,1U,0x3167E651,0x55B519FE,0xC861E73C,1U,4294967295U}},{{0x8E16C062,7U,0x03BD350F,0x885998D6,4294967295U,4294967295U,1U},{0U,0x581C0C85,0x3167E651,0xE7DAC5EF,7U,0x885998D6,0U},{8U,0x3167E651,0xA5A1FBE7,1U,4294967295U,4294967295U,1U},{8U,0x1FC7D1E6,8U,7U,0x17E365F1,0x17560F22,4294967295U},{7U,4294967295U,0xD13B7DC5,4294967295U,0x3167E651,0xC861E73C,1U},{0x3167E651,0x581C0C85,0U,0xC861E73C,0x8E16C062,0x17560F22,5U},{0x17560F22,4294967295U,1U,1U,0x03BD350F,4294967295U,0xB9364292}}};
            int32_t l_682 = 0x76BBA7A1;
            int32_t l_688 = 0x8A6EFE26;
            uint32_t l_690 = 6U;
            struct S8 l_697 = {783,6};
            int32_t l_704 = (-8);
            uint8_t l_724[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_724[i] = 6U;
            for (g_165 = 0; (g_165 > (-17)); g_165--)
            { 
                int8_t l_673[3];
                int32_t l_676 = 0x8159BFAB;
                int i;
                for (i = 0; i < 3; i++)
                    l_673[i] = 4;
                if (p_53)
                    break;
                l_667[7][3][2] = (g_66.f1.f0 || (g_489.f3 <= 0xBBD1F753));
                if (p_51.f8)
                { 
                    if (p_51.f0)
                        break;
                    return p_51.f2;
                }
                else
                { 
                    uint16_t l_672 = 0x341E;
                    int32_t l_689[8][1] = {{0x6ACF369D},{(-6)},{0x6ACF369D},{(-6)},{0x6ACF369D},{(-6)},{0x6ACF369D},{(-6)}};
                    int i, j;
                    for (g_212 = 0; (g_212 < 37); g_212 = safe_add_func_int16_t_s_s(g_212, 5))
                    { 
                        g_54.f8 = (safe_div_func_int32_t_s_s(l_672, ((g_415 ^= l_673[2]) || (safe_mod_func_int8_t_s_s(l_676, l_677[1][2][2])))));
                        l_688 = (safe_sub_func_float_f_f(0x1.5p+1, ((l_682 = (0x7.72C0A0p+22 <= (l_67 = (safe_mul_func_float_f_f((g_130 = (0x2.98D920p+13 >= p_51.f6)), p_51.f5))))) < (g_489.f4 <= (safe_add_func_float_f_f(((safe_div_func_float_f_f((((((0x0.24930Fp-21 != (l_687 = func_56(g_103, (l_673[2] <= 4U), g_489))) < 0xA.9A2927p+5) < l_672) != (-0x1.1p-1)) < g_418), 0x1.634B1Fp+87)) >= 0xA.758F47p-75), 0x7.498E62p-92))))));
                        ++l_690;
                        if (l_661.f1)
                            continue;
                    }
                    for (g_66.f3.f0 = 8; (g_66.f3.f0 <= 42); g_66.f3.f0 = safe_add_func_int32_t_s_s(g_66.f3.f0, 1))
                    { 
                        return p_52;
                    }
                    for (g_627 = 0; (g_627 <= 35); ++g_627)
                    { 
                        l_688 ^= (l_676 < func_56(l_697, __builtin_ctzll(g_54.f7), g_54));
                        p_51.f3 = l_698;
                    }
                }
                g_448 = ((((((g_130 = (l_688 = ((l_682 = p_51.f3) != g_130))) >= (l_697.f0 = p_51.f6)) > (safe_div_func_float_f_f((safe_sub_func_float_f_f(g_66.f7, p_53)), l_704))) == (((-__builtin_bswap64(p_51.f1)) != 0x5.5B70D0p-55) > p_51.f5)) != g_66.f3.f2) <= (-0x1.4p-1));
            }
            g_488.f4 = func_56(g_103, g_212, p_51);
            if ((((++p_51.f4) | l_652.f5) || (((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0x6E6E, g_66.f1.f0)), func_56(l_716, (g_111 |= (~((!l_687) != (g_114.f0 = ((g_66.f0.f1 |= (g_418--)) || ((p_51.f4 < (p_53++)) && g_54.f2)))))), l_723))), 0x20019B23)), l_724[1])) >= g_295) | g_66.f1.f6)))
            { 
                int16_t l_741 = 1;
                const struct S3 l_747 = {1321,16,3,-183,4294967295U,1578,227,7,70};
                int32_t l_751 = (-8);
                struct S5 l_757 = {-153};
                for (g_242 = 3; (g_242 < 14); g_242 = safe_add_func_int16_t_s_s(g_242, 4))
                { 
                    struct S8 l_735 = {-930,12};
                    uint8_t l_738 = 254U;
                    int16_t l_750 = 0x7716;
                    p_51.f3 ^= (g_247[1] ^ (safe_rshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u(((((g_66.f1.f0 | ((g_66.f2.f0 | (l_697.f0 = (g_54.f8 == ((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((l_688 = func_56(l_735, (safe_mod_func_int16_t_s_s(l_667[7][3][2], l_738)), l_723)), l_739)) | g_740) < l_723.f8), p_51.f0)) <= 0xF6)))) || g_48.f0)) & g_66.f4) < l_741) != g_66.f3.f2), g_66.f1.f1)) && l_688) & 0xC9), p_51.f7)));
                    if (l_677[1][2][2])
                    { 
                        uint32_t l_754 = 0x01142C76;
                        g_103.f0 &= (safe_lshift_func_int8_t_s_s(((((~((__builtin_clzl(g_66.f3.f1) && (safe_add_func_int8_t_s_s(__builtin_bswap32(g_273), g_66.f3.f1))) ^ func_56(l_716, p_51.f6, l_747))) && g_165) & 0xEA9AC321) || 0x4E874A22), g_48.f3));
                        g_755 = ((safe_lshift_func_int8_t_s_u((l_751 = __builtin_clzll(l_750)), 3)) ^ ((safe_lshift_func_int8_t_s_u((l_754 == l_661.f1), g_54.f7)) || 0xB196));
                        if (l_754)
                            break;
                    }
                    else
                    { 
                        if (l_735.f1)
                            break;
                    }
                    l_757 = l_756;
                }
                if (func_56(g_42, (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(65528U, (g_212 |= (l_652.f7 >= p_53)))), 0xFEBC83BE)), p_51))
                { 
                    if (l_747.f3)
                        goto lbl_762;
                    if (l_652.f0)
                        break;
                    g_54.f3 &= l_747.f0;
                    g_66.f5.f0 |= ((func_56(l_697, (safe_rshift_func_int8_t_s_s((-3), p_51.f8)), p_51) && 0x7F) <= (g_111 && (((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((g_273 = g_651) < g_489.f8), p_51.f8)), g_66.f1.f6)) ^ l_741) && 0x0D9C)));
                }
                else
                { 
                    uint32_t l_780 = 0x63ADB2C9;
                    for (g_627 = 11; (g_627 < 51); g_627 = safe_add_func_int8_t_s_s(g_627, 6))
                    { 
                        const struct S3 l_781 = {2364,4,6,-411,0x5214B7C6,741,116,13,43};
                        int32_t l_782 = (-2);
                        l_771 = p_52;
                        l_782 = (safe_sub_func_float_f_f(0x7.8p+1, (l_739 <= (safe_div_func_float_f_f(0xF.3778C3p+34, (0x0.6p-1 >= __builtin_ffs((p_51.f8 = (safe_mul_func_uint8_t_u_u(l_747.f4, ((safe_add_func_int32_t_s_s(l_780, func_56(g_103, l_723.f4, l_781))) && 0)))))))))));
                        return l_682;
                    }
                    if (l_723.f6)
                        goto lbl_842;
                    if (g_48.f1)
                        goto lbl_762;
                }
            }
            else
            { 
                return l_687;
            }
        }
        if ((safe_mod_func_int8_t_s_s(g_54.f6, l_739)))
        { 
            int16_t l_809 = 0x5345;
            struct S8 l_828[3] = {{963,4},{963,4},{963,4}};
            int i;
            for (g_627 = 0; (g_627 > 24); g_627 = safe_add_func_int8_t_s_s(g_627, 9))
            { 
                uint8_t l_800 = 0U;
                int32_t l_805 = 0x7CA45706;
                int32_t l_808 = 0xDD2FB973;
                int32_t l_815[3][6][2] = {{{(-10),0x847FF2F6},{(-10),(-10)},{0x847FF2F6,(-10)},{(-10),0x847FF2F6},{(-10),(-10)},{0x847FF2F6,(-10)}},{{(-10),0x847FF2F6},{(-10),(-10)},{0x847FF2F6,(-10)},{(-10),0x847FF2F6},{(-10),(-10)},{0x847FF2F6,(-10)}},{{(-10),0x847FF2F6},{(-10),(-10)},{0x847FF2F6,(-10)},{(-10),0x847FF2F6},{(-10),(-10)},{0x847FF2F6,(-10)}}};
                struct S4 l_827 = {344,1U};
                int i, j, k;
                if (g_489.f7)
                { 
                    uint32_t l_795 = 4294967295U;
                    int32_t l_812[9][8][3] = {{{(-2),0xA09F87B2,3},{(-5),0x33DD917D,(-1)},{0x8F63ED42,1,(-5)},{(-5),0x95C876C2,0x4FCA4A10},{0xE7F80F50,0xE7F80F50,(-1)},{0x8F846B53,0x8F63ED42,(-1)},{0xD3F5E791,0x0A11CA5E,0},{0x7605822E,0x7977EBD2,0x95C876C2}},{{0x97CBA57D,0xD3F5E791,0},{4,0x51CE6D41,(-1)},{(-1),9,(-1)},{(-7),0xBE6D1DCE,0x4FCA4A10},{0xF08A892E,0x288C8367,(-5)},{0x0A11CA5E,(-2),(-1)},{0xBE6D1DCE,1,3},{0x51CE6D41,0xB4CB16DF,0xD9AA0D0E}},{{1,1,0x8FB25917},{1,(-9),0xB453DD1D},{9,0xF08A892E,2},{0xC9211504,(-9),0x061DED00},{0xD01F7377,(-9),0x2300AA63},{0xA09F87B2,0xF08A892E,1},{0,(-9),0xD3F5E791},{0xF754FDBE,1,9}},{{(-9),0xB4CB16DF,0x33DD917D},{(-1),1,1},{0x2300AA63,(-2),0},{0x63EF2FF9,0x288C8367,0xA09F87B2},{0x288C8367,0xBE6D1DCE,0x288C8367},{0,9,0},{0xD9AA0D0E,0x51CE6D41,0x8F2B6FA7},{0xFF6FA423,0xD3F5E791,0}},{{(-1),0x7977EBD2,0xE7F80F50},{0xFF6FA423,0x0A11CA5E,0xBE6D1DCE},{0xD9AA0D0E,0x8F63ED42,(-5)},{0,0xE7F80F50,0x8F2B6FA7},{0xB4CB16DF,9,1},{3,0x061DED00,0xFF6FA423},{(-1),1,3},{0x95C876C2,(-5),0x74B29B1E}},{{0x69400294,0x74B29B1E,0x7F05E69D},{1,0x8FB25917,(-5)},{(-9),0x97CBA57D,0},{(-5),(-5),0xBE6D1DCE},{0xF08A892E,0x95C876C2,0xBE6D1DCE},{1,1,0},{0,3,(-5)},{0x7977EBD2,0xC9211504,0x7F05E69D}},{{0xFF6FA423,1,0x74B29B1E},{0,(-9),3},{0x0A11CA5E,0x0D5D3782,0xFF6FA423},{(-9),0xB453DD1D,1},{0x8F846B53,0x8F2B6FA7,0x8F2B6FA7},{0xB453DD1D,0x8F63ED42,(-1)},{0x33DD917D,0xD3F5E791,0x0A11CA5E},{9,0x288C8367,4}},{{0x4FCA4A10,1,3},{0,0x288C8367,0xDADB6A46},{0x23E8223D,0xD3F5E791,0xC9211504},{0x2300AA63,0x8F63ED42,0xB4CB16DF},{4,0x8F2B6FA7,(-5)},{(-2),0xB453DD1D,(-1)},{2,0x0D5D3782,0},{(-1),(-9),1}},{{(-9),1,0},{0x8F2B6FA7,0xC9211504,0x23E8223D},{0x63EF2FF9,3,0},{0x8FB25917,1,(-1)},{0xD3F5E791,0x95C876C2,0xA09F87B2},{0xD3F5E791,(-5),0x63EF2FF9},{0x8FB25917,0x97CBA57D,0xD9AA0D0E},{0x63EF2FF9,0x8FB25917,(-1)}}};
                    int i, j, k;
                    if (((g_54.f6 = (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((p_51.f3 < (g_489.f1 > p_52)), p_51.f6)), (l_795 = (safe_div_func_int8_t_s_s(p_51.f0, g_66.f2.f0)))))) != g_3))
                    { 
                        p_51.f3 ^= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(65535U, 6)), (++l_800)));
                        g_114 = l_803;
                    }
                    else
                    { 
                        int8_t l_806 = (-1);
                        int32_t l_810 = 8;
                        int32_t l_816 = 0x14D830B3;
                        l_804[7] = g_114.f0;
                        g_817--;
                    }
                    for (g_273 = 0; (g_273 <= 2); g_273 += 1)
                    { 
                        int i;
                        l_756.f0 ^= __builtin_clzll((l_660[g_273] >= (!(safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_212 = __builtin_popcount(p_50)), func_56((l_828[2] = func_86(l_827, l_723)), p_51.f5, p_51))), 13)), 4294967295U)))));
                        l_756.f0 = p_50;
                    }
                }
                else
                { 
                    uint8_t l_829 = 246U;
                    --l_829;
                    if (((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(((-6) || __builtin_ctzll(l_829)), g_66.f3.f1)) && (safe_unary_minus_func_uint8_t_u(0x95))), 9)) ^ 4294967295U))
                    { 
                        return g_817;
                    }
                    else
                    { 
                        return p_51.f3;
                    }
                }
                g_54.f8 = (l_828[2].f1 < (l_716.f0 = (p_51.f5 < (g_66.f2.f1 ^= (((g_489.f2 ^ (safe_add_func_int8_t_s_s(0xDB, g_66.f0.f1))) >= (safe_mod_func_uint8_t_u_u((g_418 = 254U), g_755))) < ((p_51.f7 && (l_756.f0 | g_66.f0.f0)) != p_51.f5))))));
            }
        }
        else
        { 
lbl_842:
            g_488.f3 |= (!(__builtin_parity(l_723.f3) ^ g_242));
            g_130 = p_51.f4;
            p_51.f3 = ((safe_add_func_int32_t_s_s((g_66.f3.f2 > ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((((safe_div_func_uint8_t_u_u(p_51.f7, p_51.f7)) || (((g_212 = p_53) >= p_51.f3) < (p_51.f0 < (p_52--)))) >= p_51.f5) && g_817))), l_811)) | g_295)), p_51.f1)) == 0x90);
        }
        for (p_50 = 0; (p_50 < (-15)); p_50 = safe_sub_func_int32_t_s_s(p_50, 1))
        { 
            uint32_t l_857 = 0x77FD66DF;
            const int32_t l_864 = 0x88DB6F7B;
            l_698 &= (((g_488.f5 != ((g_111 & ((g_488.f4 = p_51.f0) | p_51.f4)) & l_807)) & (1U < (safe_mod_func_uint8_t_u_u(255U, 0x21)))) || 0x901B73B4);
            for (g_446 = 9; (g_446 >= 0); g_446 -= 1)
            { 
                int i;
                g_66.f1.f5 &= (-1);
                l_857++;
                l_814 = (7 == g_576[g_446]);
                g_488.f3 |= (((safe_lshift_func_uint8_t_u_u(((g_489.f2 < ((safe_mod_func_int8_t_s_s((g_273 |= (l_864 <= (safe_lshift_func_int8_t_s_s(l_857, p_51.f5)))), (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_48.f0, 1)), g_740)))) > 4294967288U)) == ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_576[g_446] < ((p_51.f5 != 0x3103) < p_51.f2)), g_42.f0)), p_52)), 0xD7)), g_576[g_446])) <= l_879)), 6)) != 249U) ^ g_66.f1.f3);
            }
        }
    }
    else
    { 
        int16_t l_882 = 4;
        struct S4 l_885 = {335,0U};
        int32_t l_891 = 0x4B0BFD2A;
        int32_t l_892 = 0x2DAC151B;
        int32_t l_895[5][3][8] = {{{(-1),0x92604A99,0,0x92604A99,(-1),0xD01D2A16,1,6},{1,0x90300F5D,0xD6C148AD,(-7),6,1,1,0x92604A99},{0,1,0xD6C148AD,0xE41818C6,0x527B4139,1,1,0x527B4139}},{{6,0,0,6,(-7),6,0xC14E3307,1},{0xE41818C6,0xD6C148AD,1,0,6,0xE15CE953,0x35C14B62,(-7)},{(-7),0xD6C148AD,0x90300F5D,1,1,6,1,1}},{{0x92604A99,0,0x92604A99,(-1),0xD01D2A16,1,6,1},{(-7),1,0xE41818C6,0,0,1,0xD01D2A16,0xD6C148AD},{(-7),0x90300F5D,1,1,0xD01D2A16,0xD01D2A16,1,1}},{{0x92604A99,0x92604A99,0xE15CE953,1,1,0x90300F5D,0xCD9D0A1C,0xC14E3307},{(-7),0xE41818C6,0xE15CE953,1,(-7),0xE41818C6,(-1),(-7)},{1,0xD01D2A16,(-1),0x92604A99,0,0x92604A99,(-1),0xD01D2A16}},{{0x35C14B62,0xC14E3307,0,0xD6C148AD,6,0x90300F5D,0xD01D2A16,0xE41818C6},{(-1),0xE15CE953,(-7),(-1),0x35C14B62,1,0xD01D2A16,1},{0,(-1),0,0x90300F5D,0x90300F5D,0,(-1),0}}};
        int i, j, k;
        g_130 = (l_698 = (safe_div_func_float_f_f(l_882, (p_51.f5 <= g_488.f5))));
        if ((!p_51.f3))
        { 
            int32_t l_886 = 0xF906557B;
            l_885 = l_884;
            return l_886;
        }
        else
        { 
            int32_t l_889 = (-1);
            int32_t l_890[2];
            float l_893 = 0xE.F65D49p+91;
            int32_t l_902[8];
            int i;
            for (i = 0; i < 2; i++)
                l_890[i] = 5;
            for (i = 0; i < 8; i++)
                l_902[i] = 0xCCA78C7D;
            g_488.f4 = l_882;
            p_51.f3 |= (p_51.f7 | (safe_lshift_func_uint16_t_u_s(((p_51.f5 >= 0U) <= __builtin_clz(g_66.f5.f0)), 7)));
            g_904--;
        }
    }
    for (g_627 = 26; (g_627 > 4); g_627--)
    { 
        uint8_t l_928[6][6] = {{0x29,0x42,0x29,0x42,0x29,0x42},{251U,0x42,251U,0x42,251U,0x42},{0x29,0x42,0x29,0x42,0x29,0x42},{251U,0x42,251U,0x42,251U,0x42},{0x29,0x42,0x29,0x42,0x29,0x42},{251U,0x42,251U,0x42,251U,0x42}};
        int16_t l_936 = 2;
        int32_t l_940 = 0xEB6C5EC9;
        int32_t l_941 = 9;
        int32_t l_949 = (-1);
        int32_t l_950[8] = {0x55166175,0x92676C5A,0x55166175,0x92676C5A,0x55166175,0x92676C5A,0x55166175,0x92676C5A};
        float l_959 = 0x1.Ap-1;
        int32_t l_965 = 2;
        int i, j;
        for (g_273 = 7; (g_273 >= 2); g_273 -= 1)
        { 
            int32_t l_909 = 0xD0560791;
            struct S3 l_910 = {1521,10,5,-405,0x6D9158B0,892,197,-16,-0};
            int16_t l_942 = 0;
            uint8_t l_943 = 255U;
            int32_t l_946[8];
            int i;
            for (i = 0; i < 8; i++)
                l_946[i] = 3;
            l_909 = l_804[g_273];
            for (l_894 = 7; (l_894 >= 2); l_894 -= 1)
            { 
                int32_t l_922 = (-1);
                uint32_t l_924 = 0x3B4A7F55;
                int32_t l_925 = 0x7186BA38;
                int32_t l_926 = 0x6CAE9B2D;
                int32_t l_927 = 0;
                for (g_66.f7 = 5; (g_66.f7 >= 0); g_66.f7 -= 1)
                { 
                    int i;
                    if (__builtin_parityll(func_56(func_86(l_662[g_66.f7], l_910), l_804[l_894], g_54)))
                    { 
                        int i;
                        g_488.f5 = l_804[g_273];
                    }
                    else
                    { 
                        int16_t l_923 = 0x2F8D;
                        l_923 = ((((-9) != (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((p_50 ^ ((-9) | g_54.f3)) ^ ((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(p_53, p_51.f8)) >= (+g_54.f3)), ((safe_mul_func_int8_t_s_s((0xA25C & l_922), 0x9A)) && p_51.f2))) | 0x8F8B)) > p_51.f0), g_48.f1)), 0xB186F979))) == (-9)) | 0xA8);
                        if (l_924)
                            break;
                    }
                }
                l_928[3][3]--;
            }
            if (g_66.f1.f6)
            { 
                p_51.f3 = (safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(g_66.f0.f0, 15)) == (p_53 <= (((~(g_415 = (-5))) | (l_936 != __builtin_popcountl(((!0xADCD) > p_51.f2)))) == (p_52 = l_811)))) || (safe_sub_func_uint32_t_u_u(((((0 == g_66.f1.f0) >= (-7)) & 0xE2) & g_242), g_626))), 0xF640));
                l_943--;
                if (g_42.f0)
                    break;
                for (l_896 = 5; (l_896 >= 0); l_896 -= 1)
                { 
                    p_51.f3 |= (g_54.f3 = (g_489.f3 ^= (g_488.f3 = p_51.f1)));
                }
            }
            else
            { 
                float l_947[4][10] = {{0x1.Ep+1,0x1.2p+1,0x9.D55736p+69,0x1.2p+1,0x1.Ep+1,0x1.2p+1,0x9.D55736p+69,0x1.2p+1,0x1.Ep+1,0x1.2p+1},{0x1.Dp-1,0x1.2p+1,0x1.Dp-1,0x1.5p-1,0x1.Dp-1,0x1.2p+1,0x1.Dp-1,0x1.5p-1,0x1.Dp-1,0x1.2p+1},{0x1.Ep+1,0x1.5p-1,0x9.D55736p+69,0x1.5p-1,0x1.Ep+1,0x1.5p-1,0x9.D55736p+69,0x1.5p-1,0x1.Ep+1,0x1.5p-1},{0x1.Dp-1,0x1.5p-1,0x1.Dp-1,0x1.2p+1,0x1.Dp-1,0x1.5p-1,0x1.Dp-1,0x1.2p+1,0x1.Dp-1,0x1.5p-1}};
                int32_t l_948 = (-8);
                int32_t l_951 = 0xA2D0C5AE;
                int32_t l_952 = (-4);
                int32_t l_953 = 0x30E624C6;
                int i, j;
                --g_956;
                if (func_56(g_114, ((l_896 = (++p_51.f4)) == g_54.f7), l_910))
                { 
                    g_903 = (g_48.f0 >= l_652.f7);
                    if (p_51.f6)
                        continue;
                }
                else
                { 
                    return p_51.f5;
                }
                p_51.f8 &= (safe_add_func_uint16_t_u_u((~g_488.f5), __builtin_popcountl(g_48.f4)));
                l_965 = 0x1.3p+1;
            }
            g_489.f8 = (safe_sub_func_int32_t_s_s(l_884.f1, (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u(p_51.f4, (safe_sub_func_int16_t_s_s((l_771 && l_652.f3), (safe_lshift_func_uint8_t_u_u((g_165 | g_66.f3.f0), 6)))))) || (g_66.f0.f1++)) != ((safe_rshift_func_uint16_t_u_s((((-1) <= (p_53 = ((p_51.f3 = (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(g_54.f8)), p_51.f6))) < (-8)))) < p_51.f7), 0)) & g_42.f0)) ^ l_950[4]), p_51.f7)), l_909))));
        }
    }
    return g_66.f3.f2;
}




inline static int16_t  func_56(struct S8  p_57, int8_t  p_58, const struct S3  p_59)
{ 
    int32_t l_655[2][9][7] = {{{0xE7E4A89C,0,(-1),3,3,1,0xD81A4E3F},{0x0CC140E2,0xE7E4A89C,1,1,0xD81A4E3F,1,1},{0xDBEE29C7,0xDBEE29C7,0,0x5174BCEE,0xBE6C3B9D,0xD3E18B7A,0x20739870},{0xABE0E7C5,1,1,1,0x19A4DC4D,(-10),1},{0x0CC140E2,(-1),1,0x4B34CF90,0xBE6C3B9D,0x0CC140E2,0},{0xBE6C3B9D,(-8),6,3,0xD81A4E3F,0,(-8)},{0xECE2BE9A,1,0x06E9230E,0xECE2BE9A,3,1,0xBE6C3B9D},{(-10),0xABE0E7C5,0x06E9230E,(-1),1,1,1},{0xABE0E7C5,0xBE6C3B9D,6,0xBE6C3B9D,0xABE0E7C5,0xD3E18B7A,0xE7E4A89C}},{{4,0,1,0xE7E4A89C,0x4B34CF90,0x998827A3,(-10)},{(-3),(-10),0xFBF8738A,(-1),(-10),0x99583215,0xD3E18B7A},{0x018D81F0,0x0CC140E2,4,1,0x19A4DC4D,3,1},{1,0,0x09C6D09E,0,0x99583215,(-1),1},{(-1),1,(-1),0x99583215,0x4B34CF90,(-1),0x09C6D09E},{(-1),1,3,0x0CC140E2,0x0CC140E2,3,1},{1,0xD3E18B7A,0xF8007266,3,0x63784F9F,0x99583215,0x19A4DC4D},{(-1),0x998827A3,(-3),0x9D2DF4F3,1,6,0x09C6D09E},{1,0x4B34CF90,4,3,0x998827A3,0xE7E4A89C,0x06E9230E}}};
    int i, j, k;
    for (g_66.f2.f1 = 0; (g_66.f2.f1 == 43); g_66.f2.f1 = safe_add_func_uint16_t_u_u(g_66.f2.f1, 3))
    { 
        p_57.f0 ^= l_655[1][8][1];
        g_448 = 0x1.Bp+1;
        g_488.f3 ^= (safe_mod_func_uint16_t_u_u(g_54.f4, (safe_div_func_uint32_t_u_u((__builtin_parityl(g_66.f1.f2) > g_48.f4), g_489.f3))));
    }
    return p_59.f6;
}




static struct S8  func_60(struct S6  p_61, uint8_t  p_62, int16_t  p_63, const struct S3  p_64, int8_t  p_65)
{ 
    uint8_t l_464 = 0U;
    int32_t l_465 = 1;
    struct S2 l_466 = {0xD349,-1,8,1144,-5,-1739,-151};
    int32_t l_523 = (-1);
    uint32_t l_531 = 7U;
    struct S3 l_565[1][3] = {{{1901,15,0,297,0U,271,76,-12,-1},{1901,15,0,297,0U,271,76,-12,-1},{1901,15,0,297,0U,271,76,-12,-1}}};
    float l_611 = 0x0.4B92C2p+33;
    struct S8 l_648[7] = {{-707,5},{-707,5},{-707,5},{-707,5},{-707,5},{-707,5},{-707,5}};
    int i, j;
lbl_649:
    for (g_66.f0.f1 = 14; (g_66.f0.f1 >= 47); g_66.f0.f1 = safe_add_func_int16_t_s_s(g_66.f0.f1, 1))
    { 
        uint32_t l_74 = 0x12FB0E7D;
        struct S0 l_105 = {0xD85517B9,1,65535U};
        int32_t l_513 = 9;
        struct S1 l_519 = {7,-4,427,-47,-0};
        struct S8 l_520 = {-365,1};
        int32_t l_575[3][1];
        uint32_t l_577 = 1U;
        uint16_t l_623 = 1U;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_575[i][j] = (-1);
        }
        for (p_61.f2.f1 = 0; (p_61.f2.f1 > 4); ++p_61.f2.f1)
        { 
            struct S3 l_250 = {1595,0,5,481,1U,1628,153,13,14};
            struct S8 l_455 = {534,5};
            uint32_t l_483 = 0xFC3FBF60;
            struct S2 l_574 = {0x136F,-1,20,-9722,-0,3847,149};
            for (p_61.f3.f2 = 0; (p_61.f3.f2 <= 20); p_61.f3.f2++)
            { 
                struct S3 l_89[10] = {{1849,7,1,341,4294967288U,1667,121,12,-21},{2626,5,4,-280,0x2989FB28,1518,32,8,-101},{2234,15,3,403,0U,2007,127,9,-55},{2626,5,4,-280,0x2989FB28,1518,32,8,-101},{1849,7,1,341,4294967288U,1667,121,12,-21},{1849,7,1,341,4294967288U,1667,121,12,-21},{2626,5,4,-280,0x2989FB28,1518,32,8,-101},{2234,15,3,403,0U,2007,127,9,-55},{2626,5,4,-280,0x2989FB28,1518,32,8,-101},{1849,7,1,341,4294967288U,1667,121,12,-21}};
                float l_482 = (-0x8.1p+1);
                struct S2 l_564 = {0xCFA8,-0,15,-5684,-0,19308,70};
                int i;
                if ((((l_74 > func_75(g_54.f5, p_64.f6, func_80(func_82(func_86(p_61.f0, l_89[3]), l_89[3].f1, l_105)), l_250)) != 1) == 9U))
                { 
                    if (p_61.f2.f1)
                        break;
                }
                else
                { 
                    struct S8 l_454 = {-416,3};
                    l_250.f3 = 0xA9529CCD;
                    for (l_105.f2 = 0; (l_105.f2 <= 2); l_105.f2 += 1)
                    { 
                        int i;
                        g_66.f5.f0 |= (p_61.f1.f6 ^= 5);
                        l_455 = l_454;
                        l_454.f0 &= g_247[l_105.f2];
                    }
                }
                if ((safe_mul_func_int16_t_s_s((+4294967289U), ((~g_66.f1.f1) < (safe_mul_func_uint16_t_u_u((__builtin_ffs((safe_add_func_int16_t_s_s((g_415 &= func_75(g_66.f4, (l_465 = l_464), l_466, p_64)), p_61.f1.f4))) != l_466.f6), l_466.f6))))))
                { 
                    g_66.f1.f6 &= func_75((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((p_65 = ((l_466.f5 == (l_455.f1 == (safe_div_func_int16_t_s_s((g_415 = (!((safe_div_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(func_75((((g_66.f1.f4 && g_66.f0.f1) & (l_483 &= p_61.f6)) ^ (g_48.f2 & (safe_mod_func_uint32_t_u_u((l_466.f6 || (((g_54.f2 || ((safe_add_func_uint16_t_u_u(65535U, g_66.f1.f2)) >= p_61.f1.f6)) == 1U) == p_62)), l_89[3].f1)))), l_105.f0, p_61.f1, p_64), g_66.f6)), l_250.f7)) | 0x2BFD) ^ 0xD342), 0x93A2)) >= g_247[1]))), g_66.f3.f0)))) != 0xB263EEB2)), p_64.f1)), l_466.f5)), l_250.f3)), l_466.f3, g_488, g_489);
                }
                else
                { 
                    const uint8_t l_511[8] = {0x7B,0x7B,249U,0x7B,0x7B,249U,0x7B,0x7B};
                    int32_t l_512 = 0x79A16191;
                    uint8_t l_514 = 1U;
                    int i;
                    for (g_108 = (-18); (g_108 < 32); ++g_108)
                    { 
                        uint32_t l_503 = 4294967293U;
                        uint32_t l_510 = 4294967295U;
                        g_66.f1.f6 &= (safe_add_func_uint16_t_u_u(g_273, ((safe_add_func_uint8_t_u_u(p_61.f4, (safe_div_func_int8_t_s_s(0x4C, (safe_div_func_int8_t_s_s((p_61.f7 & ((+p_64.f6) & ((g_488.f0 = g_108) && (((safe_mul_func_int16_t_s_s((1U && l_503), (l_250.f8 = ((l_510 &= (safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(7, p_64.f5)), g_295)) <= 0x0C), 0xDC8E))) != 0)))) | p_64.f6) <= l_511[3])))), l_512)))))) < l_105.f2)));
                        l_514--;
                    }
                    for (l_464 = (-5); (l_464 == 38); l_464++)
                    { 
                        l_519 = g_48;
                        p_61.f5.f0 = l_513;
                        return l_520;
                    }
                    g_103.f0 = (safe_add_func_int8_t_s_s(g_48.f4, (l_89[3].f8 = ((l_523 < 0xD1ADBFE6) && (safe_sub_func_uint32_t_u_u(g_488.f6, g_66.f3.f2))))));
                    if (g_54.f4)
                        break;
                }
                if (g_66.f3.f0)
                    continue;
                for (g_446 = (-19); (g_446 >= 25); ++g_446)
                { 
                    struct S2 l_547[8][3][8] = {{{{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136},{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130}},{{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130},{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136}},{{0xCAE1,1,11,4021,-5,25726,138},{1,1,12,2495,-1,32341,-107},{4,0,20,8664,3,-30666,140},{1,0,9,8210,-4,24225,130},{0xCAE1,1,11,4021,-5,25726,138},{0x5ED3,-0,19,-9884,0,29826,-52},{0xCAE1,1,11,4021,-5,25726,138},{1,0,9,8210,-4,24225,130}}},{{{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136},{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130}},{{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130},{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136}},{{0xCAE1,1,11,4021,-5,25726,138},{1,1,12,2495,-1,32341,-107},{4,0,20,8664,3,-30666,140},{1,0,9,8210,-4,24225,130},{0xCAE1,1,11,4021,-5,25726,138},{0x5ED3,-0,19,-9884,0,29826,-52},{0xCAE1,1,11,4021,-5,25726,138},{1,0,9,8210,-4,24225,130}}},{{{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136},{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130}},{{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130},{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136}},{{0xCAE1,1,11,4021,-5,25726,138},{1,1,12,2495,-1,32341,-107},{4,0,20,8664,3,-30666,140},{1,0,9,8210,-4,24225,130},{0xCAE1,1,11,4021,-5,25726,138},{0x5ED3,-0,19,-9884,0,29826,-52},{0xCAE1,1,11,4021,-5,25726,138},{1,0,9,8210,-4,24225,130}}},{{{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136},{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130}},{{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130},{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136}},{{0xCAE1,1,11,4021,-5,25726,138},{1,1,12,2495,-1,32341,-107},{4,0,20,8664,3,-30666,140},{1,0,9,8210,-4,24225,130},{0xCAE1,1,11,4021,-5,25726,138},{0x5ED3,-0,19,-9884,0,29826,-52},{0xCAE1,1,11,4021,-5,25726,138},{1,0,9,8210,-4,24225,130}}},{{{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136},{0xCAE1,1,11,4021,-5,25726,138},{0x7448,0,16,10176,-4,-27804,104},{0x418F,-0,17,1398,1,-13310,52},{1,0,9,8210,-4,24225,130}},{{0xCAE1,1,11,4021,-5,25726,138},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136},{4,0,20,8664,3,-30666,140},{0x5ED3,-0,19,-9884,0,29826,-52},{0x418F,-0,17,1398,1,-13310,52},{0x7F89,-0,1,2489,-4,-7708,-62}},{{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136},{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136}}},{{{4,0,20,8664,3,-30666,140},{0x7448,0,16,10176,-4,-27804,104},{4,0,20,8664,3,-30666,140},{0x7F89,-0,1,2489,-4,-7708,-62},{0x418F,-0,17,1398,1,-13310,52},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136}},{{0x418F,-0,17,1398,1,-13310,52},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136},{4,0,20,8664,3,-30666,140},{0x5ED3,-0,19,-9884,0,29826,-52},{0x418F,-0,17,1398,1,-13310,52},{0x7F89,-0,1,2489,-4,-7708,-62}},{{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136},{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136}}},{{{4,0,20,8664,3,-30666,140},{0x7448,0,16,10176,-4,-27804,104},{4,0,20,8664,3,-30666,140},{0x7F89,-0,1,2489,-4,-7708,-62},{0x418F,-0,17,1398,1,-13310,52},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136}},{{0x418F,-0,17,1398,1,-13310,52},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136},{4,0,20,8664,3,-30666,140},{0x5ED3,-0,19,-9884,0,29826,-52},{0x418F,-0,17,1398,1,-13310,52},{0x7F89,-0,1,2489,-4,-7708,-62}},{{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136},{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136}}},{{{4,0,20,8664,3,-30666,140},{0x7448,0,16,10176,-4,-27804,104},{4,0,20,8664,3,-30666,140},{0x7F89,-0,1,2489,-4,-7708,-62},{0x418F,-0,17,1398,1,-13310,52},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136}},{{0x418F,-0,17,1398,1,-13310,52},{0x5ED3,-0,19,-9884,0,29826,-52},{4,0,20,8664,3,-30666,140},{0x4013,-1,11,-2450,-5,22072,136},{4,0,20,8664,3,-30666,140},{0x5ED3,-0,19,-9884,0,29826,-52},{0x418F,-0,17,1398,1,-13310,52},{0x7F89,-0,1,2489,-4,-7708,-62}},{{0x418F,-0,17,1398,1,-13310,52},{0x7448,0,16,10176,-4,-27804,104},{0xCAE1,1,11,4021,-5,25726,138},{0x4013,-1,11,-2450,-5,22072,136},{0x418F,-0,17,1398,1,-13310,52},{1,1,12,2495,-1,32341,-107},{0x418F,-0,17,1398,1,-13310,52},{0x4013,-1,11,-2450,-5,22072,136}}}};
                    uint32_t l_549 = 4294967295U;
                    int i, j, k;
                    for (l_466.f0 = (-13); (l_466.f0 != (-17)); l_466.f0 = safe_sub_func_uint8_t_u_u(l_466.f0, 1))
                    { 
                        float l_530 = 0xF.0ADA88p+64;
                        g_488.f5 = __builtin_ffs(l_531);
                        if (g_66.f1.f2)
                            break;
                    }
                    if ((func_75((safe_div_func_uint8_t_u_u((l_466.f6 = (1U ^ ((func_75((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((l_513 = (p_61.f0.f1 = (safe_sub_func_uint16_t_u_u(p_65, 0xC87B)))), (+(l_455.f0 = 2)))) || (p_63 > g_489.f4)) & (p_61.f3.f1 < ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(l_464, (safe_rshift_func_int8_t_s_s(g_66.f7, l_89[3].f7)))), 0)) != g_66.f1.f4))), 9)), p_61.f3.f2, l_547[5][2][5], l_89[7]) || g_489.f5) <= g_54.f2))), 0xFA)), g_3, g_488, p_64) <= l_519.f4))
                    { 
                        int16_t l_548 = 0x652D;
                        l_549++;
                        l_547[5][2][5].f4 = (safe_sub_func_float_f_f((safe_sub_func_float_f_f(l_89[3].f5, 0xA.E9B01Fp-10)), 0x0.Fp+1));
                    }
                    else
                    { 
                        struct S8 l_556[6] = {{170,13},{170,13},{170,13},{170,13},{170,13},{170,13}};
                        int i;
                        g_489.f3 |= func_75(p_62, l_549, func_80(func_82(l_556[4], (func_75(l_465, (safe_rshift_func_int16_t_s_s(((p_61.f0.f1 = l_89[3].f6) | __builtin_popcount((safe_div_func_uint8_t_u_u(l_547[5][2][5].f0, g_48.f1)))), (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(__builtin_ia32_crc32qi((p_61.f6 < p_64.f2), p_61.f7))), g_66.f1.f3)))), l_564, l_565[0][1]) >= p_64.f3), p_61.f3)), l_250);
                        g_66.f1.f5 |= (-9);
                        if (g_66.f1.f5)
                            break;
                    }
                }
            }
            l_577 = (g_448 = (g_66.f1.f6 < (l_519.f0 = (__builtin_clz((g_489.f2 <= (safe_mod_func_int16_t_s_s((~g_489.f6), (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((+func_75(p_61.f1.f4, l_466.f2, l_574, g_54)), (g_576[3] = l_575[1][0]))), g_66.f1.f1)))))) < 0x3.1p+1))));
            if (g_489.f8)
            { 
                int32_t l_578 = 0xFC7DB95A;
                l_455.f0 = l_578;
            }
            else
            { 
                uint8_t l_581 = 255U;
                int32_t l_610[3][4][4] = {{{5,0xC536BCC8,0x62B93F46,0x625265BD},{0x68D14D47,5,(-2),0x06725C7F},{(-1),1,(-1),0x06725C7F},{(-2),5,0x68D14D47,0x625265BD}},{{0x62B93F46,0xC536BCC8,5,5},{0,0,5,(-1)},{0x62B93F46,(-7),0x68D14D47,0xC536BCC8},{(-2),0x68D14D47,(-1),0x68D14D47}},{{(-1),0x68D14D47,(-2),0xC536BCC8},{0x68D14D47,(-7),0x62B93F46,(-1)},{5,0,0,5},{5,0xC536BCC8,0x62B93F46,0x625265BD}}};
                float l_646 = 0xF.FCC8C6p+63;
                struct S5 l_647[6][6] = {{{-44},{178},{-44},{178},{-44},{178}},{{-44},{178},{-44},{178},{-44},{178}},{{-44},{178},{-44},{178},{-44},{178}},{{-44},{178},{-44},{178},{-44},{178}},{{-44},{178},{-44},{178},{-44},{178}},{{-44},{178},{-44},{178},{-44},{178}}};
                int i, j, k;
                g_66.f1.f5 = (safe_add_func_int32_t_s_s(p_61.f7, (l_581 ^ ((g_242++) != p_61.f1.f1))));
                if (((safe_sub_func_int8_t_s_s(p_61.f3.f1, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_466.f4, (__builtin_ffsl((((safe_rshift_func_uint16_t_u_u((g_66.f3.f2 = ((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((p_65 ^= (safe_rshift_func_int8_t_s_s((-4), (l_575[2][0] = 1)))), ((l_466.f5 = 4294967295U) ^ (safe_mod_func_int32_t_s_s(l_250.f5, (g_66.f5.f0 |= (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((l_610[0][1][1] &= ((p_61.f3.f2 = g_489.f3) <= (l_519.f4 = (((0xE99A <= l_519.f2) || 0x8CC4) || g_114.f0)))) & l_466.f3), 0U)), g_356)) & 0x1AA0CF8B), l_464)))))))), p_61.f1.f4)), 1U)), g_415)) <= p_61.f2.f0)), 12)) > g_418) >= 0x0E)) == l_466.f4))), l_455.f0)))) || g_489.f1))
                { 
                    int16_t l_615[3];
                    int32_t l_625 = 2;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_615[i] = 0x29F7;
                    for (g_489.f4 = 10; (g_489.f4 == 11); g_489.f4 = safe_add_func_uint32_t_u_u(g_489.f4, 9))
                    { 
                        uint32_t l_616 = 0xDCECD718;
                        struct S3 l_624[9][7] = {{{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{796,7,7,392,4294967290U,107,235,0,15},{796,7,7,392,4294967290U,107,235,0,15},{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{2094,14,9,23,1U,949,115,5,-67},{2888,13,3,-99,4294967290U,1724,93,15,-35},{1103,6,3,-178,1U,1957,246,-11,120}},{{1150,12,8,-163,0x97445A5C,922,88,-5,43},{2779,6,0,390,4U,100,147,-16,31},{2768,10,2,-479,0U,1226,147,3,39},{1818,5,4,-272,0x529DF741,1210,31,18,-101},{1818,5,4,-272,0x529DF741,1210,31,18,-101},{2768,10,2,-479,0U,1226,147,3,39},{2779,6,0,390,4U,100,147,-16,31}},{{2452,14,10,-250,2U,1016,136,19,-5},{1021,6,0,-504,0x7FF82097,737,206,5,96},{1230,8,10,-377,0x89068B53,295,151,-16,-6},{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{1103,6,3,-178,1U,1957,246,-11,120},{1494,0,2,-322,0x9D01EC13,1480,7,19,30},{1494,0,2,-322,0x9D01EC13,1480,7,19,30}},{{2768,10,2,-479,0U,1226,147,3,39},{1879,7,10,364,0x9C48E9E3,695,47,15,16},{1193,14,1,-293,0xBD9A3EB4,141,161,17,113},{1879,7,10,364,0x9C48E9E3,695,47,15,16},{2768,10,2,-479,0U,1226,147,3,39},{2826,6,7,369,0x0A822D42,971,200,-21,-124},{552,12,7,386,0x3F0F9163,1111,170,-19,-71}},{{2094,14,9,23,1U,949,115,5,-67},{2017,6,3,417,4294967295U,442,20,0,115},{1021,6,0,-504,0x7FF82097,737,206,5,96},{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{2888,13,3,-99,4294967290U,1724,93,15,-35},{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{1021,6,0,-504,0x7FF82097,737,206,5,96}},{{552,12,7,386,0x3F0F9163,1111,170,-19,-71},{552,12,7,386,0x3F0F9163,1111,170,-19,-71},{223,16,3,27,0xD6A13080,888,220,-7,59},{1193,14,1,-293,0xBD9A3EB4,141,161,17,113},{826,15,0,-271,0xFF203BAD,2030,191,-6,-45},{1150,12,8,-163,0x97445A5C,922,88,-5,43},{1818,5,4,-272,0x529DF741,1210,31,18,-101}},{{2094,14,9,23,1U,949,115,5,-67},{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{796,7,7,392,4294967290U,107,235,0,15},{796,7,7,392,4294967290U,107,235,0,15},{19,9,10,-511,0xAE7C9452,2041,213,19,-106},{2094,14,9,23,1U,949,115,5,-67},{2888,13,3,-99,4294967290U,1724,93,15,-35}},{{2768,10,2,-479,0U,1226,147,3,39},{223,16,3,27,0xD6A13080,888,220,-7,59},{1879,7,10,364,0x9C48E9E3,695,47,15,16},{2779,6,0,390,4U,100,147,-16,31},{826,15,0,-271,0xFF203BAD,2030,191,-6,-45},{826,15,0,-271,0xFF203BAD,2030,191,-6,-45},{2779,6,0,390,4U,100,147,-16,31}},{{2452,14,10,-250,2U,1016,136,19,-5},{882,20,2,64,0x90240819,1190,25,5,-38},{2452,14,10,-250,2U,1016,136,19,-5},{1494,0,2,-322,0x9D01EC13,1480,7,19,30},{2888,13,3,-99,4294967290U,1724,93,15,-35},{1230,8,10,-377,0x89068B53,295,151,-16,-6},{2094,14,9,23,1U,949,115,5,-67}}};
                        int i, j;
                        l_625 &= ((!func_75((l_574.f5 | l_615[0]), (((l_610[0][1][1] = l_616) == ((g_54.f7 || 0x17) == ((((safe_rshift_func_int16_t_s_u(g_48.f3, 8)) & (g_114.f1 < (p_64.f4 <= ((safe_lshift_func_int8_t_s_u(0xA2, 3)) <= g_48.f2)))) & 0x98D61306) >= 0xF7))) <= l_623), l_466, l_624[4][1])) ^ g_247[1]);
                    }
                    g_627++;
                    p_61.f1.f6 ^= 0xE5186509;
                    for (p_62 = (-24); (p_62 == 8); ++p_62)
                    { 
                        int16_t l_638 = 0;
                        struct S3 l_641[3] = {{2199,19,9,-430,0xA12828E2,421,110,21,-8},{2199,19,9,-430,0xA12828E2,421,110,21,-8},{2199,19,9,-430,0xA12828E2,421,110,21,-8}};
                        int i;
                        l_641[0].f8 = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(p_61.f1.f4, p_61.f2.f1)) | (l_615[1] | func_75(((safe_mul_func_uint16_t_u_u((0xD19F800C | (-8)), l_638)) | (((safe_add_func_int32_t_s_s(g_489.f2, l_615[0])) || p_61.f2.f0) == p_64.f5)), l_615[0], p_61.f1, l_641[0]))), l_625));
                        if (g_415)
                            continue;
                        g_488.f5 |= ((func_75(p_61.f7, p_61.f1.f4, g_66.f1, p_64) == g_54.f2) >= (safe_mul_func_int16_t_s_s(0, (safe_lshift_func_uint8_t_u_u((l_465 = (l_565[0][1].f2 < (g_54.f1 & g_48.f3))), g_66.f1.f6)))));
                        g_66.f1.f5 |= g_66.f0.f1;
                    }
                }
                else
                { 
                    g_66.f1.f4 = 0xB8F8FFCA;
                }
                if (p_64.f6)
                    break;
                l_647[5][5] = g_66.f5;
            }
        }
        return l_648[1];
    }
    g_103 = g_103;
    if (g_3)
        goto lbl_649;
    return g_103;
}




static uint16_t  func_75(const uint32_t  p_76, int32_t  p_77, struct S2  p_78, struct S3  p_79)
{ 
    uint8_t l_256 = 254U;
    int32_t l_261 = 1;
    int32_t l_287 = 0x467D04A4;
    float l_338 = 0x0.Ep+1;
    int8_t l_444 = 0xAA;
    int32_t l_447 = 1;
    if (__builtin_clz((g_66.f2.f0 = (safe_mod_func_uint8_t_u_u(g_48.f3, (+(safe_div_func_uint8_t_u_u(l_256, ((p_79.f4 && ((((g_111 = ((p_78.f0 | ((safe_rshift_func_uint16_t_u_u(((g_242 = ((safe_div_func_int8_t_s_s(l_256, (l_261 = l_256))) == (3 && g_66.f4))) ^ 0xE791C839), g_48.f1)) || 0x8A32D7AD)) & 250U)) | p_78.f4) != g_66.f2.f0) ^ g_66.f3.f1)) ^ g_165)))))))))
    { 
        uint16_t l_272 = 65535U;
        int32_t l_327 = 0xFC2B8A92;
        int32_t l_410 = 0x0FB62855;
        int8_t l_413 = (-3);
        uint32_t l_422 = 0x140496E6;
        if ((safe_sub_func_int32_t_s_s((p_79.f4 >= 0x1DB5), (g_66.f0.f0 ^ (p_77 > ((((safe_div_func_uint16_t_u_u(g_48.f0, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(l_261, p_77)), 4)))) | (l_272 && (-9))) || 0x90BC) & 0U))))))
        { 
            return l_272;
        }
        else
        { 
            int16_t l_286[5];
            int32_t l_337 = (-1);
            int32_t l_339 = 0;
            int i;
            for (i = 0; i < 5; i++)
                l_286[i] = 0xB38B;
            g_273 ^= l_256;
            for (l_261 = 0; (l_261 <= 28); ++l_261)
            { 
                uint8_t l_281 = 253U;
                for (g_108 = (-1); (g_108 > 6); ++g_108)
                { 
                    g_66.f1.f5 &= ((((g_66.f1.f0 > p_79.f5) >= ((safe_mod_func_uint32_t_u_u(0U, 4294967295U)) & (g_66.f6 && (!l_281)))) >= (safe_mod_func_uint16_t_u_u(__builtin_clzll(l_261), (l_287 ^= ((safe_mul_func_uint8_t_u_u(p_79.f3, l_286[1])) > g_54.f3))))) != 65528U);
                }
                for (g_66.f1.f0 = 0; (g_66.f1.f0 >= (-2)); g_66.f1.f0--)
                { 
                    int32_t l_292 = (-1);
                    p_78.f3 = l_281;
                    g_114.f0 = (0x7E99EFDD != (safe_mul_func_uint16_t_u_u(((g_295 = ((((((p_78.f6 >= p_79.f8) ^ (g_165 = 0x665D)) != __builtin_clzll(g_66.f1.f5)) & l_292) < (safe_lshift_func_uint8_t_u_u((p_78.f6 >= g_66.f1.f2), 7))) < 2U)) != g_66.f7), (-1))));
                }
                return l_281;
            }
            g_130 = (safe_div_func_float_f_f(g_54.f0, (l_287 = (safe_sub_func_float_f_f(0x3.4D111Ap-81, ((((safe_sub_func_float_f_f(((safe_add_func_float_f_f(g_66.f3.f0, ((safe_add_func_float_f_f((g_130 > (safe_sub_func_float_f_f((safe_sub_func_float_f_f(p_79.f0, (safe_mul_func_float_f_f((l_261 = l_272), g_212)))), (safe_add_func_float_f_f(0x7.7EDE6Dp+14, g_114.f1))))), 0x2.680437p+56)) != p_79.f5))) <= g_66.f4), p_78.f1)) != 0x1.Fp-1) > 0x8.315EF9p-84) <= p_76))))));
            for (l_261 = 1; (l_261 <= 4); l_261 += 1)
            { 
                uint16_t l_324[1][3][6] = {{{0U,65535U,0U,0U,0xC72C,0xC72C},{65529U,0U,0U,65529U,65535U,7U},{7U,65529U,0xC72C,65529U,7U,0U}}};
                int i, j, k;
                for (g_295 = 0; (g_295 <= 4); g_295 += 1)
                { 
                    uint32_t l_325 = 0xA70DF4CD;
                    int32_t l_326 = (-9);
                    int i;
                    l_327 = (safe_div_func_float_f_f((((safe_sub_func_float_f_f((0x1.221A42p+80 >= (safe_sub_func_float_f_f((safe_add_func_float_f_f(((safe_sub_func_float_f_f(l_286[g_295], ((p_78.f6 < p_79.f6) > g_66.f1.f5))) <= p_78.f0), p_78.f5)), (l_324[0][0][5] <= (l_326 = __builtin_popcountl(l_325)))))), p_78.f2)) >= l_324[0][0][5]) < g_48.f2), p_78.f2));
                    l_339 = ((p_78.f1 <= p_79.f1) | ((~((l_286[l_261] = (safe_add_func_uint32_t_u_u(g_54.f2, p_77))) & __builtin_ffs(p_78.f6))) <= ((safe_div_func_int16_t_s_s((-1), g_66.f7)) < (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_337 > 0xDA) == p_79.f4), l_261)) | 0x8C1A), g_48.f0)))));
                    return l_326;
                }
            }
        }
        if (l_261)
        { 
            int8_t l_348 = 0x0A;
            g_103.f0 ^= (((safe_lshift_func_uint16_t_u_u(p_78.f0, 1)) != ((p_79.f3 && g_48.f2) != l_272)) | ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_165, 0x3F)) > l_256), ((safe_lshift_func_int8_t_s_u((-2), ((l_287 = l_348) || (-8)))) | (-9)))) < p_79.f4));
        }
        else
        { 
            int32_t l_366[7] = {0x4C91BD40,0x4C91BD40,0x4C91BD40,0x4C91BD40,0x4C91BD40,0x4C91BD40,0x4C91BD40};
            int32_t l_367 = 0xD1BEC332;
            int i;
            if ((g_103.f0 != (safe_rshift_func_int8_t_s_s(l_272, 2))))
            { 
                uint8_t l_379 = 1U;
                g_66.f1.f5 |= (p_77 |= g_54.f4);
                l_327 = (!(l_367 = ((g_66.f5.f0 == (g_66.f1.f3 != (__builtin_ctz((safe_sub_func_uint32_t_u_u(p_79.f5, (safe_lshift_func_uint8_t_u_s(((p_78.f6 = (g_66.f1.f1 | p_79.f2)) == g_356), 4))))) <= p_79.f2))) == (l_366[1] = (!(safe_mul_func_float_f_f((safe_div_func_float_f_f((+(safe_div_func_float_f_f(((+l_272) < g_247[1]), p_79.f0))), g_54.f3)), 0xF.5CFB69p+53)))))));
                for (p_77 = (-27); (p_77 > (-28)); p_77 = safe_sub_func_uint32_t_u_u(p_77, 9))
                { 
                    int16_t l_374 = (-10);
                    int32_t l_381 = 0xBDACC74A;
                    uint8_t l_382 = 0U;
                    for (l_261 = 0; (l_261 == 17); l_261++)
                    { 
                        uint32_t l_380 = 0x18F28EB7;
                        if (p_79.f8)
                            break;
                        g_66.f5.f0 |= (0x84E3 != (safe_mod_func_uint32_t_u_u((p_79.f5 & (((l_374 != (((safe_rshift_func_uint16_t_u_u(0x0BA9, l_327)) != (0U & 0x9466)) == l_367)) > (l_366[4] != p_77)) | 0x42)), 0x84B9D64D)));
                        p_79.f3 &= ((g_212 &= (g_66.f0.f1 > ((l_367 = ((safe_sub_func_int32_t_s_s(l_272, ((g_165 = __builtin_ffsl(p_79.f0)) | (((l_379 != l_287) != p_79.f6) | (l_381 = (g_103.f1 || (l_380 = (p_78.f0 = g_54.f2)))))))) != l_382)) > p_79.f4))) | 65535U);
                    }
                    p_78.f3 = g_54.f4;
                }
                g_114 = g_42;
            }
            else
            { 
                uint32_t l_397 = 1U;
                float l_411 = 0x0.5p-1;
                int32_t l_414 = 0xC3D7A1A4;
                int32_t l_417[9][8] = {{(-4),0x91443EEC,9,(-1),(-1),0xC7E4B864,0xC7E4B864,(-1)},{(-1),(-1),(-1),(-1),(-4),0x70414C28,0xC7E4B864,0xC8B75C6F},{0x91443EEC,(-1),9,0xC7E4B864,9,(-1),0x91443EEC,0x5FA908B8},{9,(-1),0x91443EEC,0x5FA908B8,0x70414C28,0x70414C28,0x5FA908B8,0x91443EEC},{(-1),(-1),(-1),(-4),0x70414C28,0xC7E4B864,0xC8B75C6F,0xC7E4B864},{9,0x91443EEC,(-4),0x91443EEC,9,(-1),(-1),0xC7E4B864},{0x91443EEC,0x70414C28,0xC8B75C6F,(-4),(-4),0xC8B75C6F,0x70414C28,0x91443EEC},{(-1),(-1),0xC8B75C6F,0x5FA908B8,(-1),9,(-1),0x5FA908B8},{(-4),0x9568C81E,(-4),0xC7E4B864,0x5FA908B8,9,0xC8B75C6F,0xC8B75C6F}};
                int i, j;
                for (g_66.f1.f0 = 1; (g_66.f1.f0 <= 6); g_66.f1.f0 += 1)
                { 
                    float l_389 = 0xB.A48D28p-96;
                    int32_t l_409 = (-3);
                    int8_t l_416 = 8;
                    if (((g_165 &= l_327) > (((((__builtin_ctzll(((safe_rshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(p_78.f5, l_261)) >= g_54.f8) == (l_397 = ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((p_78.f4 = __builtin_parityl(p_78.f2)) < ((0x66E37D74 ^ 6U) & (!(safe_lshift_func_uint8_t_u_s(g_66.f3.f2, 4))))), p_78.f1)), g_295)) == 65526U))), p_79.f8)) != 2U)) || p_79.f5) | (-7)) | l_256) | 8U) > 1)))
                    { 
                        if (p_76)
                            break;
                        g_66.f1.f5 &= (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((((p_78.f4 = (l_410 = (p_79.f3 = (l_327 &= (p_79.f2 ^ (l_261 = (((g_54.f0 = (l_397 && (0x7A37 && (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_367 |= g_54.f8), (g_273 ^= (+p_78.f6)))), __builtin_ctz((safe_rshift_func_uint16_t_u_s(p_79.f7, 12)))))))) || p_78.f1) != l_409))))))) > g_66.f3.f2) < 0x5B), l_366[1])) <= g_42.f1), 2));
                        p_79.f8 &= (p_78.f5 = (l_409 = 0));
                    }
                    else
                    { 
                        int8_t l_412 = 0x1C;
                        g_54.f8 = 0x4BABF769;
                        g_418--;
                    }
                }
                for (g_66.f2.f1 = 0; (g_66.f2.f1 <= 6); g_66.f2.f1 += 1)
                { 
                    int32_t l_421 = 0;
                    for (l_327 = 6; (l_327 >= 0); l_327 -= 1)
                    { 
                        int i;
                        l_422--;
                        l_367 |= ((g_103.f0 &= 1) == ((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_366[l_327], 1)), 5)) <= 0x6A) ^ g_66.f3.f0) == (g_114.f1 <= (safe_unary_minus_func_int32_t_s(p_78.f0)))));
                    }
                }
            }
            for (l_287 = 0; (l_287 < (-18)); --l_287)
            { 
                uint32_t l_432[4][3][2] = {{{4294967287U,4294967287U},{4294967287U,0xD9EC9867},{0x34576F95,8U}},{{0xD9EC9867,8U},{0x34576F95,0xD9EC9867},{4294967287U,4294967287U}},{{4294967287U,0xD9EC9867},{0x34576F95,8U},{0xD9EC9867,8U}},{{0x34576F95,0xD9EC9867},{4294967287U,4294967287U},{4294967287U,0xD9EC9867}}};
                int i, j, k;
                --l_432[0][0][1];
            }
        }
    }
    else
    { 
        uint8_t l_435[3][6][5] = {{{0xBD,0xBF,0xBF,0xBD,255U},{0x94,0x99,0xD5,8U,6U},{0x20,0xA8,255U,0xA8,0x20},{0x86,255U,0U,1U,248U},{255U,0xBD,0xBF,0xBF,0xBD},{255U,0U,0U,0x99,248U}},{{0xCB,0xBF,0x3B,0xA8,0x3B},{248U,255U,7U,255U,0x94},{0xCB,0x20,255U,0x9E,0x9E},{255U,8U,255U,254U,6U},{255U,0x20,0xCB,0xBD,0xE7},{7U,255U,248U,0U,255U}},{{0x3B,0xBF,0xCB,0xE7,0x20},{0U,0U,255U,0U,0U},{0xBF,0xBD,255U,0xE7,1U},{1U,0x99,7U,0U,0x86},{0x9E,0xCB,0x3B,0xBD,1U},{255U,0U,0U,254U,0U}}};
        int32_t l_438 = 0xA3EE7D30;
        int32_t l_439 = (-1);
        int32_t l_440[10] = {(-9),(-9),(-9),(-9),(-9),(-9),(-9),(-9),(-9),(-9)};
        int32_t l_441 = 1;
        int32_t l_442[4];
        int32_t l_443 = 0x9FE311E4;
        int32_t l_445 = (-1);
        uint16_t l_449 = 65527U;
        struct S4 l_452 = {122,0U};
        struct S8 l_453[8] = {{692,7},{-662,7},{-662,7},{692,7},{-662,7},{-662,7},{692,7},{-662,7}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_442[i] = 1;
        l_287 |= 0x9AE13F88;
        l_435[2][2][0]--;
        l_449--;
        l_453[0] = func_86(l_452, g_54);
    }
    return g_66.f7;
}




static struct S2  func_80(struct S0  p_81)
{ 
    struct S3 l_113 = {300,4,5,373,4294967295U,1456,38,14,-68};
    struct S4 l_158[10] = {{341,0U},{249,0xBD},{215,9U},{249,0xBD},{341,0U},{341,0U},{249,0xBD},{215,9U},{249,0xBD},{341,0U}};
    int32_t l_197 = 1;
    struct S2 l_198 = {9,-0,4,3485,-1,-29863,-57};
    struct S5 l_209 = {-14};
    int i;
    if ((safe_lshift_func_int8_t_s_u((g_111 = 6), 6)))
    { 
        struct S4 l_112 = {277,248U};
        g_114 = func_86(l_112, l_113);
    }
    else
    { 
        float l_115 = 0xF.2F823Ep+23;
        int32_t l_116 = 0xE23EB405;
        int32_t l_117 = 0;
        uint16_t l_153[7][2][2] = {{{65535U,6U},{7U,9U}},{{9U,0x57CD},{0x57CD,0x7239}},{{65526U,0x7239},{0x57CD,0x57CD}},{{9U,9U},{7U,6U}},{{65535U,0x77BF},{0x7239,65535U}},{{0U,8U},{0U,65535U}},{{0x7239,0x77BF},{65535U,6U}}};
        int32_t l_211[10][4][2] = {{{0x6D3135C6,0x6D3135C6},{0x6D3135C6,0xF84B3746},{0x27638A56,7},{0xF84B3746,7}},{{0x27638A56,0xF84B3746},{0x6D3135C6,0x6D3135C6},{0x6D3135C6,0xF84B3746},{0x27638A56,7}},{{0xF84B3746,7},{0x27638A56,0xF84B3746},{0x6D3135C6,0x6D3135C6},{0x6D3135C6,0xF84B3746}},{{0x27638A56,7},{0xF84B3746,7},{0x27638A56,0xF84B3746},{0x6D3135C6,0x6D3135C6}},{{0x6D3135C6,0xF84B3746},{0x27638A56,7},{0xF84B3746,7},{0x27638A56,0xF84B3746}},{{0x6D3135C6,0x6D3135C6},{0x6D3135C6,0xF84B3746},{0x27638A56,7},{0xF84B3746,7}},{{0x27638A56,0xF84B3746},{0x6D3135C6,0x6D3135C6},{0x6D3135C6,0xF84B3746},{0x27638A56,7}},{{0xF84B3746,7},{0x27638A56,0xF84B3746},{0x6D3135C6,0x6D3135C6},{0x6D3135C6,0x27638A56}},{{0x41D34E96,0x6D3135C6},{0x27638A56,0x6D3135C6},{0x41D34E96,0x27638A56},{0xF84B3746,0xF84B3746}},{{0xF84B3746,0x27638A56},{0x41D34E96,0x6D3135C6},{0x27638A56,0x6D3135C6},{0x41D34E96,0x27638A56}}};
        struct S2 l_245 = {-3,0,4,-1726,6,-13305,87};
        int32_t l_246 = (-3);
        int i, j, k;
        if (g_48.f3)
        { 
            uint32_t l_121 = 0x965C3E68;
            int32_t l_127 = (-6);
            int32_t l_146 = 0x8A367226;
            int32_t l_194 = (-2);
            const struct S1 l_228 = {-1,7,1429,15,-1};
            if ((l_116 & (1 || (g_111 &= (0x8876 || (l_117 &= g_66.f1.f4))))))
            { 
                for (p_81.f0 = (-19); (p_81.f0 <= 20); p_81.f0++)
                { 
                    uint32_t l_120 = 0x220E4BD6;
                    uint8_t l_126 = 0U;
                    l_120 = p_81.f0;
                    l_121 = (g_54.f4 >= g_66.f1.f6);
                    g_130 = (((l_127 = ((safe_add_func_float_f_f(0x8.00D2E1p-39, 0x3.76BD68p-41)) >= (safe_div_func_float_f_f((p_81.f0 <= g_66.f2.f1), (p_81.f1 > ((-0x5.Ap+1) <= (l_113.f3 = l_126))))))) > (safe_sub_func_float_f_f((g_66.f1.f6 >= 0x8.AF4E67p-21), 0x9.Fp+1))) != p_81.f1);
                }
            }
            else
            { 
                uint16_t l_136 = 65535U;
                int32_t l_137[4][9][6] = {{{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)},{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)},{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)}},{{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)},{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)},{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)}},{{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)},{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)},{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),0x7B0B943B},{5,0x7B0B943B,0xB3A5B190,5,(-8),(-8)}},{{8,0x7B0B943B,0x7B0B943B,8,(-8),0xB3A5B190},{0x2FE48773,0x7B0B943B,(-8),0x2FE48773,(-8),1},{(-8),1,0x628C784C,(-8),0xCF51EDEC,0xCF51EDEC},{0x7B0B943B,1,1,0x7B0B943B,0xCF51EDEC,0x628C784C},{0xB3A5B190,1,0xCF51EDEC,0xB3A5B190,0xCF51EDEC,1},{(-8),1,0x628C784C,(-8),0xCF51EDEC,0xCF51EDEC},{0x7B0B943B,1,1,0x7B0B943B,0xCF51EDEC,0x628C784C},{0xB3A5B190,1,0xCF51EDEC,0xB3A5B190,0xCF51EDEC,1},{(-8),1,0x628C784C,(-8),0xCF51EDEC,0xCF51EDEC}}};
                struct S4 l_157 = {229,254U};
                int32_t l_188 = 5;
                int32_t l_189[9][2] = {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
                int32_t l_190[5] = {(-1),(-1),(-1),(-1),(-1)};
                struct S5 l_208 = {-219};
                int i, j, k;
                l_117 = l_116;
                if ((safe_lshift_func_uint16_t_u_s((((~(safe_sub_func_int32_t_s_s((l_136 = l_117), p_81.f0))) ^ (g_66.f2.f0 = p_81.f2)) == (((l_113.f3 = ((((g_54.f0 &= l_127) && g_66.f1.f4) | ((g_66.f4 ^= l_137[1][6][2]) | ((safe_lshift_func_int8_t_s_u(((p_81.f2 | (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_113.f0 >= (l_146 ^= (safe_mod_func_int16_t_s_s(p_81.f0, p_81.f2)))), g_108)), g_54.f6))) < p_81.f1), l_137[1][3][1])) ^ l_113.f5))) ^ 65532U)) ^ p_81.f0) >= p_81.f0)), g_66.f1.f1)))
                { 
                    uint16_t l_151 = 0U;
                    uint32_t l_156[3][7][6] = {{{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A},{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A},{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A}},{{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A},{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A},{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A}},{{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A},{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,0x593F6757,0x593F6757,0xCCD8886A},{0x593F6757,0x593F6757,0xCCD8886A,4294967295U,4294967295U,0xCCD8886A},{4294967295U,4294967295U,0xCCD8886A,4294967295U,4294967295U,0x593F6757}}};
                    int32_t l_187 = (-9);
                    int32_t l_210 = 0;
                    int i, j, k;
                    if (g_48.f1)
                    { 
                        uint32_t l_152 = 0x0181F473;
                        l_113.f3 = (((((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((p_81.f1 > 0U), l_127)), l_151)) || l_117) && (-8)) & l_152) ^ ((p_81.f2 & 0x1DA0) && (-1)));
                        --l_153[0][1][0];
                    }
                    else
                    { 
                        g_130 = l_156[0][4][2];
                        l_158[8] = l_157;
                    }
                    for (l_151 = (-16); (l_151 > 51); l_151 = safe_add_func_uint16_t_u_u(l_151, 4))
                    { 
                        uint16_t l_166[4] = {0x76DE,0x76DE,0x76DE,0x76DE};
                        int32_t l_182 = 0xEEC29EF4;
                        int i;
                        l_190[4] ^= (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((l_166[0] ^= (g_54.f4 != (l_137[1][6][2] ^= g_165))) > ((((g_54.f6 > (safe_sub_func_uint32_t_u_u(p_81.f0, (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((l_113.f3 |= (~g_66.f2.f1)), (safe_mul_func_uint8_t_u_u(255U, (safe_div_func_uint16_t_u_u((l_189[0][0] &= (safe_lshift_func_int16_t_s_s((g_114.f1 == ((l_182 = p_81.f0) == (safe_div_func_uint8_t_u_u((l_188 = (l_187 = (safe_rshift_func_uint16_t_u_u(65534U, 8)))), 0x2F)))), p_81.f2))), g_66.f1.f4)))))), 3U))))) && g_66.f1.f2) <= p_81.f2) <= 0U)) & p_81.f0), 0xBDECA35F)), 1U));
                        l_116 = (safe_unary_minus_func_int32_t_s((((safe_rshift_func_uint8_t_u_s((++g_66.f2.f1), (l_197 = p_81.f2))) & g_66.f3.f0) || 65535U)));
                        return l_198;
                    }
                    for (g_66.f3.f0 = (-4); (g_66.f3.f0 > 4); ++g_66.f3.f0)
                    { 
                        struct S8 l_204 = {-837,14};
                        l_146 = (g_66.f1.f4 = (safe_mul_func_uint16_t_u_u(0x56F3, (l_158[8].f0 ^ (!p_81.f1)))));
                        l_204 = g_114;
                        l_204.f0 &= (g_66.f3.f2 != ((safe_unary_minus_func_uint16_t_u(g_103.f1)) ^ 0U));
                    }
                    for (g_66.f2.f1 = 28; (g_66.f2.f1 != 49); g_66.f2.f1 = safe_add_func_uint32_t_u_u(g_66.f2.f1, 1))
                    { 
                        l_209 = l_208;
                        --g_212;
                        g_130 = ((0x5.86784Ep-32 == (0x7.7p+1 == (l_146 = (safe_div_func_float_f_f(g_3, (!(0x2.1p-1 < (safe_div_func_float_f_f(l_194, (g_42.f0 <= l_136)))))))))) <= (safe_mul_func_float_f_f((safe_add_func_float_f_f((safe_sub_func_float_f_f(g_66.f3.f2, 0x6.Dp-1)), 0x4.2p-1)), 0x0.5p+1)));
                        if (p_81.f2)
                            continue;
                    }
                }
                else
                { 
                    uint16_t l_232 = 0xDA79;
                    int32_t l_241 = 0;
                    g_54.f3 = (((-1) <= l_194) >= g_66.f6);
                    for (l_146 = 0; (l_146 <= 17); l_146 = safe_add_func_int16_t_s_s(l_146, 5))
                    { 
                        struct S1 l_229[5][2] = {{{3,3,1895,-55,0},{2,4,367,-13,-1}},{{0,4,1280,52,-0},{2,4,367,-13,-1}},{{3,3,1895,-55,0},{0,4,1280,52,-0}},{{-9,6,651,-38,-1},{-9,6,651,-38,-1}},{{-9,6,651,-38,-1},{0,4,1280,52,-0}}};
                        int i, j;
                        l_229[1][1] = l_228;
                        g_66.f5.f0 = p_81.f0;
                        if (g_54.f4)
                            continue;
                    }
                    for (g_66.f2.f1 = (-7); (g_66.f2.f1 < 46); g_66.f2.f1++)
                    { 
                        int8_t l_239 = (-1);
                        int16_t l_240 = 0xAA52;
                        l_232--;
                        g_130 = (((l_127 = (safe_mul_func_float_f_f((safe_div_func_float_f_f(0x0.Bp+1, l_198.f4)), l_239))) >= (l_239 <= (((p_81.f0 != (p_81.f1 == 0x1.Ep-1)) <= g_103.f1) != p_81.f1))) != 0x1.Dp+1);
                        g_242--;
                    }
                }
            }
            return l_245;
        }
        else
        { 
            g_54.f3 ^= g_3;
        }
        ++g_247[1];
    }
    return g_66.f1;
}




inline static struct S0  func_82(struct S8  p_83, int16_t  p_84, struct S0  p_85)
{ 
    uint16_t l_106[10] = {0x55F3,0x6B8A,0x55F3,0x6B8A,0x55F3,0x6B8A,0x55F3,0x6B8A,0x55F3,0x6B8A};
    int32_t l_107[9] = {0x9AD97AB8,0xA860806C,0x9AD97AB8,0xA860806C,0x9AD97AB8,0xA860806C,0x9AD97AB8,0xA860806C,0x9AD97AB8};
    int i;
    p_83.f0 |= l_106[4];
    l_107[1] ^= l_106[8];
    g_108 &= l_106[4];
    return p_85;
}




inline static struct S8  func_86(struct S4  p_87, struct S3  p_88)
{ 
    int32_t l_93[8][2] = {{0x96B20D6D,0xF505669B},{0xB6310099,0xF505669B},{0x96B20D6D,0x4F5E2A8B},{0x4F5E2A8B,0x96B20D6D},{0xF505669B,0xB6310099},{0xF505669B,0x96B20D6D},{0x4F5E2A8B,0x4F5E2A8B},{0x96B20D6D,0xF505669B}};
    struct S8 l_97 = {-621,5};
    int i, j;
    p_87 = p_87;
    for (g_66.f3.f2 = (-16); (g_66.f3.f2 < 34); g_66.f3.f2 = safe_add_func_int8_t_s_s(g_66.f3.f2, 4))
    { 
        uint32_t l_92[6][9][4] = {{{0x7F91F76D,0x5854D8CA,0x00ED8B3F,0x5854D8CA},{4294967294U,0x43B6BB07,9U,0x00ED8B3F},{0x5854D8CA,0x43B6BB07,0x43B6BB07,0x5854D8CA},{0x43B6BB07,0x5854D8CA,4294967294U,0x7F91F76D},{0x43B6BB07,4294967294U,0x43B6BB07,9U},{0x5854D8CA,0x7F91F76D,9U,9U},{4294967294U,4294967294U,0x00ED8B3F,0x7F91F76D},{0x7F91F76D,0x5854D8CA,0x00ED8B3F,0x5854D8CA},{4294967294U,0x43B6BB07,9U,0x00ED8B3F}},{{0x5854D8CA,0x43B6BB07,0x43B6BB07,0x5854D8CA},{0x43B6BB07,0x5854D8CA,4294967294U,0x7F91F76D},{0x43B6BB07,4294967294U,0x43B6BB07,9U},{0x5854D8CA,0x7F91F76D,9U,9U},{4294967294U,4294967294U,0x00ED8B3F,0x7F91F76D},{0x7F91F76D,0x5854D8CA,0x00ED8B3F,0x5854D8CA},{4294967294U,0x43B6BB07,9U,0x00ED8B3F},{0x5854D8CA,0x43B6BB07,0x43B6BB07,0x5854D8CA},{0x43B6BB07,0x5854D8CA,4294967294U,0x7F91F76D}},{{0x43B6BB07,4294967294U,0x43B6BB07,9U},{0x5854D8CA,0x7F91F76D,9U,9U},{4294967294U,4294967294U,0x00ED8B3F,0x7F91F76D},{0x7F91F76D,0x5854D8CA,0x00ED8B3F,0x5854D8CA},{4294967294U,0x43B6BB07,9U,0x00ED8B3F},{0x5854D8CA,0x43B6BB07,0x43B6BB07,0x5854D8CA},{0x43B6BB07,0x5854D8CA,4294967294U,0x7F91F76D},{0x43B6BB07,4294967294U,0x43B6BB07,9U},{0x5854D8CA,0x7F91F76D,9U,9U}},{{4294967294U,4294967294U,0x00ED8B3F,0x7F91F76D},{0x7F91F76D,0x5854D8CA,0x00ED8B3F,0x5854D8CA},{4294967294U,0x43B6BB07,9U,0x00ED8B3F},{0x5854D8CA,0x43B6BB07,0x43B6BB07,0x5854D8CA},{0x43B6BB07,0x5854D8CA,4294967294U,0x7F91F76D},{0x43B6BB07,4294967294U,0x43B6BB07,9U},{0x5854D8CA,0x7F91F76D,9U,9U},{4294967294U,4294967294U,0x00ED8B3F,0x7F91F76D},{0x7F91F76D,0x43B6BB07,4294967294U,0x43B6BB07}},{{4294967289U,0x7F91F76D,0x00ED8B3F,4294967294U},{0x43B6BB07,0x7F91F76D,0x7F91F76D,0x43B6BB07},{0x7F91F76D,0x43B6BB07,4294967289U,9U},{0x7F91F76D,4294967289U,0x7F91F76D,0x00ED8B3F},{0x43B6BB07,9U,0x00ED8B3F,0x00ED8B3F},{4294967289U,4294967289U,4294967294U,9U},{9U,0x43B6BB07,4294967294U,0x43B6BB07},{4294967289U,0x7F91F76D,0x00ED8B3F,4294967294U},{0x43B6BB07,0x7F91F76D,0x7F91F76D,0x43B6BB07}},{{0x7F91F76D,0x43B6BB07,4294967289U,9U},{0x7F91F76D,4294967289U,0x7F91F76D,0x00ED8B3F},{0x43B6BB07,9U,0x00ED8B3F,0x00ED8B3F},{4294967289U,4294967289U,4294967294U,9U},{9U,0x43B6BB07,4294967294U,0x43B6BB07},{4294967289U,0x7F91F76D,0x00ED8B3F,4294967294U},{0x43B6BB07,0x7F91F76D,0x7F91F76D,0x43B6BB07},{0x7F91F76D,0x43B6BB07,4294967289U,9U},{0x7F91F76D,4294967289U,0x7F91F76D,0x00ED8B3F}}};
        struct S1 l_98 = {0,7,1935,7,0};
        uint32_t l_100 = 0x7EED95D1;
        int i, j, k;
        for (g_66.f4 = 0; (g_66.f4 <= 3); g_66.f4 += 1)
        { 
            uint16_t l_94 = 0x3379;
            int32_t l_99 = 0xE0AF8641;
            ++l_94;
            if (g_66.f3.f1)
            { 
                l_97 = g_42;
            }
            else
            { 
                l_98 = l_98;
                l_100--;
                if (p_88.f4)
                    continue;
                g_103 = g_42;
            }
            return l_97;
        }
        p_88.f8 = (~l_93[0][0]);
    }
    return g_103;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1, "g_42.f1", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_48.f4, "g_48.f4", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_54.f4, "g_54.f4", print_hash_value);
    transparent_crc(g_54.f5, "g_54.f5", print_hash_value);
    transparent_crc(g_54.f6, "g_54.f6", print_hash_value);
    transparent_crc(g_54.f7, "g_54.f7", print_hash_value);
    transparent_crc(g_54.f8, "g_54.f8", print_hash_value);
    transparent_crc(g_66.f0.f0, "g_66.f0.f0", print_hash_value);
    transparent_crc(g_66.f0.f1, "g_66.f0.f1", print_hash_value);
    transparent_crc(g_66.f1.f0, "g_66.f1.f0", print_hash_value);
    transparent_crc(g_66.f1.f1, "g_66.f1.f1", print_hash_value);
    transparent_crc(g_66.f1.f2, "g_66.f1.f2", print_hash_value);
    transparent_crc(g_66.f1.f3, "g_66.f1.f3", print_hash_value);
    transparent_crc(g_66.f1.f4, "g_66.f1.f4", print_hash_value);
    transparent_crc(g_66.f1.f5, "g_66.f1.f5", print_hash_value);
    transparent_crc(g_66.f1.f6, "g_66.f1.f6", print_hash_value);
    transparent_crc(g_66.f2.f0, "g_66.f2.f0", print_hash_value);
    transparent_crc(g_66.f2.f1, "g_66.f2.f1", print_hash_value);
    transparent_crc(g_66.f3.f0, "g_66.f3.f0", print_hash_value);
    transparent_crc(g_66.f3.f1, "g_66.f3.f1", print_hash_value);
    transparent_crc(g_66.f3.f2, "g_66.f3.f2", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_66.f5.f0, "g_66.f5.f0", print_hash_value);
    transparent_crc(g_66.f6, "g_66.f6", print_hash_value);
    transparent_crc(g_66.f7, "g_66.f7", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc_bytes (&g_130, sizeof(g_130), "g_130", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_247[i], "g_247[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc_bytes (&g_448, sizeof(g_448), "g_448", print_hash_value);
    transparent_crc(g_488.f0, "g_488.f0", print_hash_value);
    transparent_crc(g_488.f1, "g_488.f1", print_hash_value);
    transparent_crc(g_488.f2, "g_488.f2", print_hash_value);
    transparent_crc(g_488.f3, "g_488.f3", print_hash_value);
    transparent_crc(g_488.f4, "g_488.f4", print_hash_value);
    transparent_crc(g_488.f5, "g_488.f5", print_hash_value);
    transparent_crc(g_488.f6, "g_488.f6", print_hash_value);
    transparent_crc(g_489.f0, "g_489.f0", print_hash_value);
    transparent_crc(g_489.f1, "g_489.f1", print_hash_value);
    transparent_crc(g_489.f2, "g_489.f2", print_hash_value);
    transparent_crc(g_489.f3, "g_489.f3", print_hash_value);
    transparent_crc(g_489.f4, "g_489.f4", print_hash_value);
    transparent_crc(g_489.f5, "g_489.f5", print_hash_value);
    transparent_crc(g_489.f6, "g_489.f6", print_hash_value);
    transparent_crc(g_489.f7, "g_489.f7", print_hash_value);
    transparent_crc(g_489.f8, "g_489.f8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_576[i], "g_576[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    transparent_crc_bytes (&g_899, sizeof(g_899), "g_899", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_901[i][j][k], "g_901[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc_bytes (&g_903, sizeof(g_903), "g_903", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_955[i], "g_955[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1180[i], "g_1180[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1227.f0, "g_1227.f0", print_hash_value);
    transparent_crc(g_1227.f1, "g_1227.f1", print_hash_value);
    transparent_crc(g_1227.f2, "g_1227.f2", print_hash_value);
    transparent_crc(g_1227.f3, "g_1227.f3", print_hash_value);
    transparent_crc(g_1227.f4, "g_1227.f4", print_hash_value);
    transparent_crc(g_1227.f5, "g_1227.f5", print_hash_value);
    transparent_crc(g_1227.f6, "g_1227.f6", print_hash_value);
    transparent_crc(g_1227.f7, "g_1227.f7", print_hash_value);
    transparent_crc(g_1227.f8, "g_1227.f8", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc_bytes(&g_1364[i][j], sizeof(g_1364[i][j]), "g_1364[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1440, "g_1440", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



