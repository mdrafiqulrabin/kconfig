



static long __undefined;


union U0 {
   volatile uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile unsigned f4 : 19;
};

union U1 {
   int16_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint16_t  f3;
};


static uint64_t g_8 = 1UL;
static int32_t g_46 = 1L;
static volatile int32_t *g_73 = (void*)0;
static union U1 g_101 = {1L};
static int32_t g_104 = 0xE4440DB5L;
static int32_t *g_103 = &g_104;
static union U0 g_114 = {0xD11E6AC9L};
static union U0 *g_115 = &g_114;
static float g_150 = 0x0.2p-1;
static volatile float g_154 = (-0x1.3p+1);
static volatile float *g_153 = &g_154;
static volatile float **g_152 = &g_153;
static int32_t g_179 = 0x8A77D7D7L;
static union U0 **g_201 = &g_115;
static union U0 ***g_200 = &g_201;
static int32_t **g_227 = &g_103;
static int32_t ***g_226 = &g_227;
static int32_t ****g_254 = &g_226;
static volatile union U1 **g_289 = (void*)0;
static volatile union U1 ***g_288 = &g_289;
static volatile int32_t g_319 = 0L;
static volatile int32_t *g_318 = &g_319;
static int32_t g_405 = 0x679340A2L;
static volatile uint32_t g_439 = 0xCB729E96L;
static union U0 ****g_532 = &g_200;
static union U0 *****g_531 = &g_532;
static int32_t g_563 = 0x8C645B7BL;
static volatile union U1 *****g_643 = (void*)0;
static int32_t g_664 = 1L;
static int32_t *g_663 = &g_664;
static union U1 *g_679 = (void*)0;



static uint16_t  func_32(void);
static int32_t * func_33(float  p_34, int32_t * p_35, uint32_t  p_36, int32_t * p_37, int16_t  p_38);
static int32_t * func_40(float  p_41, uint32_t  p_42, float  p_43, int32_t * p_44);
static int16_t  func_47(union U1  p_48, int32_t * p_49);
static union U1  func_50(uint32_t  p_51, int32_t * p_52);
static union U1 * func_63(union U1 * p_64, uint64_t  p_65, union U1 * p_66, uint16_t  p_67, union U1 * p_68);
static union U1 * func_69(float  p_70, uint32_t  p_71, uint32_t  p_72);
static uint64_t  func_77(union U1 * p_78, int32_t  p_79, union U1  p_80, int16_t  p_81, union U1 * p_82);
static int32_t  func_85(uint32_t  p_86);
static int32_t * func_94(union U1 * p_95, uint32_t  p_96, uint64_t  p_97, int32_t * p_98, int32_t  p_99);





static uint16_t  func_32(void)
{ 
    int16_t l_39 = 0x3CA3L;
    int32_t *l_45 = &g_46;
    int32_t *l_562 = &g_563;
    float l_693 = 0x2.17D98Bp+61;
    l_45 = func_33(l_39, func_40(l_39, g_8, g_8, l_45), (((((func_47(func_50(((65535UL >= 0xF419L) < g_8), l_45), l_562) <= g_8) & g_8) & g_8) != 18446744073709551608UL) ^ 0UL), g_663, g_8);
    (**g_226) = l_562;
    (*l_45) = l_693;
    return (*l_45);
}




static int32_t * func_33(float  p_34, int32_t * p_35, uint32_t  p_36, int32_t * p_37, int16_t  p_38)
{ 
    union U1 **l_668 = (void*)0;
    union U1 ***l_667 = &l_668;
    union U1 ****l_666 = &l_667;
    union U1 *****l_665 = &l_666;
    union U0 *l_669 = &g_114;
    int32_t l_672 = 0x0D7C4660L;
    int32_t *l_682 = &g_664;
    l_665 = l_665;
    (*g_201) = l_669;
    (**g_152) = (*g_153);
    if (((int16_t)l_672 >> (int16_t)g_563))
    { 
        union U1 *l_677 = &g_101;
        for (g_101.f0 = 14; (g_101.f0 < 15); g_101.f0 += 1)
        { 
            union U1 **l_678 = (void*)0;
            g_679 = l_677;
        }
        for (p_38 = (-16); (p_38 >= (-7)); p_38++)
        { 
            int16_t l_683 = 0xB1A3L;
            l_682 = p_37;
            (**g_152) = l_683;
            return p_37;
        }
        (**g_226) = p_37;
    }
    else
    { 
        union U0 *l_684 = &g_114;
        int32_t l_689 = 0x5B2FE7C4L;
        (***g_532) = l_684;
        (*g_318) = 0x75F79AE8L;
        for (g_664 = (-25); (g_664 >= 1); g_664++)
        { 
            int32_t l_692 = 0x4B578590L;
            (**g_226) = func_40(((float)(l_689 != __builtin_popcountll(((p_38 && __builtin_ia32_crc32qi((6L & ((int16_t)(0x6E95L != l_692) << (int16_t)12)), (p_38 & (*l_682)))) >= g_46))) / (float)(*g_153)), p_36, l_689, &l_692);
        }
        (*g_227) = func_40(((((-0x8.5p-1) == (*g_153)) == l_689) >= ((**g_200) != (void*)0)), g_179, p_36, p_35);
    }
    return p_37;
}




