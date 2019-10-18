


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 22;
   unsigned f1 : 19;
   signed f2 : 9;
   unsigned f3 : 17;
   unsigned f4 : 28;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   uint32_t  f1;
   float  f2;
   const signed f3 : 22;
   const uint32_t  f4;
   unsigned f5 : 19;
   int32_t  f6;
   int16_t  f7;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const uint16_t  f0;
   uint16_t  f1;
   int32_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

union U3 {
   int16_t  f0;
   float  f1;
   struct S2  f2;
   const float  f3;
   const signed f4 : 27;
};

union U4 {
   int32_t  f0;
};

union U5 {
   uint16_t  f0;
   int32_t  f1;
   uint16_t  f2;
};





static uint32_t  func_31(void);
static int32_t * func_51(int32_t * p_52, const struct S2  p_53, int32_t * p_54, struct S2  p_55, struct S1  p_56);
inline static struct S2  func_59(int32_t * p_60, union U4  p_61, int32_t * const  p_62, uint16_t  p_63);
inline static int32_t * func_64(uint16_t  p_65, int32_t * p_66, struct S1  p_67);
static uint16_t  func_68(const int32_t * p_69, int32_t * p_70, struct S1  p_71, int32_t * p_72);
static struct S0  func_74(const float  p_75, int32_t * const  p_76, int32_t * p_77, const int32_t  p_78, int32_t * p_79);
inline static int32_t  func_95(union U4  p_96, int32_t * p_97, int16_t  p_98, float * p_99);
inline static union U4  func_100(float * p_101, union U4  p_102, int32_t * p_103, float * const  p_104);
static struct S0 * func_115(struct S0 * p_116);
static struct S0 * func_117(struct S1  p_118);





static uint32_t  func_31(void)
{ 
    int16_t l_39 = 0x0CE7;
    int32_t l_58 = 0xF4914D86;
    int32_t *l_57 = &l_58;
    struct S1 l_561 = {0x74A6,0xDBB830A5,-0x4.Cp-1,1752,0xAEB41E39,452,3,-6};
    struct S2 l_702 = {0x57EA,0xDEB8,0x7A2ED855,-1};
    int16_t l_708 = 0xD82E;
    uint32_t l_724 = 0xFE422706;
    union U3 ***l_742 = (void*)0;
    union U3 ****l_741 = &l_742;
    uint32_t l_747 = 4294967295U;
    if (__builtin_ia32_crc32qi((((0x4F4C != ((~(0x718B9628 >= (((int16_t)((int32_t)(0xB5BF7C29 || ((((int16_t)l_39 % (int16_t)((int16_t)(~(((int16_t)1 << (int16_t)l_39) <= (((uint16_t)l_39 << (uint16_t)8) && ((0U && (((((int32_t)((((int16_t)l_39 >> (int16_t)4) | 0x23917005) >= 1) - (int32_t)l_39) != (-8)) == l_39) < l_39)) > l_39)))) - (int16_t)l_39)) && 0xA47399D0) >= l_39)) + (int32_t)l_39) << (int16_t)13) & l_39))) != 0x4E0C42EF)) < l_39) && 65531U), l_39))
    { 
        struct S1 l_73 = {0xB760,0x968679DD,0x1.E90980p+90,17,0x31B79E29,258,8,1};
        int32_t l_560 = 0x83BFA716;
        int32_t *l_559 = &l_560;
        union U4 l_565 = {-10};
        l_57 = func_51(l_57, func_59(func_64(func_68(&l_58, &l_58, l_73, &l_58), l_559, l_561), l_565, l_57, (*l_559)), l_57, l_702, l_73);
        for (l_560 = 0; (l_560 <= 11); l_560++)
        { 
            float *l_709 = &l_73.f2;
            struct S2 **l_713 = (void*)0;
            struct S2 ** const *l_712 = &l_713;
            struct S2 ** const **l_711 = &l_712;
            struct S2 ** const ** const *l_710 = &l_711;
            (*l_709) = l_708;
            l_710 = (void*)0;
            
            assert (l_710 == 0);
        }
    }
    else
    { 
        struct S0 l_715 = {-1179,313,-14,19,1886};
        struct S0 *l_714 = &l_715;
        struct S0 **l_716 = &l_714;
        float *l_725 = &l_561.f2;
        int32_t **l_726 = &l_57;
        (*l_716) = l_714;
        (*l_725) = ((((((float)((((*l_57) < (*l_57)) <= (((*l_57) > (-(float)((((float)(*l_57) + (float)(*l_57)) < ((((float)__builtin_popcount((*l_57)) - (float)(l_715.f4 == l_715.f3)) >= l_724) <= l_715.f4)) != 0x5.081192p-7))) >= l_715.f0)) != (*l_57)) + (float)(*l_57)) > (*l_57)) >= l_715.f4) > (*l_57)) < 0x3.E6719Ep-74);
        (*l_726) = &l_58;
    }
    for (l_561.f1 = 0; (l_561.f1 >= 31); l_561.f1 += 5)
    { 
        int32_t *l_743 = (void*)0;
        struct S1 l_744 = {0x8E7F,0x8F589542,0x0.4p-1,1809,0x064E0885,660,6,-7};
        int32_t **l_746 = &l_743;
        for (l_561.f6 = 0; (l_561.f6 > (-19)); l_561.f6 -= 2)
        { 
            union U3 *l_740 = (void*)0;
            union U3 **l_739 = &l_740;
            union U3 ***l_738 = &l_739;
            union U3 ****l_737 = &l_738;
            int32_t l_745 = 8;
            for (l_724 = (-17); (l_724 < 13); ++l_724)
            { 
                struct S1 *l_736 = &l_561;
                struct S1 **l_735 = &l_736;
                struct S1 ***l_734 = &l_735;
                struct S1 ****l_733 = &l_734;
                (*l_733) = (void*)0;
                
                assert (l_734 == 0);
                l_57 = func_64((l_737 != l_741), l_743, l_744);
                
                assert (l_57 == 0);
            }
            l_745 = l_745;
        }
        (*l_746) = (void*)0;
    }
    
    assert (l_57 == 0 || l_57 == &l_58);
    return l_747;
}




