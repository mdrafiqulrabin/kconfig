


#define NO_LONGLONG



static long __undefined;


struct S0 {
   unsigned f0 : 24;
   unsigned f1 : 13;
   signed f2 : 27;
};

struct S1 {
   uint16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   signed f0 : 24;
   signed f1 : 14;
   unsigned f2 : 20;
   unsigned f3 : 29;
   signed f4 : 24;
   unsigned f5 : 21;
   signed f6 : 12;
   struct S0  f7;
   unsigned f8 : 21;
   unsigned f9 : 8;
};
#pragma pack(pop)


static uint32_t g_16 = 0x1943C6FE;
static uint32_t g_97 = 0x5E7E01DF;
static struct S1 g_98 = {3U};
static uint32_t g_102 = 0U;
static struct S0 g_117 = {1220,15,7207};
static struct S1 g_147 = {0xB76D};
static struct S2 g_149 = {-382,17,272,12521,4059,1159,-2,{3332,58,5405},1423,10};
static int32_t g_204 = 0xEBA4ED1C;
static int16_t g_331 = 0x75C5;
static uint32_t g_449 = 0U;
static struct S0 g_511 = {1444,5,10954};



static struct S1  func_30(void);
static uint16_t  func_31(struct S2  p_32, struct S0  p_33);
static struct S2  func_34(struct S2  p_35, uint32_t  p_36, int32_t  p_37, struct S1  p_38);
static struct S1  func_40(struct S1  p_41, uint16_t  p_42);
static uint16_t  func_44(int16_t  p_45, uint16_t  p_46, uint32_t  p_47);
static int16_t  func_51(uint16_t  p_52, uint32_t  p_53, uint16_t  p_54, uint16_t  p_55, uint16_t  p_56);
static uint32_t  func_59(struct S1  p_60, struct S0  p_61, uint16_t  p_62);
static struct S1  func_63(struct S2  p_64, struct S1  p_65, struct S2  p_66, int32_t  p_67);
static struct S2  func_68(struct S0  p_69, int16_t  p_70, uint32_t  p_71, struct S0  p_72);
static struct S0  func_73(int32_t  p_74, struct S2  p_75);





static struct S1  func_30(void)
{ 
    struct S2 l_39 = {1586,-107,419,16929,1584,713,32,{1208,85,-8733},327,3};
    struct S1 l_43 = {0U};
    l_39.f6 = (0x17F4 < (9U & func_31(func_34(l_39, g_16, g_16, func_40(l_43, (l_43.f0 != ((((func_44(l_39.f1, l_39.f8, l_39.f5) == 0x2493) || l_39.f0) | l_39.f2) != 0xA2FBE5F4)))), g_511)));
    g_149.f4 = (g_149.f7.f0 <= g_149.f5);
    g_149.f7 = g_149.f7;
    return l_43;
}




