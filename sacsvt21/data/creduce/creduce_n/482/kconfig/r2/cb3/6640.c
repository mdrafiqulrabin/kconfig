



static long __undefined;






static int8_t  func_29(void);
inline static uint16_t  func_44(uint16_t  p_45, int32_t  p_46, int8_t  p_47, float  p_48, uint32_t  p_49);
static int32_t * func_58(uint8_t  p_59);
static int32_t * func_71(uint8_t  p_72);
static uint8_t  func_73(uint16_t  p_74, float * p_75, int16_t  p_76, float  p_77, int16_t  p_78);
inline static int32_t * func_83(int16_t  p_84, int8_t  p_85, float * p_86, uint32_t  p_87);
inline static const int8_t  func_90(const int32_t * p_91, uint8_t  p_92, float  p_93);
static const int32_t * func_94(int32_t * p_95);
static int32_t * func_96(const uint16_t  p_97, const float  p_98, float * p_99, float * p_100);
static float * func_104(int8_t  p_105, int32_t ** p_106, int8_t  p_107, uint16_t  p_108, int32_t * const * const  p_109);





static int8_t  func_29(void)
{ 
    uint32_t l_33 = 1UL;
    int16_t l_37 = 0x1A05L;
    uint16_t l_50 = 0x30B9L;
    uint32_t l_57 = 0xA0627E80L;
    int32_t l_690 = 0xBD179C09L;
    int32_t *l_689 = &l_690;
    int32_t l_691 = 2L;
    (*l_689) = ((safe_unary_minus_func_uint8_t_u(((safe_add_func_uint8_t_u_u((l_33 || 252UL), ((safe_unary_minus_func_uint16_t_u(l_33)) != (safe_add_func_int8_t_s_s(0x55L, l_37))))) & ((safe_lshift_func_uint16_t_u_u(0xE974L, 10)) < (((safe_rshift_func_uint16_t_u_u(func_44(l_50, (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((__builtin_bswap32(l_57) | l_57) > l_57), 3)), l_57)), l_37)), l_33, l_50, l_57), l_33)) > l_50) != l_33))))) & 0x2731L);
    return l_691;
}




inline static uint16_t  func_44(uint16_t  p_45, int32_t  p_46, int8_t  p_47, float  p_48, uint32_t  p_49)
{ 
    int32_t l_646 = 1L;
    int32_t *l_645 = &l_646;
    int32_t **l_644 = &l_645;
    float l_653 = 0x7.F6F486p+1;
lbl_649:
    (*l_644) = func_58(p_49);
    
    assert (l_645 == 0);
    for (p_46 = 0; (p_46 != 15); p_46++)
    { 
        int32_t *l_650 = &l_646;
        if (p_46)
            goto lbl_649;
        (*l_650) = 0xA233A8C0L;
        if (func_90(l_650, p_47, ((func_73((&l_650 == &l_650), l_650, p_45, p_47, (*l_650)) == 0x8.1p+1) > p_49)))
        { 
            (*l_650) ^= 0x7FA70DFFL;
            if (p_47)
                goto lbl_649;
        }
        else
        { 
            uint16_t l_654 = 0x4253L;
            int32_t *l_658 = &l_646;
            int32_t **l_672 = &l_658;
            int32_t *l_687 = (void*)0;
            int32_t l_688 = 1L;
            if (l_654)
                break;
            for (p_45 = (-6); (p_45 == 10); p_45++)
            { 
                int32_t **l_657 = &l_645;
                (*l_644) = func_71(p_45);
                
                assert (l_645 == 0);
                (*l_657) = func_94((*l_644));
                (*l_644) = l_658;
                
                assert (l_645 == &l_646);
                if (((p_46 & ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((__builtin_ctzll((*l_658)) < ((((**l_657) > (-1L)) ^ (**l_657)) < p_45)), ((safe_mod_func_uint32_t_u_u((p_49 != func_90(l_658, p_46, (*l_650))), (*l_650))) | p_46))) | p_49), 3)) == 0xF7D47C41L)) && (*l_650)))
                { 
                    uint32_t l_665 = 18446744073709551615UL;
                    l_658 = (*l_644);
                    return l_665;
                }
                else
                { 
                    int32_t *l_666 = (void*)0;
                    int32_t l_668 = (-9L);
                    int32_t *l_667 = &l_668;
                    (*l_667) ^= (**l_644);
                    if ((*l_658))
                    { 
                        uint8_t l_671 = 0xD2L;
                        (**l_644) |= p_45;
                        (*l_667) ^= (safe_add_func_int8_t_s_s(__builtin_ctz((**l_657)), l_671));
                        if (p_47)
                            continue;
                    }
                    else
                    { 
                        (*l_644) = (*l_644);
                        (*l_667) |= (**l_644);
                        (**l_644) = 1L;
                    }
                }
            }
            (*l_672) = func_94(l_650);
            l_688 ^= (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((void*)0 != l_650), ((!((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((~(&l_672 != &l_672)), 0x0CL)), (-9L))) > (*l_650))) > ((*l_658) || (safe_div_func_int32_t_s_s((((safe_add_func_int32_t_s_s((*l_658), 0xA5F34B81L)) ^ 0UL) & 1UL), p_49)))))), 5));
        }
    }
    
    assert (l_645 == &l_646 || l_645 == 0);
    (*l_644) = (*l_644);
    return p_45;
}