static int32_t * func_51(int32_t * p_52, const struct S2  p_53, int32_t * p_54, struct S2  p_55, struct S1  p_56)
{ 
    float *l_703 = (void*)0;
    float l_705 = 0xC.4FE0EFp+10;
    float *l_704 = &l_705;
    (*l_704) = p_56.f3;
    return p_54;
    
    
}




inline static struct S2  func_59(int32_t * p_60, union U4  p_61, int32_t * const  p_62, uint16_t  p_63)
{ 
    union U3 l_571 = {0};
    union U3 *l_570 = &l_571;
    union U3 **l_569 = &l_570;
    union U3 ** const *l_568 = &l_569;
    union U3 ** const **l_567 = &l_568;
    union U3 ** const ***l_566 = &l_567;
    struct S2 *l_576 = (void*)0;
    struct S2 **l_575 = &l_576;
    struct S2 ***l_574 = &l_575;
    struct S2 ****l_573 = &l_574;
    int32_t l_588 = (-1);
    const int32_t *l_587 = &l_588;
    struct S1 l_597 = {-1,0U,0x1.E8310Ep+22,1784,0U,204,0x07CF9725,0x5359};
    struct S0 l_598 = {-1309,612,12,140,5293};
    uint16_t l_645 = 0x5652;
    float *l_678 = (void*)0;
    float **l_677 = &l_678;
    struct S0 **l_689 = (void*)0;
    struct S0 ***l_688 = &l_689;
    struct S0 ****l_687 = &l_688;
    float *l_690 = (void*)0;
    float *l_691 = &l_597.f2;
    union U5 *l_694 = (void*)0;
    int32_t *l_700 = (void*)0;
    int32_t **l_699 = &l_700;
    struct S2 l_701 = {65533U,0x618C,-8,0};
    if ((l_566 != &l_567))
    { 
        struct S2 ****l_572 = (void*)0;
        (*p_60) = l_571.f0;
        (*p_62) = (l_572 == l_573);
    }
    else
    { 
        union U5 l_580 = {65535U};
        union U5 *l_579 = &l_580;
        union U5 **l_578 = &l_579;
        union U5 ***l_577 = &l_578;
        struct S1 l_589 = {0x33D5,0xC11CBEC4,0xD.ABDA94p-87,1108,0x5720C289,506,0x268CC5E5,0xA0C3};
        int32_t *l_595 = (void*)0;
        uint32_t l_605 = 0x0319FEEA;
        struct S2 * const *l_610 = &l_576;
        struct S2 * const **l_609 = &l_610;
        union U3 l_619 = {0x58B3};
        union U3 *l_618 = &l_619;
        union U3 * const *l_643 = &l_618;
        union U3 * const **l_642 = &l_643;
        union U3 * const ***l_641 = &l_642;
        struct S0 *l_665 = &l_598;
        struct S0 **l_664 = &l_665;
        struct S0 ***l_663 = &l_664;
        int16_t l_676 = 0xEF23;
        (*l_577) = (void*)0;
        
        assert (l_578 == 0);
        for (l_571.f0 = (-14); (l_571.f0 > (-20)); l_571.f0--)
        { 
            int32_t l_590 = 0;
            int32_t *l_612 = &l_588;
            const union U5 *l_613 = &l_580;
            struct S1 ** const l_630 = (void*)0;
            float **l_679 = (void*)0;
        }
    }
    (*l_691) = ((void*)0 != l_687);
    (*l_699) = func_64((((0x40CD != (((uint16_t)p_61.f0 << (uint16_t)p_61.f0) >= ((((void*)0 == l_694) <= 0xF6EA) && p_63))) < (*p_62)) == ((uint16_t)(((int16_t)p_61.f0 % (int16_t)p_61.f0) < (*l_587)) % (uint16_t)(*l_587))), &l_588, l_597);
    
    assert (l_700 == &l_588);
    (***l_573) = (*l_575);
    return l_701;
}




inline static int32_t * func_64(uint16_t  p_65, int32_t * p_66, struct S1  p_67)
{ 
    uint32_t l_562 = 0x43B5A856;
    float *l_563 = (void*)0;
    int32_t l_564 = 0x18DC6315;
    l_564 = ((p_67.f1 == p_67.f2) == (l_562 > (l_562 == (l_562 < (0x1.7p-1 >= ((l_562 < ((p_67.f6 == p_67.f4) != 0x7.0C952Ap+73)) == l_562))))));
    return p_66;
    
    
}




