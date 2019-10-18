


#define NO_LONGLONG



static long __undefined;


struct S0 {
   unsigned f0 : 12;
   signed f1 : 19;
   signed f2 : 10;
   int8_t  f3;
   unsigned f4 : 10;
};

struct S1 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
   int32_t  f1;
   struct S1  f2;
};
#pragma pack(pop)

struct S3 {
   struct S1  f0;
   unsigned f1 : 23;
   unsigned f2 : 21;
   unsigned f3 : 26;
};

struct S4 {
   unsigned f0 : 21;
   signed f1 : 20;
   signed f2 : 20;
   unsigned f3 : 4;
   unsigned f4 : 23;
   signed f5 : 9;
   unsigned f6 : 4;
   signed f7 : 2;
   signed f8 : 21;
   unsigned f9 : 14;
};

union U5 {
   unsigned f0 : 5;
   uint8_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};

union U6 {
   int8_t  f0;
   uint16_t  f1;
   int16_t  f2;
};

union U7 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int8_t  f3;
   int16_t  f4;
};

union U8 {
   struct S1  f0;
   uint16_t  f1;
   signed f2 : 23;
   int16_t  f3;
   uint8_t  f4;
};


static int32_t g_8 = 0x2F1FCC10;
static struct S1 g_55 = {0U};
static union U7 g_56 = {-4};
static struct S2 g_61 = {255U,-1,{0xA1FF3804}};
static uint32_t g_63 = 4294967293U;
static struct S4 g_66 = {823,-659,-51,0,149,6,2,-0,402,5};
static struct S0 g_69 = {33,-217,-4,0x22,20};
static struct S0 g_70 = {30,253,14,0,10};
static struct S3 g_85 = {{7U},1943,669,6727};
static uint16_t g_117 = 65532U;
static int8_t g_118 = 0x80;
static union U6 g_135 = {0};
static uint8_t g_177 = 1U;
static int16_t g_211 = 0x3F65;
static union U5 g_425 = {0x084DA998};
static struct S3 g_457 = {{4294967295U},1980,1121,719};
static union U8 g_761 = {{4294967295U}};
static int16_t g_812 = (-4);
static union U7 g_1032 = {8};
static int8_t g_1059 = (-3);
static struct S0 g_1068 = {15,-141,-23,0xDE,18};
static int8_t g_1215 = 0x63;
static int16_t g_1301 = (-3);
static struct S4 g_1427 = {1079,15,336,1,2682,5,3,0,-805,74};
static struct S4 g_1554 = {842,159,-798,2,2125,-20,3,0,1389,28};
static int32_t g_1725 = 0;
static uint16_t g_1979 = 0U;



inline static int32_t  func_1(void);
inline static struct S1  func_2(int32_t  p_3, uint16_t  p_4, struct S3  p_5, struct S1  p_6, uint16_t  p_7);
inline static struct S1  func_12(uint16_t  p_13, int32_t  p_14, struct S1  p_15, uint32_t  p_16, union U5  p_17);
inline static struct S1  func_18(struct S4  p_19, int16_t  p_20, struct S4  p_21, uint16_t  p_22);
static struct S4  func_23(union U5  p_24, int32_t  p_25);
static union U5  func_26(int32_t  p_27);
static struct S2  func_29(int16_t  p_30, struct S3  p_31);
static struct S1  func_32(struct S1  p_33, struct S3  p_34);
static int32_t  func_35(int8_t  p_36, struct S2  p_37, uint32_t  p_38, int8_t  p_39);
static struct S3  func_45(union U7  p_46, int8_t  p_47, uint8_t  p_48);