static int32_t * func_58(uint8_t  p_59)
{ 
    int32_t l_63 = 0L;
    const int32_t *l_62 = &l_63;
    int32_t l_70 = (-7L);
    int32_t *l_69 = &l_70;
    int32_t **l_635 = &l_69;
    int32_t *l_640 = &l_70;
    int32_t *l_641 = &l_70;
    int32_t *l_642 = &l_70;
    int32_t *l_643 = (void*)0;
    for (p_59 = 0; (p_59 <= 28); p_59 = safe_add_func_uint32_t_u_u(p_59, 3))
    { 
        int32_t *l_64 = (void*)0;
        float l_66 = 0x7.Fp-1;
        float *l_65 = &l_66;
        (*l_65) = (((void*)0 == l_62) >= (l_64 != &l_63));
        if (p_59)
            goto lbl_636;
    }
    (*l_69) ^= (safe_mul_func_uint16_t_u_u((l_62 == l_62), ((*l_62) && p_59)));
lbl_636:
    (*l_635) = func_71(func_73(p_59, l_69, (*l_69), p_59, (*l_69)));
    
    assert (l_69 == 0);
    for (p_59 = 0; (p_59 < 25); p_59 = safe_add_func_uint8_t_u_u(p_59, 1))
    { 
        int32_t *l_639 = &l_70;
        (*l_639) = (*l_62);
        (*l_639) &= 0L;
    }
    return l_643;
    
    
}