static uint16_t  func_68(const int32_t * p_69, int32_t * p_70, struct S1  p_71, int32_t * p_72)
{ 
    const uint32_t l_82 = 0x2A8E6F95;
    const int32_t l_84 = 0;
    const int32_t *l_83 = &l_84;
    int32_t l_88 = 0xE427CCDD;
    int32_t * const l_87 = &l_88;
    struct S0 l_394 = {-578,19,-1,317,10872};
    struct S0 *l_393 = &l_394;
    union U3 *l_399 = (void*)0;
    union U3 **l_398 = &l_399;
    union U4 l_420 = {0x65AADB8A};
    union U4 * const l_419 = &l_420;
    int16_t l_430 = 0;
    struct S1 l_433 = {9,0x691C5F55,0xF.EE5F72p-67,1477,0x29BDC5D1,592,-10,0x10CA};
    struct S1 *l_432 = &l_433;
    struct S1 **l_431 = &l_432;
    const uint32_t l_434 = 3U;
    union U5 *l_446 = (void*)0;
    union U5 ** const l_445 = &l_446;
    float *l_449 = &l_433.f2;
    int32_t *l_477 = &l_88;
    float * const l_479 = &l_433.f2;
    int32_t * const l_497 = (void*)0;
    const int32_t l_498 = (-1);
    int32_t l_541 = 0x8DA1DDBE;
    int32_t l_558 = (-1);
lbl_415:
    (*l_393) = func_74((0x6.39C2D9p+71 >= ((-0x6.2p+1) < __builtin_clzll(((l_82 <= (((void*)0 == l_83) != ((int32_t)(*l_83) - (int32_t)(*p_72)))) <= ((*p_70) == 0x3D54B5BC))))), l_87, p_70, (*l_87), &l_88);
    for (p_71.f0 = 0; (p_71.f0 == (-24)); p_71.f0--)
    { 
        const int32_t **l_397 = &l_83;
        struct S2 ***l_400 = (void*)0;
        (*l_397) = &l_84;
        if ((l_398 != &l_399))
        { 
            uint32_t l_408 = 1U;
            p_71.f2 = (l_400 != l_400);
            for (p_71.f1 = (-23); (p_71.f1 >= 49); p_71.f1++)
            { 
                float l_404 = 0x6.5C911Fp-15;
                float *l_403 = &l_404;
                struct S2 ** const **l_405 = (void*)0;
                (*l_403) = (p_71.f1 < 0xA.7453B0p+19);
                l_400 = l_400;
                (*l_397) = (void*)0;
                
                assert (l_83 == 0);
                for (l_88 = 0; (l_88 >= (-11)); --l_88)
                { 
                    if ((*p_69))
                        break;
                }
            }
            
            assert (l_83 == 0 || l_83 == &l_84);
            return l_408;
        }
        else
        { 
            const int16_t l_411 = 0xB81B;
            int32_t * const l_412 = (void*)0;
            struct S0 l_414 = {981,639,-12,88,1206};
            struct S1 l_418 = {0xEB5F,0U,-0x4.0p-1,1868,0U,604,0xB3A6E1BA,0xB34E};
            struct S1 *l_417 = &l_418;
            struct S1 **l_416 = &l_417;
            union U4 *l_422 = (void*)0;
            union U4 **l_421 = &l_422;
            float *l_423 = &l_418.f2;
            for (p_71.f7 = 1; (p_71.f7 < (-7)); p_71.f7 -= 6)
            { 
                const uint16_t l_413 = 0x97F9;
                (*l_393) = l_414;
                if (l_82)
                    goto lbl_415;
                if ((*p_72))
                    break;
                l_416 = (void*)0;
                
                assert (l_416 == 0);
            }
            
            assert (l_416 == 0 || l_416 == &l_417);
            (*l_421) = l_419;
            
            assert (l_422 == &l_420);
            (*l_423) = (*l_83);
        }
    }
    if (((uint16_t)((((uint32_t)(((uint16_t)0U + (uint16_t)((p_71.f5 && (l_430 | (l_431 != &l_432))) < (*p_69))) == (p_71.f5 < (*p_72))) + (uint32_t)(*l_83)) == l_434) < p_71.f5) >> (uint16_t)p_71.f4))
    { 
        uint32_t l_435 = 4294967295U;
        int32_t * const *l_438 = &l_87;
        int32_t * const **l_437 = &l_438;
        int32_t * const ***l_436 = &l_437;
        int32_t *l_447 = &l_88;
        union U4 l_450 = {0xD7E9FFF4};
        union U4 l_459 = {0x30966FC5};
        float * const l_478 = &l_433.f2;
        struct S0 l_486 = {1814,63,-8,290,8905};
        const struct S1 *l_536 = &l_433;
        const struct S1 **l_535 = &l_536;
        if ((l_435 >= (-10)))
        { 
            int32_t *l_439 = &l_88;
            union U5 l_444 = {65528U};
            union U5 *l_443 = &l_444;
            union U5 **l_442 = &l_443;
            union U4 l_456 = {2};
            struct S1 *l_460 = &l_433;
            int32_t *** const *l_484 = (void*)0;
            uint32_t l_488 = 4294967288U;
            float *l_493 = &l_433.f2;
            struct S2 l_496 = {0x82C8,0x8CCA,0x6502A305,0xE12F43C1};
            struct S2 *l_495 = &l_496;
            struct S2 **l_494 = &l_495;
            uint32_t l_521 = 4294967295U;
            (*l_393) = func_74(((void*)0 != l_436), &l_88, l_439, ((uint16_t)((0xC610 >= (l_442 == l_445)) ^ 1U) << (uint16_t)9), &l_88);
            if ((*l_439))
            { 
                float *l_448 = &l_433.f2;
                (****l_436) = (*l_87);
                (*l_448) = func_95((*l_419), l_447, p_71.f1, l_447);
            }
            else
            { 
                int32_t *l_451 = &l_88;
                union U4 l_476 = {0x515674DF};
                union U5 *l_485 = &l_444;
                uint32_t l_516 = 0xB561A88B;
                int32_t **l_524 = (void*)0;
                int32_t **l_525 = (void*)0;
                const int32_t **l_526 = &l_83;
                if ((func_95(func_100(l_449, func_100(l_449, l_450, p_70, l_439), &l_88, l_439), l_451, p_71.f3, l_449) | (***l_437)))
                { 
                    float l_454 = 0x7.94197Ap+23;
                    int32_t l_457 = 0;
                    union U3 ***l_482 = &l_398;
                    union U3 ****l_481 = &l_482;
                    if (((uint16_t)(*l_451) << (uint16_t)1))
                    { 
                        union U3 ***l_455 = &l_398;
                        (*l_439) = __builtin_ffsl(((((((p_71.f1 & (*p_72)) == ((*l_451) & ((void*)0 != l_455))) > (*p_72)) < ((*l_447) <= 0xC5D4)) & func_95(l_456, p_70, l_457, l_449)) || (*p_69)));
                        (*l_393) = func_74((func_95(l_456, p_72, (+func_95(l_459, p_70, (p_71.f3 != 0x93BFC38B), l_439)), p_70) > p_71.f6), p_70, p_70, (*l_83), l_451);
                        (*l_431) = l_460;
                    }
                    else
                    { 
                        int32_t *l_461 = &l_457;
                        int32_t **l_462 = (void*)0;
                        int32_t **l_463 = (void*)0;
                        int32_t **l_464 = (void*)0;
                        int32_t **l_465 = &l_439;
                        (*l_465) = l_461;
                        
                        assert (l_439 == &l_457);
                    }
                    
                    assert (l_439 == &l_457 || l_439 == &l_88);
                    if (((((uint16_t)((uint16_t)((int16_t)1 << (int16_t)7) >> (uint16_t)2) >> (uint16_t)0) || (-1)) != ((int32_t)(*p_69) - (int32_t)(((int32_t)((0x6FBD < (*l_447)) >= (func_95(func_100(l_451, func_100(l_451, l_476, l_477, l_478), l_451, l_479), p_72, p_71.f1, l_451) || (*l_439))) - (int32_t)(*l_439)) & p_71.f1))))
                    { 
                        union U5 *l_480 = &l_444;
                        (*l_445) = l_480;
                        
                        assert (l_446 == &l_444);
                    }
                    else
                    { 
                        union U3 *****l_483 = &l_481;
                        (*l_483) = l_481;
                        (*p_72) = ((void*)0 == l_484);
                    }
                    
                    assert (l_446 == 0 || l_446 == &l_444);
                    (*l_442) = l_485;
                }
                else
                { 
                    uint16_t l_487 = 0U;
                    int32_t **l_489 = &l_451;
                    (*l_393) = l_486;
                    (*l_479) = (((func_95(l_450, l_447, l_487, p_72) <= ((((-0x10.Cp+1) >= (((p_71.f3 > p_71.f7) != (*l_439)) < (*l_451))) < 0xD.E14E08p+1) <= (*l_87))) > l_488) < 0x6.17503Ep+2);
                    (*l_489) = (**l_437);
                    (**l_489) = ((int16_t)(*l_87) << (int16_t)5);
                }
                
                
                assert (l_446 == 0 || l_446 == &l_444);
                (*l_449) = (*l_451);
                if ((((**l_438) && (((*p_72) <= (*l_477)) <= (*l_451))) && (+(l_493 == l_493))))
                { 
                    struct S0 l_499 = {-1691,593,11,308,12863};
                    int32_t * const l_500 = &l_88;
                    int32_t *l_503 = &l_88;
                    l_499 = l_486;
                    (*l_393) = func_74(p_71.f5, l_500, p_70, (p_71.f7 ^ ((uint16_t)(func_95(l_450, p_72, (*l_451), p_72) <= 0U) >> (uint16_t)(*l_500))), l_503);
                    (*l_431) = &p_71;
                    
                    assert (l_432 == &p_71);
                }
                else
                { 
                    struct S1 **l_510 = &l_460;
                    const int32_t l_513 = 0x776CF2D3;
                    if (((int32_t)((int16_t)((uint16_t)65533U + (uint16_t)(((void*)0 != l_510) > ((uint16_t)(65535U > (0x23A6 > (((*l_510) == (void*)0) && ((1 == 0x92ABF6E8) && p_71.f7)))) % (uint16_t)(****l_436)))) << (int16_t)10) + (int32_t)(**l_438)))
                    { 
                        const struct S0 *l_522 = &l_486;
                        struct S0 **l_523 = &l_393;
                        (*l_393) = func_74(l_513, &l_88, p_70, (((uint16_t)((__builtin_parity(p_71.f0) <= l_516) & p_71.f1) << (uint16_t)(((int16_t)((int32_t)__builtin_ffs((p_71.f3 ^ p_71.f6)) + (int32_t)l_521) % (int16_t)p_71.f6) || (*p_70))) && 0xB19DBEBB), p_70);
                        (*l_523) = l_522;
                        
                        assert (l_393 == &l_486);
                    }
                    else
                    { 
                        (*l_447) = l_513;
                    }
                    
                    assert (l_393 == &l_394 || l_393 == &l_486);
                }
                
                assert (l_393 == &l_394 || l_393 == &l_486);
                assert (l_432 == &l_433 || l_432 == &p_71);
                (*l_526) = l_451;
                
                assert (l_83 == &l_88);
            }
            
            assert (l_83 == &l_88 || l_83 == &l_84);
            assert (l_393 == &l_394 || l_393 == &l_486);
            assert (l_432 == &l_433 || l_432 == &p_71);
            
            assert (l_446 == 0 || l_446 == &l_444);
            (*l_87) = (((uint16_t)((uint16_t)(0U | ((uint32_t)__builtin_ffsl(((int32_t)(l_535 == &l_460) - (int32_t)(*p_69))) % (uint32_t)(*p_72))) >> (uint16_t)2) >> (uint16_t)((void*)0 != &l_431)) && (*p_69));
            l_486 = (*l_393);
        }
        else
        { 
            int32_t **l_539 = &l_477;
            (*p_70) = ((uint16_t)(*l_83) >> (uint16_t)2);
            (*l_539) = p_72;
            
            
            (*l_479) = (**l_539);
            (**l_539) = ((*p_69) > (*l_87));
        }
        
        assert (l_83 == &l_88 || l_83 == &l_84);
        assert (l_393 == &l_394 || l_393 == &l_486);
        assert (l_432 == &l_433 || l_432 == &p_71);
        
        
    }
    else
    { 
        const uint32_t l_540 = 0x9B810DFB;
        union U3 ***l_544 = &l_398;
        float *l_547 = &l_433.f2;
        (*p_70) = ((__builtin_parityl((*l_87)) >= (l_540 == (*l_477))) ^ l_541);
        (*l_393) = func_74(((float)((void*)0 == l_544) - (float)((((float)(0x7.Dp+1 > func_95(func_100(l_547, (*l_419), p_70, p_70), l_547, l_540, l_477)) + (float)0xD.9A02F5p+74) == 0xE.D403DDp+58) >= (-0x2.7p-1))), p_70, l_547, p_71.f1, l_547);
        if ((((void*)0 != &l_420) < ((uint16_t)((int32_t)func_95((*l_419), &l_88, p_71.f6, l_449) - (int32_t)0x110DD68A) + (uint16_t)((int16_t)p_71.f5 % (int16_t)(*l_83)))))
        { 
            union U5 *l_554 = (void*)0;
            (*l_445) = l_554;
            (*p_72) = 6;
        }
        else
        { 
            union U3 *** const *l_556 = &l_544;
            union U3 *** const **l_555 = &l_556;
            int32_t **l_557 = &l_477;
            (*l_555) = &l_544;
            (*l_449) = 0xD.385E88p+48;
            (*l_557) = p_72;
            
            
        }
        
        
    }
    
    assert (l_83 == &l_88 || l_83 == &l_84);
    
    assert (l_432 == &l_433 || l_432 == &p_71);
    
    
    return l_558;
}




