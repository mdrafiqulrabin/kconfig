


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint32_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   int32_t  f1;
};


static uint32_t g_3 = 0x70ADE216;
static struct S0 g_84 = {0x9548,0x4FF24264,1};
static uint32_t g_99 = 0xFCBFA339;
static struct S0 g_113 = {-1,0x2FFB082E,-10};
static int16_t g_114 = 0xA7FF;
static uint32_t g_116 = 0x39BF9AB2;
static int32_t g_137 = 0x796DA176;
static uint16_t g_145 = 9U;
static uint16_t g_152 = 8U;
static int32_t g_156 = 0x645FD3A0;
static int32_t g_158 = 0xBF453DDA;
static uint32_t g_241 = 0xF34AE07A;
static struct S0 g_330 = {0xCE75,0xBC47F2C3,-1};
static int32_t g_354 = 1;
static int32_t g_358 = 2;
static uint16_t g_384 = 0x2BCA;
static uint32_t g_535 = 4294967288U;
static union U1 g_586 = {{0x19CF,4294967295U,0x3476}};
static uint16_t g_696 = 0xFFA1;
static int32_t g_765 = 0;
static int16_t g_785 = 1;



static uint16_t  func_29(void);
static uint16_t  func_34(int32_t  p_35);
static int32_t  func_36(union U1  p_37, int16_t  p_38);
static int32_t  func_48(int16_t  p_49, uint32_t  p_50);
static struct S0  func_51(union U1  p_52, uint16_t  p_53, int32_t  p_54, int32_t  p_55, int16_t  p_56);
static struct S0  func_59(int32_t  p_60, int32_t  p_61, int32_t  p_62, uint16_t  p_63);
static int32_t  func_65(uint16_t  p_66, int32_t  p_67, union U1  p_68);
static union U1  func_70(int32_t  p_71, uint32_t  p_72, uint16_t  p_73);
static struct S0  func_75(uint16_t  p_76, int32_t  p_77, uint32_t  p_78, uint32_t  p_79);
static uint64_t  func_80(int32_t  p_81, struct S0  p_82, int32_t  p_83);





static uint16_t  func_29(void)
{ 
    int32_t l_44 = 0x05300CE3;
    int32_t l_789 = 0x58C0D73B;
    union U1 l_791 = {{1,0xB0B246E0,0xDDE8}};
    for (g_3 = 9; (g_3 < 13); g_3 += 1)
    { 
        union U1 l_39 = {{0x9B99,0xA5308633,0xC0DE}};
        int16_t l_702 = 0x7719;
        int32_t l_786 = (-5);
        uint32_t l_787 = 1U;
        int32_t l_790 = 0x6055A475;
        l_786 = ((((uint16_t)func_34(func_36(l_39, (g_3 == (((int32_t)(g_3 <= g_3) + (int32_t)((uint16_t)(l_44 ^ (((uint32_t)(!l_39.f1) + (uint32_t)((l_44 || func_48(g_3, l_39.f0.f2)) < 1U)) != l_702)) % (uint16_t)0xDC21)) ^ g_535)))) % (uint16_t)l_44) != g_785) ^ g_785);
        g_158 = (((l_787 & __builtin_parity((-(uint16_t)g_586.f0.f1))) && l_789) != ((func_65(g_114, l_789, g_586) & func_65(g_152, l_787, g_586)) < g_354));
        if ((__builtin_ia32_crc32qi(g_586.f0.f0, func_65((g_152 > (65535U | ((g_765 & ((l_789 <= l_790) ^ l_39.f0.f2)) != 0xA6D2))), l_39.f1, l_791)) == l_791.f1))
        { 
            int32_t l_801 = (-1);
            struct S0 l_804 = {0,0x072F6443,1};
            l_786 = (__builtin_parityl(g_586.f0.f1) == (((((uint16_t)(g_152 < ((((!((int16_t)((g_765 != ((g_354 < 0x6515) > (((l_801 != (0xF4AA < 0x5FF7)) ^ l_801) <= l_801))) <= l_801) << (int16_t)4)) > 0x1EC6) <= (-1)) & 2U)) << (uint16_t)g_84.f0) == g_84.f1) || l_791.f0.f0) >= g_116));
            for (g_156 = (-12); (g_156 >= (-18)); g_156 -= 1)
            { 
                int32_t l_814 = 0xAED6E0CA;
                l_804 = l_791.f0;
                if (g_535)
                    break;
                g_158 = ((int16_t)((int16_t)0xD0AC << (int16_t)((uint32_t)(((!(func_65((l_39.f0.f2 & l_789), ((int16_t)l_814 % (int16_t)((uint16_t)65532U >> (uint16_t)(l_814 >= __builtin_ffsl((g_354 && g_99))))), l_39) | (-2))) || (-5)) && l_804.f0) % (uint32_t)0x3C48920C)) % (int16_t)g_384);
                g_113 = g_113;
            }
            l_801 = (g_158 != (l_791.f0.f2 && __builtin_parityl(((uint32_t)((int32_t)(g_384 && g_535) + (int32_t)l_786) - (uint32_t)((int16_t)0x5545 - (int16_t)((int16_t)l_804.f2 << (int16_t)14))))));
        }
        else
        { 
            g_113 = g_586.f0;
            l_786 = l_791.f0.f2;
        }
        return g_113.f1;
    }
    return g_330.f1;
}