inline static int32_t  func_1(void)
{ 
    int8_t l_44 = 1;
    struct S1 l_86 = {4294967291U};
    struct S4 l_1035 = {1435,155,529,3,854,11,3,-0,-358,31};
    union U5 l_1727 = {1U};
    int32_t l_1786 = (-9);
    union U6 l_1855 = {1};
    union U7 l_1952 = {0x94A824B6};
    struct S3 l_1959 = {{0xBF4CF3F0},2390,1122,6668};
    int8_t l_1984 = 0x62;
    uint32_t l_2103 = 4294967291U;
    uint8_t l_2127 = 0x8F;
    l_86 = func_2(g_8, (~((int8_t)(-6) >> (int8_t)3)), (func_12((func_18(func_23(func_26(((!(g_66.f0 = (((func_29((func_32(((g_8 , func_35(((int8_t)(l_44 == ((func_45((l_44 , ((((uint8_t)((uint16_t)(((g_8 && g_8) , ((((((int16_t)(((g_8 & ((g_8 < 0x5B) & g_8)) != 0xFB43B78C) != l_44) >> (int16_t)l_44) != 0xF0) , g_55) , 3U) <= g_55.f0)) , l_44) * (uint16_t)g_55.f0) << (uint8_t)l_44) & g_8) , g_56)), l_44, l_44) , g_56.f3) != l_44)) * (int8_t)l_44), g_61, g_61.f0, g_61.f1)) , l_86), g_85) , g_135.f0), g_457) , g_85.f0) , g_69.f2) ^ l_44))) < g_457.f3)), g_457.f1), g_66.f4, l_1035, l_1035.f3) , 0x6A1F), l_1035.f7, l_86, g_1725, l_1727) , g_85), g_85.f0, l_1786);
    
                g_66.f8 ^= g_1068.f1;
    for (l_44 = 6; (l_44 != (-5)); l_44 -= 1)
    { 
        int32_t l_1824 = 0xA0E99D38;
        uint8_t l_1825 = 0xBD;
        struct S0 l_1841 = {38,-92,-14,-1,8};
        union U8 l_1933 = {{0x7A9E489B}};
        uint32_t l_1943 = 0U;
        uint32_t l_1945 = 0xFA6A49E3;
        uint32_t l_1989 = 0x4C43B04F;
        int32_t l_2079 = (-1);
        g_66.f5 |= g_69.f1;
        if (((int16_t)((g_761 , 0x805E9939) != ((g_1032.f2 = l_1035.f7) >= (l_1035.f1 & (((uint16_t)(g_425.f3 = (!((((uint8_t)g_457.f0.f0 >> (uint8_t)g_1554.f8) == g_61.f1) != (((l_1035.f6 , ((int16_t)((uint32_t)((((int8_t)((((int16_t)(l_1824 | l_1035.f0) * (int16_t)l_1824) && g_1554.f2) | g_1554.f1) % (int8_t)g_1554.f8) | l_1035.f4) <= l_1035.f7) % (uint32_t)g_70.f1) - (int16_t)g_8)) , 0x6B) | g_1427.f1)))) + (uint16_t)l_1825) ^ g_61.f1)))) << (int16_t)l_1825))
        { 
            int32_t l_1832 = (-1);
            uint32_t l_1845 = 0x973D3161;
            int16_t l_1846 = (-1);
            uint16_t l_1847 = 1U;
            int32_t l_1871 = 0;
            struct S1 l_1872 = {0x2331E868};
            uint8_t l_1885 = 255U;
            uint32_t l_1900 = 0x6E3B306A;
            union U8 l_1912 = {{0x965FCC0A}};
            struct S3 l_1975 = {{0xA0E329BB},2750,239,3832};
            if ((0xAE4DAE1D | ((uint32_t)((int8_t)((int32_t)(l_1832 < (g_70 , ((uint8_t)g_1427.f5 << (uint8_t)4))) + (int32_t)((!(g_118 &= g_69.f4)) != 1U)) * (int8_t)((int16_t)(func_26(l_1825) , (l_1035.f8 ^= l_1824)) - (int16_t)g_812)) + (uint32_t)g_425.f3)))
            { 
                int32_t l_1839 = 2;
                int32_t l_1840 = 0xC7AD60B1;
                struct S4 l_1842 = {952,210,-795,3,223,10,0,-0,-83,120};
                int32_t l_1897 = 4;
                l_1841.f1 = ((l_1847 = (l_1832 = ((-(uint8_t)(l_1840 |= ((g_70.f4 ^= l_1839) & g_66.f3))) && (g_63 ^ (l_1841 , ((g_1068 , (((g_135.f2 = (((l_1842 , ((uint8_t)(g_70.f3 && (1 && g_1032.f0)) * (uint8_t)0x00)) <= 0U) < 0)) ^ l_1845) == g_1725)) >= l_1846)))))) ^ 0x927A9D6D);
                g_66.f5 &= ((uint32_t)(((uint8_t)l_1842.f2 << (uint8_t)3) == (((-(uint8_t)g_1554.f9) && (((g_457.f1 >= (l_1841.f2 = ((((g_61.f0 = ((int8_t)(l_1855 , l_1832) * (int8_t)g_61.f2.f0)) | 0x49) > ((int16_t)((int16_t)((((((g_117 = (0U || ((-1) == l_1035.f7))) < 0) ^ l_1841.f1) == l_1842.f4) <= g_457.f3) && g_1427.f7) - (int16_t)g_1554.f8) << (int16_t)l_1786)) & l_1847))) < 0) & 65535U)) | 0x6E)) % (uint32_t)l_1824);
                if ((func_45(g_1032, (((int32_t)((int16_t)g_118 * (int16_t)0x4B9A) + (int32_t)(l_1872 , 0U)) < g_1068.f0), g_8) , g_61.f1))
                { 
                    int16_t l_1873 = (-1);
                    g_66.f8 &= (l_1873 > (~((l_1841.f2 , (((l_1035.f3 <= (l_1885 = (g_61.f2 , ((((((int8_t)((uint8_t)(g_761.f4 = l_1841.f2) - (uint8_t)(l_1035.f7 = ((((((int8_t)l_1873 - (int8_t)((int8_t)((uint8_t)(g_70.f3 & g_56.f3) * (uint8_t)(-8)) * (int8_t)l_1871)) != g_1427.f7) , 255U) <= l_1841.f4) && 0U))) << (int8_t)0) || l_1873) & l_1841.f1) && l_1841.f4) , g_85.f2)))) == 0x76) <= g_85.f0.f0)) > 0x82B0B49B)));
                    
                                    }
                else
                { 
                    int8_t l_1892 = 0x18;
                    l_1841.f1 = (g_1068.f1 = (g_70.f1 |= ((int8_t)(g_66.f3 == ((int32_t)((int32_t)(l_1892 < (((((((int8_t)(0 ^ (((g_69 = g_1068) , (l_1035.f7 < ((g_761.f3 = g_1032.f1) , (g_1068.f2 | (l_1892 <= ((int8_t)l_1897 + (int8_t)0x22)))))) | g_177)) % (int8_t)0x27) , 65529U) <= l_1892) , g_56.f4) | 0xAB) <= g_1032.f1)) + (int32_t)0) % (int32_t)0x137230D0)) * (int8_t)l_1847)));
                    
                                        for (g_63 = (-16); (g_63 == 19); g_63 += 3)
                    { 
                        int16_t l_1901 = 0x0CDB;
                        l_1901 = ((g_425.f1 = g_1068.f3) >= l_1900);
                        
                                                l_1841.f2 ^= (((uint8_t)0xDB - (uint8_t)(0x2F18693A == (((((0x4F <= g_1554.f5) < (((g_85 , (l_1841.f1 = (((int16_t)g_177 + (int16_t)l_1901) ^ l_1901))) > l_1892) ^ l_1824)) , g_1554.f2) && l_1842.f9) >= g_1032.f4))) | g_1068.f3);
                        return g_1427.f5;
                    }
                }
                
                            }
            else
            { 
                uint16_t l_1918 = 65527U;
                union U5 l_1934 = {0x9F1D5169};
                int32_t l_1946 = 0x16787737;
                int32_t l_1974 = 0;
                if (l_1786)
                { 
                    int32_t l_1917 = 0x4DD6A6C4;
                    int32_t l_1944 = (-10);
                    l_1918 = ((int16_t)((int16_t)(l_1912 , l_1872.f0) << (int16_t)((int8_t)((((l_1841.f1 = (g_761 , ((int32_t)((l_1832 = l_1035.f3) || (g_1554.f9 , (((l_1841.f2 |= l_1917) && l_1841.f0) ^ (l_1917 <= ((-2) || g_63))))) % (int32_t)g_69.f1))) && 0x3342) > 4294967287U) >= g_1301) << (int8_t)0)) + (int16_t)7);
                    l_1035.f1 = ((g_1032.f1 ^= ((int16_t)(0U || 0x0482) >> (int16_t)(0U != (0x3F >= g_1725)))) , 0x98AFB595);
                    
                                        l_1841.f1 = ((((l_1786 |= (((uint16_t)((int16_t)((uint8_t)((uint8_t)(((uint32_t)((((l_1933 = g_761) , (g_1032.f1 &= ((l_1934 = (g_425 = g_425)) , ((g_1427.f6 <= ((g_66.f2 < ((g_812 = (g_1554.f4 || (l_1944 = ((((int32_t)((uint16_t)l_1841.f4 * (uint16_t)((uint32_t)(l_1841 , ((uint16_t)((0x9697 == ((l_1943 , g_1554.f5) <= g_69.f3)) == (-10)) >> (uint16_t)12)) - (uint32_t)0x84853037)) % (int32_t)1) & l_1871) , l_1832)))) & 0x32E2)) < l_1035.f7)) <= g_66.f1)))) , l_1035.f6) > l_1917) % (uint32_t)l_1918) , g_1427.f3) << (uint8_t)7) << (uint8_t)l_1918) * (int16_t)l_1917) % (uint16_t)l_1945) && l_1841.f0)) > 0xCE9A780C) == g_1427.f0) != g_70.f2);
                    
                                                        }
                else
                { 
                    struct S3 l_1960 = {{4294967295U},1595,77,1294};
                    int32_t l_1961 = 2;
                    l_1871 = (l_1872.f0 & (g_1427.f3 = g_1725));
                    l_1946 |= g_1032.f4;
                    if (((((uint8_t)((~255U) >= (g_761 , (((int8_t)((l_1960 = (l_1959 = func_45(l_1952, (g_135.f0 > l_1885), ((8U > ((0xC155 && ((int16_t)((((int8_t)(((int16_t)0x7212 + (int16_t)((g_1554.f1 = (((((g_761.f1 = (l_44 || g_425.f1)) && l_1832) == 0x073B0574) | 0) == g_8)) > g_1554.f6)) | l_1727.f0) - (int8_t)g_1427.f2) >= 254U) < g_66.f7) >> (int16_t)13)) , l_1035.f6)) == g_69.f3)))) , l_1035.f4) - (int8_t)l_1841.f0) != l_1961))) + (uint8_t)g_211) > 0xFF) < l_1934.f0))
                    { 
                        int8_t l_1973 = 1;
                        l_1975 = func_45(g_56, ((65530U <= ((int16_t)(((((uint32_t)(g_66.f3 = g_1427.f8) % (uint32_t)(((uint16_t)65535U + (uint16_t)l_1035.f0) & ((((l_1946 && (!(0x4E1A9A2D <= g_135.f0))) , ((int8_t)((int16_t)(0U ^ (-1)) + (int16_t)g_66.f7) >> (int8_t)l_1900)) ^ g_457.f0.f0) == 1U))) == l_1973) < g_457.f2) ^ l_1960.f0.f0) + (int16_t)g_61.f2.f0)) && l_1974), g_66.f1);
                        g_1068 = g_69;
                        g_66.f8 &= l_1960.f2;
                    }
                    else
                    { 
                        g_1068 = l_1841;
                        if (g_425.f3)
                            continue;
                        l_1961 |= 1;
                    }
                    l_1946 = (-(int32_t)((((((uint8_t)(l_1832 = l_1960.f0.f0) << (uint8_t)3) >= (g_1979 != ((int8_t)g_66.f1 << (int8_t)0))) > (g_1059 > (-1))) | g_66.f1) != g_1427.f8));
                }
                
                                                            }
            
                    }
        else
        { 
            uint32_t l_1992 = 0xBF98F77E;
            int32_t l_2012 = (-6);
            if ((((uint8_t)((l_1984 , ((int8_t)((int16_t)(l_1989 = (l_1786 &= ((g_1032.f0 > (g_1725 ^ (g_66.f1 <= l_1959.f0.f0))) | g_1554.f0))) * (int16_t)((((g_457.f0 , 0xCF2AE275) < 0xBDC73284) && l_1933.f0.f0) != g_1554.f1)) >> (int8_t)2)) == 0x33BF) - (uint8_t)6) & 4294967295U))
            { 
                uint8_t l_1995 = 255U;
                int32_t l_2025 = 0xC5A4BE4D;
                int32_t l_2026 = 0x39C0D5B0;
                g_457.f0 = func_12(g_1068.f1, ((uint16_t)0x85D6 * (uint16_t)3U), g_457.f0, l_1995, func_26(((((0x9A <= g_1554.f1) & ((int8_t)g_1427.f3 * (int8_t)(((int16_t)((int8_t)((uint32_t)((l_1992 > l_1992) & g_211) - (uint32_t)0x2A006E41) << (int8_t)l_1825) >> (int16_t)7) >= 3U))) == l_1841.f3) , 0x64290D63)));
                g_1554.f5 = (-1);
                l_2026 = (l_1933.f2 = ((uint16_t)(((int16_t)l_1035.f8 << (int16_t)10) != (l_1995 || ((int8_t)((uint32_t)(((((l_2012 = l_44) & (l_2025 ^= (((((uint8_t)((uint32_t)((uint16_t)l_1995 - (uint16_t)((int16_t)l_1992 - (int16_t)(g_211 = 2))) + (uint32_t)((uint16_t)((l_1992 < (!l_1995)) , (!l_1841.f4)) - (uint16_t)g_85.f2)) << (uint8_t)l_1992) | l_1959.f3) , g_85.f2) != 255U))) & g_1554.f7) >= (-1)) < g_1068.f0) + (uint32_t)0x4DD7C28B) % (int8_t)0x7A))) * (uint16_t)l_1989));
                
                                g_66.f7 |= (g_1427.f4 || l_1035.f0);
            }
            else
            { 
                uint32_t l_2048 = 1U;
                int32_t l_2081 = 1;
                for (g_812 = 0; (g_812 < (-30)); g_812 -= 1)
                { 
                    int32_t l_2046 = 0x939F67C1;
                    int32_t l_2047 = 0xF6D86673;
                }
            }
            
                        for (g_1059 = 0; (g_1059 != (-27)); g_1059 -= 9)
            { 
                int32_t l_2101 = 0x94FFFE4E;
                uint8_t l_2102 = 255U;
                l_2102 = (g_1068.f2 <= (g_1554.f5 ^ ((uint16_t)(l_2012 = ((uint8_t)(0x51BDDBED ^ ((int16_t)((g_61.f0 = ((l_1035.f1 = (l_2079 || g_1554.f3)) || (g_66.f9 = (g_70.f0 = (g_1427.f5 >= ((g_117 = ((int16_t)(((int8_t)(g_1427.f1 , ((int8_t)(-(uint8_t)l_1035.f6) - (int8_t)((int16_t)l_2101 >> (int16_t)14))) << (int8_t)0) == l_1992) << (int16_t)l_2101)) ^ g_1554.f4)))))) == 0x89) >> (int16_t)l_2079)) * (uint8_t)0xE3)) - (uint16_t)0x9D24)));
            }
            g_1427.f8 |= l_2103;
        }
        
                                g_1068.f2 = (g_69.f3 , (g_1068.f1 = ((uint8_t)((((((int32_t)g_66.f2 + (int32_t)0x27C0D906) & l_2079) , ((uint32_t)(((uint32_t)(l_1855 , ((0x166F & l_1841.f3) < ((uint32_t)(g_1427.f2 == ((int32_t)(((int16_t)((uint16_t)0U * (uint16_t)l_2079) >> (int16_t)8) != 0xF3) - (int32_t)l_1989)) % (uint32_t)g_1032.f4))) - (uint32_t)l_1989) , g_1427.f0) - (uint32_t)g_1427.f9)) || l_1943) <= 0xF0) % (uint8_t)g_1554.f7)));
        g_1427.f2 &= (((((g_1301 = (l_1035.f7 = (l_1035.f5 |= ((0xD11A4229 > ((g_69.f4 | (((uint16_t)0xBBE2 % (uint16_t)0xB81E) , (g_1554.f4 = g_63))) , (~g_70.f1))) > ((uint8_t)(((uint32_t)((((((1U > (0xEA || 0xDB)) && l_1841.f4) && g_1427.f7) < 3) == l_1035.f0) > l_2127) % (uint32_t)g_1554.f5) < l_1035.f1) + (uint8_t)l_44))))) , 0xEAAB) | l_1841.f2) < l_2127) ^ l_1952.f0);
    }
    return g_812;
}




