


#define NO_LONGLONG



static long __undefined;


struct S0 {
   unsigned f0 : 23;
   unsigned f1 : 18;
   unsigned f2 : 13;
   signed f3 : 4;
   signed f4 : 5;
   int32_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   int16_t  f1;
};
#pragma pack(pop)


static int16_t g_6 = (-1);
static struct S1 g_74 = {4,0xCE5F};
static struct S0 g_83 = {673,45,71,3,-4,7};
static int32_t g_127 = 0xCB49D4AB;
static struct S1 g_231 = {0x34F7F432,0xDD22};



static uint32_t  func_25(void);
static int32_t  func_26(struct S1  p_27, int32_t  p_28, int16_t  p_29, int16_t  p_30);
static struct S1  func_31(uint32_t  p_32);
static int32_t  func_37(int32_t  p_38, struct S0  p_39, uint32_t  p_40, int32_t  p_41, int32_t  p_42);
static struct S0  func_44(int32_t  p_45, uint16_t  p_46, uint32_t  p_47);
static int16_t  func_55(int32_t  p_56);
static uint32_t  func_62(int32_t  p_63);
static struct S1  func_64(int32_t  p_65, struct S0  p_66, struct S1  p_67);
static struct S0  func_69(int32_t  p_70);
static int32_t  func_71(uint32_t  p_72, struct S1  p_73);