static int32_t * func_71(uint8_t  p_72)
{ 
    uint32_t l_473 = 8UL;
    int32_t l_475 = (-9L);
    int32_t *l_474 = &l_475;
    float l_480 = 0x7.Cp-1;
    float *l_479 = &l_480;
    float **l_478 = &l_479;
    uint16_t l_481 = 65531UL;
    int32_t **l_482 = &l_474;
    int32_t *l_483 = &l_475;
    int32_t l_484 = 0x5874EE3FL;
    int32_t *l_485 = (void*)0;
    int32_t *l_486 = &l_484;
    int32_t *l_487 = &l_484;
    int32_t *l_488 = &l_484;
    int32_t l_489 = 1L;
    int32_t *l_490 = &l_484;
    int32_t l_491 = 0x6D661313L;
    int32_t *l_492 = &l_475;
    int32_t *l_493 = &l_489;
    int32_t *l_494 = (void*)0;
    int32_t *l_495 = &l_484;
    int32_t l_496 = 0x717C3DF1L;
    int32_t *l_497 = &l_489;
    int32_t *l_498 = &l_489;
    int32_t l_499 = 0xC0B11163L;
    int32_t l_500 = (-1L);
    int32_t *l_501 = &l_491;
    int32_t *l_502 = &l_491;
    int32_t *l_503 = &l_499;
    int32_t *l_504 = &l_484;
    int32_t *l_505 = &l_484;
    int32_t *l_506 = (void*)0;
    int32_t *l_507 = &l_491;
    int32_t *l_508 = &l_499;
    int32_t *l_509 = &l_496;
    int32_t *l_510 = (void*)0;
    int32_t *l_511 = &l_500;
    int32_t l_512 = 0x126B19A0L;
    int32_t l_513 = 1L;
    int32_t *l_514 = &l_484;
    int32_t l_515 = 1L;
    int32_t *l_516 = &l_500;
    int32_t *l_517 = (void*)0;
    int32_t *l_518 = &l_500;
    int32_t *l_519 = &l_500;
    int32_t *l_520 = &l_500;
    int32_t *l_521 = &l_515;
    int32_t l_522 = 0L;
    int32_t *l_523 = &l_496;
    int32_t *l_524 = &l_512;
    int32_t *l_525 = &l_484;
    int32_t *l_526 = (void*)0;
    int32_t *l_527 = &l_484;
    int32_t *l_528 = &l_484;
    int32_t l_529 = 1L;
    int32_t *l_530 = &l_491;
    int32_t *l_531 = &l_500;
    int32_t l_532 = 0xE59004A7L;
    int32_t *l_533 = &l_512;
    int32_t *l_534 = (void*)0;
    int32_t *l_535 = &l_496;
    int32_t *l_536 = (void*)0;
    int32_t *l_537 = &l_512;
    int32_t *l_538 = &l_512;
    int32_t *l_539 = &l_489;
    int32_t *l_540 = (void*)0;
    int32_t *l_541 = (void*)0;
    int32_t *l_542 = &l_484;
    int32_t l_543 = 0x4A67530FL;
    int32_t *l_544 = (void*)0;
    int32_t *l_545 = &l_500;
    int32_t *l_546 = &l_515;
    int32_t *l_547 = &l_512;
    int32_t *l_548 = &l_522;
    int32_t l_549 = (-10L);
    int32_t *l_550 = &l_489;
    int32_t *l_551 = &l_513;
    int32_t *l_552 = &l_543;
    int32_t *l_553 = (void*)0;
    int32_t *l_554 = (void*)0;
    int32_t *l_555 = &l_532;
    int32_t *l_556 = &l_532;
    int32_t *l_557 = &l_543;
    int32_t *l_558 = &l_522;
    int32_t *l_559 = &l_522;
    int32_t l_560 = 1L;
    int32_t *l_561 = &l_489;
    int32_t *l_562 = &l_513;
    int32_t *l_563 = &l_522;
    int32_t *l_564 = &l_500;
    int32_t *l_565 = (void*)0;
    int32_t *l_566 = &l_475;
    int32_t *l_567 = &l_529;
    int32_t *l_568 = (void*)0;
    int32_t l_569 = (-1L);
    int32_t *l_570 = &l_549;
    int32_t *l_571 = &l_549;
    int32_t *l_572 = &l_529;
    int32_t *l_573 = &l_499;
    int32_t *l_574 = &l_496;
    int32_t *l_575 = &l_532;
    int32_t *l_576 = (void*)0;
    int32_t *l_577 = &l_512;
    int32_t l_578 = 0x9F135EEAL;
    int32_t *l_579 = &l_512;
    int32_t *l_580 = &l_489;
    int32_t *l_581 = &l_532;
    int32_t *l_582 = &l_522;
    int32_t *l_583 = (void*)0;
    int32_t *l_584 = &l_543;
    int32_t l_585 = 6L;
    int32_t *l_586 = &l_491;
    int32_t *l_587 = &l_484;
    int32_t *l_588 = &l_532;
    int32_t *l_589 = (void*)0;
    int32_t *l_590 = &l_499;
    int32_t *l_591 = &l_578;
    int32_t *l_592 = (void*)0;
    int32_t *l_593 = &l_569;
    int32_t l_594 = 0xB4517E80L;
    int32_t *l_595 = &l_499;
    int32_t l_596 = 0xD4BB7499L;
    int32_t *l_597 = &l_475;
    int32_t *l_598 = &l_499;
    int32_t l_599 = (-1L);
    int32_t *l_600 = &l_475;
    int32_t *l_601 = &l_549;
    int32_t *l_602 = &l_491;
    int32_t *l_603 = &l_585;
    int32_t *l_604 = &l_585;
    int32_t *l_605 = &l_578;
    int32_t *l_606 = &l_560;
    int32_t *l_607 = &l_515;
    int32_t *l_608 = (void*)0;
    int32_t *l_609 = &l_499;
    int32_t *l_610 = (void*)0;
    int32_t *l_611 = &l_489;
    int32_t l_612 = 0x93577412L;
    int32_t *l_613 = &l_596;
    int32_t *l_614 = &l_475;
    int32_t l_615 = 0x19CB7C38L;
    int32_t l_616 = 6L;
    int32_t *l_617 = &l_532;
    int32_t l_618 = 0xD7E304C9L;
    int32_t *l_619 = &l_585;
    int32_t *l_620 = &l_560;
    int32_t *l_621 = &l_599;
    int32_t *l_622 = &l_512;
    int32_t *l_623 = &l_475;
    int32_t *l_624 = (void*)0;
    int32_t *l_625 = &l_612;
    uint32_t l_626 = 1UL;
    int32_t *l_629 = &l_599;
    int32_t *l_630 = &l_522;
    int32_t *l_631 = &l_532;
    int32_t *l_632 = &l_616;
    int32_t *l_633 = &l_596;
    int32_t *l_634 = (void*)0;
    (*l_474) = (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(8UL, l_473)) <= p_72), l_473));
    (*l_482) = func_83((safe_div_func_uint8_t_u_u(p_72, p_72)), ((l_478 != &l_479) == 0x9CL), func_83((*l_474), p_72, (*l_478), __builtin_ia32_crc32qi(p_72, l_481)), p_72);
    
    assert (l_474 == &l_480);
    l_626++;
    return l_634;
    
    
}