static struct S0  func_74(const float  p_75, int32_t * const  p_76, int32_t * p_77, const int32_t  p_78, int32_t * p_79)
{ 
    float l_90 = 0xD.8566A4p-75;
    float *l_89 = &l_90;
    int32_t *l_92 = (void*)0;
    int32_t **l_91 = &l_92;
    struct S0 l_251 = {1367,244,-10,295,1298};
    union U3 l_263 = {0xB8BA};
    union U3 *l_262 = &l_263;
    union U4 l_273 = {1};
    float l_307 = 0x1.4p-1;
    struct S1 l_321 = {0xD971,1U,0x0.Ep+1,-1756,0U,197,0x3D8348DC,0x39FA};
    struct S1 *l_320 = &l_321;
    const struct S2 *****l_353 = (void*)0;
    (*l_89) = p_75;
lbl_267:
    (*l_91) = p_77;
    
    
    if (((int16_t)(**l_91) << (int16_t)10))
    { 
        float *l_105 = &l_90;
        union U4 l_106 = {5};
        struct S0 *l_252 = &l_251;
        union U3 l_256 = {8};
        union U3 *l_255 = &l_256;
        int32_t l_264 = 0x1DFD7D1B;
        union U5 *l_270 = (void*)0;
        struct S0 l_280 = {-521,672,-4,348,12831};
        struct S2 l_284 = {0xE74C,65535U,1,0xD9BD75CE};
        struct S2 *l_283 = &l_284;
        (*l_92) = func_95(func_100(l_105, l_106, (*l_91), l_105), p_79, p_78, p_79);
        (*l_252) = l_251;
        if (((l_105 != (void*)0) || ((uint16_t)(l_105 == l_105) >> (uint16_t)__builtin_clz(l_106.f0))))
        { 
            const int16_t l_265 = 0xDB73;
            struct S1 l_275 = {0xC3E9,4294967295U,0xD.EFDE07p+51,-1392,1U,319,0x7DA68F4A,-5};
            struct S2 **l_285 = &l_283;
            l_255 = l_255;
            if (((int16_t)p_78 % (int16_t)((uint16_t)(p_78 & 65535U) << (uint16_t)2)))
            { 
                union U3 * const l_261 = (void*)0;
                l_264 = (l_261 == l_262);
                if (l_106.f0)
                    goto lbl_266;
lbl_266:
                (*p_76) = l_265;
                (*p_76) = l_265;
                if (l_251.f3)
                    goto lbl_267;
            }
            else
            { 
                union U5 l_269 = {0x8F20};
                union U5 *l_268 = &l_269;
                int32_t *l_274 = &l_264;
                struct S0 l_277 = {1849,105,-18,119,14943};
                union U3 l_279 = {-1};
                union U3 *l_278 = &l_279;
                if (((l_268 == l_270) == ((uint16_t)((void*)0 != &l_89) % (uint16_t)((func_95(func_100(l_105, func_100(l_105, l_273, l_274, p_79), p_77, p_76), p_79, p_78, p_79) != (*l_274)) | l_265))))
                { 
                    struct S0 **l_276 = &l_252;
                    (*l_276) = func_117(l_275);
                    
                    assert (l_252 == 0);
                    if (((void*)0 == p_76))
                    { 
                        return l_277;
                    }
                    else
                    { 
                        l_278 = (void*)0;
                        
                        assert (l_278 == 0);
                    }
                    
                    assert (l_278 == 0);
                    return l_280;
                }
                else
                { 
                    const int32_t *l_282 = &l_264;
                    const int32_t **l_281 = &l_282;
                    (*l_281) = p_76;
                    
                    
                    return l_277;
                }
            }
            (*l_285) = l_283;
            (*l_92) = ((**l_91) >= ((p_78 < p_78) && (l_270 != (void*)0)));
        }
        else
        { 
            struct S0 l_286 = {-1359,207,12,129,2898};
            return l_286;
        }
        (*l_91) = &l_264;
        
        assert (l_92 == &l_264);
    }
    else
    { 
        const uint32_t l_306 = 4294967295U;
        struct S1 l_324 = {0xC7D0,4294967295U,0x1.Bp-1,-702,4294967289U,37,-7,0xDEEC};
        struct S1 *l_323 = &l_324;
        const int32_t l_330 = 0x5A6B154A;
        int32_t l_333 = 0xD52C48C0;
        int32_t *l_332 = &l_333;
        struct S0 l_335 = {-1543,178,-4,100,6031};
        union U3 **l_351 = &l_262;
        struct S0 *l_388 = &l_335;
lbl_378:
        if ((*p_79))
        { 
            struct S0 l_295 = {-1172,494,16,156,9658};
            for (l_263.f0 = (-10); (l_263.f0 == (-30)); --l_263.f0)
            { 
                union U4 l_301 = {0x9CB34429};
                struct S0 l_318 = {1732,227,-18,196,15658};
                struct S1 **l_322 = (void*)0;
            }
            (**l_91) = (p_78 == 0x464E);
        }
        else
        { 
            uint32_t l_329 = 4294967295U;
            union U4 l_331 = {8};
            int32_t *l_334 = &l_333;
            struct S0 *l_336 = &l_335;
            (*l_332) = __builtin_clzl(((((((int16_t)(l_329 == ((((l_330 <= 0xE643) >= __builtin_ctzll((((*p_76) >= __builtin_clz(p_78)) | func_95(func_100(p_79, l_331, l_332, p_77), l_334, (*l_332), l_332)))) < (*l_332)) == (*l_332))) << (int16_t)(*l_332)) == 0xE84C) == (**l_91)) & 0x2E8BEF14) != (*l_332)));
            if (l_331.f0)
                goto lbl_337;
lbl_337:
            (*l_336) = l_335;
            (*l_91) = (*l_91);
        }
        for (l_263.f2.f2 = 0; (l_263.f2.f2 <= 21); l_263.f2.f2 += 9)
        { 
            struct S0 l_340 = {-636,290,11,264,7356};
            int32_t l_341 = 0x45A74A02;
            struct S2 l_348 = {65526U,0U,1,-4};
            struct S2 *l_347 = &l_348;
            struct S2 **l_346 = &l_347;
            struct S2 ***l_345 = &l_346;
            struct S2 ****l_344 = &l_345;
            union U3 *l_377 = &l_263;
            int32_t ***l_386 = &l_91;
            (*l_91) = &l_333;
            
            assert (l_92 == &l_333);
            l_340 = l_340;
            if ((((l_341 || (-1)) ^ ((p_78 & (((int16_t)((((**l_91) <= (l_340.f0 < (l_344 == (void*)0))) >= (p_78 > 65535U)) & 0x897F) >> (int16_t)(*l_92)) && (*l_332))) != (**l_91))) < 0x61B3))
            { 
                union U3 *l_352 = &l_263;
                int32_t l_365 = 0x90FC01C5;
                (*p_76) = (-4);
                if ((*p_76))
                { 
                    union U3 ***l_349 = (void*)0;
                    union U3 * const **l_350 = (void*)0;
                    l_351 = &l_262;
                }
                else
                { 
                    const struct S2 *l_358 = &l_348;
                    const struct S2 **l_357 = &l_358;
                    const struct S2 ***l_356 = &l_357;
                    const struct S2 ****l_355 = &l_356;
                    const struct S2 *****l_354 = &l_355;
                    (*l_351) = l_352;
                    l_354 = l_353;
                    
                    assert (l_354 == 0);
                    (**l_91) = (*p_77);
                }
                for (l_324.f1 = 0; (l_324.f1 == 37); ++l_324.f1)
                { 
                    return l_335;
                }
                (**l_91) = (p_78 < ((((uint16_t)((0x78794BD4 > (((uint32_t)l_365 % (uint32_t)(*l_332)) & ((int16_t)(((uint32_t)0U - (uint32_t)(((((int32_t)((p_78 <= ((!(*l_92)) != (l_340.f0 <= 0U))) > p_78) % (int32_t)(*p_79)) & l_348.f2) != (-1)) >= 4294967295U)) || 5) >> (int16_t)0))) >= (*p_77)) >> (uint16_t)p_78) & 1U) ^ 0xCD9F6087));
            }
            else
            { 
                return l_335;
            }
            for (l_324.f0 = 0; (l_324.f0 != 21); l_324.f0 += 3)
            { 
                int32_t ****l_387 = &l_386;
                for (l_273.f0 = (-21); (l_273.f0 != (-13)); l_273.f0 += 8)
                { 
                    l_262 = l_377;
                    if ((*p_76))
                        continue;
                    if (l_340.f3)
                        goto lbl_378;
                    for (l_324.f6 = 0; (l_324.f6 <= (-6)); l_324.f6--)
                    { 
                        struct S0 *l_381 = (void*)0;
                        struct S1 ** const l_382 = &l_320;
                        struct S1 **l_384 = &l_323;
                        struct S1 ***l_383 = &l_384;
                        int32_t *l_385 = &l_333;
                        l_340 = l_251;
                        (*l_383) = l_382;
                        
                        assert (l_384 == &l_320);
                        if (l_340.f0)
                            break;
                        (*l_91) = l_385;
                    }
                }
                (*l_387) = l_386;
            }
        }
        (*l_388) = l_251;
    }
    
    
    (*p_77) = ((uint16_t)((uint16_t)p_78 + (uint16_t)p_78) >> (uint16_t)9);
    return l_251;
}