inline static struct S1  func_2(int32_t  p_3, uint16_t  p_4, struct S3  p_5, struct S1  p_6, uint16_t  p_7)
{ 
    uint16_t l_1799 = 0U;
    struct S4 l_1806 = {954,843,328,0,1686,-10,3,-1,1315,96};
    for (g_85.f0.f0 = 0; (g_85.f0.f0 != 12); g_85.f0.f0 += 1)
    { 
        for (g_425.f3 = 0; (g_425.f3 <= 42); g_425.f3 += 1)
        { 
            return p_6;
        }
        
    }
    g_70.f1 = ((uint8_t)(((uint16_t)(((int8_t)((int8_t)(l_1799 = 0x57) * (int8_t)255U) >> (int8_t)1) , (((p_5.f0 , p_6.f0) , l_1806.f6) > g_1427.f9)) * (uint16_t)p_5.f1) | 0) * (uint8_t)g_69.f3);
    return p_5.f0;
}




inline static struct S1  func_12(uint16_t  p_13, int32_t  p_14, struct S1  p_15, uint32_t  p_16, union U5  p_17)
{ 
    int8_t l_1728 = 0;
    int32_t l_1739 = 0x835DFC89;
    struct S4 l_1743 = {726,-429,-523,1,690,0,2,-0,-76,32};
    struct S1 l_1785 = {0x06A3B656};
    if (l_1728)
    { 
        union U6 l_1740 = {0xEA};
        struct S1 l_1741 = {0xBAFBE126};
        struct S4 l_1742 = {394,295,495,3,1630,-21,0,-1,511,75};
        l_1743 = l_1742;
    }
    else
    { 
        uint16_t l_1753 = 0x2C59;
        int32_t l_1763 = 0x40567DB3;
        struct S1 l_1766 = {0x4079C2B7};
        struct S0 l_1767 = {53,-657,-15,0xCE,23};
        struct S0 l_1768 = {7,-235,-31,0x21,19};
        l_1763 = ((((!((int8_t)((((uint8_t)(((-3) ^ ((int8_t)((uint16_t)((l_1753 & (p_15.f0 || (((g_761.f3 = (((-(int32_t)0xF0FA6F0A) & p_16) < ((int8_t)(p_13 ^ ((uint32_t)((uint32_t)p_15.f0 - (uint32_t)(((int16_t)((g_70.f0 == 65535U) < 9) + (int16_t)l_1753) < g_56.f3)) - (uint32_t)0xDFC9F42E)) - (int8_t)g_211))) ^ 65527U) >= 0xC9))) == p_13) - (uint16_t)1) >> (int8_t)0)) , 3U) % (uint8_t)l_1753) || l_1753) || g_85.f1) << (int8_t)l_1743.f6)) <= 0x31) , g_1427.f4) && 4U);
        l_1763 = l_1743.f4;
        l_1768 = (l_1766 , l_1767);
    }
    g_1554.f7 |= (4294967294U && 8U);
    g_1427.f2 = (((l_1743.f2 = (((uint16_t)0xEA06 + (uint16_t)((int8_t)(((int16_t)(l_1743.f6 | ((int16_t)((uint16_t)((((uint32_t)4294967295U + (uint32_t)(((p_13 ^= (((int8_t)(((1U >= (g_1068 , (0xBE59 ^ (g_85.f0 , (p_17.f3 = (((-9) >= ((int32_t)g_1554.f7 + (int32_t)l_1743.f5)) > g_61.f0)))))) ^ g_457.f2) != l_1743.f8) << (int8_t)g_70.f3) == l_1743.f2)) & l_1739) == l_1743.f2)) > 1) >= l_1728) * (uint16_t)g_1068.f2) - (int16_t)0xE9D9)) - (int16_t)3) , 0) + (int8_t)p_14)) == g_61.f1)) > 0U) >= g_1554.f9);
    
        l_1743.f2 &= (l_1743.f8 , p_17.f3);
    return l_1785;
}