static uint8_t  func_73(uint16_t  p_74, float * p_75, int16_t  p_76, float  p_77, int16_t  p_78)
{ 
    int32_t l_103 = 0x558B047CL;
    int32_t *l_102 = &l_103;
    int32_t **l_101 = &l_102;
    for (p_74 = (-23); (p_74 > 22); p_74 = safe_add_func_int32_t_s_s(p_74, 4))
    { 
        int32_t *l_82 = (void*)0;
        int32_t **l_81 = &l_82;
        if (p_76)
            break;
        (*l_81) = p_75;
        
        
    }
    (*l_101) = func_83((safe_sub_func_uint16_t_u_u(((func_90(func_94(func_96(p_78, (l_101 != &l_102), l_102, func_104((*l_102), &l_102, p_78, (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(__builtin_ctzl((*l_102)), (*l_102))), 6)), &l_102))), p_76, (*p_75)) && (*l_102)) && p_76), p_74)), p_74, l_102, p_78);
    return p_78;
}




inline static int32_t * func_83(int16_t  p_84, int8_t  p_85, float * p_86, uint32_t  p_87)
{ 
    float ***l_278 = (void*)0;
    int32_t l_280 = 1L;
    int32_t *l_279 = &l_280;
    int16_t l_335 = 0x6AC7L;
    int32_t l_382 = 1L;
    int32_t l_392 = 1L;
    int32_t l_401 = 0xABB9B91CL;
    int32_t l_419 = 0xF71F425CL;
    int32_t l_431 = 0x8324DFF5L;
    int32_t l_432 = (-1L);
    int32_t l_441 = 0xF694FA6BL;
    int32_t l_450 = (-5L);
    int32_t l_452 = (-3L);
    (*l_279) &= ((l_278 == l_278) <= p_84);
    for (l_280 = 0; (l_280 <= (-8)); l_280 = safe_sub_func_int16_t_s_s(l_280, 1))
    { 
        int32_t **l_283 = &l_279;
        (*l_283) = (void*)0;
        
        assert (l_279 == 0);
    }
    
    assert (l_279 == 0 || l_279 == &l_280);
    if ((p_87 || p_85))
    { 
        int32_t l_306 = 0xECDC9E86L;
        int32_t *l_317 = &l_280;
        int32_t **l_318 = &l_317;
        for (p_85 = 0; (p_85 != (-8)); p_85 = safe_sub_func_int16_t_s_s(p_85, 1))
        { 
            uint32_t l_297 = 0x80A19A21L;
            const int32_t *l_301 = &l_280;
            float l_313 = 0x0.Bp-1;
            float *l_312 = &l_313;
            float **l_311 = &l_312;
            float ***l_310 = &l_311;
            if (l_280)
            { 
                return p_86;
                
                
            }
            else
            { 
                int32_t *l_286 = (void*)0;
                int32_t *l_287 = &l_280;
                int32_t *l_288 = &l_280;
                int32_t *l_289 = &l_280;
                int32_t *l_290 = &l_280;
                int32_t *l_291 = (void*)0;
                int32_t *l_292 = (void*)0;
                int32_t *l_293 = &l_280;
                int32_t *l_294 = &l_280;
                int32_t *l_295 = &l_280;
                int32_t *l_296 = &l_280;
                l_297++;
            }
            if ((safe_unary_minus_func_uint32_t_u((((l_297 & (func_90(l_301, (safe_sub_func_int8_t_s_s(p_85, p_87)), (safe_mul_func_float_f_f(((*p_86) >= l_306), (*p_86)))) < ((void*)0 != p_86))) != (*l_301)) >= (*l_301)))))
            { 
                if (p_87)
                    break;
            }
            else
            { 
                int32_t l_314 = 0x410F041EL;
                int32_t l_315 = 0x2DD7AA1DL;
                int32_t *l_316 = &l_315;
                l_315 ^= (((safe_unary_minus_func_int16_t_s(__builtin_clzll(p_84))) != (safe_mul_func_int16_t_s_s(((*l_301) && (p_84 <= (l_310 == (void*)0))), (-5L)))) || (((l_314 <= p_87) <= 5UL) <= l_280));
                l_316 = p_86;
                
                
            }
        }
        (*p_86) = (l_306 == l_306);
        (*l_318) = l_317;
    }
    else
    { 
        uint32_t l_336 = 0x0EA68498L;
        int32_t l_337 = 0L;
        (*p_86) = 0x1.5p+1;
        for (l_280 = (-25); (l_280 != (-21)); l_280++)
        { 
            int8_t l_327 = 0x86L;
            int32_t *l_332 = (void*)0;
            l_337 &= ((safe_mod_func_uint32_t_u_u(p_87, (0xB6CDL & (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((1L == (l_327 >= __builtin_clz(p_84))), (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((l_332 == l_332) | (safe_lshift_func_uint16_t_u_s((p_85 ^ l_335), l_336))) ^ l_327), 250UL)), p_87)))), p_85))))) <= p_85);
        }
    }
    if ((p_86 != p_86))
    { 
        int32_t *l_354 = &l_280;
        for (l_335 = 13; (l_335 != 10); l_335 = safe_sub_func_int16_t_s_s(l_335, 3))
        { 
            uint32_t l_342 = 0xA56D6DE4L;
            for (p_87 = 12; (p_87 == 41); p_87 = safe_add_func_int32_t_s_s(p_87, 6))
            { 
                float ** const *l_351 = (void*)0;
                l_342 |= (p_84 && 0xDFA0L);
                for (p_84 = 0; (p_84 > 5); p_84++)
                { 
                    int8_t l_352 = 1L;
                    int32_t *l_353 = &l_280;
                    (*l_353) = (__builtin_parityl(p_87) && (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(0x1AD1L, (safe_rshift_func_uint8_t_u_s(((void*)0 == &p_86), 3)))) > ((0x8E89D45BL >= p_84) == (((void*)0 != l_351) > l_352))), 0x50D81AABL)));
                    return p_86;
                    
                    
                }
            }
        }
        return p_86;
        
        
    }
    else
    { 
        int32_t *l_355 = &l_280;
        int32_t l_356 = 0x81AE7CB9L;
        int32_t *l_357 = &l_280;
        int32_t *l_358 = &l_356;
        int32_t *l_359 = &l_356;
        int32_t *l_360 = &l_280;
        int32_t *l_361 = &l_356;
        int32_t *l_362 = &l_280;
        int32_t *l_363 = &l_280;
        int32_t *l_364 = &l_280;
        int32_t *l_365 = &l_356;
        int32_t *l_366 = &l_356;
        int32_t *l_367 = &l_356;
        int32_t *l_368 = &l_280;
        int32_t *l_369 = &l_280;
        int32_t *l_370 = &l_280;
        int32_t *l_371 = &l_356;
        int32_t l_372 = 0x05584143L;
        int32_t *l_373 = &l_372;
        int32_t *l_374 = &l_372;
        int32_t *l_375 = (void*)0;
        int32_t *l_376 = &l_356;
        int32_t *l_377 = (void*)0;
        int32_t *l_378 = &l_280;
        int32_t l_379 = 1L;
        int32_t l_380 = 0L;
        int32_t *l_381 = &l_280;
        int32_t *l_383 = &l_379;
        int32_t l_384 = 7L;
        int32_t *l_385 = (void*)0;
        int32_t *l_386 = &l_380;
        int32_t *l_387 = &l_382;
        int32_t *l_388 = &l_280;
        int32_t *l_389 = &l_382;
        int32_t *l_390 = &l_380;
        int32_t *l_391 = &l_382;
        int32_t *l_393 = &l_372;
        int32_t *l_394 = (void*)0;
        int32_t *l_395 = &l_384;
        int32_t *l_396 = (void*)0;
        int32_t *l_397 = &l_379;
        int32_t *l_398 = &l_384;
        int32_t *l_399 = &l_280;
        int32_t *l_400 = &l_372;
        int32_t *l_402 = &l_280;
        int32_t l_403 = 0xEAE0A9FAL;
        int32_t *l_404 = &l_379;
        int32_t *l_405 = &l_403;
        int32_t *l_406 = &l_403;
        int32_t *l_407 = &l_392;
        int32_t *l_408 = &l_401;
        int32_t *l_409 = &l_382;
        int32_t *l_410 = &l_382;
        int32_t *l_411 = (void*)0;
        int32_t *l_412 = &l_280;
        int32_t *l_413 = &l_382;
        int32_t *l_414 = &l_384;
        int32_t l_415 = 7L;
        int32_t *l_416 = (void*)0;
        int32_t *l_417 = &l_384;
        int32_t *l_418 = &l_392;
        int32_t *l_420 = &l_372;
        int32_t *l_421 = &l_384;
        int32_t *l_422 = &l_380;
        int32_t *l_423 = &l_380;
        int32_t *l_424 = &l_379;
        int32_t *l_425 = &l_379;
        int32_t *l_426 = (void*)0;
        int32_t *l_427 = &l_382;
        int32_t *l_428 = &l_382;
        int32_t *l_429 = (void*)0;
        int32_t *l_430 = &l_380;
        int32_t *l_433 = &l_280;
        int32_t *l_434 = &l_356;
        int32_t *l_435 = (void*)0;
        int32_t l_436 = 1L;
        int32_t *l_437 = (void*)0;
        int32_t *l_438 = &l_379;
        int32_t *l_439 = &l_379;
        int32_t *l_440 = &l_403;
        int32_t *l_442 = &l_431;
        int32_t *l_443 = &l_392;
        int32_t *l_444 = &l_436;
        int32_t *l_445 = &l_356;
        int32_t *l_446 = &l_441;
        int32_t *l_447 = &l_401;
        int32_t *l_448 = (void*)0;
        int32_t l_449 = 0x56643B3FL;
        int32_t *l_451 = (void*)0;
        int32_t *l_453 = &l_384;
        int32_t *l_454 = &l_401;
        int32_t l_455 = 0x96E17EB0L;
        int32_t l_456 = 0x2CEC631EL;
        int32_t *l_457 = &l_403;
        int32_t *l_458 = &l_452;
        int32_t *l_459 = &l_401;
        int32_t *l_460 = &l_401;
        int32_t *l_461 = &l_392;
        int32_t *l_462 = &l_441;
        int32_t *l_463 = (void*)0;
        int32_t *l_464 = &l_419;
        int32_t *l_465 = &l_456;
        uint16_t l_466 = 8UL;
        l_466++;
    }
    return p_86;
    
    
}