static uint16_t  func_34(int32_t  p_35)
{ 
    int16_t l_761 = 0x8B4C;
    uint16_t l_764 = 0U;
    uint16_t l_766 = 0xECE5;
    union U1 l_767 = {{0xF22F,0x2C018016,0x932A}};
    int32_t l_768 = 0xEF490AFE;
    struct S0 l_769 = {0x63E8,0x378DD73A,0xD9ED};
    uint32_t l_780 = 0xBF36417F;
    l_768 = func_65(((((((uint32_t)l_761 - (uint32_t)0x11046165) && (((-1) & ((int16_t)(-2) + (int16_t)(g_99 || (l_764 && ((l_764 != g_765) == (1 > g_358)))))) ^ (-4))) > p_35) | 0x1B94) == l_766), p_35, l_767);
    l_769 = l_767.f0;
    for (g_535 = 0; (g_535 == 26); g_535 += 1)
    { 
        uint32_t l_778 = 0x4CBE120C;
        int32_t l_779 = 0x2605B7C6;
        struct S0 l_784 = {0x782F,0x00DC6D6A,-1};
        l_779 = (0 < ((((int16_t)__builtin_clz(p_35) >> (int16_t)((int16_t)(~(g_145 & l_764)) + (int16_t)1U)) && (((l_769.f1 > (~l_778)) != (g_586.f0.f0 || l_769.f1)) == 4294967290U)) & g_145));
        l_784 = func_59(l_780, l_778, (0x6895 & (!(((int16_t)(l_778 | (0xF33D | (-9))) << (int16_t)14) & l_769.f1))), l_778);
    }
    return p_35;
}




static int32_t  func_36(union U1  p_37, int16_t  p_38)
{ 
    uint16_t l_703 = 65527U;
    struct S0 l_708 = {-9,4294967292U,-1};
    int32_t l_745 = 1;
    int16_t l_746 = (-6);
    uint16_t l_750 = 4U;
    if (l_703)
    { 
        int16_t l_709 = 0xC904;
        g_358 = 0xEA1D85B1;
        l_708 = func_59(((int16_t)0xFBA6 >> (int16_t)11), ((uint16_t)p_37.f1 >> (uint16_t)11), g_358, p_37.f0.f2);
        l_709 = l_708.f0;
    }
    else
    { 
        uint16_t l_733 = 1U;
        for (g_330.f0 = 0; (g_330.f0 > (-2)); g_330.f0 -= 8)
        { 
            int32_t l_718 = 0x5154F31D;
            int32_t l_719 = 0x58C4BF6A;
            for (g_113.f1 = (-15); (g_113.f1 >= 9); g_113.f1 += 6)
            { 
                int16_t l_714 = 0x798E;
                int32_t l_715 = (-1);
                p_37.f0 = g_330;
                l_715 = l_714;
                return g_113.f2;
            }
            g_158 = ((uint16_t)(p_37.f0.f2 >= __builtin_bswap32((((l_718 && 0xFF4D8606) == p_37.f0.f2) < (-3)))) - (uint16_t)l_719);
            for (g_384 = (-15); (g_384 > 26); g_384 += 1)
            { 
                uint32_t l_732 = 0xE30487BD;
                p_37.f0 = func_75(((((g_586.f0.f2 <= p_37.f0.f0) == __builtin_ctz(((int16_t)(~(((int16_t)0xB0BD >> (int16_t)g_145) >= g_145)) << (int16_t)8))) || (((((int16_t)(2 | __builtin_ctzl(((((~((int32_t)0xD090545F % (int32_t)g_137)) ^ g_384) ^ g_586.f1) >= 0U))) << (int16_t)p_37.f0.f2) | l_732) != g_535) <= g_330.f2)) || g_330.f0), g_3, l_733, l_703);
            }
            if (p_37.f0.f2)
                break;
        }
        l_745 = (((uint16_t)func_48((((l_733 | (p_37.f0.f1 <= (-8))) | func_48(func_48(p_37.f1, l_733), (((int32_t)(((!((-10) != l_708.f0)) || ((int16_t)((uint16_t)((int16_t)l_745 + (int16_t)1) >> (uint16_t)l_733) - (int16_t)1)) && l_733) + (int32_t)0x426BB93A) && g_354))) || 3), p_38) % (uint16_t)0x9A6E) || l_708.f1);
        l_745 = p_37.f0.f0;
    }
    l_745 = (((l_746 ^ p_37.f0.f2) >= (l_708.f1 | (p_38 & func_65(((((func_48(((uint16_t)p_38 >> (uint16_t)(((p_38 & (0 ^ 0x95EF)) < (((((-(uint32_t)p_37.f1) ^ 0) & p_37.f0.f2) <= 0x4F39930D) && p_38)) <= p_37.f1)), l_745) <= 0x8EADA789) | g_3) != p_37.f1) != l_750), g_3, p_37)))) <= p_37.f0.f1);
    l_745 = (p_37.f1 ^ (~((uint32_t)(-(int16_t)((func_65(p_37.f0.f1, ((p_37.f0.f0 == (((int32_t)(p_37.f0.f2 || (0x9DAC8E3F < ((0 <= l_708.f2) | 0))) + (int32_t)((uint16_t)(0xEA9A539B == p_38) % (uint16_t)l_708.f2)) < 0x7403)) ^ 1U), p_37) != g_330.f1) == g_99)) - (uint32_t)l_703)));
    return l_708.f1;
}




static int32_t  func_48(int16_t  p_49, uint32_t  p_50)
{ 
    union U1 l_57 = {{0x5E32,0U,0xC7E4}};
    l_57.f0 = func_51(l_57, (l_57.f0.f2 && (~(g_3 >= g_3))), l_57.f0.f0, l_57.f0.f0, l_57.f1);
    return p_49;
}




static struct S0  func_51(union U1  p_52, uint16_t  p_53, int32_t  p_54, int32_t  p_55, int16_t  p_56)
{ 
    uint16_t l_64 = 0x4126;
    int32_t l_701 = 0x36DFB0D9;
    g_84 = func_59(l_64, p_52.f0.f0, p_52.f0.f1, p_52.f0.f1);
    if (l_64)
    { 
        int16_t l_698 = 0x64EB;
        int32_t l_699 = 0;
        struct S0 l_700 = {0,0U,3};
        g_158 = (-9);
        l_699 = l_698;
        l_700 = func_75(p_52.f0.f2, p_55, l_64, p_52.f1);
        l_701 = p_54;
    }
    else
    { 
        p_54 = g_354;
    }
    return g_113;
}




