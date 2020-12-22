



static long __undefined;


struct S0 {
   float  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   const uint32_t  f4;
   int8_t  f5;
   const uint32_t  f6;
   uint32_t  f7;
   int16_t  f8;
   int32_t  f9;
};

union U1 {
   int16_t  f0;
   int32_t  f1;
   struct S0  f2;
};

union U2 {
   uint32_t  f0;
   int8_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   int32_t  f4;
};

union U3 {
   uint16_t  f0;
   struct S0  f1;
};


static int16_t g_6 = 1L;
static int32_t g_30 = 0L;
static union U1 g_76 = {0x6218L};
static union U2 g_87 = {4294967295UL};
static int32_t g_108 = 5L;
static const struct S0 g_122 = {0x3.9DD371p+94,0L,0x6BA1441EL,0UL,0x22C9C813L,-1L,0x92796988L,5UL,0xA668L,0x54706CD8L};
static float g_150 = 0x1.F2FB4Dp-13;
static int32_t g_192 = 0xD8751037L;
static struct S0 g_208 = {0x4.F8E7FBp-59,0x496DE4B3L,0xDF3E0A31L,4294967295UL,3UL,6L,18446744073709551615UL,0xF3FA6EFEL,0xCF7BL,-1L};
static struct S0 g_211 = {-0x1.3p-1,0x0C694B4BL,4294967289UL,0x8C178462L,0x04F2ECF3L,-1L,0x7C0FF9DDL,0x29366B1BL,1L,1L};
static struct S0 *g_210 = &g_211;
static int32_t *g_234 = &g_208.f9;
static int32_t **g_233 = &g_234;
static int32_t ***g_232 = &g_233;
static struct S0 ***g_240 = (void*)0;
static union U3 g_269 = {65535UL};
static union U3 g_271 = {65535UL};
static union U1 *g_297 = &g_76;
static union U1 **g_296 = &g_297;
static uint16_t g_303 = 0xC571L;
static uint32_t g_336 = 0xF63AD2DFL;
static union U2 *****g_392 = (void*)0;
static union U3 g_428 = {0xA475L};
static union U3 g_490 = {4UL};
static int32_t g_581 = 0xB3DE0CB7L;
static union U2 g_663 = {1UL};



static const union U3  func_28(void);
static int32_t * func_31(int32_t * p_32, union U2  p_33, int32_t  p_34, int32_t * p_35, int32_t  p_36);
inline static union U2  func_37(int32_t * p_38, union U1  p_39);
inline static int32_t * func_40(int32_t * p_41, int32_t  p_42, int32_t * p_43, int32_t  p_44);
static int32_t * func_45(int32_t * p_46, int32_t * p_47, const struct S0  p_48, int32_t * p_49);
inline static int32_t * func_50(int16_t  p_51, int32_t * p_52, int16_t  p_53);
static int32_t * func_54(int32_t * p_55, int32_t  p_56, int32_t * p_57);
inline static int32_t * func_58(int32_t * p_59, float  p_60);
static uint16_t  func_67(int16_t  p_68, int32_t * p_69, int32_t  p_70, const int32_t * p_71);
static uint32_t  func_73(union U1  p_74, int32_t * p_75);





static const union U3  func_28(void)
{ 
    int32_t *l_29 = &g_30;
    int8_t l_375 = 0xC9L;
    union U1 l_643 = {-1L};
    (*l_29) |= g_6;
    (*g_233) = func_31(l_29, func_37(func_40(func_45(func_50(g_30, func_54(func_58(l_29, g_6), g_208.f7, l_29), g_122.f4), l_29, g_122, l_29), g_211.f8, l_29, l_375), l_643), g_663.f1, l_29, l_643.f0);
    
    assert (g_210 == &g_208 || g_210 == &g_211);
    assert (g_234 == &g_211.f1);
    assert (g_232 == 0 || g_232 == &g_233);
    (*g_233) = l_29;
    
    assert (g_234 == &g_30);
    return g_269;
    
    }




static int32_t * func_31(int32_t * p_32, union U2  p_33, int32_t  p_34, int32_t * p_35, int32_t  p_36)
{ 
    int16_t l_664 = 0xA84BL;
    int32_t *l_671 = &g_211.f1;
    (*g_233) = func_50(l_664, (*g_233), p_33.f2);
    
    assert (g_234 == 0);
    (*p_35) &= l_664;
    (*p_35) = (safe_lshift_func_uint16_t_u_s((__builtin_ctzll(l_664) | ((0x771DL && (l_664 != 0x684DBDAAL)) == (safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(0x2BD8L, g_211.f4)) & 65530UL), (((l_664 >= 65530UL) < l_664) ^ g_122.f7))))), 15));
    return l_671;
    
    
}




inline static union U2  func_37(int32_t * p_38, union U1  p_39)
{ 
    uint32_t l_646 = 18446744073709551610UL;
    union U2 **l_658 = (void*)0;
    union U2 ***l_657 = &l_658;
    union U2 ****l_656 = &l_657;
    union U2 *****l_655 = &l_656;
    uint16_t l_659 = 65526UL;
    float l_660 = 0xF.7263D5p+97;
    int32_t *l_661 = &g_211.f9;
    const struct S0 l_662 = {0x3.EEE2FAp-27,-1L,0x463EB60CL,0xA2D60493L,4294967292UL,0xEFL,0xE9D0027BL,0x96DF1ECDL,0xD1B2L,4L};
    p_38 = l_661;
    
    assert (p_38 == &g_211.f9);
    return g_663;
    
    }