static uint32_t  func_25(void)
{ 
    uint32_t l_314 = 0x072B6661;
    int32_t l_316 = 0x06E27FC0;
    struct S1 l_321 = {1,0xEE42};
    uint16_t l_322 = 3U;
    int16_t l_384 = 1;
    int16_t l_398 = 0xA3F1;
    uint32_t l_466 = 9U;
    int16_t l_467 = (-1);
    l_316 = func_26(func_31(((uint32_t)1U + (uint32_t)g_6)), g_6, g_74.f1, l_314);
    if (((uint32_t)l_316 + (uint32_t)((int16_t)(0x566770F7 & (func_71(g_83.f4, l_321) | l_322)) << (int16_t)4)))
    { 
        g_83.f4 = 0x35DCD7E5;
    }
    else
    { 
        int32_t l_326 = 0xBF3C09BF;
        struct S1 l_346 = {0xD5459226,0xBE7C};
        int16_t l_383 = 0x9882;
        struct S0 l_434 = {2040,428,78,-0,1,0xFBE84A8F};
        struct S0 l_437 = {2073,253,47,0,1,0x6B14939E};
        for (l_321.f1 = 1; (l_321.f1 < 16); l_321.f1 += 8)
        { 
            struct S1 l_325 = {0,0};
            l_325 = g_74;
            if (l_326)
                continue;
        }
        if (((((~l_321.f0) != l_326) != l_326) == l_322))
        { 
            int32_t l_336 = 1;
            struct S0 l_341 = {1139,185,49,-2,-3,0xCAF29AE8};
            struct S1 l_347 = {0xA40A62B4,0xBB3C};
            uint16_t l_376 = 0xF915;
            uint32_t l_415 = 4294967295U;
            if ((__builtin_clzll(g_231.f1) <= (g_74.f0 > g_83.f2)))
            { 
                int32_t l_342 = 0x5A659281;
                struct S1 l_344 = {0x0AC84BFA,0x1F7A};
                struct S1 l_350 = {-1,6};
                g_83 = g_83;
                if ((func_37((!(-(int32_t)(((int16_t)((int16_t)0x7DD1 % (int16_t)((int32_t)((__builtin_parity(g_83.f5) == l_326) | g_83.f2) + (int32_t)(g_83.f4 > l_321.f0))) << (int16_t)l_336) >= ((int16_t)((int16_t)(0x0CB72F35 | 0x01C3AF00) - (int16_t)g_231.f1) % (int16_t)0x3A91)))), l_341, l_342, l_342, g_231.f1) != g_127))
                { 
                    uint32_t l_345 = 0U;
                    if (g_83.f3)
                    { 
                        uint16_t l_343 = 0x0BBB;
                        l_343 = func_62(g_83.f0);
                    }
                    else
                    { 
                        g_74 = l_344;
                    }
                    g_231 = l_344;
                    if (l_345)
                    { 
                        g_231 = l_346;
                        g_83.f3 = g_83.f3;
                        l_344 = l_347;
                    }
                    else
                    { 
                        g_83.f3 = __builtin_ia32_crc32qi(g_127, g_83.f1);
                        g_83.f3 = (g_231.f0 < ((uint16_t)0x5D33 - (uint16_t)(l_341.f2 == g_83.f4)));
                    }
                }
                else
                { 
                    uint16_t l_353 = 65534U;
                    int32_t l_354 = 6;
                    g_74 = l_350;
                    for (l_342 = (-30); (l_342 < (-15)); l_342 += 1)
                    { 
                        g_83.f4 = (__builtin_parityll(l_353) >= l_342);
                        l_354 = 0x7D95E908;
                    }
                }
                l_344 = l_346;
            }
            else
            { 
                g_83.f4 = l_341.f2;
            }
            g_83 = func_69(((g_74.f0 ^ (((int16_t)g_83.f3 >> (int16_t)((uint16_t)(l_341.f3 || 0xDC8556AB) << (uint16_t)(l_347.f0 ^ l_347.f0))) && ((g_6 && ((((int16_t)((uint16_t)l_336 % (uint16_t)l_346.f0) - (int16_t)(-8)) ^ 2U) ^ 0U)) > g_231.f0))) || g_83.f4));
            if ((((((uint16_t)(l_316 <= 0x17B4) << (uint16_t)6) & ((uint32_t)__builtin_clzll(((~((int16_t)(((int32_t)((int16_t)((((int32_t)l_376 - (int32_t)(l_376 != ((int16_t)((int16_t)(l_346.f1 && func_71(((int32_t)0x3F5E9370 + (int32_t)(func_71(g_83.f5, g_231) ^ g_74.f1)), g_74)) << (int16_t)l_341.f5) - (int16_t)g_83.f2))) == g_74.f1) | 1) + (int16_t)g_83.f4) - (int32_t)l_383) >= g_231.f0) << (int16_t)2)) ^ (-6))) + (uint32_t)g_83.f1)) <= 1U) == 4294967295U))
            { 
                uint32_t l_387 = 4294967294U;
                struct S1 l_418 = {1,-10};
                int32_t l_433 = 0xA8F51738;
                if (l_384)
                { 
                    uint32_t l_388 = 0x63D11B82;
                    int32_t l_399 = 5;
                    for (g_127 = (-23); (g_127 >= 13); g_127 += 1)
                    { 
                        g_83.f4 = ((l_387 != ((8 <= l_388) & (l_326 == 0))) && (g_127 > 0));
                    }
                    for (g_74.f1 = (-23); (g_74.f1 != 16); g_74.f1 += 1)
                    { 
                        int32_t l_400 = 7;
                        l_399 = (__builtin_ffs(l_384) && (((uint16_t)((~((int16_t)__builtin_clz(g_83.f0) << (int16_t)1)) != (-1)) << (uint16_t)(((g_231.f0 <= l_398) ^ (g_231.f1 ^ g_83.f2)) | 0x7AB4)) <= 0xED13A770));
                        if (l_400)
                            continue;
                    }
                }
                else
                { 
                    int16_t l_416 = (-9);
                    for (l_387 = 6; (l_387 <= 48); l_387 += 1)
                    { 
                        uint32_t l_412 = 0x413929D0;
                        int32_t l_417 = 0x35A706C5;
                        l_417 = (((uint32_t)(((func_55(g_6) == (((0U > (!func_71(l_387, l_321))) | (((uint16_t)g_6 + (uint16_t)(((uint16_t)l_412 >> (uint16_t)((((int16_t)l_415 >> (int16_t)7) <= l_416) != g_127)) <= (-6))) || g_6)) & 8U)) == l_326) ^ l_321.f1) % (uint32_t)l_387) || l_326);
                        l_418 = func_31(l_416);
                        l_433 = ((uint16_t)((0x4918EEBF <= l_412) <= ((int16_t)g_83.f1 % (int16_t)((uint32_t)__builtin_ffs(((int32_t)__builtin_popcountl((g_83.f0 && ((uint32_t)0x812B5625 + (uint32_t)((((int32_t)(l_418.f1 | __builtin_clzll((((uint16_t)g_83.f2 << (uint16_t)11) < ((l_387 == l_341.f4) != (-6))))) + (int32_t)0x914D1047) != g_83.f2) >= g_74.f1)))) - (int32_t)(-5))) - (uint32_t)l_341.f3))) << (uint16_t)g_83.f4);
                    }
                    g_231 = g_231;
                }
                g_83 = l_434;
            }
            else
            { 
                l_434.f4 = g_83.f5;
            }
        }
        else
        { 
            int32_t l_436 = 0x206AE2C2;
            l_436 = (0xB41E & __builtin_popcount((~(l_314 || l_436))));
        }
        g_83 = l_437;
        for (l_434.f5 = 19; (l_434.f5 < (-13)); l_434.f5 -= 1)
        { 
            g_83.f4 = __builtin_clzl(((-2) == (((((g_83.f5 == (g_83.f1 > ((int16_t)((uint16_t)g_127 + (uint16_t)g_83.f2) << (int16_t)g_83.f1))) == ((((int16_t)(((int16_t)g_231.f0 + (int16_t)((int16_t)l_437.f4 >> (int16_t)10)) > g_83.f5) + (int16_t)g_83.f3) == g_83.f3) <= l_314)) < l_437.f5) && l_321.f1) ^ 0xA4F64A20)));
        }
    }
    if ((((int16_t)(0 ^ (g_74.f1 & (func_62(g_74.f1) != ((uint16_t)((((int32_t)g_231.f0 - (int32_t)(l_321.f0 || g_231.f1)) || ((int16_t)((int16_t)(((uint16_t)((int16_t)l_314 >> (int16_t)(((int32_t)(g_74.f0 ^ l_321.f1) % (int32_t)g_74.f1) ^ (-4))) - (uint16_t)l_398) != g_127) + (int16_t)l_466) >> (int16_t)g_127)) | l_467) % (uint16_t)g_74.f0)))) >> (int16_t)l_467) <= 0))
    { 
        int32_t l_475 = 1;
        for (l_466 = 0; (l_466 != 30); l_466 += 6)
        { 
            struct S1 l_474 = {-9,0x0AF1};
            l_474 = func_31((((int16_t)((uint16_t)g_83.f5 << (uint16_t)14) << (int16_t)(g_231.f0 < g_6)) < 0));
            g_83.f4 = l_474.f0;
        }
        return l_475;
    }
    else
    { 
        uint16_t l_476 = 0xF74E;
        l_316 = (l_476 | 0x85437AD2);
        g_83 = func_44((((l_314 | ((int16_t)(((uint16_t)0x030B << (uint16_t)0) ^ ((uint32_t)((-(uint32_t)((int16_t)(__builtin_parityll((g_83.f2 != __builtin_ffsll(__builtin_popcount(l_476)))) <= g_83.f5) >> (int16_t)9)) & ((4294967289U && 1) | 0xFFCC)) + (uint32_t)g_83.f3)) - (int16_t)0x3FF0)) >= l_398) < l_476), l_316, l_466);
    }
    return l_466;
}