inline static int32_t  func_95(union U4  p_96, int32_t * p_97, int16_t  p_98, float * p_99)
{ 
    int32_t l_249 = 0x550A7628;
    int32_t *l_248 = &l_249;
    int32_t **l_250 = &l_248;
    (*l_250) = l_248;
    (*l_248) = (*p_97);
    return (*p_97);
}




inline static union U4  func_100(float * p_101, union U4  p_102, int32_t * p_103, float * const  p_104)
{ 
    struct S1 l_119 = {0x60C9,4294967287U,0x2.0DA5F0p-7,-277,4294967289U,115,-1,-3};
    int32_t l_235 = (-4);
    int32_t *l_234 = &l_235;
    union U5 l_246 = {1U};
    union U5 *l_245 = &l_246;
    union U5 **l_244 = &l_245;
    union U4 l_247 = {-3};
    for (p_102.f0 = (-11); (p_102.f0 == (-4)); p_102.f0 += 1)
    { 
        if ((*p_103))
            break;
    }
    for (p_102.f0 = 13; (p_102.f0 >= 4); --p_102.f0)
    { 
        int32_t l_111 = 0xD896CD2A;
        struct S0 l_233 = {1027,472,-5,40,15115};
        struct S0 *l_232 = &l_233;
        int32_t **l_236 = (void*)0;
        int32_t **l_237 = &l_234;
        union U5 l_242 = {0x2B78};
        union U5 *l_241 = &l_242;
        union U5 **l_240 = &l_241;
        for (l_111 = 26; (l_111 < (-5)); l_111 -= 2)
        { 
            union U4 l_114 = {0xE46A4E19};
            return l_114;
            
                    }
        l_232 = func_115(func_117(l_119));
        
        assert (l_232 == 0);
        (*l_237) = l_234;
        for (l_235 = 3; (l_235 != (-14)); l_235 -= 1)
        { 
            union U5 ***l_243 = (void*)0;
            l_244 = l_240;
            
            assert (l_244 == &l_241);
        }
        
        
    }
    
    
    return l_247;
    
    }