inline static struct S1  func_18(struct S4  p_19, int16_t  p_20, struct S4  p_21, uint16_t  p_22)
{ 
    uint16_t l_1039 = 1U;
    int32_t l_1083 = 0;
    struct S0 l_1093 = {60,-169,27,0xDC,19};
    int32_t l_1134 = 0;
    struct S2 l_1165 = {0x67,0,{1U}};
    uint8_t l_1236 = 0U;
    struct S4 l_1335 = {1276,-188,-422,2,848,2,1,-1,-1350,85};
    union U7 l_1364 = {0xECC56543};
    int8_t l_1415 = 0x4F;
    int32_t l_1519 = (-3);
    union U8 l_1713 = {{0x385F9F8C}};
    for (g_425.f1 = (-6); (g_425.f1 != 36); g_425.f1 += 3)
    { 
        union U7 l_1060 = {0xA10AB075};
        int32_t l_1106 = (-1);
        union U8 l_1140 = {{4294967293U}};
        struct S2 l_1166 = {0xA4,0,{4294967294U}};
        uint8_t l_1214 = 1U;
        int32_t l_1222 = 0;
        int16_t l_1233 = (-1);
        struct S3 l_1257 = {{0U},475,1435,8099};
        struct S4 l_1334 = {858,-848,245,0,1487,-9,1,-0,-303,90};
        struct S0 l_1367 = {53,-604,6,-1,20};
        int32_t l_1376 = 0;
        uint32_t l_1459 = 0x37978CB9;
        int16_t l_1531 = 0x1012;
        int32_t l_1636 = 6;
    }
    return g_761.f0;
}




static struct S4  func_23(union U5  p_24, int32_t  p_25)
{ 
    int32_t l_611 = 0x5446F5B7;
    int32_t l_644 = 0x9D6595C8;
    struct S0 l_718 = {47,468,-12,-3,14};
    struct S0 l_719 = {5,-110,-4,8,1};
    struct S0 l_720 = {23,366,-29,-1,14};
    union U5 l_723 = {0U};
    uint8_t l_760 = 0x65;
    uint32_t l_774 = 7U;
    struct S4 l_835 = {1116,395,964,3,1080,13,2,-1,1009,84};
    union U7 l_837 = {8};
    union U8 l_1030 = {{0x365A9DA8}};
    int8_t l_1033 = 2;
    l_611 = ((uint8_t)g_69.f2 * (uint8_t)((int16_t)p_24.f3 * (int16_t)0x2601));
    for (g_69.f3 = (-12); (g_69.f3 != (-13)); g_69.f3 -= 1)
    { 
        int8_t l_616 = 0x02;
        int32_t l_643 = 0xBA5065EC;
        uint32_t l_749 = 0x74A89165;
        union U7 l_793 = {-3};
        int16_t l_863 = 8;
        union U6 l_885 = {-1};
        struct S2 l_910 = {0x4F,0x26F4588B,{0xC715F465}};
        for (g_425.f1 = (-14); (g_425.f1 != 2); g_425.f1 += 8)
        { 
            l_616 ^= (-1);
        }
        if (p_25)
            break;
    }
    
    return l_835;
}




static union U5  func_26(int32_t  p_27)
{ 
    return g_425;
    
    }