static int32_t  func_26(struct S1  p_27, int32_t  p_28, int16_t  p_29, int16_t  p_30)
{ 
    struct S1 l_315 = {-1,0x474D};
    l_315 = g_74;
    return g_83.f1;
}




static struct S1  func_31(uint32_t  p_32)
{ 
    int16_t l_43 = 1;
    int16_t l_159 = 0xADA0;
    int32_t l_165 = 4;
    struct S0 l_229 = {2154,448,33,-1,4,0x313487D1};
    int32_t l_232 = 0;
    uint32_t l_233 = 4294967295U;
    struct S1 l_245 = {0,0xED31};
    uint16_t l_313 = 0U;
    l_165 = ((uint16_t)(func_37(l_43, func_44(p_32, ((int16_t)(((l_43 ^ ((int32_t)((((g_6 || ((-(uint16_t)(65526U > (4294967295U < (6U != (((int16_t)func_55(p_32) << (int16_t)g_74.f1) | g_74.f0))))) ^ g_6)) ^ g_127) | p_32) || 0xC40EAF7A) + (int32_t)l_159)) > l_43) ^ g_74.f1) << (int16_t)l_159), l_159), p_32, g_127, l_43) || g_83.f4) >> (uint16_t)8);
    for (g_74.f0 = (-16); (g_74.f0 >= (-25)); g_74.f0 -= 5)
    { 
        int32_t l_186 = 9;
        struct S1 l_187 = {-1,0};
        int32_t l_191 = 0x20B3E3A3;
        struct S0 l_193 = {628,148,35,-1,3,0x80EE9E06};
        int16_t l_261 = 0xF15E;
        if (g_83.f1)
        { 
            struct S1 l_195 = {0x23DB1C6A,0};
            struct S1 l_198 = {-1,-1};
            int32_t l_210 = 0xA174EF01;
            uint32_t l_226 = 0x4A4612F2;
            uint32_t l_267 = 4294967295U;
            if (((uint16_t)((uint16_t)((int16_t)g_83.f2 << (int16_t)g_127) << (uint16_t)g_83.f0) << (uint16_t)8))
            { 
                int32_t l_190 = 0;
                l_191 = ((uint16_t)65535U % (uint16_t)((uint16_t)((int16_t)((p_32 != ((uint32_t)((((uint16_t)__builtin_parityll((((uint32_t)(func_71(func_55(l_186), l_187) < ((int16_t)(__builtin_bswap64(p_32) < (p_32 > 0U)) % (int16_t)1U)) + (uint32_t)4294967295U) & 0x4E889311)) << (uint16_t)p_32) != 9) == 0x6BEB) - (uint32_t)l_190)) == 0x741F) << (int16_t)p_32) - (uint16_t)g_74.f0));
            }
            else
            { 
                int32_t l_192 = 0;
                int32_t l_196 = 0xDB9FF8E1;
                struct S0 l_211 = {2853,197,53,-0,4,-1};
                struct S1 l_230 = {0,0x7DC5};
                if (l_192)
                { 
                    int16_t l_197 = 3;
                    if ((0x47049EDB == p_32))
                    { 
                        struct S1 l_194 = {0x302DEFC6,-1};
                        l_193 = func_69(p_32);
                        l_195 = l_194;
                    }
                    else
                    { 
                        l_196 = g_83.f0;
                    }
                    l_197 = p_32;
                }
                else
                { 
                    struct S1 l_209 = {0x63AE82E7,0x0242};
                    l_198 = g_74;
                    if (g_6)
                    { 
                        uint32_t l_203 = 4294967295U;
                        l_165 = ((int16_t)p_32 - (int16_t)((((int16_t)func_62(l_203) >> (int16_t)7) > (g_127 > 0U)) >= ((p_32 & (0x8BC30B2D >= p_32)) | (-(uint32_t)((uint16_t)(((uint16_t)((func_71(g_74.f1, g_74) == p_32) & l_43) + (uint16_t)0x3D21) > p_32) << (uint16_t)10)))));
                        l_209 = l_209;
                        l_210 = p_32;
                    }
                    else
                    { 
                        struct S0 l_212 = {2302,332,54,-1,-2,-7};
                        l_212 = l_211;
                    }
                    for (l_159 = 0; (l_159 == 7); l_159 += 2)
                    { 
                        uint32_t l_223 = 1U;
                        g_83.f4 = (((((uint16_t)(((((((uint32_t)(0x6CF05B78 == (((int16_t)(p_32 < (((((((uint16_t)(g_127 ^ l_223) << (uint16_t)(((uint32_t)((((p_32 | g_74.f0) && g_83.f4) > ((p_32 || p_32) != 0xDDA6)) == g_83.f2) % (uint32_t)0x0EC33E8E) > g_83.f2)) || p_32) ^ 0xE016D721) == l_223) > g_83.f2) & 8)) >> (int16_t)l_159) > l_193.f2)) % (uint32_t)l_198.f1) | p_32) && g_83.f0) ^ g_83.f1) == p_32) <= p_32) >> (uint16_t)6) > l_226) < p_32) < l_211.f1);
                    }
                    if (g_74.f1)
                        continue;
                }
                for (l_193.f5 = 13; (l_193.f5 <= (-18)); l_193.f5 -= 1)
                { 
                    l_229 = l_211;
                    g_231 = l_230;
                    return g_74;
                }
            }
            l_193.f3 = (__builtin_bswap64(func_55((g_83.f0 == __builtin_ctzll((l_232 & (l_195.f0 <= __builtin_clzl(l_233))))))) >= (((((int32_t)(((((int32_t)(g_127 | l_229.f5) + (int32_t)g_74.f1) | 0x60BF896E) > l_195.f1) >= g_231.f1) % (int32_t)g_127) > l_195.f0) ^ g_6) <= p_32));
            for (g_231.f0 = 26; (g_231.f0 != (-20)); g_231.f0 -= 1)
            { 
                int16_t l_244 = 0x6CDE;
                int32_t l_254 = 0x8CA354A2;
                struct S1 l_266 = {0xC994EAE7,6};
                l_244 = ((int16_t)((int16_t)l_187.f1 % (int16_t)g_74.f1) >> (int16_t)3);
                if (l_210)
                { 
                    return l_245;
                }
                else
                { 
                    uint32_t l_253 = 0x66CCFA5A;
                    int16_t l_260 = (-10);
                    struct S1 l_272 = {0x63B0F016,2};
                    for (l_195.f1 = 0; (l_195.f1 <= 7); l_195.f1 += 9)
                    { 
                        l_254 = ((((uint16_t)((uint32_t)(l_244 == ((l_244 != 0xD2F6EB1F) ^ (!((l_193.f0 < p_32) ^ 1)))) + (uint32_t)(((func_62((func_37(l_253, l_229, g_83.f3, p_32, p_32) == 0)) || l_226) < g_231.f1) | 0xDB754613)) << (uint16_t)6) == 5U) | l_198.f1);
                    }
                    if (l_187.f0)
                        continue;
                    if ((((int32_t)(((0xBFDC < ((uint32_t)(g_83.f3 > (g_83.f0 >= 0xC78ED14C)) - (uint32_t)(((!l_260) < ((((p_32 && l_261) && (((int32_t)(g_83.f3 >= func_71((func_71(((int32_t)0xECC25BD6 % (int32_t)0x824AA738), g_231) ^ 0x9677), l_266)) - (int32_t)g_74.f1) != l_195.f1)) && l_233) != 0x2CC2)) == l_267))) >= (-10)) ^ 5) + (int32_t)g_83.f3) < g_74.f1))
                    { 
                        g_83.f4 = l_245.f1;
                        g_83.f3 = __builtin_ia32_crc32qi(p_32, g_83.f4);
                        l_187 = func_64(((uint16_t)(((uint16_t)p_32 + (uint16_t)(-9)) ^ l_198.f1) >> (uint16_t)2), g_83, l_272);
                        if (g_83.f2)
                            break;
                    }
                    else
                    { 
                        g_83.f4 = ((g_231.f1 || ((int32_t)l_267 % (int32_t)p_32)) | (((uint16_t)(((((-(int16_t)((((uint16_t)(0xB81A || (((int16_t)(p_32 == g_6) - (int16_t)(((p_32 || ((uint32_t)__builtin_ctzl(((int16_t)(((0xE093 == ((uint16_t)(((p_32 != l_260) && g_74.f1) == l_260) >> (uint16_t)g_83.f1)) && 0x7FA9) | l_229.f4) >> (int16_t)l_245.f1)) % (uint32_t)l_195.f0)) >= 0xEF27) > l_193.f0)) != 0xAFF6)) - (uint16_t)65535U) & 0U) >= g_83.f1)) > g_231.f1) ^ p_32) || g_127) <= p_32) << (uint16_t)g_74.f0) < 0xF3E8));
                    }
                }
            }
        }
        else
        { 
            int16_t l_290 = 0;
            int32_t l_312 = 0;
            l_193.f4 = p_32;
            for (l_193.f5 = (-28); (l_193.f5 < (-7)); l_193.f5 += 1)
            { 
                int16_t l_295 = 0x58D4;
                l_295 = ((p_32 >= (((g_231.f0 == (l_290 <= ((int16_t)(((uint32_t)p_32 % (uint32_t)func_55(l_290)) && 1U) >> (int16_t)1))) && p_32) & (func_71(l_290, g_74) ^ g_74.f1))) | p_32);
            }
            for (l_193.f5 = 0; (l_193.f5 == 28); l_193.f5 += 5)
            { 
                uint16_t l_311 = 0U;
                for (p_32 = 0; (p_32 != 49); p_32 += 1)
                { 
                    g_83.f4 = 0x02DC3242;
                }
                g_83.f4 = ((((-(uint16_t)p_32) <= ((uint32_t)((uint32_t)((int32_t)((uint16_t)((((int16_t)__builtin_ffsll(g_6) >> (int16_t)1) || 65535U) < 0xD141) % (uint16_t)p_32) + (int32_t)(((l_229.f2 >= (-6)) == (p_32 ^ l_311)) != l_311)) % (uint32_t)l_290) % (uint32_t)p_32)) <= g_83.f1) != l_193.f5);
                l_312 = 0xED637181;
            }
            l_313 = ((1 != (-1)) | func_62(l_312));
        }
    }
    return g_231;
}