static struct S0  func_59(int32_t  p_60, int32_t  p_61, int32_t  p_62, uint16_t  p_63)
{ 
    int16_t l_69 = 0x99C7;
    struct S0 l_697 = {0x5A0C,4294967295U,1};
    p_62 = func_65(l_69, g_3, func_70(p_63, l_69, g_3));
    return l_697;
}




static int32_t  func_65(uint16_t  p_66, int32_t  p_67, union U1  p_68)
{ 
    return g_696;
}




static union U1  func_70(int32_t  p_71, uint32_t  p_72, uint16_t  p_73)
{ 
    int32_t l_74 = (-7);
    struct S0 l_533 = {0,1U,4};
    uint32_t l_543 = 4294967292U;
    int16_t l_578 = 0xFB82;
    uint16_t l_608 = 0xD7F5;
    union U1 l_695 = {{0x5F2B,0U,-1}};
    l_74 = p_73;
    l_533 = func_75(__builtin_ctzll(func_80(g_3, g_84, l_74)), p_73, p_71, p_73);
    if ((func_80((l_533.f2 ^ (g_156 | l_533.f2)), g_330, p_71) < ((~p_73) ^ (((__builtin_ia32_crc32qi((0x4BCA566D < (l_533.f2 < l_533.f2)), g_358) | g_241) < g_535) <= 1))))
    { 
        int32_t l_540 = 1;
        int16_t l_555 = 0xD138;
        g_358 = (((int16_t)0xCB7B - (int16_t)p_71) > 0x91F4);
        l_74 = l_533.f0;
        if ((((uint16_t)g_99 >> (uint16_t)11) && l_540))
        { 
            int16_t l_544 = 0x25B8;
            struct S0 l_547 = {0x257B,1U,0xC96F};
            g_158 = (0x7593 || (g_113.f2 < (((uint32_t)(0 | ((l_543 | (0xC93C <= __builtin_bswap32(l_74))) > l_543)) - (uint32_t)(p_71 < g_358)) ^ p_71)));
            l_547 = func_75(g_535, p_71, l_544, (((uint16_t)func_80(l_540, g_113, l_533.f2) % (uint16_t)(l_540 & 8)) < p_71));
            l_74 = ((p_71 ^ (g_113.f2 <= (p_71 <= ((int32_t)((uint32_t)(l_540 || (((1U || l_540) != (-(uint32_t)l_533.f0)) <= g_152)) - (uint32_t)1) + (int32_t)g_84.f0)))) != l_555);
        }
        else
        { 
            int32_t l_557 = 0;
            struct S0 l_558 = {0x345C,0xBFF98F1A,0x9974};
            l_540 = __builtin_ffsll(l_74);
            l_558 = func_75(g_330.f2, p_72, (-(int32_t)((__builtin_clzl(func_80(g_158, g_84, g_137)) || ((l_557 != __builtin_clz((func_80(func_80(__builtin_popcountll(l_543), l_558, l_74), l_558, g_241) <= 0x1DA5))) != l_558.f1)) & g_358)), p_72);
            g_358 = func_80(((uint16_t)(g_145 == p_72) << (uint16_t)8), l_533, ((-1) != ((l_74 ^ p_73) != l_555)));
        }
    }
    else
    { 
        uint16_t l_581 = 65530U;
        struct S0 l_614 = {0xB1F5,4294967286U,0x4ACB};
        int32_t l_688 = 1;
        for (g_116 = 17; (g_116 <= 35); g_116 += 1)
        { 
            int16_t l_567 = 0x475D;
            struct S0 l_587 = {-6,4294967295U,0xB97F};
            uint32_t l_629 = 0xEDC6E114;
            if ((p_73 & (((int16_t)((((int16_t)l_567 - (int16_t)((((int32_t)((0x20CB603B ^ 0xF31F3A54) && p_71) + (int32_t)((int32_t)((-5) == ((-8) <= ((g_137 | (g_113.f0 < 0x866D)) != (-1)))) + (int32_t)g_145)) > g_330.f2) | g_114)) <= l_533.f0) | g_114) << (int16_t)12) && l_567)))
            { 
                int32_t l_585 = 0x9AEC4979;
                int32_t l_609 = 0x0ECD12D2;
                l_581 = ((int16_t)((p_71 ^ p_71) < ((int32_t)(l_567 >= (p_71 == l_578)) - (int32_t)g_84.f2)) >> (int16_t)((uint16_t)p_71 << (uint16_t)p_73));
                if (g_384)
                { 
                    int32_t l_606 = (-1);
                    uint32_t l_607 = 0x1FA87196;
                    if (((int16_t)p_73 >> (int16_t)2))
                    { 
                        uint16_t l_584 = 0xCF65;
                        if (l_584)
                            break;
                        l_585 = p_72;
                        return g_586;
                    }
                    else
                    { 
                        g_158 = (p_73 >= (2U & g_113.f2));
                    }
                    g_330 = l_587;
                    l_609 = (((~((uint16_t)(((int32_t)g_84.f1 + (int32_t)(((uint16_t)(((uint32_t)((uint32_t)((int16_t)(__builtin_ctz((((int32_t)(p_73 <= (g_330.f2 <= ((int32_t)((p_72 >= ((p_72 ^ (!p_72)) < l_585)) <= (l_606 || 0x4A8F)) - (int32_t)0))) - (int32_t)p_71) != 0x120C)) >= p_73) >> (int16_t)l_607) + (uint32_t)l_608) - (uint32_t)0U) ^ g_113.f0) + (uint16_t)g_586.f1) ^ 0xA7C47933)) > g_158) >> (uint16_t)13)) > 0x4F56) > 0x33C9);
                }
                else
                { 
                    int32_t l_610 = 1;
                    uint16_t l_613 = 0xC97F;
                    l_610 = p_72;
                    for (l_585 = 23; (l_585 < 9); l_585 -= 1)
                    { 
                        l_609 = l_578;
                    }
                    l_613 = l_567;
                }
                l_533 = l_614;
                l_533 = l_533;
            }
            else
            { 
                uint32_t l_615 = 0x88A2468C;
                int32_t l_624 = (-10);
                struct S0 l_626 = {0,0x50D2E737,-1};
                uint16_t l_694 = 1U;
                l_615 = p_73;
                if (((int16_t)((g_586.f1 | g_586.f0.f0) & __builtin_ctz(p_73)) << (int16_t)8))
                { 
                    struct S0 l_618 = {5,0x7E33C890,0};
                    l_533 = g_586.f0;
                    l_618 = l_533;
                    g_586.f0 = l_614;
                }
                else
                { 
                    uint32_t l_619 = 0xAA6B28A4;
                    struct S0 l_625 = {-4,0x2AFBD095,-1};
                    g_358 = (l_619 > ((((uint16_t)((int16_t)g_113.f0 >> (int16_t)4) >> (uint16_t)13) ^ p_72) == p_72));
                    l_624 = l_587.f1;
                    l_625 = l_587;
                    g_330 = l_626;
                }
                for (l_543 = (-14); (l_543 >= 27); l_543 += 5)
                { 
                    uint32_t l_644 = 1U;
                    if (l_629)
                    { 
                        uint32_t l_656 = 0xACD3E4A3;
                        g_158 = (__builtin_popcount((g_84.f0 && (((((int16_t)g_99 >> (int16_t)p_72) || g_330.f1) > ((uint32_t)((int16_t)((int16_t)__builtin_ctzll(((uint32_t)0U - (uint32_t)((0xE337 <= ((uint16_t)0x814A >> (uint16_t)(((l_587.f0 == 0x571F) != l_624) < 65529U))) != p_73))) << (int16_t)15) + (int16_t)l_614.f0) - (uint32_t)2)) > 5U))) | p_73);
                        g_113 = g_113;
                        g_158 = (((uint16_t)__builtin_popcountl(l_644) << (uint16_t)(((int16_t)g_241 >> (int16_t)g_84.f2) <= g_586.f0.f1)) != (g_586.f0.f0 < ((uint16_t)((uint16_t)(((uint16_t)((((uint16_t)__builtin_clzll(((-(int32_t)0x2E8CEB5E) <= p_73)) >> (uint16_t)10) <= l_656) ^ l_644) + (uint16_t)0xFF54) > g_113.f2) >> (uint16_t)13) >> (uint16_t)g_241)));
                        l_74 = 0xE0A40659;
                    }
                    else
                    { 
                        if (l_608)
                            break;
                        g_158 = ((p_72 > __builtin_ctzl(((l_626.f2 <= (g_113.f0 & 4294967295U)) ^ 0x9CC5))) == 4294967287U);
                    }
                    if ((((int16_t)((int16_t)(p_72 | (l_644 | (((uint16_t)p_72 << (uint16_t)13) > 1))) << (int16_t)p_72) - (int16_t)0x8611) || ((((int16_t)l_644 + (int16_t)p_72) && ((((int32_t)(((p_72 || g_158) ^ (-1)) || p_73) - (int32_t)p_71) == 0xA017) || g_113.f2)) > l_629)))
                    { 
                        uint16_t l_670 = 65535U;
                        struct S0 l_679 = {8,0x723C1EC7,0};
                        l_74 = ((uint16_t)(l_614.f2 ^ (l_644 >= (g_241 & (!(1U != ((l_670 <= (((((int16_t)((uint16_t)((uint16_t)(((int16_t)(((__builtin_popcountll(l_578) <= p_71) || 0x9200) != 9U) >> (int16_t)l_670) > 0x02EBE50E) + (uint16_t)6U) << (uint16_t)11) - (int16_t)(-1)) | g_330.f2) < p_73) <= l_644)) < g_586.f1)))))) >> (uint16_t)13);
                        l_533 = l_679;
                        g_358 = (__builtin_ffsll((((p_72 < (1U || (l_626.f0 >= p_73))) == ((int32_t)0xA60D25AF - (int32_t)l_644)) <= (((int32_t)(p_71 | g_99) + (int32_t)(((uint16_t)((int32_t)(-3) % (int32_t)(-7)) >> (uint16_t)12) != l_533.f0)) & 8))) > p_72);
                        l_688 = g_84.f0;
                    }
                    else
                    { 
                        return g_586;
                    }
                    g_358 = (__builtin_ffsll(__builtin_popcountl((g_330.f0 != (!((p_71 == 0x8CE4) && ((int16_t)p_73 - (int16_t)(l_614.f0 == ((p_72 <= (g_330.f2 & 0x9F05)) >= ((((int16_t)((p_73 <= 0xB2A4) != 0x917F) << (int16_t)p_73) | l_694) != l_543))))))))) && l_626.f2);
                }
            }
            l_587 = l_614;
            g_586.f0 = g_84;
            if (g_84.f0)
                continue;
        }
    }
    return l_695;
}