inline static int32_t * func_40(int32_t * p_41, int32_t  p_42, int32_t * p_43, int32_t  p_44)
{ 
    union U1 *l_378 = &g_76;
    int32_t l_384 = 0x94FDA778L;
    float l_471 = 0x8.D42B9Bp-34;
    union U2 ***l_475 = (void*)0;
    union U2 ****l_474 = &l_475;
    union U2 *****l_473 = &l_474;
    union U3 *l_489 = &g_490;
    union U2 *l_512 = &g_87;
    union U2 **l_511 = &l_512;
    const struct S0 l_532 = {0x6.6CC851p+56,0x911995FFL,0xE537C568L,1UL,4294967295UL,1L,18446744073709551608UL,0x237F5912L,-1L,0xB1E90C7EL};
    float l_539 = 0x4.307555p+12;
    const int32_t **l_605 = (void*)0;
    const int32_t ***l_604 = &l_605;
    const int32_t ****l_603 = &l_604;
    if ((safe_add_func_int32_t_s_s((l_378 == (*g_296)), (*p_41))))
    { 
        union U1 **l_381 = (void*)0;
        int32_t l_389 = 0x7FD0B388L;
        int32_t l_418 = 0xC717242DL;
        int32_t l_470 = (-5L);
        union U3 *l_488 = &g_428;
        if (((0x1118L ^ g_208.f5) < ((safe_sub_func_uint32_t_u_u((l_381 == (void*)0), (0xE1A9L && (safe_sub_func_uint16_t_u_u(((l_384 && (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_42, p_42)), l_389))) <= l_389), 0x0AF1L))))) && p_44)))
        { 
            (*g_233) = p_43;
            
            assert (g_234 == &g_30);
            (**g_233) &= l_389;
        }
        else
        { 
            int32_t l_397 = 0x571DA718L;
            uint16_t l_438 = 0x3D85L;
            int8_t l_456 = 0x73L;
            int32_t *l_487 = &l_384;
            if ((*p_43))
            { 
                const int32_t l_393 = 0x4E22DBB2L;
                struct S0 ***l_402 = (void*)0;
                (*p_43) = (safe_lshift_func_int16_t_s_s(p_44, 6));
                if (__builtin_popcountl(((((void*)0 != g_392) || (0x17E480CFL & l_393)) || (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(g_122.f4, p_44)))))))
                { 
                    int32_t *l_401 = &g_211.f9;
                    if (l_397)
                    { 
                        int8_t l_400 = 0x95L;
                        l_400 = (g_211.f5 <= (safe_lshift_func_uint16_t_u_s(0x076CL, 8)));
                        return p_43;
                        
                        
                    }
                    else
                    { 
                        return l_401;
                        
                        
                    }
                }
                else
                { 
                    struct S0 ****l_403 = (void*)0;
                    struct S0 **l_405 = &g_210;
                    struct S0 ***l_404 = &l_405;
                    l_384 ^= __builtin_clzl(((l_397 > (*g_234)) && l_389));
                    l_404 = l_402;
                    
                    assert (l_404 == 0);
                    return p_41;
                    
                    
                }
            }
            else
            { 
                float l_413 = 0x6.F6C9FFp-13;
                int32_t l_437 = 0xB25AF851L;
                union U2 ***l_464 = (void*)0;
                union U2 ****l_463 = &l_464;
                union U2 *****l_462 = &l_463;
                union U1 **l_480 = &g_297;
                l_418 &= (g_87.f3 ^ ((safe_mod_func_int16_t_s_s(g_211.f1, __builtin_ffsll((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((!(*g_234)), (safe_rshift_func_int16_t_s_s((((((safe_sub_func_uint16_t_u_u(((((l_384 ^ (g_211.f1 != p_42)) >= (p_44 > 1UL)) > g_192) != 65535UL), g_208.f2)) <= g_108) & g_122.f8) < l_389) <= l_397), g_336)))), 0xA5ECL))))) && l_389));
                if (__builtin_clz((g_211.f6 & (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(__builtin_ia32_crc32qi(g_271.f0, p_44), (2UL || (((-1L) > ((safe_sub_func_int32_t_s_s((&g_210 == (void*)0), (g_336 <= l_384))) == l_397)) >= 0L)))), p_44)), p_42)))))
                { 
                    union U3 *l_427 = &g_428;
                    float *l_439 = &g_269.f1.f0;
                    l_427 = &g_271;
                    
                    assert (l_427 == &g_271);
                    (*l_439) = (((p_44 == (safe_add_func_float_f_f((p_42 != (!p_44)), func_67(((safe_rshift_func_int16_t_s_s((((((g_6 ^ (safe_sub_func_uint16_t_u_u((~l_397), g_211.f6))) && func_67((6UL < ((p_44 & (8UL | l_437)) <= g_122.f3)), p_41, p_42, p_41)) & (-10L)) >= p_44) ^ l_389), l_438)) || l_418), p_43, p_42, (*g_233))))) < 0x5.8E99BCp+91) != 0x3.820C1Fp+38);
                    return (*g_233);
                    
                    
                }
                else
                { 
                    struct S0 **l_466 = &g_210;
                    union U1 **l_481 = &l_378;
                    if ((*p_41))
                    { 
                        struct S0 *l_440 = &g_211;
                        struct S0 **l_441 = &g_210;
                        (*l_441) = l_440;
                        
                        assert (g_210 == &g_211);
                    }
                    else
                    { 
                        uint32_t l_448 = 0xC8C59DEAL;
                        (*p_41) = (safe_rshift_func_int16_t_s_u(__builtin_clzl((0x2EC4L > (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((__builtin_clz(__builtin_ffs(((l_448 != (1L | l_437)) & 0x0377B847L))) | 4294967290UL), g_122.f2)) && p_42), 10)))), 10));
                    }
                    if ((*g_234))
                    { 
                        int16_t l_455 = (-7L);
                        (*p_43) = (safe_add_func_uint16_t_u_u(l_397, ((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(1L, (l_455 && (p_42 && 0x7BDBL)))) >= (((func_67(p_42, p_43, (0x5CD4L ^ p_44), (*g_233)) > p_44) < l_455) | 1L)), l_456)) < 0xDD6E5047L)));
                        return p_41;
                        
                        
                    }
                    else
                    { 
                        uint32_t l_461 = 4294967292UL;
                        float *l_465 = &l_413;
                        struct S0 ***l_467 = (void*)0;
                        struct S0 ***l_468 = &l_466;
                        (*l_465) = ((safe_add_func_float_f_f((safe_sub_func_float_f_f(l_397, l_437)), (l_461 <= ((void*)0 != l_462)))) >= l_389);
                        (*l_468) = l_466;
                        (*g_233) = (*g_233);
                        (**g_233) |= (*p_41);
                    }
                    l_470 ^= (~p_42);
                    if (((*l_462) != (void*)0))
                    { 
                        return p_41;
                        
                        
                    }
                    else
                    { 
                        uint32_t l_472 = 0x6CA52551L;
                        int32_t *l_486 = &g_211.f1;
                        (*l_486) ^= (l_472 >= (((void*)0 != l_473) <= (safe_sub_func_uint32_t_u_u(((0x2A810679L > (-1L)) <= (safe_mul_func_uint16_t_u_u((l_480 != l_481), g_192))), (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((((void*)0 != l_486) ^ g_122.f6) ^ g_122.f2) || p_44), 10)), p_44))))));
                        (*g_233) = l_487;
                        
                        assert (g_234 == &l_384);
                        l_489 = l_488;
                        
                        assert (l_489 == &g_428);
                    }
                    
                    assert (g_234 == &l_384);
                    assert (l_489 == &g_428);
                }
                
                assert (g_234 == &l_384);
                assert (l_489 == &g_428);
            }
            
            assert (g_234 == &l_384);
            assert (l_489 == &g_428);
            for (g_490.f1.f1 = (-10); (g_490.f1.f1 >= 13); g_490.f1.f1 = safe_add_func_uint16_t_u_u(g_490.f1.f1, 1))
            { 
                uint32_t l_507 = 0xB63F3A5DL;
                int32_t *l_508 = &g_428.f1.f1;
                g_208.f1 &= ((p_44 > (0x54A044D0L | (2L >= (((*p_41) || ((safe_add_func_int32_t_s_s(l_384, (safe_rshift_func_int16_t_s_s((g_211.f1 != ((p_44 != (*p_43)) < (safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u(4L, 3)) < g_211.f6) & p_44), 0x2B3E7BC1L)) < g_6), 1L)) <= 65526UL), g_211.f6)))), 8)))) > g_122.f1)) <= g_122.f9)))) || l_507);
            }
            (*g_233) = (*g_233);
        }
        
        assert (g_234 == &l_384 || g_234 == &g_30);
        assert (l_489 == &g_428 || l_489 == &g_490);
    }
    else
    { 
        int32_t l_531 = (-7L);
        struct S0 *l_592 = &g_211;
        int32_t *l_613 = (void*)0;
        struct S0 **l_624 = (void*)0;
        struct S0 ***l_623 = &l_624;
        int32_t *l_630 = (void*)0;
        if (((p_42 & ((-1L) || (g_208.f6 <= (*p_43)))) || (safe_add_func_int16_t_s_s(0x6069L, (l_511 != (void*)0)))))
        { 
            union U1 l_517 = {1L};
            int32_t *l_518 = (void*)0;
            int32_t *l_520 = &g_108;
            union U2 ****l_529 = &l_475;
            if ((*p_43))
            { 
                int32_t *l_519 = (void*)0;
                union U2 ****l_530 = &l_475;
                (*g_233) = p_41;
                
                assert (g_234 == &g_30);
                (*g_233) = l_520;
                
                assert (g_234 == &g_108);
                if ((safe_mul_func_uint16_t_u_u(p_42, (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((0xF9D6L ^ 0UL), g_122.f4)), (((p_44 <= p_42) | (safe_mod_func_int32_t_s_s((l_529 == l_530), (-1L)))) & (*p_41)))))))
                { 
                    return p_41;
                    
                    
                }
                else
                { 
                    (**g_233) = (**g_233);
                }
                (*g_234) |= l_531;
            }
            else
            { 
                return p_41;
                
                
            }
            
            assert (g_234 == &g_108);
            (*g_233) = func_45(&l_384, p_43, (*g_210), func_45(p_43, p_41, l_532, p_41));
            
            assert (g_234 == &g_30);
        }
        else
        { 
            union U2 ***l_542 = (void*)0;
            int32_t *l_543 = (void*)0;
            int32_t l_548 = (-1L);
            const struct S0 l_555 = {0x2.7p-1,1L,0xE1CDCE22L,0xB400D95FL,1UL,0xE6L,18446744073709551615UL,0xBF37BC20L,0x0253L,0xA36000A0L};
            if (((safe_sub_func_uint16_t_u_u(((0x3562F081L >= 4294967295UL) != (safe_rshift_func_int16_t_s_u(l_532.f4, 4))), (safe_sub_func_int32_t_s_s((*p_41), (*p_43))))) | g_303))
            { 
                return l_543;
                
                
            }
            else
            { 
                union U2 ****l_547 = &l_475;
                float *l_549 = &g_428.f1.f0;
                (*l_549) = ((((((safe_add_func_float_f_f((0x1.2p+1 != (-((l_547 != (*l_473)) == __builtin_ffsl(g_211.f1)))), (p_42 >= (g_208.f3 == p_44)))) >= (-0x1.8p+1)) >= g_208.f7) >= 0x5.BEB182p-81) != p_44) >= l_548);
            }
            for (g_490.f1.f8 = 0; (g_490.f1.f8 < 28); g_490.f1.f8 = safe_add_func_uint32_t_u_u(g_490.f1.f8, 1))
            { 
                const int32_t *l_556 = &l_548;
                int32_t l_568 = 0x33DAA163L;
                for (g_271.f1.f7 = (-17); (g_271.f1.f7 <= 41); g_271.f1.f7 = safe_add_func_int16_t_s_s(g_271.f1.f7, 1))
                { 
                    return p_41;
                    
                    
                }
                g_211.f0 = (+((func_67(l_531, func_45(&l_548, p_43, l_555, (*g_233)), g_208.f8, l_556) == g_208.f6) != p_44));
                
                assert (g_234 == &g_211.f9);
                for (g_208.f8 = 4; (g_208.f8 >= (-5)); g_208.f8 = safe_sub_func_uint32_t_u_u(g_208.f8, 1))
                { 
                    int16_t l_574 = 3L;
                    (**g_233) = (g_211.f8 > (!(safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(65535UL, ((*p_43) == ((((*l_556) < l_532.f9) && (safe_mod_func_uint32_t_u_u(p_42, (safe_sub_func_uint16_t_u_u((l_568 && ((0UL > p_42) & 65527UL)), g_269.f0))))) | 0x209EL)))), 0x8667L))));
                    (*g_296) = (*g_296);
                    (*g_233) = p_41;
                    
                    assert (g_234 == &g_30);
                    for (g_428.f1.f8 = 0; (g_428.f1.f8 >= (-28)); g_428.f1.f8 = safe_sub_func_uint32_t_u_u(g_428.f1.f8, 7))
                    { 
                        int32_t l_571 = 0x362AD116L;
                        float *l_580 = &g_211.f0;
                        (*l_580) = (g_208.f6 == (((l_571 >= (*l_556)) >= ((safe_add_func_float_f_f(((((g_208.f7 != l_574) > (safe_add_func_float_f_f((__builtin_ffsl(l_532.f3) == (+((safe_add_func_float_f_f(p_44, g_122.f6)) > l_532.f9))), g_271.f0))) <= 0x3.E80C63p+34) > g_490.f0), p_42)) > l_574)) >= (-0x1.0p-1)));
                        (**g_233) = (p_44 <= g_208.f5);
                    }
                }
                
                assert (g_234 == &g_30 || g_234 == &g_211.f9);
                if (g_581)
                    break;
            }
            
            assert (g_234 == &g_30 || g_234 == &g_211.f9);
        }
        
        assert (g_234 == &g_30 || g_234 == &g_211.f9);
        for (g_208.f2 = 24; (g_208.f2 >= 3); g_208.f2 = safe_sub_func_uint16_t_u_u(g_208.f2, 1))
        { 
            union U2 *l_585 = (void*)0;
            int32_t l_608 = 0x5DDD107BL;
            union U1 l_614 = {9L};
            int32_t l_627 = 0xDC6AC73BL;
            (*p_43) |= 0x0FFBC017L;
            if (((!g_269.f0) <= ((l_585 == &g_87) <= (p_42 <= (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u(g_211.f6, ((g_211.f8 ^ (p_44 > l_532.f3)) >= (*p_41)))) > g_30) || p_44) < g_208.f7), p_44))))))
            { 
                int32_t ****l_591 = (void*)0;
                int32_t *****l_590 = &l_591;
                struct S0 **l_593 = &l_592;
                (*l_590) = &g_232;
                
                assert (l_591 == &g_232);
                (**g_233) = ((l_384 == l_532.f8) || g_208.f9);
                (*l_593) = l_592;
            }
            else
            { 
                int32_t l_606 = 0xD71E8C82L;
                if ((*g_234))
                    break;
                for (g_271.f1.f8 = 0; (g_271.f1.f8 >= 8); g_271.f1.f8 = safe_add_func_int16_t_s_s(g_271.f1.f8, 1))
                { 
                    int32_t *l_596 = (void*)0;
                    int32_t *l_597 = &g_87.f4;
                    int32_t *l_598 = (void*)0;
                    int32_t *l_599 = &g_581;
                    (*l_599) |= (**g_233);
                    if (l_531)
                    { 
                        int32_t ****l_602 = (void*)0;
                        (*l_599) = ((((safe_mod_func_uint32_t_u_u((l_602 == l_603), l_606)) | p_44) ^ p_42) > (g_336 < (p_44 == ((~(**g_233)) ^ l_608))));
                        (*g_234) &= (p_42 | (safe_sub_func_uint16_t_u_u(p_42, 0x801AL)));
                    }
                    else
                    { 
                        return p_41;
                        
                        
                    }
                    if ((l_606 | __builtin_bswap32((l_606 || (((*l_599) != 3L) && (((*l_599) >= ((*p_43) ^ (65529UL || p_44))) < 0x3491F1DAL))))))
                    { 
                        (*p_41) = (safe_mul_func_int16_t_s_s(0xBB18L, p_44));
                        (**g_233) = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_42, p_42)), ((-5L) || (safe_mul_func_int16_t_s_s(((void*)0 != &g_240), (0x2B56A814L != (*p_43)))))));
                        (*l_599) ^= (**g_233);
                    }
                    else
                    { 
                        l_623 = l_623;
                        (*p_41) = ((g_211.f1 >= 0x8D2BL) != (((g_87.f1 ^ ((*p_43) > (*g_234))) == ((safe_mod_func_int32_t_s_s(((l_627 & g_211.f2) >= ((safe_mul_func_int16_t_s_s(((void*)0 == &l_624), g_208.f3)) == g_192)), p_44)) > 4294967295UL)) == 0x61E04BBAL));
                    }
                }
            }
            l_630 = func_45(p_41, p_43, l_532, l_630);
            
            assert (g_234 == &g_211.f9);
        }
        (*l_511) = &g_87;
        (**g_233) ^= (safe_rshift_func_int16_t_s_s(g_211.f6, (safe_lshift_func_uint16_t_u_s((p_44 >= p_42), 8))));
    }
    
    assert (g_234 == &g_30 || g_234 == &g_211.f9 || g_234 == &l_384);
    assert (l_489 == &g_428 || l_489 == &g_490);
    (**g_233) = 0x719B1546L;
    (*g_233) = p_41;
    
    assert (g_234 == &g_30);
    l_384 |= (((safe_mod_func_uint16_t_u_u(0xA3ADL, g_208.f2)) ^ (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(((*p_41) & g_122.f3), (&l_604 != (void*)0))) == ((void*)0 == &p_41)), 6)), 1L))) < 1UL);
    return p_41;
    
    
}