static int32_t * func_40(float  p_41, uint32_t  p_42, float  p_43, int32_t * p_44)
{ 
    (*p_44) = (-1L);
    return &g_46;
}




static int16_t  func_47(union U1  p_48, int32_t * p_49)
{ 
    int64_t l_564 = 0xD468A62B9273867ALL;
    union U1 l_565 = {7L};
    int32_t *l_573 = &g_104;
    union U0 *l_581 = &g_114;
    int32_t l_642 = 0xACBF304AL;
    int32_t l_658 = 0x664EA211L;
    (****g_254) = (****g_254);
    (***g_254) = p_49;
    for (l_565.f3 = 0; (l_565.f3 != 2); l_565.f3 += 1)
    { 
        int32_t *l_570 = &g_563;
        union U1 *l_611 = &g_101;
        (*g_227) = l_570;
        if (((int16_t)(*l_570) << (int16_t)g_8))
        { 
            uint64_t l_578 = 18446744073709551615UL;
            uint32_t l_596 = 18446744073709551615UL;
            int32_t l_609 = (-1L);
            union U1 *l_610 = &g_101;
            int32_t *l_614 = &g_563;
            union U0 ***l_661 = &g_201;
            l_570 = l_573;
            (**g_226) = (***g_254);
            if (((int64_t)g_405 + (int64_t)(0x52A002B2L <= (0xE326D504L >= ((int16_t)l_578 << (int16_t)9)))))
            { 
                for (g_101.f2 = 0; (g_101.f2 > 58); g_101.f2 += 2)
                { 
                    (**g_200) = l_581;
                    (**g_152) = (-0x6.0p-1);
                }
            }
            else
            { 
                int32_t *l_589 = &g_179;
                float l_597 = 0x2.0p+1;
                union U1 *l_612 = &l_565;
                (**g_226) = l_589;
                (***g_254) = l_589;
                for (g_114.f3 = 0; (g_114.f3 > 1); g_114.f3 += 4)
                { 
                    union U0 *l_600 = &g_114;
                    (*g_201) = l_600;
                    (*l_573) = 0x7.6p+1;
                    if (((int16_t)(*l_589) >> (int16_t)12))
                    { 
                        (**g_226) = p_49;
                        (*g_288) = (*g_288);
                    }
                    else
                    { 
                        (*g_227) = (void*)0;
                        (***g_254) = p_49;
                        (*l_573) = (~((**g_531) != (*g_532)));
                        return g_319;
                    }
                }
                (*g_103) = (-(uint64_t)((*p_49) && 0x5FB80A2EL));
            }
            if ((~l_578))
            { 
                (**g_226) = (*g_227);
                (**g_152) = ((-0x1.Bp+1) >= ((*l_573) >= p_48.f3));
                for (g_101.f2 = 0; (g_101.f2 == 6); g_101.f2 += 1)
                { 
                    uint32_t l_623 = 4294967295UL;
                    return l_623;
                }
            }
            else
            { 
                uint32_t l_651 = 1UL;
                if (((uint16_t)(*l_614) >> (uint16_t)g_405))
                { 
                    union U1 **l_626 = &l_611;
                    float *l_639 = &g_150;
                    float **l_638 = &l_639;
                    (*l_626) = l_610;
                    for (l_564 = 0; (l_564 != (-3)); l_564 -= 1)
                    { 
                        (*l_639) = ((float)((float)((((float)(*g_153) / (float)p_48.f2) < (p_48.f2 != (+((((float)0xA.736D7Cp+98 - (float)((&g_153 == l_638) >= ((float)g_101.f0 - (float)(p_48.f0 <= (-0x1.5p+1))))) > (-0x10.Ep-1)) <= 0x6.5p-1)))) == p_48.f3) - (float)p_48.f3) - (float)l_642);
                        if ((*p_49))
                            continue;
                    }
                }
                else
                { 
                    union U1 *l_644 = (void*)0;
                    g_643 = g_643;
                    if ((****g_254))
                        continue;
                    (***g_254) = p_49;
                }
                (**g_226) = l_614;
                for (g_563 = 0; (g_563 <= 1); g_563 += 1)
                { 
                    uint16_t l_662 = 0x1B0AL;
                    if ((*p_49))
                    { 
                        if ((*p_49))
                            break;
                        l_662 = (((uint64_t)(__builtin_ffs((*g_318)) != (((*p_49) < l_658) || g_563)) - (uint64_t)p_48.f3) | (p_48.f0 != ((int16_t)(((void*)0 != l_661) == 18446744073709551615UL) % (int16_t)p_48.f2)));
                        (***g_254) = p_49;
                        return g_405;
                    }
                    else
                    { 
                        return (*l_614);
                    }
                }
                return p_48.f2;
            }
        }
        else
        { 
            return p_48.f0;
        }
        (**g_226) = (void*)0;
    }
    (***g_254) = (*g_227);
    return g_439;
}