static int32_t  func_37(int32_t  p_38, struct S0  p_39, uint32_t  p_40, int32_t  p_41, int32_t  p_42)
{ 
    g_83.f3 = g_83.f4;
    return p_39.f1;
}




static struct S0  func_44(int32_t  p_45, uint16_t  p_46, uint32_t  p_47)
{ 
    struct S0 l_160 = {2481,463,2,-2,2,0xFD921813};
    uint32_t l_164 = 0xF7F12930;
    p_45 = (0x6E398B15 | p_47);
    l_160 = g_83;
    p_45 = (((((((~0x7620F8F3) != g_127) < l_160.f4) & (g_83.f0 | ((uint16_t)(__builtin_clzll(((g_74.f0 <= (l_164 < 0U)) && g_83.f2)) & l_160.f5) - (uint16_t)p_47))) >= g_83.f0) < 1) && p_46);
    return g_83;
}




static int16_t  func_55(int32_t  p_56)
{ 
    uint32_t l_150 = 4U;
    p_56 = (!(((int32_t)(g_6 <= (p_56 <= (((uint32_t)func_62(g_6) - (uint32_t)((int16_t)g_6 << (int16_t)l_150)) > ((((uint16_t)(p_56 < (p_56 || (4294967293U && g_74.f1))) << (uint16_t)l_150) == l_150) && g_127)))) - (int32_t)g_6) | g_127));
    if ((g_6 >= 0))
    { 
        uint16_t l_153 = 0x9EB4;
        g_83.f4 = 0x6517299F;
        g_83.f4 = ((l_153 == 1U) & ((int32_t)g_83.f0 % (int32_t)l_153));
        g_83.f3 = 0x87D74882;
    }
    else
    { 
        int32_t l_158 = (-1);
        p_56 = (0xB492AE4C && ((int16_t)p_56 - (int16_t)(l_158 && p_56)));
    }
    return p_56;
}