static int32_t * func_45(int32_t * p_46, int32_t * p_47, const struct S0  p_48, int32_t * p_49)
{ 
    struct S0 **l_371 = (void*)0;
    int32_t *l_372 = &g_211.f9;
    int32_t *l_373 = &g_211.f9;
    float *l_374 = &g_269.f1.f0;
    (*g_233) = l_373;
    
    assert (g_234 == &g_211.f9);
    (*p_47) |= (*l_372);
    (*l_374) = 0x1.0p+1;
    return p_49;
    
    
}




inline static int32_t * func_50(int16_t  p_51, int32_t * p_52, int16_t  p_53)
{ 
    union U2 *l_359 = &g_87;
    union U2 **l_358 = &l_359;
    int32_t *l_366 = (void*)0;
    (*l_358) = &g_87;
    for (g_211.f1 = 0; (g_211.f1 == 18); g_211.f1 = safe_add_func_int32_t_s_s(g_211.f1, 6))
    { 
        float *l_362 = &g_208.f0;
        union U2 ***l_365 = (void*)0;
        union U2 ****l_364 = &l_365;
        union U2 *****l_363 = &l_364;
        (*l_362) = g_192;
        (*l_363) = (void*)0;
        
        assert (l_364 == 0);
    }
    return l_366;
    
    
}