static struct S0 * func_115(struct S0 * p_116)
{ 
    uint32_t l_158 = 0x6356B4AE;
    int32_t l_182 = 0x9622FFCB;
    struct S0 l_198 = {1382,461,-0,32,4575};
    union U5 l_207 = {0x2E68};
    union U5 *l_206 = &l_207;
    struct S1 l_219 = {0x0418,8U,-0x1.0p+1,-803,4294967293U,495,0xF4DF6753,0xB090};
    struct S0 *l_230 = (void*)0;
    struct S0 *l_231 = &l_198;
lbl_228:
    if (l_158)
    { 
        uint16_t l_159 = 1U;
        float l_161 = 0x4.038BE2p-88;
        float *l_160 = &l_161;
        float l_181 = (-0x1.Ap-1);
        (*l_160) = (l_159 < (l_159 >= 0xC.6105C8p+17));
        l_182 = ((uint16_t)(((uint16_t)l_159 << (uint16_t)(((uint32_t)((((int16_t)((&l_160 == (void*)0) != l_158) >> (int16_t)8) < ((int16_t)(4294967295U >= (~__builtin_clzll(((uint16_t)l_159 - (uint16_t)(l_158 | (((uint16_t)((((uint16_t)((uint16_t)l_158 >> (uint16_t)(l_158 | l_158)) % (uint16_t)l_159) | 0x4CF23647) & l_158) >> (uint16_t)l_158) <= l_159)))))) >> (int16_t)1)) & l_158) - (uint32_t)0x444549C7) > 0U)) != 1) - (uint16_t)0x1976);
        l_182 = 0x698E65B9;
        for (l_158 = 0; (l_158 > 30); l_158++)
        { 
            int32_t l_191 = (-1);
            int32_t l_196 = (-7);
            if ((1U == ((int32_t)((int16_t)((int32_t)l_182 + (int32_t)l_191) % (int16_t)l_159) + (int32_t)l_158)))
            { 
                struct S0 l_195 = {-1711,320,-13,61,16006};
                struct S0 *l_194 = &l_195;
                for (l_159 = 0; (l_159 != 19); l_159++)
                { 
                    return p_116;
                    
                    
                }
            }
            else
            { 
                struct S0 l_197 = {218,39,-5,258,10773};
                struct S0 *l_199 = &l_198;
                l_196 = l_159;
                l_198 = l_197;
                (*l_199) = l_198;
            }
            l_196 = l_196;
        }
    }
    else
    { 
        struct S0 l_204 = {-534,436,-4,323,11078};
        union U5 *l_217 = &l_207;
        union U5 **l_218 = &l_217;
        struct S0 *l_221 = &l_204;
        struct S0 **l_220 = &l_221;
        int32_t *l_222 = (void*)0;
        int32_t *l_223 = (void*)0;
        int32_t *l_224 = (void*)0;
lbl_216:
        for (l_182 = 1; (l_182 != (-1)); --l_182)
        { 
            int32_t *l_210 = &l_182;
            int32_t **l_209 = &l_210;
            for (l_158 = 0; (l_158 >= 52); ++l_158)
            { 
                struct S0 *l_205 = &l_204;
                union U5 **l_208 = &l_206;
                (*l_205) = l_204;
                if (l_204.f2)
                    goto lbl_216;
                (*l_205) = l_198;
                (*l_208) = l_206;
            }
            (*l_209) = &l_182;
            l_198.f2 = (*l_210);
            for (l_158 = (-23); (l_158 > 29); ++l_158)
            { 
                int32_t l_213 = 0xB9759969;
                float l_215 = (-0x1.Ep+1);
                float *l_214 = &l_215;
                (*l_214) = (l_198.f3 >= __builtin_bswap32(l_213));
            }
        }
        (*l_218) = l_217;
        (*l_220) = func_117(l_219);
        
        assert (l_221 == 0);
        l_182 = l_204.f1;
    }
    for (l_219.f1 = 11; (l_219.f1 != 46); l_219.f1 += 7)
    { 
        int32_t l_227 = 0x93934F94;
        int32_t *l_229 = &l_182;
        l_227 = (-1);
        if (l_198.f2)
            goto lbl_228;
        (*l_229) = (-1);
    }
    (*l_231) = l_198;
    return p_116;
    
    
}