static struct S0  func_75(uint16_t  p_76, int32_t  p_77, uint32_t  p_78, uint32_t  p_79)
{ 
    struct S0 l_159 = {-1,0xBD29671F,0xE863};
    int32_t l_205 = (-1);
    uint16_t l_287 = 0x35A5;
    int16_t l_288 = 0x88E9;
    int32_t l_340 = 0xF705E14E;
    int32_t l_353 = 0xBEBF955F;
    l_159 = l_159;
    if (p_76)
    { 
        uint32_t l_160 = 1U;
        g_158 = (0 == g_145);
        l_160 = l_159.f2;
    }
    else
    { 
        struct S0 l_185 = {0x0BA5,0U,0xA0DB};
        if (g_3)
        { 
            int16_t l_165 = (-1);
            g_158 = ((uint16_t)(((p_76 > ((uint16_t)g_84.f0 >> (uint16_t)1)) >= l_165) <= p_76) << (uint16_t)4);
        }
        else
        { 
            struct S0 l_170 = {0x6866,0U,1};
            if (g_113.f2)
            { 
                int32_t l_173 = (-7);
                for (g_114 = 0; (g_114 > (-30)); g_114 -= 8)
                { 
                    for (g_158 = 14; (g_158 == 8); g_158 -= 1)
                    { 
                        return l_170;
                    }
                    p_77 = ((int16_t)(l_173 >= 6U) >> (int16_t)12);
                    if (g_113.f1)
                        break;
                    p_77 = (g_113.f0 && (p_78 == ((uint16_t)l_170.f0 % (uint16_t)65531U)));
                }
                p_77 = ((uint16_t)((((l_170.f1 >= (!g_84.f0)) && ((((p_77 ^ (-(uint16_t)g_113.f0)) != 0x2EEF) > ((int32_t)((((int16_t)(5U > l_173) % (int16_t)p_78) != (-(int16_t)__builtin_ctzl((0U >= 0xA8BF)))) ^ 0xC92A46F7) + (int32_t)0x86ADAD85)) | 7U)) != p_76) == 0x5540) >> (uint16_t)2);
            }
            else
            { 
                return l_185;
            }
        }
        if (l_185.f0)
        { 
            struct S0 l_200 = {3,0xE011399F,0};
            int32_t l_204 = 1;
            int32_t l_230 = (-7);
            if (((uint32_t)((int32_t)((-1) && __builtin_parity((p_76 <= (((int16_t)(g_145 != ((uint16_t)(p_78 > ((g_84.f0 ^ g_84.f0) > ((uint16_t)(l_159.f2 <= (g_158 != ((int16_t)0xCE35 << (int16_t)2))) >> (uint16_t)l_185.f1))) % (uint16_t)(-3))) << (int16_t)13) > p_79)))) % (int32_t)p_77) % (uint32_t)4294967295U))
            { 
                uint16_t l_201 = 65535U;
                struct S0 l_206 = {1,0xD4C5443C,0x9826};
                for (g_84.f1 = 0; (g_84.f1 >= 53); g_84.f1 += 6)
                { 
                    l_159 = l_200;
                    if ((l_201 | (l_159.f1 < (g_113.f2 | g_137))))
                    { 
                        l_159 = g_113;
                        g_158 = ((4294967293U < ((uint16_t)l_204 >> (uint16_t)5)) <= ((((p_79 && (-6)) ^ p_78) ^ (-6)) && (g_158 >= (p_76 < 0x4866))));
                    }
                    else
                    { 
                        l_205 = p_78;
                        return l_206;
                    }
                    l_159 = l_159;
                }
            }
            else
            { 
                return g_84;
            }
            for (g_113.f1 = 0; (g_113.f1 > 10); g_113.f1 += 1)
            { 
                l_159 = l_200;
            }
            for (g_84.f2 = 0; (g_84.f2 != (-28)); g_84.f2 -= 1)
            { 
                for (l_200.f0 = (-16); (l_200.f0 == 11); l_200.f0 += 9)
                { 
                    l_185 = g_113;
                    for (l_200.f2 = (-8); (l_200.f2 <= 6); l_200.f2 += 9)
                    { 
                        g_113 = g_113;
                        l_159 = g_113;
                    }
                    return g_113;
                }
            }
            p_77 = ((0x95CBA6E2 | ((int16_t)((p_78 <= g_3) == ((int16_t)((uint16_t)g_116 << (uint16_t)(((((int16_t)((int16_t)(!(g_116 < l_159.f1)) - (int16_t)g_84.f1) + (int16_t)((((int16_t)((int32_t)g_116 - (int32_t)0x580886FB) % (int16_t)l_230) ^ 3) ^ 0x9E97AACE)) & p_76) < 1) >= 1U)) << (int16_t)11)) << (int16_t)6)) || 0x04DC);
        }
        else
        { 
            uint32_t l_238 = 0xD871682D;
            int32_t l_245 = 0;
            p_77 = (((((g_113.f1 <= g_3) > 0xC19E0181) || ((g_158 & (g_84.f0 && (-(uint32_t)(0x805C > (__builtin_popcount(((int32_t)((uint32_t)(0x5E633137 == ((int16_t)(-3) >> (int16_t)g_84.f0)) + (uint32_t)0x9C121501) - (int32_t)g_84.f0)) < l_238))))) != l_205)) & g_156) & 6);
            g_158 = ((p_76 < ((uint16_t)g_241 << (uint16_t)3)) < (((((0x1562 <= p_76) && (~((__builtin_ffsl((1 == p_76)) | ((((int32_t)l_159.f1 + (int32_t)4294967295U) != l_205) || 4294967295U)) | l_185.f2))) > p_79) != l_245) == l_238));
        }
        g_158 = ((int16_t)0x66A6 << (int16_t)9);
    }
    if (((int16_t)((int32_t)p_78 + (int32_t)((int16_t)l_159.f0 << (int16_t)p_79)) >> (int16_t)((((uint32_t)((-1) <= (((uint16_t)p_79 << (uint16_t)11) > (((int16_t)l_205 >> (int16_t)14) <= ((g_116 <= (p_77 <= ((l_159.f1 <= p_77) && (-3)))) | 65535U)))) + (uint32_t)0xD5F59C59) && 0xDBBE) != p_78)))
    { 
        int32_t l_286 = 0;
        int32_t l_289 = 0x972E57F3;
        if (g_152)
        { 
            int32_t l_280 = 0xA387565C;
            for (g_156 = 0; (g_156 != 6); g_156 += 6)
            { 
                struct S0 l_264 = {0x8033,0xE5451DF1,6};
                return l_264;
            }
            g_158 = (__builtin_ia32_crc32qi(((uint16_t)(p_78 != ((((int16_t)g_113.f1 - (int16_t)(((int32_t)p_78 + (int32_t)(g_145 <= ((((uint16_t)((int16_t)(((uint16_t)((((((uint16_t)(p_76 ^ (p_78 < p_77)) - (uint16_t)(-(uint32_t)((l_280 > ((uint16_t)((((uint16_t)(~p_76) + (uint16_t)0) <= 0xC1B3) != p_78) + (uint16_t)p_78)) >= 0))) == 65535U) > g_241) | g_137) & 1) - (uint16_t)(-1)) != g_84.f2) - (int16_t)p_76) + (uint16_t)l_286) < l_286) > p_78))) & (-1))) ^ (-1)) | l_287)) % (uint16_t)l_288), g_113.f2) != 65535U);
        }
        else
        { 
            g_158 = p_77;
        }
        l_289 = g_113.f1;
    }
    else
    { 
        struct S0 l_290 = {-8,5U,0};
        struct S0 l_291 = {-8,4294967295U,0};
        int32_t l_308 = (-10);
        int32_t l_343 = 0x5074FC59;
        int32_t l_383 = 0x39F94B34;
        uint32_t l_387 = 8U;
        int32_t l_401 = 0;
        uint32_t l_463 = 0x1627ED3F;
        l_291 = l_290;
        if (((((((uint16_t)l_291.f1 << (uint16_t)3) || (((int32_t)p_77 % (int32_t)((((int16_t)((((uint16_t)(l_290.f2 > ((((uint32_t)0xE1962AD8 - (uint32_t)g_84.f0) > 0xDB0E) < p_76)) << (uint16_t)12) < p_79) && 65535U) + (int16_t)0x27A1) ^ 0x17B4) & g_114)) | l_290.f2)) & p_79) || 0xE544) <= g_3))
        { 
            struct S0 l_311 = {-2,5U,9};
            int32_t l_332 = 7;
            uint32_t l_397 = 0x080555A0;
            for (l_291.f1 = (-5); (l_291.f1 != 23); l_291.f1 += 1)
            { 
                return l_159;
            }
            for (p_79 = 3; (p_79 != 12); p_79 += 1)
            { 
                struct S0 l_313 = {0x53B7,4294967295U,-1};
                if (p_77)
                { 
                    struct S0 l_312 = {0xE79B,0x721220F7,1};
                    int32_t l_322 = 0xE6A57001;
                    uint32_t l_347 = 0x5F2F72A9;
                    int32_t l_349 = (-1);
                    if (g_114)
                    { 
                        l_308 = p_79;
                        g_158 = p_77;
                    }
                    else
                    { 
                        if (g_137)
                            break;
                    }
                    for (g_241 = 0; (g_241 != 48); g_241 += 4)
                    { 
                        g_158 = g_114;
                        l_311 = l_159;
                    }
                    l_313 = l_312;
                    if (g_145)
                    { 
                        struct S0 l_329 = {-9,3U,0x71F8};
                        uint32_t l_331 = 4294967287U;
                        p_77 = g_3;
                        p_77 = ((int32_t)g_113.f0 - (int32_t)(0xF234 == (__builtin_ctzl(((int16_t)((int32_t)(0xF092 && g_116) + (int32_t)g_241) % (int16_t)p_77)) <= ((((int16_t)l_313.f0 << (int16_t)(((p_77 >= p_77) != p_77) ^ p_77)) & g_137) & l_322))));
                        l_332 = (l_322 && ((p_76 <= ((int16_t)l_311.f1 >> (int16_t)12)) <= ((func_80(((uint16_t)p_76 >> (uint16_t)((int32_t)func_80(l_322, l_329, l_311.f1) % (int32_t)0xD2922DFD)), g_330, l_331) >= 2) < (-5))));
                    }
                    else
                    { 
                        uint32_t l_344 = 0xEF1ACA37;
                        p_77 = (1U >= ((uint32_t)(!((uint16_t)__builtin_ctz((func_80((l_287 && ((1 > (((int16_t)l_313.f0 << (int16_t)l_340) != ((int16_t)(p_77 <= 0x816288D3) << (int16_t)11))) >= g_84.f2)), g_84, l_343) != g_241)) >> (uint16_t)5)) % (uint32_t)0x994A519D));
                        l_344 = g_152;
                        l_349 = (l_290.f1 >= ((int16_t)l_347 >> (int16_t)(-(int32_t)(g_84.f2 & g_145))));
                        g_158 = g_145;
                    }
                }
                else
                { 
                    uint32_t l_357 = 0xDFC0DDB3;
                    int32_t l_359 = 0xBDF1AA62;
                    int32_t l_363 = 0xE03701D3;
                    if ((~p_78))
                    { 
                        return l_313;
                    }
                    else
                    { 
                        l_359 = ((((int32_t)(p_79 < __builtin_ctzll(((l_353 <= p_77) == g_354))) + (int32_t)0xCBD8F184) || ((uint16_t)(p_79 < (func_80(l_357, l_313, g_354) && 0xAD39)) << (uint16_t)g_358)) == p_79);
                        g_158 = (((uint16_t)0x09E2 >> (uint16_t)((-(uint32_t)((g_358 | (-7)) || ((l_159.f0 == __builtin_clzll(p_78)) & l_363))) || g_84.f0)) | g_114);
                        p_77 = (-3);
                    }
                    p_77 = ((int16_t)__builtin_bswap32(((int32_t)((int32_t)(p_76 != ((((p_76 && __builtin_parityl((g_99 && ((int32_t)(3 | ((((int16_t)((!g_330.f2) <= g_145) << (int16_t)9) == (((int16_t)0 << (int16_t)9) > (((((int32_t)(((int16_t)((l_332 <= ((uint16_t)p_78 - (uint16_t)l_343)) || p_77) >> (int16_t)7) >= p_78) - (int32_t)l_383) & g_145) && (-1)) ^ g_116))) ^ p_78)) + (int32_t)g_116)))) != 0x81B2EEEA) < 1) ^ g_145)) % (int32_t)g_384) - (int32_t)0x0D79999D)) % (int16_t)p_77);
                    if (p_78)
                    { 
                        return g_84;
                    }
                    else
                    { 
                        uint32_t l_392 = 0xAE5C66E5;
                        p_77 = (0x553A == 1U);
                        p_77 = (((__builtin_ctzll(g_330.f2) >= ((g_330.f0 >= ((uint16_t)l_387 + (uint16_t)((int16_t)((int32_t)(l_392 | g_99) % (int32_t)p_76) << (int16_t)13))) >= 0xCEC7D193)) & ((p_79 | g_354) < p_79)) != l_308);
                        p_77 = p_79;
                        l_359 = ((uint32_t)(((__builtin_bswap32(p_77) || 0x28EB) || ((uint16_t)(l_397 == ((!((int32_t)g_384 % (int32_t)p_77)) || l_401)) - (uint16_t)((uint16_t)(-(uint16_t)p_77) << (uint16_t)((int16_t)((-1) | l_397) >> (int16_t)13)))) | l_343) - (uint32_t)g_99);
                    }
                    if ((0U >= (4294967291U & ((int16_t)((((int16_t)l_332 << (int16_t)9) || func_80(l_311.f2, l_291, l_401)) & g_84.f0) + (int16_t)p_77))))
                    { 
                        struct S0 l_411 = {-1,1U,0x78AA};
                        l_311 = l_411;
                        p_77 = 0xD6041D87;
                        return l_313;
                    }
                    else
                    { 
                        struct S0 l_412 = {-1,0xEC5E385F,0};
                        l_159 = l_313;
                        l_311 = l_412;
                    }
                }
                p_77 = ((((int16_t)((int32_t)((int16_t)((uint32_t)0xA1F2281E + (uint32_t)((uint16_t)g_113.f0 >> (uint16_t)14)) << (int16_t)0) % (int32_t)p_77) - (int16_t)(g_330.f1 & (((((uint16_t)(0 && (p_77 ^ g_152)) << (uint16_t)8) && (__builtin_clzll(((uint32_t)p_78 - (uint32_t)((uint32_t)p_76 + (uint32_t)0x198F1B2D))) | l_340)) && 0x52A1DFCF) >= l_288))) != p_79) && g_113.f1);
            }
            p_77 = ((((((g_330.f0 > func_80((-(uint16_t)__builtin_bswap64((((((uint16_t)((((-(int16_t)(l_159.f2 ^ p_76)) && p_79) <= ((int16_t)(((uint16_t)(~g_152) >> (uint16_t)10) <= ((int16_t)(g_145 & ((int16_t)(((uint16_t)(((int16_t)(p_76 ^ p_77) << (int16_t)(((int16_t)l_308 - (int16_t)l_311.f2) && l_383)) || 9U) >> (uint16_t)15) | l_159.f2) >> (int16_t)l_291.f1)) >> (int16_t)0)) >> (int16_t)11)) <= p_78) >> (uint16_t)10) <= 1) != g_116) <= 4))), l_290, l_288)) && 0xF3F9) & l_290.f2) & p_79) && p_78) == g_330.f1);
        }
        else
        { 
            int16_t l_458 = (-2);
            int32_t l_526 = (-1);
            if (p_77)
            { 
                struct S0 l_475 = {0x7ACB,0xCF0C64A2,0x8BBB};
                int32_t l_518 = 4;
                if (((int16_t)__builtin_ffs(p_79) % (int16_t)((uint16_t)(0x3F1FC9B0 < g_241) << (uint16_t)1)))
                { 
                    int32_t l_466 = (-3);
                    int32_t l_493 = 0x86305D6E;
                    for (g_152 = 13; (g_152 < 30); g_152 += 6)
                    { 
                        g_358 = ((-(uint32_t)((~((uint16_t)p_79 << (uint16_t)8)) || l_458)) <= (g_156 < (((int16_t)p_76 - (int16_t)((int16_t)((l_463 | ((int32_t)l_466 - (int32_t)l_291.f0)) <= 0x4E99) - (int16_t)(((l_353 >= g_137) & l_466) ^ 3))) || p_79)));
                    }
                    if (((int32_t)(g_99 || p_78) % (int32_t)((((((int16_t)((int16_t)__builtin_ffsll(p_76) >> (int16_t)14) % (int16_t)0x20BA) != 0x40CC) | __builtin_parityll(g_152)) & ((int32_t)g_158 % (int32_t)p_79)) ^ 65535U)))
                    { 
                        p_77 = p_78;
                        return l_475;
                    }
                    else
                    { 
                        int32_t l_484 = (-10);
                        p_77 = ((((uint32_t)((int16_t)((p_76 != ((int32_t)(l_159.f0 <= g_384) % (int32_t)g_158)) <= (0x3732 & 0xD009)) >> (int16_t)l_287) + (uint32_t)(((((int16_t)l_484 % (int16_t)(l_159.f2 & p_78)) >= l_484) == l_159.f0) | p_78)) >= g_145) ^ 0xE9F76C22);
                        l_493 = ((((((0x5CC1 && __builtin_ffsll(((int16_t)(-2) % (int16_t)func_80(((int32_t)p_77 + (int32_t)((int16_t)(l_475.f1 > (((uint32_t)g_113.f0 + (uint32_t)((l_466 ^ (g_358 && (g_156 < ((p_79 < 0x3316) <= g_113.f0)))) && l_387)) && p_79)) << (int16_t)13)), g_113, l_353)))) ^ 0xDD43) ^ 0xA08B90AE) | g_354) >= 0xA52E9FB7) <= p_78);
                        return l_159;
                    }
                }
                else
                { 
                    uint32_t l_494 = 8U;
                    l_494 = g_113.f1;
                    if (((uint16_t)(__builtin_popcountll(l_205) >= l_475.f2) >> (uint16_t)4))
                    { 
                        struct S0 l_502 = {0x3B07,0x92FE9CAD,-3};
                        uint32_t l_503 = 4294967287U;
                        p_77 = ((int16_t)((!((((uint32_t)((p_76 && (p_77 && func_80(l_494, l_502, l_503))) < (((uint16_t)g_241 - (uint16_t)__builtin_popcountll(p_77)) ^ g_358)) % (uint32_t)l_387) == p_79) >= 0x67EDE7A5)) ^ 0xF025628F) << (int16_t)l_475.f2);
                        return g_113;
                    }
                    else
                    { 
                        uint16_t l_519 = 1U;
                        l_518 = (!((g_116 != (((-(uint32_t)p_77) > ((int16_t)0x59E9 - (int16_t)(((1U || (((int16_t)l_494 << (int16_t)((uint32_t)p_76 % (uint32_t)((int32_t)((0x3714 || 4U) && ((((uint16_t)(l_494 >= g_113.f1) % (uint16_t)g_113.f0) & p_78) & l_159.f2)) - (int32_t)(-7)))) == 9U)) | l_475.f2) > l_475.f1))) >= g_156)) | p_76));
                        g_113 = g_84;
                        p_77 = __builtin_ffs(l_519);
                    }
                    for (p_76 = (-29); (p_76 != 55); p_76 += 7)
                    { 
                        l_475 = l_290;
                        if (l_291.f1)
                            continue;
                        l_526 = ((g_152 < ((g_84.f1 ^ l_494) && (((uint16_t)(g_114 || g_145) - (uint16_t)((uint16_t)0x16D0 << (uint16_t)11)) > p_77))) <= (1U != p_78));
                    }
                }
                for (g_114 = 25; (g_114 != 21); g_114 -= 1)
                { 
                    l_401 = (1U > 0x71A6);
                    p_77 = g_354;
                    g_158 = ((int32_t)g_84.f0 % (int32_t)p_77);
                }
            }
            else
            { 
                p_77 = l_463;
                for (p_78 = 0; (p_78 <= 9); p_78 += 1)
                { 
                    g_358 = 0x36AAF7C6;
                }
            }
        }
    }
    return l_159;
}