static struct S2  func_29(int16_t  p_30, struct S3  p_31)
{ 
    struct S2 l_458 = {0x51,0,{0x19DAA584}};
    int32_t l_459 = 0xCF904F8E;
    uint32_t l_518 = 4294967295U;
    uint32_t l_599 = 0xA867D6B0;
    int32_t l_600 = 0x2921BCEF;
    int32_t l_604 = 0;
    l_458 = l_458;
    l_459 = (-1);
    for (g_425.f3 = (-1); (g_425.f3 == 29); g_425.f3 += 1)
    { 
        uint32_t l_462 = 0x692AAEB1;
        union U8 l_466 = {{0x0DCAB49B}};
        int32_t l_470 = 1;
        union U5 l_538 = {1U};
        struct S2 l_551 = {0x27,0x6E362F8C,{0x7E0FD328}};
        int32_t l_602 = 1;
        uint16_t l_605 = 0x5486;
        struct S3 l_606 = {{0x1BE3D57A},686,1026,7286};
        if (l_462)
        { 
            int32_t l_465 = 0x38310BF7;
            uint32_t l_469 = 6U;
            int32_t l_490 = 0x0F5759D8;
            uint32_t l_491 = 4U;
            uint8_t l_529 = 5U;
            uint8_t l_545 = 255U;
            g_66.f1 = ((p_30 = p_31.f1) == (((int8_t)(l_465 &= 0) + (int8_t)(l_470 &= ((g_56.f3 ^= (0xB2F0 > (l_466 , (g_69.f0 == ((g_117 = ((int16_t)g_118 % (int16_t)0x83EF)) && g_61.f0))))) | (((l_469 = 0U) , g_61.f1) ^ p_31.f3)))) & 0x9B));
            
                        g_56.f2 = ((((((-(int32_t)((int8_t)(((uint16_t)((int16_t)(((uint8_t)9U + (uint8_t)((uint8_t)l_458.f2.f0 << (uint8_t)0)) & ((int16_t)(((int16_t)(((l_466.f2 = ((((l_490 = (((int16_t)((int8_t)0xC3 * (int8_t)g_66.f9) % (int16_t)0xEFD3) && ((l_470 == g_118) && p_30))) || (l_470 || p_31.f0.f0)) | l_458.f1) | 0x2FEE)) != g_66.f4) < g_66.f6) - (int16_t)0xE4C4) <= l_465) % (int16_t)p_31.f2)) + (int16_t)l_458.f1) * (uint16_t)g_61.f2.f0) < 0x9333DFFF) >> (int8_t)5)) != l_465) || l_491) ^ p_31.f2) ^ 65528U) >= p_31.f2);
            
                                    if ((!p_31.f3))
            { 
                uint8_t l_514 = 0x10;
                int32_t l_547 = 0xE1DCB26E;
                if ((-(uint16_t)((((uint8_t)((uint32_t)(p_31.f0 , l_462) + (uint32_t)((uint16_t)((int32_t)(g_63 || ((int8_t)0xBB >> (int8_t)7)) - (int32_t)((((int8_t)g_70.f3 * (int8_t)g_55.f0) | ((uint16_t)((g_66.f5 = ((int8_t)((int8_t)(((int8_t)((g_66.f4 | l_462) == ((((((l_514 >= l_465) , l_469) == l_458.f0) && l_459) || g_85.f2) > l_514)) * (int8_t)p_30) | p_31.f1) % (int8_t)0xFB) >> (int8_t)p_31.f3)) || g_66.f2) >> (uint16_t)g_425.f3)) && 0)) + (uint16_t)l_458.f2.f0)) * (uint8_t)g_70.f0) != l_458.f2.f0) <= 0)))
                { 
                    uint32_t l_544 = 1U;
                    struct S3 l_549 = {{0U},749,1220,1111};
                    int32_t l_550 = 0x6DD1DA3D;
                    if (((-(uint32_t)(g_56 , (g_85.f1 <= ((int16_t)((l_518 = (l_459 = 0xDA)) || ((uint8_t)p_31.f1 * (uint8_t)((uint8_t)((int16_t)(l_491 | (((int16_t)(((uint16_t)(l_490 = g_85.f2) >> (uint16_t)1) == ((g_56.f3 != g_85.f3) & ((l_529 > 0U) > g_69.f0))) + (int16_t)3) & p_31.f3)) << (int16_t)l_458.f0) * (uint8_t)g_457.f1))) - (int16_t)0x87A5)))) < 0x254C))
                    { 
                        uint32_t l_543 = 0x34DC5C39;
                        int32_t l_546 = 0x2FE42FF0;
                        int32_t l_548 = 0x4684D97F;
                        l_459 &= 0x25314A50;
                        if (p_30)
                            break;
                        l_548 = ((int8_t)((g_56.f4 |= 1) , ((int16_t)(g_56.f4 = 0x46F3) % (int16_t)((int16_t)(-10) + (int16_t)((g_66.f3 ^= ((uint8_t)(l_547 ^= (l_546 = ((((((((l_538 , (((uint16_t)(l_514 ^ (l_459 |= 1U)) % (uint16_t)((uint32_t)l_543 - (uint32_t)l_544)) != l_545)) >= g_61.f2.f0) ^ 0x2537) >= 7U) & 65531U) > l_543) ^ (-1)) ^ l_529))) << (uint8_t)5)) ^ g_457.f1)))) << (int8_t)4);
                        
                                            }
                    else
                    { 
                        l_549 = p_31;
                        g_66.f8 = (0x30 && (l_538.f0 ^ 4U));
                        l_550 = (g_66.f5 = (l_459 ^ 0x9711BB0F));
                        return l_551;
                    }
                    
                                        g_66.f5 ^= g_56.f3;
                    g_70.f1 = (g_135 , l_514);
                }
                else
                { 
                    int32_t l_552 = (-5);
                    l_552 = p_31.f3;
                }
                
                                if (p_31.f0.f0)
                    continue;
            }
            else
            { 
                uint16_t l_555 = 65535U;
                int32_t l_559 = (-10);
                g_66.f2 = p_31.f1;
                g_66.f1 = ((g_117 = (g_69 , (l_490 = ((p_31.f0.f0 == (((((l_559 = (l_538 , (255U < ((p_30 ^= ((65533U <= (l_555 ^ g_66.f7)) >= p_31.f1)) == (g_135.f2 = ((uint8_t)(!p_31.f2) >> (uint8_t)6)))))) & l_459) < l_470) && 0x2F) ^ p_31.f3)) && 4294967287U)))) ^ l_518);
                
                            }
            
                    }
        else
        { 
            uint16_t l_601 = 0xFF00;
            int32_t l_603 = 0x24DB9D98;
            l_470 = ((l_466.f2 = (-(int32_t)0xAF01E5E0)) ^ g_425.f1);
            
                        l_605 = ((((l_604 = ((int16_t)((int16_t)(l_603 = ((int32_t)0x48FB477E + (int32_t)((uint32_t)(~(((int8_t)((uint8_t)(((int8_t)(~(((int16_t)((uint16_t)((uint16_t)((uint8_t)(((uint32_t)((~((uint16_t)(g_135.f1 = ((uint16_t)((int16_t)((uint8_t)(((((((l_458.f0 >= ((int8_t)(l_600 ^= (((g_66.f5 != ((-(uint32_t)(l_599 = 0x00C88BF9)) <= (-1))) == (0x8008881C == (l_459 = ((-3) != p_31.f0.f0)))) >= g_70.f2)) * (int8_t)p_31.f2)) <= l_462) > l_462) > l_458.f2.f0) , 0x7EF40C75) , 0xEF) != 1U) - (uint8_t)l_601) * (int16_t)l_602) >> (uint16_t)10)) + (uint16_t)g_457.f2)) | p_31.f2) % (uint32_t)0x90421087) != 4294967287U) << (uint8_t)g_457.f3) * (uint16_t)p_31.f0.f0) >> (uint16_t)9) - (int16_t)p_31.f3) & p_31.f2)) >> (int8_t)l_462) > g_66.f0) >> (uint8_t)p_31.f0.f0) >> (int8_t)5) > g_55.f0)) + (uint32_t)p_31.f2))) + (int16_t)g_66.f3) + (int16_t)g_85.f2)) && l_601) == g_85.f0.f0) & l_458.f0);
            
                        l_606 = p_31;
            g_69.f2 |= (-9);
        }
        
                l_458 = l_458;
        l_459 &= l_466.f2;
    }
    