static uint16_t  func_31(struct S2  p_32, struct S0  p_33)
{ 
    uint32_t l_516 = 1U;
    int32_t l_518 = (-1);
    struct S2 l_519 = {-279,119,99,5217,2564,511,7,{1158,75,3539},472,14};
    struct S1 l_523 = {65530U};
    if (p_32.f7.f0)
    { 
        for (g_449 = 0; (g_449 >= 59); g_449 += 1)
        { 
            uint32_t l_517 = 0xA0F39FC3;
            l_518 = ((__builtin_ctzll(((uint16_t)(__builtin_ctzll(func_44(g_98.f0, g_149.f7.f2, p_32.f1)) <= 0U) >> (uint16_t)11)) && (1U & ((func_44((((__builtin_parityll((g_147.f0 >= p_32.f3)) & l_516) > 0xA542B23A) >= g_97), l_516, l_517) >= p_33.f1) < g_331))) || g_149.f9);
        }
    }
    else
    { 
        int16_t l_520 = (-8);
        uint16_t l_521 = 0xBF68;
        struct S1 l_522 = {65527U};
        int32_t l_554 = (-1);
        int16_t l_592 = 0;
        l_523 = func_40(func_63(func_34(l_519, l_520, l_521, l_522), l_522, p_32, g_149.f7.f0), g_149.f2);
        g_149.f4 = (((uint16_t)(((g_149.f2 | (((uint16_t)(((g_117.f1 >= (p_32.f6 & (~(l_519.f3 == ((0 | l_518) && g_102))))) <= 0x52F216AB) && (3 > l_519.f4)) << (uint16_t)g_98.f0) < g_204)) ^ p_32.f1) != 1) - (uint16_t)g_511.f2) & l_521);
        for (g_98.f0 = 0; (g_98.f0 < 23); g_98.f0 += 1)
        { 
            int32_t l_564 = (-6);
            if (g_149.f7.f1)
            { 
                return g_149.f7.f0;
            }
            else
            { 
                uint16_t l_543 = 1U;
                uint16_t l_549 = 0U;
                if (p_32.f4)
                { 
                    uint32_t l_544 = 0x5C1D941A;
                    l_519.f4 = (g_149.f0 || (((int16_t)(l_520 < ((~(~4U)) ^ 0xA517)) + (int16_t)(((g_149.f0 ^ ((int32_t)((int16_t)((__builtin_popcountll(g_149.f2) == g_511.f2) <= (((uint32_t)((((uint16_t)0x6193 >> (uint16_t)p_32.f0) < g_16) >= g_102) % (uint32_t)4294967295U) & l_518)) >> (int16_t)5) + (int32_t)l_543)) >= p_32.f7.f1) <= l_544)) != l_523.f0));
                }
                else
                { 
                    int16_t l_561 = 0x0ACE;
                    uint16_t l_565 = 65529U;
                    p_33.f2 = ((uint16_t)l_519.f1 << (uint16_t)7);
                    l_565 = ((int16_t)(((l_549 && ((int32_t)((g_511.f0 & ((p_32.f5 >= ((uint16_t)l_554 - (uint16_t)((int16_t)((int32_t)(((int16_t)(l_561 != ((int32_t)(((__builtin_clzl((0xD791 | g_147.f0)) > (0xD253C3C3 && g_511.f1)) >= l_561) >= g_149.f0) + (int32_t)l_519.f0)) >> (int16_t)14) ^ 0x966CF98F) - (int32_t)p_32.f7.f2) << (int16_t)14))) || 0x9682EC29)) != 0xBC16) + (int32_t)l_549)) > l_561) > l_564) << (int16_t)g_149.f3);
                    g_511 = p_33;
                }
            }
        }
        for (l_520 = 0; (l_520 == (-19)); l_520 -= 1)
        { 
            int32_t l_574 = 0xE8A6C75D;
            struct S1 l_575 = {1U};
            l_519.f7 = func_73(l_519.f7.f0, func_34(func_34(func_34(func_68(p_32.f7, l_519.f7.f0, g_511.f2, l_519.f7), (((int16_t)((((int16_t)p_32.f5 + (int16_t)((uint16_t)(g_149.f9 | g_149.f9) >> (uint16_t)p_32.f7.f0)) & g_149.f2) <= 0x3603AAAD) << (int16_t)g_102) ^ 0U), g_149.f0, g_98), l_574, l_522.f0, g_147), g_149.f1, l_519.f6, l_575));
            if (l_554)
                break;
            for (g_204 = (-2); (g_204 > (-14)); g_204 -= 1)
            { 
                int32_t l_593 = 0x3F141958;
                l_519.f7.f2 = (((((uint32_t)((((g_117.f0 ^ p_32.f3) != ((int16_t)(((int16_t)(g_149.f5 != (-6)) % (int16_t)((int16_t)g_149.f7.f1 - (int16_t)((uint16_t)g_149.f5 >> (uint16_t)14))) || ((int32_t)0x27BE1C43 % (int32_t)((uint16_t)1U + (uint16_t)((p_32.f3 == 0x1B3A7910) == 0xE4A8EBB5)))) + (int16_t)l_521)) > l_592) ^ 0x98D4FBA3) - (uint32_t)p_32.f1) && l_593) != l_574) && l_574);
                p_32.f6 = g_16;
            }
        }
    }
    for (g_331 = (-1); (g_331 > (-19)); g_331 -= 6)
    { 
        g_149.f6 = (0x659E | p_33.f2);
    }
    return p_32.f6;
}




static struct S2  func_34(struct S2  p_35, uint32_t  p_36, int32_t  p_37, struct S1  p_38)
{ 
    struct S1 l_509 = {0x6378};
    struct S2 l_510 = {1977,4,330,14954,-2474,198,-49,{3444,58,8579},738,2};
    p_38 = l_509;
    return l_510;
}