static union U1  func_50(uint32_t  p_51, int32_t * p_52)
{ 
    union U1 l_55 = {6L};
    int32_t l_62 = 0x5EA37665L;
    int32_t *l_561 = &g_104;
    if (g_8)
    { 
        for (p_51 = 0; (p_51 == 41); p_51 += 2)
        { 
            return l_55;
        }
        l_62 = ((((uint16_t)(p_52 == (void*)0) >> (uint16_t)8) != ((int16_t)0L << (int16_t)2)) || ((int16_t)p_51 >> (int16_t)12));
    }
    else
    { 
        int64_t l_83 = 0xFF9046E0AEE481DBLL;
        union U1 l_84 = {1L};
        uint32_t l_537 = 0x006C132CL;
        union U1 **l_546 = (void*)0;
        union U1 *l_548 = &g_101;
        union U1 **l_547 = &l_548;
        uint32_t l_559 = 5UL;
        int32_t l_560 = 0x42BDF68DL;
        (*l_547) = func_63(func_69((g_73 == (void*)0), ((((((uint64_t)(~0L) + (uint64_t)1UL) || func_77(&l_55, (l_83 <= (l_83 != __builtin_bswap64(p_51))), l_84, l_55.f0, &l_84)) ^ 0x5A0F50867CCE03AFLL) && 0x6AEAC0E2L) > g_8), l_55.f2), l_537, &l_55, g_8, &l_55);
        l_560 = ((float)((l_55.f0 > ((((float)0x1.2p-1 / (float)((float)(*g_153) / (float)g_8)) <= ((float)p_51 - (float)g_405)) == ((g_101.f3 != ((float)l_559 + (float)((p_51 >= p_51) >= l_55.f2))) == g_104))) == l_83) - (float)(-0x1.Fp+1));
    }
    (*g_227) = l_561;
    return l_55;
}




static union U1 * func_63(union U1 * p_64, uint64_t  p_65, union U1 * p_66, uint16_t  p_67, union U1 * p_68)
{ 
    int64_t l_538 = (-2L);
    union U1 *l_543 = (void*)0;
    union U1 **l_542 = &l_543;
    (*g_318) = (l_538 >= (g_319 == (((uint16_t)((~(l_542 != &p_68)) || l_538) << (uint16_t)3) || (((g_101.f2 < ((*g_288) == &l_543)) && (p_65 != l_538)) && l_538))));
    return p_68;
}




static union U1 * func_69(float  p_70, uint32_t  p_71, uint32_t  p_72)
{ 
    int16_t l_506 = 0x5A8BL;
    float *l_511 = &g_150;
    float **l_510 = &l_511;
    float ***l_509 = &l_510;
    union U1 *l_536 = &g_101;
    if ((((uint16_t)(g_104 >= 0x66B25F4EC577488DLL) << (uint16_t)10) < (-1L)))
    { 
        union U1 *l_505 = &g_101;
        int32_t *l_516 = &g_179;
        (***g_254) = l_511;
        return &g_101;
    }
    else
    { 
        uint32_t l_526 = 4294967286UL;
        float l_535 = 0x1.4p-1;
        (*g_227) = (void*)0;
        (**g_226) = (***g_254);
        for (g_405 = (-5); (g_405 >= 17); g_405 += 3)
        { 
            (*g_153) = (((float)(*g_153) / (float)((!((float)((float)(-0x4.Dp-1) + (float)(l_526 <= ((float)((((float)((((void*)0 == g_531) <= 0xD.39E9BDp-67) >= p_72) + (float)p_72) >= ((float)((void*)0 != (*l_509)) - (float)0x0.3481D3p-66)) == l_535) - (float)(-0x7.Dp-1)))) - (float)l_506)) >= 0x3.Bp-1)) != 0x3.8p-1);
            return &g_101;
        }
    }
    return l_536;
}