    g_69 = g_69;
    return g_61;
}




static struct S1  func_32(struct S1  p_33, struct S3  p_34)
{ 
    uint32_t l_87 = 4294967290U;
    int32_t l_88 = 0x68D4C3CC;
    union U7 l_98 = {0};
    union U8 l_134 = {{0xA4C161D2}};
    uint32_t l_212 = 1U;
    struct S2 l_266 = {0xB9,0x0D01CEF0,{0xB4E25B3F}};
    union U6 l_345 = {-2};
    struct S4 l_365 = {1297,-431,-250,2,1136,19,3,-1,1039,68};
    int32_t l_442 = 0x4A208D41;
    if ((l_88 = l_87))
    { 
        uint32_t l_99 = 0xBD5DFF90;
        int32_t l_104 = 0xD62C3E90;
        g_70.f1 = ((int16_t)(-(uint8_t)((g_85.f2 = 0x237F326F) >= (((int8_t)((int8_t)(1U != ((int16_t)(func_45(l_98, l_99, l_98.f1) , ((((int16_t)((uint8_t)l_104 - (uint8_t)(l_98.f2 = ((uint32_t)(p_34.f3 ^ (((int16_t)l_104 >> (int16_t)g_70.f1) < l_98.f3)) - (uint32_t)p_33.f0))) >> (int16_t)p_34.f2) || g_56.f4) == 0x6005CC3D)) >> (int16_t)12)) >> (int8_t)5) - (int8_t)0x26) || 3))) >> (int16_t)g_66.f9);
        
                g_70.f2 = ((l_88 = (((((((int32_t)((int32_t)(-9) - (int32_t)p_34.f1) - (int32_t)0x06419DAF) > (((p_34.f0.f0 && ((((uint8_t)(((g_85.f2 ^ ((int8_t)((p_34.f2 == (((g_117 &= (g_70 , (l_98.f2 = g_56.f0))) || g_117) <= g_61.f0)) || 0x3FBC) << (int8_t)3)) < 7) && l_104) << (uint8_t)6) | 0x3CA85F2F) != 0x491B)) ^ g_118) != g_66.f0)) == 7U) & g_56.f4) ^ g_85.f0.f0) <= (-1))) >= p_34.f1);
        l_104 = (g_70.f1 = (p_33.f0 , g_56.f2));
    }
    else
    { 
        uint8_t l_120 = 0U;
        int32_t l_174 = 0xA8EAFA31;
        uint8_t l_180 = 3U;
        int32_t l_182 = (-8);
        uint8_t l_210 = 0x33;
        union U6 l_219 = {0xAE};
        union U8 l_267 = {{0xE5B7CED4}};
        union U7 l_281 = {0x44F52D5E};
        p_33 = p_33;
        if ((-(uint16_t)l_120))
        { 
            int32_t l_140 = (-1);
            int32_t l_141 = 0;
            int16_t l_264 = 0x8295;
            if (((((((((int16_t)((int32_t)(((int8_t)(((((uint8_t)l_98.f1 % (uint8_t)((int8_t)((l_141 |= (((~0U) > (((((0U == (l_134 , (g_135 , ((uint32_t)((g_61.f2 , ((int8_t)(((l_88 = l_140) <= 1U) | 0xBA) << (int8_t)6)) & 0xFFA48941) + (uint32_t)l_134.f0.f0)))) >= 0xD4A3) > 0x66) & 0x64) && p_34.f2)) > l_98.f3)) | l_120) + (int8_t)0xC3)) || g_70.f4) && p_33.f0) >= 0) * (int8_t)g_56.f4) >= l_120) + (int32_t)(-2)) * (int16_t)p_34.f0.f0) != g_66.f1) ^ (-1)) == 1) >= l_140) & p_34.f1) >= p_34.f3))
            { 
                int32_t l_160 = 0xCB38BF02;
                int32_t l_178 = 0x375F163B;
                int32_t l_179 = 0xB9DD4B5B;
                l_140 = (l_180 = (g_55.f0 > ((int16_t)((int16_t)((uint8_t)((uint8_t)((int8_t)(g_56.f3 = (((int16_t)((((uint32_t)g_66.f6 - (uint32_t)(((l_178 ^= (((uint8_t)((int8_t)l_160 << (int8_t)4) << (uint8_t)6) || ((int32_t)g_61.f0 % (int32_t)(((!p_34.f2) >= (g_177 = ((((((uint8_t)(((int16_t)1 % (int16_t)((int16_t)((uint8_t)((int16_t)(l_88 = g_135.f0) >> (int16_t)(((l_174 & (((((uint8_t)(l_140 == g_85.f3) << (uint8_t)3) && l_140) < p_34.f2) & l_98.f3)) >= l_98.f0) , 0xDE1D)) * (uint8_t)g_85.f2) % (int16_t)g_56.f2)) && 0x7E) >> (uint8_t)7) == 0x26) == p_33.f0) | 0x328C) == 5U))) && l_160)))) && 0x4C) > 0x1BD7C0A1)) == p_34.f0.f0) > g_85.f1) - (int16_t)p_34.f2) && l_134.f0.f0)) % (int8_t)l_140) - (uint8_t)l_179) * (uint8_t)p_34.f1) * (int16_t)p_33.f0) + (int16_t)0xA523)));
                
                l_182 &= (g_70.f1 |= (g_70.f0 & ((~g_61.f1) > p_34.f1)));
                g_211 ^= ((uint32_t)(g_85.f3 = (p_34.f2 ^= ((p_33.f0 | l_160) >= ((int8_t)7 >> (int8_t)4)))) - (uint32_t)(l_141 &= ((int16_t)((int16_t)(~(g_69.f4 && (65529U <= ((int16_t)p_34.f0.f0 >> (int16_t)2)))) << (int16_t)((((p_33.f0 <= ((((int8_t)((int8_t)((int16_t)((int8_t)(g_56.f3 &= ((uint16_t)((uint32_t)((g_61.f0 = ((int16_t)(l_88 = ((int32_t)(p_34.f1 && (l_140 == g_66.f1)) + (int32_t)p_34.f0.f0)) >> (int16_t)g_66.f5)) == (-1)) + (uint32_t)0) << (uint16_t)l_87)) >> (int8_t)p_34.f1) << (int16_t)g_117) - (int8_t)l_178) + (int8_t)l_210) & 1) == l_178)) ^ (-4)) > g_135.f0) >= p_33.f0)) - (int16_t)l_98.f4)));
                g_69.f1 ^= l_212;
            }
            else
            { 
                uint16_t l_217 = 1U;
                int32_t l_218 = (-7);
                int32_t l_298 = 0xF147B23B;
                for (g_135.f1 = 22; (g_135.f1 < 38); g_135.f1 += 1)
                { 
                    uint8_t l_220 = 0x67;
                    int32_t l_223 = 4;
                    int32_t l_270 = (-1);
                }
                
                                l_298 = l_266.f1;
            }
            
            g_69.f1 &= ((((uint8_t)((int8_t)(((int16_t)((uint8_t)(((((int16_t)((g_66.f4 >= g_177) < 0x727E) << (int16_t)((int16_t)((l_281.f2 != (((uint8_t)((p_33 , ((-(uint16_t)l_98.f0) || (((((uint32_t)l_98.f0 - (uint32_t)((((((int16_t)(l_182 = (-1)) * (int16_t)(((int16_t)((int8_t)(((uint8_t)p_34.f0.f0 << (uint8_t)p_34.f1) , 0) + (int8_t)p_33.f0) % (int16_t)g_117) , 0x4B51)) , l_88) , g_66.f4) & 1U) || l_98.f2)) || 0xB0572597) , p_33.f0) == l_141))) < g_69.f0) >> (uint8_t)g_211) > p_33.f0)) || (-4)) * (int16_t)1)) || 8U) != g_118) && l_98.f4) << (uint8_t)3) % (int16_t)l_267.f0.f0) & 0U) >> (int8_t)g_66.f5) >> (uint8_t)4) & (-5)) >= 0);
            l_182 = ((g_70.f1 < (((l_134.f2 = ((int16_t)(g_56.f4 = ((!((l_120 , g_66.f5) == ((int16_t)0x9C07 * (int16_t)0xCABD))) || ((((int16_t)(((((uint8_t)(((l_281.f2 = (0xA7 && ((int32_t)g_66.f1 - (int32_t)(((l_141 < (((g_69.f3 = 0xFD) < g_55.f0) && l_264)) , p_34.f0.f0) && 0x09)))) >= 0x4CD8) ^ g_66.f8) % (uint8_t)g_61.f2.f0) >= g_70.f2) | p_33.f0) && 0x20B7610B) - (int16_t)0x43AA) >= l_210) & g_66.f6))) * (int16_t)p_34.f0.f0)) > g_61.f0) | p_34.f0.f0)) & p_34.f0.f0);
            
                                }
        else
        { 
            struct S0 l_339 = {47,381,3,-1,24};
            struct S2 l_396 = {255U,0xC4E6F923,{0xFE3BF29A}};
            uint8_t l_427 = 0x8D;
            for (l_134.f0.f0 = 0; (l_134.f0.f0 == 21); l_134.f0.f0 += 1)
            { 
                uint32_t l_340 = 0xC487B60D;
                l_339 = g_69;
                l_340 = (g_56.f3 & 0x7E97E9C7);
            }
            for (l_98.f0 = 0; (l_98.f0 > 12); l_98.f0 += 5)
            { 
                int32_t l_351 = 1;
                int32_t l_422 = (-1);
                union U7 l_426 = {0x652E4536};
                g_69 = g_69;
                g_66.f5 |= (p_34.f0.f0 >= (0xF5D5 == ((int32_t)((((l_345 , ((uint16_t)((uint8_t)((g_56.f4 |= (-9)) || (4294967290U ^ 0xDE9256BD)) * (uint8_t)l_281.f2) + (uint16_t)((-(int16_t)((l_339.f0 & 0x5F6E) < 0xE0)) != 0))) == 0x2700) >= l_351) | 1) + (int32_t)l_267.f0.f0)));
                if (((uint8_t)((l_351 ^ (l_339.f2 = 0)) < p_34.f1) >> (uint8_t)4))
                { 
                    uint16_t l_360 = 65533U;
                    int32_t l_378 = 0xA6770327;
                    int32_t l_379 = 0x4E380D7E;
                    uint16_t l_443 = 0U;
                    l_379 = (g_66.f3 >= ((int16_t)(((uint32_t)((l_378 = ((int16_t)l_360 << (int16_t)(((uint16_t)((int16_t)g_69.f3 - (int16_t)((l_365 , ((((uint32_t)((uint8_t)l_339.f0 + (uint8_t)(l_351 || ((uint8_t)((int32_t)l_212 + (int32_t)((int32_t)((uint32_t)l_365.f4 - (uint32_t)(g_61 , p_33.f0)) + (int32_t)0x7F13580B)) % (uint8_t)g_70.f0))) + (uint32_t)g_66.f6) || g_66.f6) < l_174)) == g_55.f0)) % (uint16_t)p_34.f3) & g_70.f3))) == 0x3DDE) % (uint32_t)0xCE231998) || l_339.f1) << (int16_t)p_34.f2));
                    if (l_339.f2)
                    { 
                        uint16_t l_395 = 0xB7DA;
                        int32_t l_397 = (-4);
                        if (g_69.f1)
                            break;
                        l_134.f2 = ((uint8_t)(((int8_t)(0U < ((int16_t)(((l_339.f0 == l_98.f4) >= (l_397 = (((4 | (((uint16_t)((int8_t)(!(((g_66.f1 = (l_219 , ((uint8_t)(((g_70.f3 , l_180) >= (((int8_t)(p_34.f1 == ((0x310E >= 65535U) ^ l_395)) + (int8_t)g_70.f3) != p_34.f1)) < g_177) >> (uint8_t)g_70.f0))) , l_396) , p_34.f1)) >> (int8_t)g_70.f3) * (uint16_t)l_379) >= g_69.f3)) >= l_396.f0) , g_70.f3))) && g_69.f2) - (int16_t)p_34.f3)) - (int8_t)0x94) || l_351) + (uint8_t)1U);
                        
                                            }
                    else
                    { 
                        int32_t l_441 = 1;
                        l_422 = ((uint8_t)((l_378 &= ((g_85.f1 = ((int8_t)((g_70.f3 = g_66.f0) <= (((p_33.f0 ^ ((~(l_365.f5 ^= (p_34.f1 && 0x19))) | ((int8_t)((l_182 = ((int32_t)((int8_t)(!((int8_t)((p_34.f0.f0 < g_66.f7) >= 0xE15BE1C9) + (int8_t)((uint8_t)((uint8_t)(7 && ((uint16_t)((uint32_t)(((((int16_t)((((0U ^ p_34.f2) < l_266.f0) < 1) > 0x9708CCDC) << (int16_t)p_34.f2) && p_34.f1) && 0xBA) == l_379) + (uint32_t)l_351) + (uint16_t)(-1))) >> (uint8_t)g_8) % (uint8_t)p_34.f1))) + (int8_t)p_34.f3) % (int32_t)g_66.f3)) & p_34.f2) << (int8_t)3))) < l_210) == g_61.f1)) % (int8_t)l_339.f1)) || g_56.f3)) , l_351) % (uint8_t)0xFC);
                        g_70.f2 &= 0xEDC8E8C1;
                        l_442 = (((uint8_t)(((((g_425 , l_426) , l_427) , (-(uint32_t)7U)) & 0U) > ((uint8_t)((((l_365 , ((uint8_t)((((int8_t)((int8_t)(((uint32_t)4294967286U + (uint32_t)((uint8_t)l_365.f1 * (uint8_t)(((l_422 = (l_441 < 0x4FCD)) , 0U) || l_379))) || p_33.f0) + (int8_t)l_182) >> (int8_t)4) | 0xD547) == 0x4F20A68E) * (uint8_t)0xD3)) && 0x37BE7B3D) > 65535U) <= l_360) >> (uint8_t)1)) >> (uint8_t)2) == l_365.f5);
                        l_267.f0 = g_55;
                    }
                    if (l_443)
                        continue;
                }
                else
                { 
                    g_66.f2 &= ((((((uint16_t)((int32_t)p_33.f0 % (int32_t)l_422) + (uint16_t)(!(((((uint16_t)(p_33.f0 | 0U) >> (uint16_t)14) >= ((uint8_t)((uint16_t)((uint8_t)l_426.f2 >> (uint8_t)3) >> (uint16_t)(l_210 >= ((0xCA68B6D3 | (g_425.f0 >= ((3 >= 0x8C925E92) >= 0x60))) && 0xF254))) - (uint8_t)246U)) | l_396.f1) != 7))) | p_33.f0) && p_34.f0.f0) & p_34.f2) || p_34.f0.f0);
                }
                if (l_98.f3)
                    break;
            }
            
                        l_281.f2 &= (g_66.f8 |= g_66.f7);
            
                        l_339.f1 = p_34.f1;
        }
        
                    }
    