static struct S1  func_40(struct S1  p_41, uint16_t  p_42)
{ 
    uint16_t l_492 = 3U;
    struct S1 l_493 = {0x532F};
    l_493 = func_63(func_68(g_117, l_492, (__builtin_ffsll(g_117.f0) ^ (l_492 > g_331)), g_149.f7), p_41, g_149, g_16);
    g_204 = __builtin_ia32_crc32qi(p_41.f0, ((int16_t)((g_149.f6 != (((uint32_t)(((0xD4C1 >= ((int16_t)((uint32_t)l_493.f0 + (uint32_t)((((int16_t)p_42 % (int16_t)((uint16_t)0xE37C >> (uint16_t)1)) & (((g_149.f1 && g_149.f4) == (l_492 > g_147.f0)) || l_492)) >= 0xD0D99AB8)) >> (int16_t)l_493.f0)) | g_16) != g_149.f0) - (uint32_t)l_493.f0) < l_493.f0)) != l_493.f0) + (int16_t)9));
    g_204 = (((l_493.f0 == ((int16_t)(~g_149.f6) << (int16_t)l_493.f0)) | l_492) & 0x4D94ACE5);
    return p_41;
}




static uint16_t  func_44(int16_t  p_45, uint16_t  p_46, uint32_t  p_47)
{ 
    int16_t l_48 = 0x0642;
    struct S2 l_76 = {-419,27,730,4987,-3138,527,23,{381,75,6413},387,1};
    struct S1 l_268 = {65535U};
    struct S2 l_269 = {-54,19,785,15114,299,1321,36,{1509,14,-2661},275,8};
    uint32_t l_270 = 1U;
    uint32_t l_491 = 0xD1DF2674;
    l_76.f4 = ((l_48 != (0x1F3E < ((p_46 <= (((int16_t)func_51((((uint32_t)func_59(func_63(func_68(func_73(l_48, l_76), g_204, (p_45 || (g_204 <= 0x31D1)), l_76.f7), l_268, l_269, l_270), l_269.f7, g_16) - (uint32_t)p_46) >= 4294967289U), g_331, p_46, g_331, l_76.f0) << (int16_t)0) || l_76.f7.f2)) == (-2)))) > g_449);
    l_268 = func_63(l_269, g_147, l_76, (((uint32_t)((int16_t)(p_47 <= (4294967295U <= g_149.f7.f0)) >> (int16_t)((int32_t)(1U < p_46) % (int32_t)g_16)) + (uint32_t)g_331) && g_204));
    g_117.f2 = ((((l_269.f7.f0 < ((((int16_t)0xBFEE << (int16_t)(((int16_t)1 >> (int16_t)6) >= ((((0x4FE2 != ((uint16_t)l_76.f7.f0 << (uint16_t)l_48)) & (p_47 != g_449)) >= ((uint16_t)((p_46 == l_76.f5) & g_117.f2) % (uint16_t)65534U)) < 0x621D3B27))) == g_149.f4) | g_331)) | g_149.f1) && 0) < l_491);
    return l_76.f7.f2;
}




static int16_t  func_51(uint16_t  p_52, uint32_t  p_53, uint16_t  p_54, uint16_t  p_55, uint16_t  p_56)
{ 
    struct S1 l_471 = {0xBE35};
    struct S0 l_475 = {3003,69,-4500};
    for (p_53 = 0; (p_53 < 29); p_53 += 2)
    { 
        uint32_t l_472 = 2U;
        int32_t l_473 = 0;
        int32_t l_474 = 0x2015F3E8;
        struct S0 l_476 = {1630,76,1213};
        l_474 = ((int16_t)(((int16_t)(func_59(l_471, g_149.f7, p_54) == (g_331 && 0)) >> (int16_t)((l_472 | ((p_54 || ((4294967295U & l_472) > l_471.f0)) ^ p_54)) ^ l_473)) & l_472) << (int16_t)l_471.f0);
        l_476 = l_475;
    }
    return g_149.f7.f0;
}