inline static const int8_t  func_90(const int32_t * p_91, uint8_t  p_92, float  p_93)
{ 
    int32_t * const *l_254 = (void*)0;
    int32_t * const **l_253 = &l_254;
    float l_257 = 0xB.B1967Cp+87;
    float *l_256 = &l_257;
    float **l_255 = &l_256;
    float ***l_258 = &l_255;
    int32_t l_260 = (-8L);
    int32_t *l_259 = &l_260;
    uint32_t l_276 = 4UL;
    l_253 = l_253;
    (*l_258) = l_255;
    (*l_259) = ((p_92 == (p_92 & (p_92 || p_92))) ^ p_92);
    for (p_92 = 0; (p_92 == 26); p_92++)
    { 
        int16_t l_267 = 0L;
        int16_t l_268 = 0x818BL;
        int32_t **l_269 = &l_259;
        const float l_272 = 0xD.A37CDCp+32;
        int32_t **l_277 = &l_259;
        (*l_269) = p_91;
        
        
        (*l_277) = p_91;
    }
    
    
    return p_92;
}




static const int32_t * func_94(int32_t * p_95)
{ 
    float l_231 = 0x2.5p-1;
    float *l_230 = &l_231;
    int32_t l_232 = (-3L);
    int32_t **l_233 = (void*)0;
    int32_t ****l_240 = (void*)0;
    int32_t *l_242 = &l_232;
    int32_t **l_241 = &l_242;
    int8_t l_245 = 7L;
    (*l_230) = 0x1.1p-1;
    (*l_241) = p_95;
    
    
    (*l_230) = ((safe_div_func_float_f_f(l_245, l_232)) > l_245);
    for (l_245 = 0; (l_245 < (-16)); l_245 = safe_sub_func_int32_t_s_s(l_245, 3))
    { 
        for (l_232 = 0; (l_232 != 3); l_232++)
        { 
            int32_t l_250 = 8L;
            for (l_250 = 21; (l_250 >= 9); l_250 = safe_sub_func_int8_t_s_s(l_250, 1))
            { 
                return p_95;
                
                
            }
            return p_95;
            
            
        }
    }
    return p_95;
    
    
}