static int32_t * func_54(int32_t * p_55, int32_t  p_56, int32_t * p_57)
{ 
    int32_t l_347 = 1L;
    int32_t *l_350 = &g_30;
    int32_t *l_357 = &g_108;
    (*p_55) &= l_347;
    for (g_208.f7 = 2; (g_208.f7 >= 32); g_208.f7 = safe_add_func_uint16_t_u_u(g_208.f7, 1))
    { 
        int32_t l_354 = (-10L);
        (*g_233) = l_357;
        
        assert (g_234 == &g_108);
    }
    
    
    return p_55;
    
    
}




inline static int32_t * func_58(int32_t * p_59, float  p_60)
{ 
    const int32_t *l_72 = &g_30;
    int32_t *l_275 = &g_211.f9;
    union U2 *l_282 = &g_87;
    union U2 **l_281 = &l_282;
    union U1 *l_294 = &g_76;
    (*l_275) = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_67((((g_6 > ((void*)0 == l_72)) <= (l_72 == &g_30)) & func_73(g_76, &g_30)), l_275, g_211.f1, l_72), 11)), (*l_72))), (*l_72)));
    
    assert (g_210 == &g_208 || g_210 == &g_211);
    (*l_281) = &g_87;
    if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((*l_275), __builtin_ctzll(((1L | ((g_271.f0 & (safe_mul_func_uint16_t_u_u(g_30, g_208.f5))) <= (**g_233))) | (!__builtin_ffsll((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((*l_72) ^ ((&p_59 != (void*)0) >= g_211.f1)) && (*p_59)) <= (*l_72)), 2UL)), (*p_59))))))))), 1)))
    { 
        union U1 **l_295 = &l_294;
        int32_t l_301 = 0xE6ECA0ADL;
        const int32_t *l_302 = &g_87.f4;
        (*l_295) = l_294;
        (***g_232) ^= ((l_295 != g_296) != (-6L));
        (*l_295) = (void*)0;
        
        assert (l_294 == 0);
        (*l_275) &= ((*l_72) > (((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((func_67(__builtin_parityll((g_211.f7 <= (g_208.f8 <= __builtin_ia32_crc32qi((g_208.f6 < g_208.f9), g_108)))), p_59, l_301, l_302) & 8L))) == g_211.f2), g_303)) || g_208.f6) > g_122.f9));
    }
    else
    { 
        float *l_306 = (void*)0;
        int32_t l_316 = 0x266B89E3L;
        int32_t *l_344 = &g_208.f9;
        union U2 ***l_346 = &l_281;
        union U2 ****l_345 = &l_346;
        if ((g_211.f9 ^ (*p_59)))
        { 
            const uint16_t l_311 = 0xD823L;
            int32_t l_331 = 4L;
            int32_t *l_340 = (void*)0;
            if ((safe_lshift_func_int16_t_s_s(g_87.f1, (l_306 == l_306))))
            { 
                int32_t *l_319 = &g_208.f1;
                (*l_319) &= ((safe_sub_func_uint16_t_u_u(__builtin_parityl((safe_sub_func_int32_t_s_s((__builtin_parityl(g_269.f0) <= g_211.f4), (((l_311 && g_208.f4) > ((**g_233) & (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_208.f9, l_316)), (((safe_add_func_uint16_t_u_u((*l_275), 0xA555L)) >= 0UL) || 1UL))) >= l_311) >= 7UL))) && 0x3028FBC9L)))), (-5L))) < 0x76F33A58L);
                (*l_319) = (*p_59);
                g_208.f0 = (((void*)0 == (*l_281)) >= ((safe_mul_func_float_f_f(l_311, (g_208.f1 <= 0x1.0p-1))) >= 0x5.0DD109p-11));
            }
            else
            { 
                int32_t ****l_341 = &g_232;
                for (g_87.f3 = 0; (g_87.f3 != 50); g_87.f3 = safe_add_func_int32_t_s_s(g_87.f3, 1))
                { 
                    float *l_324 = &g_76.f2.f0;
                    (*l_275) |= ((void*)0 != (*g_296));
                    (*l_324) = g_271.f0;
                }
                
                (*l_341) = (void*)0;
                
                assert (g_232 == 0);
            }
            
            assert (g_232 == 0 || g_232 == &g_233);
        }
        else
        { 
            (***g_232) |= ((safe_rshift_func_uint16_t_u_s(l_316, 0)) ^ (*l_275));
            return l_344;
            
            
        }
        
        assert (g_232 == 0 || g_232 == &g_233);
        (*g_233) = &l_316;
        
        assert (g_234 == &l_316);
        (*l_345) = &l_281;
    }
    
    
    assert (g_232 == 0 || g_232 == &g_233);
    assert (l_294 == &g_76 || l_294 == 0);
    (*l_275) = (*l_275);
    return l_275;
    
    
}