static uint64_t  func_80(int32_t  p_81, struct S0  p_82, int32_t  p_83)
{ 
    int16_t l_126 = 0;
    int32_t l_135 = (-7);
    for (g_84.f2 = (-17); (g_84.f2 >= 12); g_84.f2 += 5)
    { 
        uint32_t l_95 = 0U;
        uint32_t l_96 = 0x38BBD881;
        if ((((uint32_t)(g_84.f0 >= ((g_84.f2 <= (((int16_t)((g_84.f1 == ((int32_t)p_83 + (int32_t)p_81)) <= ((((((uint16_t)0xCF19 - (uint16_t)p_82.f2) == (((((g_84.f0 | g_84.f2) ^ g_3) > 0xF04B) != g_84.f1) > 0x40DD146F)) && p_82.f1) ^ 0x61094B98) & l_95)) - (int16_t)g_84.f0) > g_3)) & p_81)) + (uint32_t)0) | l_96))
        { 
            g_99 = (p_83 >= (g_84.f0 | (((int16_t)7 >> (int16_t)10) | (g_3 && p_82.f1))));
        }
        else
        { 
            uint16_t l_100 = 0xFECA;
            int32_t l_104 = 0x46A6ECCD;
            uint16_t l_115 = 2U;
            int32_t l_136 = 0x51DBEEE9;
            if (l_100)
            { 
                int16_t l_103 = 0xDAE5;
                l_104 = ((uint16_t)l_103 << (uint16_t)11);
            }
            else
            { 
                int32_t l_107 = 0x98F9F05B;
                int32_t l_112 = 0x609E5B73;
                l_112 = ((((uint32_t)(((0xB9DA <= (p_81 > p_82.f2)) == (l_107 > (p_82.f0 | p_82.f2))) | (p_82.f2 <= (((int16_t)l_100 >> (int16_t)0) | __builtin_parity(((int16_t)((g_84.f0 != l_107) || g_84.f1) + (int16_t)l_107))))) % (uint32_t)l_95) != l_95) <= p_81);
                if ((0x3771 != 65531U))
                { 
                    return p_83;
                }
                else
                { 
                    g_113 = p_82;
                    l_104 = g_113.f1;
                    g_114 = (0x9852 != g_84.f1);
                }
                l_115 = p_83;
            }
            g_116 = p_81;
            for (p_82.f1 = 0; (p_82.f1 != 24); p_82.f1 += 4)
            { 
                l_135 = ((g_114 <= (!((uint16_t)65535U >> (uint16_t)((int16_t)g_113.f0 - (int16_t)((uint32_t)g_3 % (uint32_t)((l_126 || p_82.f0) & ((uint32_t)(~l_126) + (uint32_t)(~((int16_t)g_84.f2 >> (int16_t)13))))))))) < ((uint16_t)__builtin_bswap32(g_84.f2) - (uint16_t)65535U));
                if (l_136)
                    continue;
                g_137 = g_116;
            }
            l_136 = l_115;
        }
        for (p_83 = (-12); (p_83 > 28); p_83 += 1)
        { 
            int32_t l_151 = 0;
            if (p_81)
            { 
                uint32_t l_144 = 4294967289U;
                g_145 = (((g_3 ^ p_83) & 0x92195432) | (g_84.f0 > (((uint16_t)((uint16_t)(g_116 == ((g_113.f2 < ((l_144 != l_135) && l_144)) <= 0x2D9A)) << (uint16_t)g_84.f1) >> (uint16_t)g_84.f2) & 0x1E3D09CE)));
                p_82 = p_82;
            }
            else
            { 
                struct S0 l_153 = {-1,0x2CA71060,0x7EAA};
                g_113 = g_113;
                for (g_84.f1 = 0; (g_84.f1 != 21); g_84.f1 += 7)
                { 
                    int16_t l_150 = 7;
                    if (p_82.f2)
                        break;
                    g_152 = ((~((p_82.f1 ^ (!l_150)) != (p_82.f0 <= l_151))) && l_151);
                    g_113 = l_153;
                    g_113 = g_113;
                }
                g_156 = ((g_99 <= (g_84.f2 == g_145)) < g_84.f0);
            }
            return p_82.f1;
        }
        l_135 = (!__builtin_ctz(p_81));
        g_158 = g_152;
    }
    return l_126;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_29();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_330.f0, "g_330.f0", print_hash_value);
    transparent_crc(g_330.f1, "g_330.f1", print_hash_value);
    transparent_crc(g_330.f2, "g_330.f2", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_586.f0.f0, "g_586.f0.f0", print_hash_value);
    transparent_crc(g_586.f0.f1, "g_586.f0.f1", print_hash_value);
    transparent_crc(g_586.f0.f2, "g_586.f0.f2", print_hash_value);
    transparent_crc(g_586.f1, "g_586.f1", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