static int32_t * func_96(const uint16_t  p_97, const float  p_98, float * p_99, float * p_100)
{ 
    int32_t l_190 = 0x32CE8EB2L;
    float l_200 = 0x3.37EAFCp-99;
    float *l_199 = &l_200;
    int32_t * const ***l_206 = (void*)0;
    int32_t *l_222 = (void*)0;
    int32_t **l_221 = &l_222;
    int32_t l_227 = 0x1460D046L;
    int32_t ***l_229 = &l_221;
    for (l_190 = 6; (l_190 == 20); l_190 = safe_add_func_int16_t_s_s(l_190, 1))
    { 
        float *l_201 = (void*)0;
        const int32_t *l_203 = &l_190;
        const int32_t **l_202 = &l_203;
        int32_t ****l_220 = (void*)0;
        int32_t * const * const l_228 = &l_222;
        if (((safe_div_func_int16_t_s_s(p_97, (safe_sub_func_int32_t_s_s(p_97, __builtin_bswap64(l_190))))) || __builtin_ffsl((safe_rshift_func_int8_t_s_u(p_97, ((l_199 != l_201) || ((void*)0 != l_202)))))))
        { 
            const int32_t ***l_205 = &l_202;
            const int32_t ****l_204 = &l_205;
            int32_t l_208 = (-1L);
            int32_t *l_207 = &l_208;
            (*l_207) &= (l_204 != l_206);
            (*l_207) |= ((void*)0 != &l_203);
        }
        else
        { 
            int32_t l_210 = 0xC26F71A7L;
            int32_t *l_209 = &l_210;
            (*l_209) |= (**l_202);
        }
        (*l_202) = (*l_202);
    }
    (*l_229) = &l_222;
    return p_100;
    
    
}