static uint16_t  func_67(int16_t  p_68, int32_t * p_69, int32_t  p_70, const int32_t * p_71)
{ 
    int32_t l_278 = 0x466CC9BBL;
    (*g_234) = (safe_mul_func_int16_t_s_s((l_278 && l_278), (safe_mul_func_uint16_t_u_u(0x2DCBL, l_278))));
    return p_70;
}




static uint32_t  func_73(union U1  p_74, int32_t * p_75)
{ 
    const int32_t l_92 = 1L;
    uint32_t l_101 = 0x14114C53L;
    int32_t l_115 = 0x5D34B728L;
    union U2 *l_175 = &g_87;
    int32_t *l_181 = &l_115;
    struct S0 *l_207 = &g_208;
    struct S0 **l_206 = &l_207;
    int16_t l_213 = 0x27FDL;
    int32_t ***l_235 = &g_233;
    const union U3 *l_270 = &g_271;
    for (p_74.f2.f8 = 0; (p_74.f2.f8 >= (-15)); p_74.f2.f8 = safe_sub_func_uint16_t_u_u(p_74.f2.f8, 1))
    { 
        int32_t *l_81 = &g_76.f1;
        const union U2 *l_86 = &g_87;
        int32_t l_130 = (-6L);
        float *l_162 = &g_150;
        union U1 *l_179 = &g_76;
        union U1 **l_178 = &l_179;
        float l_185 = 0x8.9p-1;
        (*l_81) = (0x6128B293L >= (g_76.f0 >= (safe_add_func_uint16_t_u_u(1UL, p_74.f0))));
        
        for (g_76.f2.f1 = 0; (g_76.f2.f1 < (-8)); g_76.f2.f1 = safe_sub_func_int32_t_s_s(g_76.f2.f1, 5))
        { 
            uint32_t l_91 = 7UL;
            int32_t *l_100 = &g_30;
            uint16_t l_158 = 4UL;
            uint32_t l_169 = 0x6DDE4B23L;
            struct S0 ***l_209 = &l_206;
            if ((safe_rshift_func_int16_t_s_u(0x61E4L, p_74.f0)))
            { 
                const union U2 **l_88 = &l_86;
                int32_t *l_93 = &g_87.f4;
                (*l_88) = l_86;
                (*l_93) &= (p_74.f0 | (((0xFC49L != l_91) || ((void*)0 == l_86)) >= (0x74484A86L != l_92)));
                
                (*l_93) &= ((((g_76.f0 | l_91) <= (!(p_74.f0 | (+l_91)))) && (((__builtin_parityl(g_76.f1) > (safe_mul_func_uint16_t_u_u((*l_81), (l_100 != (void*)0)))) | l_101) != (*p_75))) | (*l_100));
                for (g_87.f0 = 0; (g_87.f0 <= 22); g_87.f0 = safe_add_func_int32_t_s_s(g_87.f0, 4))
                { 
                    uint16_t l_106 = 65535UL;
                    int32_t *l_107 = &g_108;
                    int32_t **l_109 = &l_100;
                    (*l_107) = (safe_mod_func_uint16_t_u_u(l_106, g_30));
                    (*l_109) = &g_30;
                }
                
            }
            else
            { 
                uint32_t l_137 = 4UL;
                int32_t l_205 = 1L;
                for (l_101 = 0; (l_101 > 8); l_101 = safe_add_func_int16_t_s_s(l_101, 1))
                { 
                    if ((*p_75))
                    { 
                        int32_t **l_112 = &l_81;
                        (*l_112) = (void*)0;
                        
                        assert (l_81 == 0);
                    }
                    else
                    { 
                        union U1 *l_114 = (void*)0;
                        union U1 **l_113 = &l_114;
                        int32_t l_117 = 0x1981F0B5L;
                        int32_t *l_118 = &g_108;
                        (*l_113) = &g_76;
                        
                        assert (l_114 == &g_76);
                        l_115 = g_87.f4;
                        l_117 = (~(*p_75));
                        (*l_118) = g_6;
                    }
                }
                
                assert (l_81 == &g_76.f1 || l_81 == 0);
                for (g_87.f2 = (-3); (g_87.f2 < 35); g_87.f2 = safe_add_func_int32_t_s_s(g_87.f2, 7))
                { 
                    const struct S0 *l_121 = &g_122;
                    const struct S0 **l_123 = &l_121;
                    int32_t *l_151 = &l_115;
                    float *l_163 = &g_150;
                    (*l_123) = l_121;
                    if ((((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_130, ((*p_75) != 0xFA1A718AL))), g_76.f1)) >= ((safe_rshift_func_uint16_t_u_u(((g_122.f6 != (safe_lshift_func_int16_t_s_u(((((0xDA35237EL <= (safe_sub_func_int32_t_s_s((*p_75), ((g_122.f8 && l_137) || 65526UL)))) <= (-1L)) ^ p_74.f0) ^ g_87.f2), 15))) >= 4294967290UL), 12)) < p_74.f0)) || g_6), 1L)) < g_122.f4) || 0xC2983F5DL))
                    { 
                        int32_t *l_148 = &l_115;
                        float *l_149 = &g_150;
                        (*l_148) = (safe_mod_func_int32_t_s_s(((l_137 & 4294967295UL) <= (__builtin_parityl((g_108 == l_137)) && p_74.f0)), (safe_rshift_func_int16_t_s_s((g_6 & (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((*l_100), (safe_sub_func_int16_t_s_s(((0L || p_74.f0) > g_122.f6), g_108)))) & 4294967295UL), 3))), 8))));
                        (*l_149) = g_6;
                        g_108 |= g_87.f2;
                    }
                    else
                    { 
                        int32_t **l_152 = &l_100;
                        float *l_155 = &g_150;
                        (*l_152) = l_151;
                        
                        assert (l_100 == &l_115);
                        (*l_155) = (safe_add_func_float_f_f((-0x1.Ep+1), (**l_152)));
                    }
                    if ((safe_lshift_func_uint16_t_u_u(g_108, l_158)))
                    { 
                        uint32_t l_168 = 0x4380B9C8L;
                        (*l_151) = g_87.f1;
                        (*l_151) = (~g_108);
                        g_108 = ((safe_mul_func_uint16_t_u_u(l_101, (l_162 == l_163))) >= (((safe_lshift_func_int16_t_s_s((__builtin_bswap32(l_137) >= ((safe_add_func_int16_t_s_s((-10L), p_74.f0)) >= (l_101 | 0UL))), l_168)) == l_169) || (*l_100)));
                        g_108 &= (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(l_137, l_101)) >= p_74.f0), (g_87.f0 != (__builtin_bswap64((((p_74.f0 != l_137) > (p_74.f0 <= (*l_100))) || p_74.f0)) || 0xC7DBL))));
                    }
                    else
                    { 
                        int32_t *l_174 = &g_108;
                        union U2 **l_176 = &l_175;
                        (*l_174) ^= (*l_151);
                        (*l_176) = l_175;
                        g_150 = g_87.f4;
                        (*l_151) = (g_122.f5 && ((l_100 == &g_108) <= (((g_122.f1 & (&l_115 == (void*)0)) & (+((l_137 | (*p_75)) <= (((void*)0 != l_178) || 0L)))) ^ g_87.f3)));
                    }
                    if (((!(*l_100)) > 0xD73A523AL))
                    { 
                        int32_t **l_182 = (void*)0;
                        l_181 = p_75;
                        
                        assert (l_181 == &g_30);
                        p_75 = p_75;
                    }
                    else
                    { 
                        uint16_t l_188 = 1UL;
                        int32_t l_189 = 0xDF11EF48L;
                        l_189 = ((safe_mul_func_float_f_f(((*l_100) > 0x5.C6A011p-42), l_185)) >= (safe_mul_func_float_f_f(l_188, 0x2.3C7BDAp-88)));
                        (*l_151) |= 0x5A43AFDCL;
                        l_189 |= __builtin_bswap32((safe_mul_func_uint16_t_u_u(g_192, (4294967295UL ^ __builtin_parity((*l_151))))));
                        l_205 |= __builtin_clz(((*l_151) ^ (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(0L, (p_74.f0 <= g_76.f1))), (safe_mul_func_uint16_t_u_u(0xD98BL, (safe_mod_func_int32_t_s_s(((&g_108 != &l_115) || (safe_add_func_int32_t_s_s(1L, (safe_mul_func_uint16_t_u_u(((p_74.f0 && p_74.f0) == (*l_151)), 0x69E2L))))), 0x52DC662DL))))))));
                    }
                }
                
                assert (l_181 == &l_115 || l_181 == &g_30);
                assert (l_100 == &l_115 || l_100 == &g_30);
            }
            
            assert (l_181 == &l_115 || l_181 == &g_30);
            assert (l_81 == &g_76.f1 || l_81 == 0);
            assert (l_100 == &l_115 || l_100 == &g_30);
            (*l_209) = l_206;
            return p_74.f0;
        }
        g_210 = &g_208;
        
        assert (g_210 == &g_208);
        (*l_81) &= 0L;
    }
    
    assert (g_210 == &g_208 || g_210 == &g_211);
    if (g_208.f8)
    { 
        float *l_212 = (void*)0;
        l_213 = p_74.f0;
    }
    else
    { 
        const struct S0 ***l_214 = (void*)0;
        int32_t l_215 = 0x82EB3127L;
        float *l_216 = &g_150;
        int32_t **l_218 = &l_181;
        int32_t ***l_217 = &l_218;
        (*l_216) = (((&l_206 != l_214) >= l_215) != g_122.f1);
        (*l_217) = &l_181;
        for (p_74.f2.f8 = 0; (p_74.f2.f8 < (-21)); p_74.f2.f8 = safe_sub_func_int32_t_s_s(p_74.f2.f8, 5))
        { 
            int32_t *l_223 = &g_87.f4;
            for (g_76.f2.f5 = 0; (g_76.f2.f5 <= (-8)); g_76.f2.f5 = safe_sub_func_uint32_t_u_u(g_76.f2.f5, 1))
            { 
                (*l_223) ^= (__builtin_ctz(p_74.f0) != (p_75 != l_223));
                
            }
            (**l_218) &= 0x1148879AL;
            (*l_218) = (*l_218);
            for (g_76.f2.f9 = 0; (g_76.f2.f9 > 1); g_76.f2.f9 = safe_add_func_uint16_t_u_u(g_76.f2.f9, 6))
            { 
                (*l_223) ^= 0x5194D588L;
                
            }
        }
    }
    if (((void*)0 == &l_207))
    { 
        union U1 *l_227 = &g_76;
        union U1 **l_226 = &l_227;
        const int32_t l_241 = 0xF5E34AC4L;
        uint16_t l_262 = 5UL;
        (*l_226) = &g_76;
        if ((((safe_lshift_func_uint16_t_u_u(p_74.f0, (safe_rshift_func_uint16_t_u_u((g_232 == l_235), 10)))) > p_74.f0) ^ (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((***l_235), ((***l_235) & (*p_75)))) == 0L), g_87.f4))))
        { 
            uint32_t l_267 = 4294967292UL;
            if (((g_240 == (void*)0) && (l_241 & p_74.f0)))
            { 
                uint32_t l_244 = 3UL;
                (*l_181) = 0xA0D4A109L;
                (*g_233) = (*g_233);
                for (p_74.f0 = 27; (p_74.f0 == 9); p_74.f0 = safe_sub_func_int16_t_s_s(p_74.f0, 4))
                { 
                    if (l_244)
                        break;
                }
            }
            else
            { 
                uint32_t l_263 = 0UL;
                (*l_181) = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x8973L, (((safe_lshift_func_uint16_t_u_u(p_74.f0, 14)) | (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((+(safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((4UL || ((((*p_75) && ((safe_add_func_int16_t_s_s(l_262, 0x2DA8L)) == (**g_233))) != (l_175 == (void*)0)) > p_74.f0)) >= l_263), l_263)) == p_74.f0), 0UL))), p_74.f0)), g_208.f9))) || 1UL))), 0x79D2L));
                return l_241;
            }
            (*g_233) = (*g_233);
            l_267 = ((p_74.f0 && 1L) >= (+(safe_add_func_int16_t_s_s(((***l_235) && 0xC27B40A8L), p_74.f0))));
            return g_87.f1;
        }
        else
        { 
            const union U3 *l_268 = &g_269;
            uint16_t l_272 = 1UL;
            l_270 = l_268;
            
            assert (l_270 == &g_269);
            return l_272;
        }
    }
    else
    { 
        struct S0 ***l_273 = (void*)0;
        struct S0 ***l_274 = &l_206;
        (*l_274) = &l_207;
    }
    return (***l_235);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f3, "g_87.f3", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc_bytes (&g_122.f0, sizeof(g_122.f0), "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_122.f4, "g_122.f4", print_hash_value);
    transparent_crc(g_122.f5, "g_122.f5", print_hash_value);
    transparent_crc(g_122.f6, "g_122.f6", print_hash_value);
    transparent_crc(g_122.f7, "g_122.f7", print_hash_value);
    transparent_crc(g_122.f8, "g_122.f8", print_hash_value);
    transparent_crc(g_122.f9, "g_122.f9", print_hash_value);
    transparent_crc_bytes (&g_150, sizeof(g_150), "g_150", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc_bytes (&g_208.f0, sizeof(g_208.f0), "g_208.f0", print_hash_value);
    transparent_crc(g_208.f1, "g_208.f1", print_hash_value);
    transparent_crc(g_208.f2, "g_208.f2", print_hash_value);
    transparent_crc(g_208.f3, "g_208.f3", print_hash_value);
    transparent_crc(g_208.f4, "g_208.f4", print_hash_value);
    transparent_crc(g_208.f5, "g_208.f5", print_hash_value);
    transparent_crc(g_208.f6, "g_208.f6", print_hash_value);
    transparent_crc(g_208.f7, "g_208.f7", print_hash_value);
    transparent_crc(g_208.f8, "g_208.f8", print_hash_value);
    transparent_crc(g_208.f9, "g_208.f9", print_hash_value);
    transparent_crc_bytes (&g_211.f0, sizeof(g_211.f0), "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_211.f4, "g_211.f4", print_hash_value);
    transparent_crc(g_211.f5, "g_211.f5", print_hash_value);
    transparent_crc(g_211.f6, "g_211.f6", print_hash_value);
    transparent_crc(g_211.f7, "g_211.f7", print_hash_value);
    transparent_crc(g_211.f8, "g_211.f8", print_hash_value);
    transparent_crc(g_211.f9, "g_211.f9", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_271.f0, "g_271.f0", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_490.f0, "g_490.f0", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_663.f0, "g_663.f0", print_hash_value);
    transparent_crc(g_663.f1, "g_663.f1", print_hash_value);
    transparent_crc(g_663.f2, "g_663.f2", print_hash_value);
    transparent_crc(g_663.f3, "g_663.f3", print_hash_value);
    transparent_crc(g_663.f4, "g_663.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