static uint32_t  func_59(struct S1  p_60, struct S0  p_61, uint16_t  p_62)
{ 
    struct S1 l_291 = {0U};
    int32_t l_341 = 1;
    int16_t l_342 = 0xFCD9;
    uint32_t l_464 = 1U;
    for (g_147.f0 = 0; (g_147.f0 < 8); g_147.f0 += 1)
    { 
        struct S1 l_292 = {0xB315};
        struct S2 l_336 = {3446,-27,997,17763,3620,1160,32,{3055,69,-5718},242,14};
        int32_t l_371 = (-1);
        if (g_117.f1)
        { 
            uint16_t l_305 = 65534U;
            int32_t l_307 = (-6);
            struct S1 l_317 = {0x3D2E};
            uint32_t l_332 = 0x012BB54E;
            l_292 = l_291;
            for (p_60.f0 = 0; (p_60.f0 > 38); p_60.f0 += 1)
            { 
                int16_t l_306 = 0x8732;
                g_149.f1 = (((uint16_t)(g_204 ^ g_149.f2) << (uint16_t)8) || (((int16_t)((int16_t)((uint16_t)g_149.f5 << (uint16_t)((g_98.f0 < __builtin_popcountll(g_149.f1)) | (((uint16_t)(p_60.f0 & g_98.f0) << (uint16_t)l_305) < l_291.f0))) % (int16_t)l_292.f0) - (int16_t)p_60.f0) || l_306));
            }
            l_307 = p_61.f2;
            if (((uint32_t)__builtin_ia32_crc32qi(g_149.f7.f2, ((((uint16_t)g_147.f0 << (uint16_t)((__builtin_ffsll(p_61.f1) < 0x4320) && __builtin_parity(g_149.f3))) >= 4294967294U) | 65535U)) % (uint32_t)8))
            { 
                l_307 = (p_60.f0 ^ p_62);
                g_149.f1 = l_307;
                for (l_292.f0 = 0; (l_292.f0 <= 20); l_292.f0 += 6)
                { 
                    int32_t l_314 = 0xCC3F3949;
                    l_317 = func_63(g_149, g_98, func_68(p_61, l_314, p_61.f1, g_117), (p_62 ^ ((((int16_t)__builtin_parityl(l_291.f0) << (int16_t)g_149.f9) >= p_61.f1) ^ g_149.f8)));
                }
            }
            else
            { 
                uint32_t l_340 = 5U;
                g_117.f2 = l_291.f0;
                if (((l_305 && ((int32_t)((p_61.f2 && ((int32_t)((!(-1)) != (__builtin_bswap32((~(((l_307 & ((uint16_t)((int16_t)(-1) << (int16_t)11) + (uint16_t)(-(uint32_t)l_307))) | (0x7345276D & l_291.f0)) || (((uint32_t)g_331 % (uint32_t)l_292.f0) ^ 2)))) || g_97)) + (int32_t)g_149.f5)) <= l_291.f0) % (int32_t)g_102)) >= l_332))
                { 
                    uint32_t l_335 = 0U;
                    l_336 = func_68(g_149.f7, ((int16_t)g_149.f5 - (int16_t)(-1)), l_335, g_149.f7);
                    p_61.f2 = g_149.f7.f0;
                }
                else
                { 
                    int32_t l_337 = (-1);
                    l_337 = (4294967286U > p_60.f0);
                    g_149.f0 = ((((int32_t)(g_149.f3 | 1) % (int32_t)g_149.f3) ^ p_61.f2) || g_149.f7.f1);
                    g_149.f4 = l_340;
                }
                l_341 = (-1);
            }
        }
        else
        { 
            int16_t l_361 = 0;
            int32_t l_382 = 0x10BEB129;
            if (((g_149.f6 <= g_149.f5) | l_342))
            { 
                uint32_t l_355 = 0U;
                int32_t l_356 = 0x67CB0065;
                struct S1 l_357 = {0xEDDC};
                struct S0 l_383 = {3998,77,-984};
                if (((uint16_t)(g_331 == (((int16_t)(0xF796F7AD != ((int32_t)(((int32_t)(g_147.f0 >= (g_149.f2 <= g_147.f0)) + (int32_t)((uint32_t)p_61.f0 % (uint32_t)p_61.f1)) > (g_331 > ((int32_t)l_355 + (int32_t)g_149.f6))) + (int32_t)l_341)) % (int16_t)p_61.f0) == g_149.f7.f0)) >> (uint16_t)g_149.f0))
                { 
                    uint32_t l_377 = 0xCB5F6773;
                    int32_t l_381 = 3;
                    if (g_102)
                    { 
                        g_98 = p_60;
                        l_356 = l_355;
                    }
                    else
                    { 
                        l_336.f7.f2 = p_61.f0;
                        g_98 = l_357;
                    }
                    for (l_356 = (-18); (l_356 == (-19)); l_356 -= 1)
                    { 
                        int16_t l_360 = 0xBC65;
                        struct S1 l_362 = {0xF5A4};
                        g_149.f0 = l_360;
                        l_361 = p_62;
                        l_362 = p_60;
                    }
                    if (g_149.f9)
                    { 
                        uint32_t l_372 = 0U;
                        int32_t l_380 = (-7);
                        l_381 = ((uint32_t)((uint16_t)(((int32_t)0x3CFD7B8C % (int32_t)((uint32_t)(l_371 & 1) - (uint32_t)(l_372 && ((((uint16_t)(((int16_t)(__builtin_popcountll(l_377) | (((uint16_t)65535U % (uint16_t)((l_357.f0 | g_102) & 0xD7A2)) ^ 0x50834627)) % (int16_t)0x54E7) <= l_377) >> (uint16_t)g_149.f7.f0) == p_61.f0) ^ l_342)))) || l_377) >> (uint16_t)p_61.f2) % (uint32_t)l_380);
                    }
                    else
                    { 
                        l_382 = 1;
                        p_61.f2 = g_331;
                        g_117 = g_117;
                    }
                    g_149 = func_68(l_383, (0x613B58B0 == ((int32_t)(g_149.f7.f0 == ((-(uint16_t)(l_336.f7.f0 | (l_336.f1 >= p_61.f2))) <= (((uint32_t)p_61.f0 - (uint32_t)g_149.f7.f0) | p_61.f2))) - (int32_t)0xF103191E)), l_342, g_149.f7);
                }
                else
                { 
                    g_149.f4 = ((int16_t)((~1) <= ((uint16_t)0x1536 >> (uint16_t)((int16_t)l_383.f0 >> (int16_t)(0 >= ((uint16_t)(((uint16_t)0x02ED - (uint16_t)p_60.f0) && ((int32_t)((g_149.f7.f0 <= (l_361 || l_336.f1)) ^ l_291.f0) + (int32_t)g_147.f0)) << (uint16_t)3))))) - (int16_t)g_149.f4);
                    return l_291.f0;
                }
                for (p_62 = (-1); (p_62 > 35); p_62 += 1)
                { 
                    int16_t l_404 = 0x8E23;
                    l_404 = l_361;
                    l_291 = func_63(g_149, g_98, g_149, (l_336.f0 >= 0x9B08));
                    return l_341;
                }
                l_382 = ((int32_t)p_61.f1 - (int32_t)p_61.f1);
            }
            else
            { 
                uint32_t l_428 = 0U;
                struct S1 l_433 = {65533U};
                if ((__builtin_clz(((uint16_t)((((uint32_t)(((int16_t)(((int32_t)(!((((l_382 ^ ((int16_t)g_149.f0 - (int16_t)((int16_t)((-(uint32_t)g_204) > p_61.f0) + (int16_t)((uint16_t)l_342 << (uint16_t)9)))) == (0 | 0xE1D7CEBA)) | ((int32_t)((int32_t)l_291.f0 % (int32_t)(~(((((p_60.f0 >= p_61.f0) | 4294967288U) == g_16) < l_428) != g_149.f5))) + (int32_t)0x15A0DB13)) > 0x7EAB)) + (int32_t)0x9CB44935) >= g_149.f7.f2) >> (int16_t)g_149.f7.f1) != 0xDC31) + (uint32_t)4294967295U) == 0x36F2) | 0) >> (uint16_t)p_61.f0)) <= p_62))
                { 
                    if (g_149.f7.f2)
                        break;
                    l_382 = ((uint16_t)__builtin_parityl(l_382) >> (uint16_t)(((uint16_t)l_336.f9 - (uint16_t)g_98.f0) >= g_149.f9));
                }
                else
                { 
                    g_149 = g_149;
                }
                l_433 = g_98;
            }
        }
        if ((((l_342 > p_61.f2) || ((((uint32_t)((l_341 <= ((uint16_t)(p_62 ^ ((((uint32_t)((((uint16_t)p_61.f2 + (uint16_t)((g_16 == l_291.f0) | 1)) <= ((uint32_t)0x5BAE9A8F % (uint32_t)g_149.f7.f2)) && 0x7861) + (uint32_t)0x643B9245) & p_61.f0) | 0x5295)) - (uint16_t)p_61.f2)) <= 0xD4E72F83) + (uint32_t)l_336.f9) == p_61.f1) >= l_291.f0)) != p_60.f0))
        { 
            int32_t l_448 = 0xD42086BA;
            for (l_292.f0 = 0; (l_292.f0 != 42); l_292.f0 += 1)
            { 
                p_61.f2 = g_149.f4;
                p_61.f2 = ((-1) < ((uint32_t)l_291.f0 + (uint32_t)g_149.f7.f1));
            }
            l_448 = g_149.f7.f2;
        }
        else
        { 
            int16_t l_450 = 0x5CB6;
            g_204 = (g_449 && ((l_450 || p_61.f1) != ((uint16_t)0x36C8 >> (uint16_t)12)));
            g_149.f7.f2 = g_149.f1;
            for (l_341 = 0; (l_341 != 15); l_341 += 3)
            { 
                struct S0 l_455 = {2453,46,3929};
                l_455 = l_455;
                l_292 = p_60;
            }
        }
    }
    p_61.f2 = (((int32_t)l_342 + (int32_t)g_204) > ((int16_t)(((uint16_t)p_61.f0 - (uint16_t)(((p_61.f1 || ((__builtin_clzll(p_62) & p_61.f2) & (0 != (g_149.f4 && l_342)))) <= 0x02B1) <= p_61.f0)) > l_291.f0) << (int16_t)l_291.f0));
    l_464 = 8;
    return g_117.f1;
}