static float * func_104(int8_t  p_105, int32_t ** p_106, int8_t  p_107, uint16_t  p_108, int32_t * const * const  p_109)
{ 
    int16_t l_118 = 0x58F2L;
    int32_t l_127 = 0xDB7CFF1CL;
    int32_t *l_126 = &l_127;
    int32_t **l_125 = &l_126;
    uint32_t l_174 = 0xE4EB4CA1L;
    float l_178 = 0x8.9EEF7Bp-51;
    float *l_177 = &l_178;
    float *l_179 = &l_178;
    float *l_180 = &l_178;
    float *l_181 = &l_178;
    float *l_182 = &l_178;
    float *l_183 = &l_178;
    float *l_184 = &l_178;
    float *l_185 = &l_178;
    float *l_186 = &l_178;
    float *l_187 = &l_178;
    float *l_188 = &l_178;
    float *l_189 = (void*)0;
    (**p_109) ^= (safe_mod_func_int8_t_s_s(((p_105 || (safe_add_func_uint16_t_u_u(l_118, (safe_add_func_uint32_t_u_u(__builtin_bswap64(((l_118 && ((((p_108 == ((-10L) | l_118)) >= (safe_div_func_uint32_t_u_u((((void*)0 == l_125) | ((safe_rshift_func_int8_t_s_u((0xD594L <= (*l_126)), (*l_126))) == 4UL)), (*l_126)))) & p_108) | p_107)) ^ 255UL)), (*l_126)))))) && p_108), 0x18L));
    if ((safe_mod_func_int16_t_s_s((!(safe_mul_func_int8_t_s_s((((**p_106) & 0x4C0A206EL) < (safe_add_func_uint8_t_u_u(0x45L, ((void*)0 == (*p_106))))), ((p_108 | (*l_126)) || (safe_unary_minus_func_int16_t_s((**l_125))))))), ((safe_lshift_func_int8_t_s_u((0x06L > 0x5DL), (**l_125))) ^ (*l_126)))))
    { 
        (*l_125) = (void*)0;
        
        assert (l_126 == 0);
    }
    else
    { 
        uint8_t l_144 = 2UL;
        int32_t l_155 = 0x835E52A1L;
        float l_160 = 0x7.9B852Dp-61;
        float *l_159 = &l_160;
        int32_t *l_170 = &l_127;
        int32_t l_176 = (-1L);
        int32_t *l_175 = &l_176;
        (**p_106) = (**p_106);
        if ((*l_126))
        { 
            uint16_t l_158 = 0UL;
            float *l_162 = (void*)0;
            if ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((p_107 & (&l_126 == &l_126)), (**l_125))) <= l_144), (0xBB5BL || ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-1L), (safe_add_func_int8_t_s_s(p_105, (safe_mod_func_int32_t_s_s(((((p_106 == p_109) && 0x6CL) && 4UL) | l_144), 4294967295UL)))))), 0xDEF6L)) >= l_155)))))
            { 
                float *l_161 = &l_160;
                float *l_163 = (void*)0;
                if ((p_107 == (safe_lshift_func_int16_t_s_u(l_158, l_144))))
                { 
                    return l_162;
                    
                    
                }
                else
                { 
                    return l_163;
                    
                    
                }
            }
            else
            { 
                int32_t ** const **l_164 = (void*)0;
                int32_t ****l_165 = (void*)0;
                const int32_t *l_169 = &l_127;
                const int32_t **l_168 = &l_169;
                const int32_t ***l_167 = &l_168;
                const int32_t ****l_166 = &l_167;
                (**p_106) &= (-1L);
                (*l_166) = (void*)0;
                
                assert (l_167 == 0);
            }
            (*l_125) = (*p_106);
            
            
            (*l_125) = l_170;
            
            assert (l_126 == &l_127);
            (*l_125) = l_159;
            
            assert (l_126 == &l_160);
        }
        else
        { 
            int32_t *l_171 = &l_127;
            (*l_170) = ((*p_106) == l_171);
        }
        
        assert (l_126 == &l_127 || l_126 == &l_160);
        (*l_175) |= (safe_add_func_uint8_t_u_u((((*l_126) <= l_174) <= (**p_106)), (0xCB066DBBL > (*l_126))));
    }
    
    
    return l_189;
    
    
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_29();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