static struct S0 * func_117(struct S1  p_118)
{ 
    int32_t l_123 = 0x9BB015C7;
    uint32_t l_137 = 4294967295U;
    struct S0 *l_157 = (void*)0;
    if ((0x0F14 <= (((int32_t)(+(l_123 && ((int32_t)(((uint16_t)((((int16_t)(!(((uint32_t)((uint16_t)l_123 >> (uint16_t)11) % (uint32_t)__builtin_ia32_crc32qi(p_118.f6, (l_123 || (p_118.f5 | l_123)))) < ((int16_t)((__builtin_ffs(l_123) < l_123) | l_123) % (int16_t)p_118.f4))) >> (int16_t)p_118.f6) | l_123) | p_118.f0) - (uint16_t)p_118.f4) != l_123) + (int32_t)l_123))) + (int32_t)l_123) & l_137)))
    { 
        int32_t l_141 = 0;
        int32_t *l_140 = &l_141;
        struct S0 l_147 = {-1691,44,4,345,2249};
        struct S0 *l_146 = &l_147;
        const uint32_t l_148 = 0xB125E79E;
lbl_149:
        (*l_140) = ((int32_t)((void*)0 == l_140) + (int32_t)(((l_137 != ((*l_140) < (((*l_140) >= __builtin_parity(l_123)) >= __builtin_parityl(l_123)))) > p_118.f1) | l_137));
        (*l_140) = ((0x4651 && ((((uint16_t)((int16_t)((((p_118.f6 > (((void*)0 == l_146) <= (*l_140))) < (l_148 == p_118.f4)) > ((((p_118.f1 ^ p_118.f7) < l_123) <= (*l_140)) > 65528U)) < (*l_140)) >> (int16_t)6) << (uint16_t)p_118.f3) == (*l_140)) < (*l_140))) && p_118.f4);
        if (p_118.f4)
            goto lbl_149;
    }
    else
    { 
        uint16_t l_150 = 1U;
        float l_153 = 0x5.73FC91p-42;
        float *l_152 = &l_153;
        float **l_151 = &l_152;
        int32_t l_156 = 0x44CA3D13;
        int32_t *l_155 = &l_156;
        int32_t **l_154 = &l_155;
        l_150 = 0x4.Ep-1;
        l_151 = l_151;
        (*l_154) = l_152;
        
        assert (l_155 == &l_153);
    }
    return l_157;
    
    
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