static struct S1  func_63(struct S2  p_64, struct S1  p_65, struct S2  p_66, int32_t  p_67)
{ 
    uint32_t l_271 = 4294967295U;
    int32_t l_272 = 4;
    struct S1 l_288 = {0U};
    l_272 = l_271;
    p_64.f7.f2 = g_149.f0;
    l_272 = (~((((((int16_t)((int16_t)g_149.f8 >> (int16_t)(1 < (p_66.f0 ^ l_272))) - (int16_t)(((int32_t)(~0x13F1) + (int32_t)((uint16_t)(l_272 <= ((((p_66.f9 || (((int32_t)g_149.f0 % (int32_t)((int16_t)(-(int32_t)((l_272 | g_147.f0) || 0x9E08)) % (int16_t)g_147.f0)) < g_149.f8)) | l_272) | 0) < g_149.f4)) << (uint16_t)g_97)) || 0x0BF56E5E)) >= 0x08B5B5E6) == l_272) <= g_149.f5) <= g_149.f0));
    return l_288;
}




static struct S2  func_68(struct S0  p_69, int16_t  p_70, uint32_t  p_71, struct S0  p_72)
{ 
    int32_t l_225 = 2;
    struct S2 l_251 = {3549,61,804,12229,-2205,281,-59,{1759,24,220},1369,9};
    l_225 = ((g_149.f7.f0 < g_149.f7.f1) | (g_204 < 1));
    if (l_225)
    { 
        struct S1 l_226 = {7U};
        uint32_t l_227 = 4294967286U;
        int32_t l_237 = 0xAD6C18F8;
        l_226 = l_226;
        l_227 = p_72.f2;
        l_237 = (((p_72.f1 > ((uint16_t)(((uint16_t)(l_226.f0 >= (((int32_t)p_70 + (int32_t)(p_69.f1 & (l_225 >= ((uint32_t)(((((l_225 ^ 8) && (-(uint32_t)l_225)) > (0xED47 == g_98.f0)) == g_147.f0) >= g_149.f1) - (uint32_t)g_204)))) == g_149.f2)) % (uint16_t)0x0793) || g_149.f0) << (uint16_t)4)) > p_69.f0) < 1U);
        p_69.f2 = ((uint32_t)p_69.f2 % (uint32_t)((int16_t)(-(uint16_t)4U) + (int16_t)p_72.f2));
    }
    else
    { 
        int32_t l_243 = (-1);
        uint16_t l_263 = 0U;
        l_243 = 0x2C5ECF49;
        for (p_71 = 0; (p_71 <= 45); p_71 += 1)
        { 
            uint32_t l_249 = 0xE809F092;
            struct S2 l_250 = {3503,46,862,16443,-37,1110,-44,{3417,75,-6240},638,12};
            p_69.f2 = (~((int16_t)l_249 + (int16_t)p_71));
            l_251 = l_250;
            if (l_243)
                continue;
            for (g_97 = 0; (g_97 >= 56); g_97 += 1)
            { 
                if (p_69.f1)
                    break;
                p_69.f2 = ((-10) <= 0);
            }
        }
        g_204 = ((uint16_t)((((((int16_t)__builtin_ctzll(((uint16_t)p_69.f2 >> (uint16_t)0)) % (int16_t)p_72.f2) & ((uint16_t)(~(l_243 < (l_263 ^ g_149.f6))) >> (uint16_t)7)) && ((int16_t)((int16_t)((p_71 ^ 0x0C942405) || l_263) >> (int16_t)l_263) << (int16_t)l_251.f8)) <= l_243) >= l_251.f7.f1) - (uint16_t)l_243);
    }
    g_117.f2 = g_117.f2;
    return g_149;
}