static uint64_t  func_77(union U1 * p_78, int32_t  p_79, union U1  p_80, int16_t  p_81, union U1 * p_82)
{ 
    uint64_t l_92 = 3UL;
    int32_t l_93 = (-7L);
    union U0 **l_502 = &g_115;
    l_93 = __builtin_ffsl(func_85((0x1AEA0787L | ((int32_t)((int64_t)((!l_92) >= 1L) / (int64_t)l_93) - (int32_t)g_8))));
    (***g_254) = &p_79;
    (*g_200) = l_502;
    return p_80.f3;
}




static int32_t  func_85(uint32_t  p_86)
{ 
    union U1 *l_100 = &g_101;
    int32_t l_102 = 1L;
    int32_t *l_344 = (void*)0;
    uint16_t l_346 = 0xA6E4L;
    float *l_352 = &g_150;
    float **l_351 = &l_352;
    int32_t ***l_368 = &g_227;
    union U1 **l_433 = &l_100;
    union U1 ***l_432 = &l_433;
    float ***l_443 = &l_351;
    float ****l_442 = &l_443;
    l_344 = func_94(l_100, l_102, g_8, g_103, ((void*)0 == l_100));
    if ((((*l_344) | p_86) != (((l_100 == (void*)0) || ((void*)0 == (*g_152))) ^ (*l_344))))
    { 
        (*g_153) = (*g_153);
        (*l_344) = p_86;
        (*l_344) = 0L;
    }
    else
    { 
        float l_345 = 0x0.8p-1;
        int32_t l_353 = 0x9343FE88L;
        union U1 *l_365 = &g_101;
        float ***l_379 = &l_351;
        volatile union U1 ****l_381 = &g_288;
        int32_t *l_401 = &g_179;
        union U1 **l_486 = &l_365;
        uint32_t l_499 = 9UL;
        if ((((*l_344) && l_346) != ((int64_t)((int16_t)(l_351 == &l_352) % (int16_t)(l_353 | (((int16_t)(((uint64_t)((g_101.f0 && (&g_289 != (void*)0)) != l_353) / (uint64_t)p_86) & 0L) % (int16_t)g_104) < g_8))) + (int64_t)p_86)))
        { 
            volatile uint32_t l_358 = 18446744073709551615UL;
            l_358 = (*g_318);
            (***g_254) = (void*)0;
            (*g_227) = &l_102;
            for (g_104 = (-16); (g_104 > 0); g_104 += 4)
            { 
                for (g_101.f0 = 0; (g_101.f0 == 8); g_101.f0++)
                { 
                    for (l_353 = (-18); (l_353 == (-28)); --l_353)
                    { 
                        union U1 **l_366 = (void*)0;
                        union U1 **l_367 = &l_100;
                        (*l_367) = l_365;
                        (*g_254) = l_368;
                    }
                    return g_114.f0;
                }
                (**g_152) = ((float)(+((float)0xB.DC7393p+31 / (float)p_86)) - (float)((***l_368) == ((**g_152) == (-0x4.6p+1))));
                if ((p_86 == l_353))
                { 
                    (**l_351) = 0x2.0AB791p-66;
                }
                else
                { 
                    for (g_101.f1 = (-29); (g_101.f1 <= 34); g_101.f1 += 1)
                    { 
                        int32_t *l_380 = &l_353;
                        (***l_379) = ((!((float)p_86 - (float)(l_379 == (void*)0))) == p_86);
                        (***g_254) = (***g_254);
                        (**g_227) = (*l_344);
                        (*g_227) = l_380;
                    }
                    (**g_226) = (*g_227);
                    return g_114.f3;
                }
            }
        }
        else
        { 
            uint16_t l_383 = 0x8D99L;
            union U1 *l_384 = &g_101;
            int32_t *l_388 = &g_104;
            int64_t l_400 = 1L;
            float ***l_426 = (void*)0;
            union U0 **l_464 = &g_115;
            uint16_t l_498 = 0x3CCCL;
            l_381 = &g_288;
            if ((*g_318))
            { 
                uint16_t l_385 = 0UL;
                uint16_t l_410 = 0xB39CL;
                int32_t *l_411 = &g_179;
                float **l_429 = &l_352;
                int32_t ****l_455 = &l_368;
                if ((!l_383))
                { 
                    int32_t *l_386 = (void*)0;
                    (**l_368) = l_388;
                    l_401 = func_94(l_384, ((__builtin_clz(p_86) || ((uint16_t)((int16_t)(~(0x590321B1L || (**g_227))) - (int16_t)((int16_t)((uint32_t)((int16_t)p_86 << (int16_t)3) + (uint32_t)(((((void*)0 != (*l_379)) == (**g_227)) == (***l_368)) < 9UL)) >> (int16_t)g_104)) << (uint16_t)0)) > 1UL), g_101.f3, (**g_226), l_400);
                }
                else
                { 
                    int32_t *l_404 = &g_179;
                    union U1 *l_416 = &g_101;
                    for (g_101.f1 = (-23); (g_101.f1 == 24); g_101.f1++)
                    { 
                        (*l_388) = 0xBA48F3C6L;
                        (**g_226) = l_404;
                    }
                    if ((g_405 <= g_114.f1))
                    { 
                        l_410 = (((uint32_t)(((int64_t)0xE239A327664DF74ALL - (int64_t)18446744073709551612UL) != 0xF077623BL) - (uint32_t)0xAE92661EL) != 0L);
                        (**l_368) = l_411;
                        (*g_318) = ((int16_t)((&l_379 == (void*)0) >= ((uint64_t)p_86 + (uint64_t)g_101.f2)) >> (int16_t)8);
                        (**g_226) = (void*)0;
                    }
                    else
                    { 
                        union U1 **l_417 = (void*)0;
                        union U1 **l_418 = &l_365;
                        int32_t *l_419 = &g_104;
                        (*l_418) = l_416;
                        (**l_368) = &l_353;
                        (*g_103) = (l_426 != (void*)0);
                        (*g_227) = (void*)0;
                    }
                    (*l_388) = ((void*)0 != &l_351);
                    return g_114.f2;
                }
                for (g_405 = 0; (g_405 == (-13)); g_405 -= 8)
                { 
                    int32_t *l_430 = &l_353;
                    (*l_379) = l_429;
                    (**g_226) = l_430;
                    if (__builtin_popcount(p_86))
                    { 
                        union U1 **l_431 = &l_100;
                        int32_t l_434 = 0xF064817DL;
                        (*l_431) = &g_101;
                        (*l_401) = ((l_432 == (void*)0) > l_434);
                        (**g_227) = ((*l_388) < ((int16_t)(((l_434 && (*l_411)) || ((uint16_t)g_439 >> (uint16_t)8)) <= __builtin_ffs(p_86)) << (int16_t)12));
                        (**g_152) = l_434;
                    }
                    else
                    { 
                        return g_101.f0;
                    }
                }
                if (((0x93534EEDL ^ (((__builtin_parityl(g_439) ^ 0xBA16L) <= (65535UL < ((uint16_t)(g_101.f3 | (&l_426 == l_442)) - (uint16_t)((*l_411) ^ 0x80DFEFBD31E4A702LL)))) & p_86)) >= 0x282AL))
                { 
                    uint16_t l_461 = 1UL;
                    union U1 *l_480 = &g_101;
                    if (((int32_t)((uint16_t)p_86 >> (uint16_t)4) % (int32_t)p_86))
                    { 
                        int32_t l_448 = (-4L);
                        l_448 = (g_179 > ((*l_388) != (&g_152 != l_379)));
                        l_461 = (((((g_8 >= (*l_411)) > (0x1C0F86EE01CB1AA1LL > ((-1L) < (0xD719L == ((uint16_t)((void*)0 != l_455) / (uint16_t)g_8))))) > (((uint16_t)(!(((uint16_t)(p_86 >= 0xA7BDL) << (uint16_t)5) && p_86)) >> (uint16_t)11) <= p_86)) || 0xD35928AD5A55B995LL) && p_86);
                    }
                    else
                    { 
                        uint32_t l_472 = 2UL;
                        (***g_254) = l_388;
                        (*g_153) = ((-0x5.0p-1) == ((-(float)(-0x1.5p-1)) < ((float)0xD.DF2B2Ep-20 + (float)0x1.DE95E6p-95)));
                        (*l_344) = (****g_254);
                    }
                    for (g_114.f2 = (-29); (g_114.f2 == 52); g_114.f2 += 6)
                    { 
                        (**g_226) = l_411;
                    }
                    (*l_388) = ((*l_388) || ((uint16_t)0UL << (uint16_t)(((void*)0 == l_480) || ((int16_t)(g_439 == (p_86 > p_86)) >> (int16_t)0))));
                }
                else
                { 
                    union U1 **l_485 = &l_384;
                    l_486 = l_485;
                }
            }
            else
            { 
                float l_491 = 0x6.EDFAD6p-92;
                int32_t l_492 = 0x03B199EEL;
                (*l_344) = ((int16_t)((int32_t)l_492 / (int32_t)((int64_t)((((-(uint32_t)l_498) != 0L) & __builtin_ctz(g_104)) <= ((*l_388) ^ l_499)) + (int64_t)(*l_388))) - (int16_t)l_492);
            }
        }
        (*g_153) = (((&g_152 == &g_152) > (0x1.0p+1 > (*g_153))) != (((0x1.C0BBEFp+77 < p_86) >= ((((void*)0 != (*l_381)) != ((float)((0xD.8EB79Cp-43 >= (-0x6.0p+1)) < 0xE.B5F2AAp+63) - (float)0xB.DC6FD7p-61)) != g_101.f3)) == p_86));
        (*l_344) = (*g_318);
        (*g_153) = (((*l_368) == (void*)0) < (0x4.9p-1 <= ((*g_152) == (**l_379))));
    }
    return p_86;
}