static uint32_t  func_62(int32_t  p_63)
{ 
    uint32_t l_68 = 0xE9505C00;
    struct S1 l_140 = {0xC8BF5EF5,0x3C84};
    struct S0 l_141 = {511,43,19,-3,-3,0x05CCE5AB};
    l_140 = func_64(l_68, func_69(func_71(p_63, g_74)), g_74);
    l_140 = func_64(g_83.f1, l_141, g_74);
    l_141.f4 = ((((uint16_t)__builtin_ffsl(g_83.f1) << (uint16_t)l_140.f1) || p_63) == ((((int16_t)l_141.f0 << (int16_t)((uint32_t)l_141.f5 + (uint32_t)((g_83.f0 & l_141.f1) < 65535U))) & g_83.f1) == g_83.f3));
    return g_83.f1;
}




static struct S1  func_64(int32_t  p_65, struct S0  p_66, struct S1  p_67)
{ 
    int32_t l_86 = 0x766298A2;
    struct S1 l_139 = {0,0xBF11};
    l_86 = ((int32_t)(p_65 <= ((__builtin_ffs(l_86) ^ ((uint16_t)p_67.f1 >> (uint16_t)4)) >= 0x9AEE)) - (int32_t)(g_83.f3 && func_71(l_86, g_74)));
    if (l_86)
    { 
        int16_t l_89 = 0x7094;
        g_83.f4 = (l_89 > (g_83.f5 || (p_65 && (((0U | g_83.f1) && l_89) & (((int16_t)((((((uint16_t)((__builtin_clzl(func_71(l_89, p_67)) >= 1U) == p_67.f1) << (uint16_t)g_83.f1) | 6) != p_66.f3) && l_86) != l_89) >> (int16_t)4) > l_89)))));
    }
    else
    { 
        int32_t l_94 = 0x2E988A7C;
        if ((((g_83.f2 != (((l_94 >= ((int32_t)l_86 % (int32_t)((uint32_t)0x24639390 - (uint32_t)(g_83.f4 | (((int16_t)(((uint32_t)func_71((((0xBBB0 || __builtin_ctz((((p_66.f5 | ((p_66.f1 > g_83.f4) > p_66.f3)) & l_94) || l_86))) == 0U) && p_67.f1), g_74) - (uint32_t)l_86) || g_6) >> (int16_t)g_83.f0) > p_66.f0))))) ^ 0U) | l_94)) != g_83.f0) != 0x64756850))
        { 
            int32_t l_106 = 0x8EF8B48F;
            p_66 = g_83;
            for (p_67.f0 = 25; (p_67.f0 != 11); p_67.f0 -= 1)
            { 
                int16_t l_105 = 1;
                g_83.f4 = (((((-1) || func_71(l_105, g_74)) >= l_106) != ((0xF4F29679 != (g_74.f0 >= ((int16_t)g_83.f4 + (int16_t)((uint16_t)0x1F3B - (uint16_t)65535U)))) && p_65)) ^ 0x9E8B);
            }
            l_94 = ((int32_t)((((int16_t)l_106 % (int16_t)((uint16_t)((uint16_t)g_83.f3 + (uint16_t)((0U || g_83.f2) != l_86)) >> (uint16_t)((uint16_t)(((int16_t)((g_74.f1 >= p_66.f4) >= ((0x3474 & __builtin_parity(((int16_t)((uint16_t)l_94 >> (uint16_t)l_106) >> (int16_t)8))) >= p_65)) >> (int16_t)14) & g_83.f2) << (uint16_t)g_127))) >= g_83.f5) == g_74.f1) - (int32_t)p_66.f4);
        }
        else
        { 
            g_83 = func_69(p_66.f4);
            g_83.f3 = (((int32_t)(g_83.f0 || (!((uint16_t)p_66.f1 >> (uint16_t)p_66.f1))) + (int32_t)((((int16_t)((uint32_t)__builtin_parityll(g_83.f4) - (uint32_t)l_86) - (int16_t)p_65) && (-(int16_t)((g_74.f0 >= g_74.f0) & p_66.f1))) >= p_66.f1)) > g_6);
        }
        p_66.f4 = g_83.f4;
        g_83.f3 = (!(g_6 | p_66.f2));
        g_83 = func_69(((p_67.f1 > p_66.f2) && 65535U));
    }
    return l_139;
}




static struct S0  func_69(int32_t  p_70)
{ 
    int16_t l_82 = 2;
    p_70 = (((g_6 > ((((uint32_t)__builtin_clzl(p_70) % (uint32_t)p_70) <= ((int16_t)0x2BB3 + (int16_t)((__builtin_ffs(l_82) | p_70) >= p_70))) >= g_74.f1)) != g_74.f0) < 0xBF3A);
    return g_83;
}




static int32_t  func_71(uint32_t  p_72, struct S1  p_73)
{ 
    int32_t l_76 = 0x39B9878F;
    int32_t l_77 = 9;
    l_76 = __builtin_bswap64((!g_74.f0));
    l_77 = g_74.f1;
    return l_76;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_25();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_83.f5, "g_83.f5", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