            return l_266.f2;
}




static int32_t  func_35(int8_t  p_36, struct S2  p_37, uint32_t  p_38, int8_t  p_39)
{ 
    int32_t l_62 = 0x39568854;
    struct S0 l_68 = {5,674,6,0xFB,14};
    g_63 |= (g_56.f2 ^ (g_55.f0 = l_62));
    for (p_38 = 0; (p_38 != 28); p_38 += 4)
    { 
        struct S1 l_67 = {4294967287U};
        g_70 = ((g_66 , (g_55 = l_67)) , (g_69 = l_68));
    }
    g_70.f1 ^= (((g_56.f2 = (p_37.f2.f0 || g_69.f4)) | (l_68.f2 != 3U)) >= ((uint16_t)((g_66.f5 = 0) != ((g_66.f3 | l_68.f4) == ((int8_t)((int16_t)((int8_t)(((uint32_t)((uint16_t)((uint8_t)(g_85 , 0U) * (uint8_t)0) * (uint16_t)l_68.f0) % (uint32_t)g_69.f0) , l_62) << (int8_t)5) % (int16_t)l_68.f3) * (int8_t)l_68.f0))) * (uint16_t)0));
    
    l_68.f1 = l_68.f4;
    return l_62;
}




static struct S3  func_45(union U7  p_46, int8_t  p_47, uint8_t  p_48)
{ 
    int32_t l_59 = 0xDD65E72B;
    struct S3 l_60 = {{0x654EA11A},1261,277,7473};
    l_59 |= ((int8_t)g_55.f0 << (int8_t)6);
    return l_60;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2.f0, "g_61.f2.f0", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_66.f5, "g_66.f5", print_hash_value);
    transparent_crc(g_66.f6, "g_66.f6", print_hash_value);
    transparent_crc(g_66.f7, "g_66.f7", print_hash_value);
    transparent_crc(g_66.f8, "g_66.f8", print_hash_value);
    transparent_crc(g_66.f9, "g_66.f9", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_69.f3, "g_69.f3", print_hash_value);
    transparent_crc(g_69.f4, "g_69.f4", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_70.f3, "g_70.f3", print_hash_value);
    transparent_crc(g_70.f4, "g_70.f4", print_hash_value);
    transparent_crc(g_85.f0.f0, "g_85.f0.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_457.f0.f0, "g_457.f0.f0", print_hash_value);
    transparent_crc(g_457.f1, "g_457.f1", print_hash_value);
    transparent_crc(g_457.f2, "g_457.f2", print_hash_value);
    transparent_crc(g_457.f3, "g_457.f3", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_1032.f0, "g_1032.f0", print_hash_value);
    transparent_crc(g_1032.f1, "g_1032.f1", print_hash_value);
    transparent_crc(g_1032.f2, "g_1032.f2", print_hash_value);
    transparent_crc(g_1032.f3, "g_1032.f3", print_hash_value);
    transparent_crc(g_1032.f4, "g_1032.f4", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1068.f0, "g_1068.f0", print_hash_value);
    transparent_crc(g_1068.f1, "g_1068.f1", print_hash_value);
    transparent_crc(g_1068.f2, "g_1068.f2", print_hash_value);
    transparent_crc(g_1068.f3, "g_1068.f3", print_hash_value);
    transparent_crc(g_1068.f4, "g_1068.f4", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1427.f0, "g_1427.f0", print_hash_value);
    transparent_crc(g_1427.f1, "g_1427.f1", print_hash_value);
    transparent_crc(g_1427.f2, "g_1427.f2", print_hash_value);
    transparent_crc(g_1427.f3, "g_1427.f3", print_hash_value);
    transparent_crc(g_1427.f4, "g_1427.f4", print_hash_value);
    transparent_crc(g_1427.f5, "g_1427.f5", print_hash_value);
    transparent_crc(g_1427.f6, "g_1427.f6", print_hash_value);
    transparent_crc(g_1427.f7, "g_1427.f7", print_hash_value);
    transparent_crc(g_1427.f8, "g_1427.f8", print_hash_value);
    transparent_crc(g_1427.f9, "g_1427.f9", print_hash_value);
    transparent_crc(g_1554.f0, "g_1554.f0", print_hash_value);
    transparent_crc(g_1554.f1, "g_1554.f1", print_hash_value);
    transparent_crc(g_1554.f2, "g_1554.f2", print_hash_value);
    transparent_crc(g_1554.f3, "g_1554.f3", print_hash_value);
    transparent_crc(g_1554.f4, "g_1554.f4", print_hash_value);
    transparent_crc(g_1554.f5, "g_1554.f5", print_hash_value);
    transparent_crc(g_1554.f6, "g_1554.f6", print_hash_value);
    transparent_crc(g_1554.f7, "g_1554.f7", print_hash_value);
    transparent_crc(g_1554.f8, "g_1554.f8", print_hash_value);
    transparent_crc(g_1554.f9, "g_1554.f9", print_hash_value);
    transparent_crc(g_1725, "g_1725", print_hash_value);
    transparent_crc(g_1979, "g_1979", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