static struct S0  func_73(int32_t  p_74, struct S2  p_75)
{ 
    uint32_t l_77 = 0x9F8C36B4;
    uint16_t l_88 = 0x2332;
    struct S1 l_128 = {65535U};
    uint32_t l_142 = 0x7D73F8B2;
    uint32_t l_152 = 0x173B2678;
    int32_t l_194 = (-4);
    uint32_t l_223 = 4U;
    p_75.f7.f2 = (p_74 || (__builtin_clzl(l_77) | (((!((g_16 <= (~(((!((int16_t)((int16_t)l_77 << (int16_t)9) + (int16_t)g_16)) | l_77) >= ((uint32_t)((l_77 == (!(((((g_16 <= l_88) ^ g_16) && g_16) >= p_75.f9) == p_75.f7.f2))) == g_16) + (uint32_t)l_88)))) | g_16)) ^ 0x7CF1) == 0)));
    for (l_77 = 0; (l_77 == 20); l_77 += 1)
    { 
        uint32_t l_91 = 7U;
        struct S1 l_99 = {65535U};
        int32_t l_159 = 0x64F9C2C9;
        uint32_t l_192 = 0x4FF0672D;
        if (l_91)
        { 
            int16_t l_126 = 0xE0A1;
            struct S1 l_144 = {65535U};
            for (l_88 = 0; (l_88 == 17); l_88 += 1)
            { 
                struct S0 l_96 = {1619,34,-1834};
                uint16_t l_127 = 0xC57D;
                for (l_91 = 0; (l_91 > 55); l_91 += 5)
                { 
                    return l_96;
                }
                g_97 = __builtin_ctzl(g_16);
                l_99 = g_98;
                if (((((int16_t)(l_96.f0 && (-7)) << (int16_t)8) && l_91) | l_96.f0))
                { 
                    g_102 = 0x1B3C7CD6;
                }
                else
                { 
                    uint32_t l_114 = 0x72C646EC;
                    struct S1 l_143 = {4U};
                    for (g_97 = (-17); (g_97 <= 1); g_97 += 5)
                    { 
                        p_75.f0 = (~((g_97 | (((int16_t)((int32_t)0x3F915BDE - (int32_t)g_16) - (int16_t)g_16) > ((int16_t)((int16_t)1 % (int16_t)l_96.f2) - (int16_t)((l_114 ^ ((int32_t)p_74 % (int32_t)1)) <= 1)))) ^ g_98.f0));
                        g_117 = p_75.f7;
                    }
                    if (l_91)
                    { 
                        g_117.f2 = (l_77 < ((5 > ((p_75.f5 > (((int16_t)(((int16_t)0x5CD3 >> (int16_t)8) >= (1U ^ ((uint32_t)0U - (uint32_t)((int16_t)l_114 >> (int16_t)9)))) >> (int16_t)(((g_117.f2 != (65532U >= l_126)) != l_126) & g_117.f0)) ^ 1U)) < g_16)) ^ 0xD9C3));
                        return g_117;
                    }
                    else
                    { 
                        if (l_127)
                            break;
                        l_99 = l_128;
                    }
                    g_117.f2 = ((int32_t)((((~(((uint16_t)((uint32_t)((int16_t)(p_75.f4 > ((uint16_t)__builtin_ctzl(p_75.f3) + (uint16_t)((uint16_t)__builtin_clzll(p_74) << (uint16_t)g_97))) << (int16_t)10) % (uint32_t)((g_16 | __builtin_ffs(p_75.f7.f0)) && 2)) + (uint16_t)l_128.f0) <= l_142)) <= p_75.f7.f1) & p_75.f3) ^ l_142) % (int32_t)8);
                    l_144 = l_143;
                }
            }
            g_117.f2 = l_99.f0;
        }
        else
        { 
            int32_t l_157 = 1;
            for (g_98.f0 = 0; (g_98.f0 != 54); g_98.f0 += 6)
            { 
                int32_t l_158 = 7;
                g_147 = g_98;
                if (p_75.f7.f2)
                { 
                    struct S1 l_148 = {65535U};
                    l_148 = g_147;
                    if (p_75.f2)
                    { 
                        p_75.f7 = p_75.f7;
                        g_149 = g_149;
                        l_158 = ((((int16_t)(g_149.f7.f2 <= (5 != (g_149.f9 >= 0xE95E8C97))) - (int16_t)(((l_152 < g_147.f0) != (((uint16_t)((uint16_t)((g_149.f3 | g_149.f7.f1) && l_148.f0) - (uint16_t)g_149.f7.f2) >> (uint16_t)l_91) || 0x30BC)) || 1)) & 1U) != l_157);
                        g_149.f1 = g_149.f3;
                    }
                    else
                    { 
                        return p_75.f7;
                    }
                    if ((l_128.f0 >= 0x9D5BE663))
                    { 
                        if (p_75.f8)
                            break;
                        if (l_158)
                            continue;
                    }
                    else
                    { 
                        l_159 = ((l_99.f0 | ((-1) < g_149.f4)) >= __builtin_bswap64(p_75.f6));
                    }
                    g_147 = g_147;
                }
                else
                { 
                    uint16_t l_164 = 2U;
                    g_149.f1 = ((uint16_t)g_149.f9 << (uint16_t)11);
                    for (l_159 = (-5); (l_159 <= 20); l_159 += 4)
                    { 
                        int32_t l_167 = 0xB8A50C05;
                        int32_t l_173 = 0xE02E4CAB;
                        p_75.f0 = ((p_75.f7.f2 || l_164) <= ((uint16_t)(l_167 >= 4294967291U) << (uint16_t)7));
                        l_173 = (((((0xB4A0 < l_164) == p_75.f9) != (((!((__builtin_ia32_crc32qi(g_117.f0, p_75.f1) != ((int16_t)((uint32_t)l_158 % (uint32_t)l_167) << (int16_t)3)) & p_75.f4)) > l_157) == g_149.f1)) ^ 0xE5AE) | g_149.f7.f2);
                        g_117.f2 = ((!(-1)) < (~__builtin_bswap32(l_157)));
                    }
                    p_75.f4 = g_98.f0;
                }
                for (l_152 = (-13); (l_152 == 7); l_152 += 1)
                { 
                    int32_t l_191 = 7;
                    struct S1 l_193 = {0xDADC};
                    l_159 = (__builtin_clz(l_157) <= (((!((uint16_t)65526U >> (uint16_t)(g_149.f7.f0 > ((((((int16_t)g_149.f9 % (int16_t)l_128.f0) && ((-(uint32_t)((uint16_t)(((int16_t)((!g_147.f0) || 0) << (int16_t)__builtin_parityll(((uint32_t)1U % (uint32_t)l_191))) != g_149.f7.f2) >> (uint16_t)4)) == l_192)) | 0xD7E1829C) || g_149.f8) != p_75.f7.f0)))) > 0xA23E) >= 0x9AAB));
                    l_99 = l_193;
                    if (l_99.f0)
                        break;
                }
            }
            l_194 = p_75.f3;
            l_194 = ((int32_t)((int16_t)((int16_t)((int32_t)(p_75.f5 || 0xCE890267) + (int32_t)g_149.f4) << (int16_t)(((p_75.f6 > g_147.f0) && p_75.f3) <= ((((~(p_75.f9 <= (p_75.f4 || ((g_204 != p_75.f8) | p_75.f9)))) >= 0xE90912E2) != l_157) & g_117.f2))) >> (int16_t)6) - (int32_t)l_157);
        }
        g_149.f0 = ((uint16_t)__builtin_clzl(((uint16_t)(((-(int32_t)0xE9202AD8) & ((int32_t)((int16_t)(((int16_t)((((l_159 > 65535U) || ((int16_t)((l_152 < (((int16_t)(~(((int16_t)((p_75.f0 < (l_223 <= 0)) | (g_149.f2 > 65535U)) >> (int16_t)13) | 0x9471759D)) << (int16_t)6) && 0xECEE271C)) || p_75.f9) % (int16_t)(-8))) | 0x6CC6B5D0) >= 0xC4C8) % (int16_t)g_149.f7.f0) && g_97) << (int16_t)g_117.f2) - (int32_t)9U)) <= p_75.f0) << (uint16_t)g_149.f4)) >> (uint16_t)l_194);
        p_75.f4 = p_75.f0;
    }
    l_194 = (~(l_88 && 9));
    return p_75.f7;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_30();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_149.f4, "g_149.f4", print_hash_value);
    transparent_crc(g_149.f5, "g_149.f5", print_hash_value);
    transparent_crc(g_149.f6, "g_149.f6", print_hash_value);
    transparent_crc(g_149.f7.f0, "g_149.f7.f0", print_hash_value);
    transparent_crc(g_149.f7.f1, "g_149.f7.f1", print_hash_value);
    transparent_crc(g_149.f7.f2, "g_149.f7.f2", print_hash_value);
    transparent_crc(g_149.f8, "g_149.f8", print_hash_value);
    transparent_crc(g_149.f9, "g_149.f9", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_511.f0, "g_511.f0", print_hash_value);
    transparent_crc(g_511.f1, "g_511.f1", print_hash_value);
    transparent_crc(g_511.f2, "g_511.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