static int32_t * func_94(union U1 * p_95, uint32_t  p_96, uint64_t  p_97, int32_t * p_98, int32_t  p_99)
{ 
    int16_t l_112 = 1L;
    union U0 *l_113 = &g_114;
    int16_t l_129 = 0x9341L;
    int32_t *l_151 = &g_104;
    union U0 ****l_257 = &g_200;
    float *l_278 = &g_150;
    float **l_277 = &l_278;
    float ***l_276 = &l_277;
    union U1 *l_292 = &g_101;
    union U1 **l_291 = &l_292;
    union U1 ***l_290 = &l_291;
    if ((!((uint16_t)((int16_t)(((((((uint16_t)p_97 << (uint16_t)0) != l_112) & (*p_98)) | (0xB72CD76EL > __builtin_bswap64(p_99))) && (p_99 != ((((l_112 | 5L) ^ g_101.f3) > 0x91BE676CD85683D5LL) || (-4L)))) | g_101.f3) << (int16_t)8) - (uint16_t)0xE1B8L)))
    { 
        int32_t *l_120 = (void*)0;
        float **l_185 = (void*)0;
        union U0 **l_198 = &g_115;
        int32_t l_246 = 0xFDD43B54L;
        g_115 = l_113;
        (*p_98) = (((int32_t)(*p_98) + (int32_t)((uint32_t)(l_120 != &g_104) + (uint32_t)0L)) <= __builtin_ctz(l_112));
        for (g_114.f3 = 15; (g_114.f3 <= 25); g_114.f3 += 1)
        { 
            int32_t l_136 = (-10L);
            int32_t ***l_194 = (void*)0;
            int32_t *l_206 = (void*)0;
            union U0 ****l_211 = &g_200;
            union U0 *****l_210 = &l_211;
            union U1 *l_247 = &g_101;
            int32_t ****l_253 = &g_226;
            for (g_104 = 0; (g_104 < (-22)); g_104 -= 5)
            { 
                uint32_t l_139 = 0x9868D596L;
                int32_t *l_144 = &g_114.f1;
                union U0 *l_195 = (void*)0;
                if (((int16_t)((uint32_t)__builtin_ffsl((g_104 >= (((0UL ^ (((l_129 < 4294967286UL) | (((int64_t)((int16_t)((int16_t)__builtin_ctz(l_136) << (int16_t)((int64_t)(g_8 == ((p_97 > p_97) < p_97)) - (int64_t)0x2D9EA4C7FA1D5754LL)) << (int16_t)g_114.f1) + (int64_t)l_139) <= (-6L))) != l_112)) >= p_96) || 0x5943L))) + (uint32_t)(*g_103)) << (int16_t)0))
                { 
                    for (l_136 = (-19); (l_136 <= (-4)); l_136 += 1)
                    { 
                        int32_t **l_143 = (void*)0;
                        int32_t ***l_142 = &l_143;
                        (*l_142) = &g_103;
                        return l_144;
                    }
                    if (((int64_t)__builtin_clz(p_96) - (int64_t)(((int64_t)(g_114.f4 > p_96) + (int64_t)p_96) & p_99)))
                    { 
                        float *l_149 = &g_150;
                        p_99 = (*p_98);
                        (*l_149) = (&p_99 != (void*)0);
                        if ((*g_103))
                            break;
                        p_98 = l_151;
                    }
                    else
                    { 
                        volatile float **l_155 = &g_153;
                        l_155 = g_152;
                    }
                    if ((*g_103))
                        break;
                }
                else
                { 
                    int32_t *l_158 = &g_114.f1;
                    int32_t *l_178 = &g_179;
                    int32_t **l_180 = &l_120;
                    if ((*g_103))
                        break;
                    for (g_101.f3 = 0; (g_101.f3 != 39); g_101.f3 += 1)
                    { 
                        return l_158;
                    }
                    (*l_178) = (((uint16_t)((int64_t)(((uint16_t)l_136 + (uint16_t)((((uint16_t)(*l_158) << (uint16_t)(-(uint32_t)(*l_144))) >= g_101.f2) >= ((-2L) & ((uint16_t)((uint32_t)(((uint16_t)(*l_158) % (uint16_t)((uint16_t)g_104 << (uint16_t)1)) | (((18446744073709551615UL <= (*l_144)) && (*p_98)) != (*l_158))) % (uint32_t)(*p_98)) >> (uint16_t)p_96)))) < g_104) % (int64_t)0x3565F0DE8C290DB8LL) << (uint16_t)p_97) & (*l_144));
                    (*l_180) = &p_99;
                }
                (*g_153) = ((float)((float)((*l_151) < p_96) + (float)((*g_153) == (l_185 == (void*)0))) + (float)((((float)((float)((float)(-0x6.6p+1) - (float)((float)(l_194 == (void*)0) / (float)(g_115 != l_195))) / (float)(-0x5.Dp+1)) / (float)p_99) <= g_101.f2) >= g_101.f3));
            }
            for (g_101.f1 = (-21); (g_101.f1 <= 32); g_101.f1++)
            { 
                float l_205 = 0xB.FA0514p+43;
                int32_t **l_242 = &l_206;
                uint64_t l_243 = 0xF008F7B83498CC23LL;
                if ((*p_98))
                { 
                    union U0 ***l_199 = &l_198;
                    (*l_199) = l_198;
                    if ((*p_98))
                        break;
                }
                else
                { 
                    union U0 ****l_202 = (void*)0;
                    union U0 ****l_203 = &g_200;
                    int32_t **l_204 = &g_103;
                    l_151 = &p_99;
                    (*l_203) = g_200;
                    (*l_204) = &g_179;
                    if ((*p_98))
                        continue;
                }
                if ((*p_98))
                    continue;
                if ((*g_103))
                { 
                    int32_t **l_207 = &l_120;
                    union U0 *****l_212 = (void*)0;
                    (*l_207) = l_206;
                    if (((int16_t)g_114.f3 << (int16_t)5))
                    { 
                        l_212 = l_210;
                        (*g_103) = (*p_98);
                    }
                    else
                    { 
                        (**g_152) = (*g_153);
                        (*p_98) = (*g_103);
                        if ((*p_98))
                            break;
                    }
                    (*l_207) = &p_99;
                    if (((uint16_t)((((uint16_t)g_114.f1 << (uint16_t)14) < g_101.f3) & ((int32_t)((0x16CE8D70DEC899BCLL == (((*l_151) < 7UL) != (((*l_120) > (!g_101.f1)) ^ (*p_98)))) | 8L) + (int32_t)(*g_103))) >> (uint16_t)15))
                    { 
                        int32_t *l_222 = &g_179;
                        union U0 **l_225 = &g_115;
                        (*l_207) = l_222;
                        (*g_153) = ((float)((*g_200) == l_225) / (float)(&l_207 != g_226));
                        (*g_227) = &p_99;
                        (**g_226) = (*g_227);
                    }
                    else
                    { 
                        (*p_98) = 0x0CA3772BL;
                    }
                }
                else
                { 
                    int32_t l_239 = 5L;
                    if ((***g_226))
                        break;
                    (**g_152) = (+(**g_152));
                    (***g_226) = (((((uint16_t)((int16_t)((int32_t)((int64_t)((uint32_t)p_99 - (uint32_t)(*p_98)) / (int64_t)(l_239 & (((int16_t)__builtin_clz(l_239) << (int16_t)l_239) < (((18446744073709551615UL < ((((__builtin_popcountl((l_242 != (void*)0)) && l_243) < g_101.f1) ^ 0x357C3C58E251D069LL) >= l_239)) || g_101.f0) <= 0UL)))) % (int32_t)g_114.f4) >> (int16_t)6) % (uint16_t)65532UL) < (*p_98)) && g_114.f4) >= (*p_98));
                    for (p_97 = 0; (p_97 != 0); p_97 += 3)
                    { 
                        union U1 **l_248 = &l_247;
                        if (l_246)
                            break;
                        (*l_248) = l_247;
                    }
                }
                (**g_152) = (p_97 == p_97);
            }
            if ((p_99 < ((&l_120 != &p_98) && (0xA3D4L || ((int32_t)(***g_226) - (int32_t)(g_101.f0 >= 0x01F268CC48AF1FBALL))))))
            { 
                (**g_226) = (*g_227);
                (*p_98) = ((int16_t)((3L <= g_114.f0) > ((*l_151) <= 0x1DEDL)) << (int16_t)g_179);
                (**g_227) = (*p_98);
                if ((*p_98))
                    continue;
            }
            else
            { 
                g_254 = l_253;
            }
        }
    }
    else
    { 
        union U1 ****l_255 = (void*)0;
        union U1 ***l_256 = (void*)0;
        union U0 *****l_258 = (void*)0;
        union U0 *****l_259 = &l_257;
        int32_t l_262 = (-1L);
        float ***l_327 = &l_277;
        l_256 = (void*)0;
        (*l_259) = l_257;
        if ((__builtin_ctzll(((int16_t)(0x23DE851EL || ((void*)0 != p_95)) >> (int16_t)__builtin_bswap64(l_262))) < ((l_262 < ((uint16_t)((uint64_t)p_97 + (uint64_t)g_114.f2) << (uint16_t)0)) | p_99)))
        { 
            union U0 ****l_271 = &g_200;
            int32_t l_282 = 1L;
            uint16_t l_317 = 0x68F1L;
            (***g_226) = (l_262 <= ((-9L) == (((int32_t)(*l_151) % (int32_t)(***g_226)) ^ (((0x42F87E49L ^ ((uint64_t)(p_97 || (&g_200 == l_271)) + (uint64_t)((uint16_t)p_99 / (uint16_t)p_99))) == g_101.f0) <= l_262))));
            for (p_97 = 0; (p_97 > 38); p_97 += 9)
            { 
                int16_t l_316 = 0x1FBDL;
                union U1 ***l_324 = &l_291;
                if ((*g_103))
                { 
                    (***g_254) = &p_99;
                }
                else
                { 
                    float ****l_279 = &l_276;
                    int32_t *l_287 = &g_179;
                    (*l_279) = l_276;
                    (*g_103) = ((uint16_t)(l_282 <= ((uint16_t)g_8 << (uint16_t)1)) >> (uint16_t)5);
                    (**g_226) = l_151;
                    for (g_101.f3 = (-1); (g_101.f3 == 16); g_101.f3++)
                    { 
                        return l_287;
                    }
                }
                (***g_254) = (***g_254);
                (*g_103) = (g_288 == l_290);
                if (((l_282 == ((+((int32_t)l_282 % (int32_t)1UL)) == (((((uint32_t)((((uint16_t)((uint16_t)p_99 % (uint16_t)((int16_t)(((p_96 || (((int16_t)(*l_151) << (int16_t)((int16_t)(0xA72FL < (((((((((int16_t)((uint32_t)((int32_t)l_316 / (int32_t)(***g_226)) - (uint32_t)l_282) << (int16_t)g_104) <= 4L) || p_96) > (*l_151)) < 0L) < 0x438E2FDBL) <= 0x1C51E3A1L) >= 0x2D23L)) >> (int16_t)0)) & g_114.f2)) || g_114.f3) & l_316) % (int16_t)g_114.f3)) >> (uint16_t)1) < p_99) != l_316) - (uint32_t)(*p_98)) <= g_114.f1) < p_96) && g_114.f3))) ^ (*l_151)))
                { 
                    volatile int32_t **l_320 = (void*)0;
                    volatile int32_t **l_321 = (void*)0;
                    volatile int32_t **l_322 = (void*)0;
                    volatile int32_t **l_323 = &g_318;
                    (***g_226) = l_317;
                    (*g_201) = (**g_200);
                    (*l_323) = g_318;
                    l_256 = l_324;
                }
                else
                { 
                    for (p_96 = (-12); (p_96 > 8); p_96 += 3)
                    { 
                        (**g_226) = (**g_226);
                    }
                }
            }
            (*l_151) = (&g_152 == l_327);
        }
        else
        { 
            int64_t l_328 = 0xBC74038AB73313E7LL;
            int32_t *l_329 = &g_179;
            (*g_227) = (***g_254);
            l_328 = (p_96 >= g_104);
            return l_329;
        }
    }
    (*g_318) = (!(((int16_t)7L << (int16_t)((uint64_t)(g_179 >= ((((uint32_t)(18446744073709551615UL & (__builtin_popcount(g_114.f0) ^ __builtin_ffsll(((((int16_t)g_114.f1 << (int16_t)2) <= __builtin_popcountll(g_101.f2)) <= (!((int64_t)((int16_t)(((*l_151) > (*p_98)) ^ g_114.f2) / (int16_t)g_179) / (int64_t)g_179)))))) / (uint32_t)(*l_151)) || p_96) < (*g_103))) % (uint64_t)g_114.f3)) >= g_114.f2));
    return l_278;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_32();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_101.f3, "g_101.f3", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc_bytes (&g_150, sizeof(g_150), "g_150", print_hash_value);
    transparent_crc_bytes (&g_154, sizeof(g_154), "g_154", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



