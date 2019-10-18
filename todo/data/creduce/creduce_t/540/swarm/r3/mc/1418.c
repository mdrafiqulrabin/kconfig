


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   const int16_t  f1;
   const int32_t  f2;
   uint32_t  f3;
   int32_t  f4;
   int32_t  f5;
   const uint32_t  f6;
   uint32_t  f7;
};
#pragma pack(pop)

union U2 {
   const uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   struct S0  f3;
};


static uint32_t g_4 = 0xE1B88146;
static uint32_t g_31 = 0x0389A9B8;
static union U2 g_65 = {1U};
static union U2 g_145 = {0U};
static uint16_t g_152 = 9U;
static struct S0 g_153 = {0x61CB,0xBBB9,0x26E7CEC0,0x541C76BB,0x8C356ED0,-1,0x65CA490D,4294967295U};
static uint32_t g_217 = 1U;
static uint32_t g_227 = 3U;
static uint32_t g_455 = 0x10DA4FAA;
static uint32_t g_630 = 1U;
static int16_t g_759 = 0xDCBB;
static int32_t g_810 = 1;
static struct S0 g_813 = {1,-1,0xB558DCE8,0x2F134D8E,0xC677E780,3,0xB0C38BC8,0U};



inline static union U2  func_28(void);
static int32_t  func_32(int32_t  p_33);
static uint16_t  func_34(int16_t  p_35, uint32_t  p_36, uint32_t  p_37, const int32_t  p_38, uint16_t  p_39);
inline static uint32_t  func_40(uint32_t  p_41, uint32_t  p_42, uint16_t  p_43, uint32_t  p_44);
inline static int16_t  func_47(struct S0  p_48, union U2  p_49);
inline static struct S0  func_50(int32_t  p_51);
inline static int32_t  func_53(uint16_t  p_54, uint32_t  p_55, uint16_t  p_56);
static int32_t  func_58(uint16_t  p_59);
inline static uint16_t  func_60(uint16_t  p_61, uint32_t  p_62, union U2  p_63, uint16_t  p_64);
static int32_t  func_66(const int32_t  p_67, uint16_t  p_68, int32_t  p_69, uint16_t  p_70);





inline static union U2  func_28(void)
{ 
    uint32_t l_29 = 0x85F88E10;
    int16_t l_811 = 4;
    union U2 l_814 = {0x49CEC022};
    g_31 = __builtin_ia32_crc32qi(l_29, __builtin_clz((!(65533U < g_4))));
    l_814.f1 = __builtin_ctzll((((func_32(g_31) || (g_31 == ((-1) ^ l_811))) & __builtin_clzll(g_759)) | (((~g_810) <= (func_47(g_813, l_814) & 0x863986EC)) == 0xE1BA1EE4)));
    return l_814;
}




static int32_t  func_32(int32_t  p_33)
{ 
    const int32_t l_305 = 0x4536B689;
    int32_t l_768 = 1;
    l_768 = (g_4 != func_34(p_33, g_4, func_40(p_33, ((safe_lshift_func_uint16_t_u_u((func_47(func_50(p_33), g_145) > 1U), 6)) == g_153.f3), p_33, p_33), l_305, p_33));
    l_768 ^= 0x5270933C;
    if ((g_153.f1 != 0x76C6))
    { 
        for (g_145.f3.f3 = 0; (g_145.f3.f3 == 6); g_145.f3.f3 = safe_add_func_int16_t_s_s(g_145.f3.f3, 1))
        { 
            uint32_t l_785 = 4294967295U;
            int32_t l_786 = 0xCDF83FE7;
            l_768 = (safe_unary_minus_func_int32_t_s(((~((safe_sub_func_uint16_t_u_u((8U >= (((p_33 <= (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(l_305, g_153.f7)) < ((safe_add_func_uint32_t_u_u(p_33, l_768)) | (safe_sub_func_int32_t_s_s((__builtin_parityll(p_33) & (g_4 <= (-4))), l_785)))) <= 0U), p_33)), l_785))) > 0x53E7) & g_153.f6)), g_145.f2)) == 6)) && l_305)));
            l_786 ^= (-1);
            g_65.f3.f4 = (0x733CBB6B && (!(g_217 > ((((((safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s((g_152 | ((0x7A59 != (__builtin_clzl(l_768) > ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((l_305 && 1) ^ p_33) < 0x42791AE0), 1)), l_785)) < l_786))) > p_33)), p_33)))) <= g_145.f0) || (-1)) && 0U) != g_145.f1) <= g_145.f1))));
        }
        g_65.f3.f5 = l_768;
    }
    else
    { 
        uint32_t l_805 = 7U;
        union U2 l_808 = {0x046CACFE};
        int32_t l_809 = (-1);
        l_809 &= ((((safe_mod_func_int16_t_s_s((((safe_add_func_int16_t_s_s(g_145.f2, g_153.f3)) == p_33) || ((-1) != func_34(l_768, (((((safe_add_func_int16_t_s_s(((((-5) >= (safe_sub_func_int32_t_s_s(l_805, (((safe_add_func_uint16_t_u_u(((g_153.f6 & (func_47(g_153, l_808) < l_768)) > p_33), g_153.f7)) & p_33) < 0x82DEB600)))) ^ p_33) == l_808.f1), l_305)) == l_805) > l_305) < p_33) != g_145.f0), g_759, l_305, l_305))), l_808.f1)) == g_153.f6) < p_33) < 0xD944);
    }
    return g_810;
}




static uint16_t  func_34(int16_t  p_35, uint32_t  p_36, uint32_t  p_37, const int32_t  p_38, uint16_t  p_39)
{ 
    uint32_t l_310 = 2U;
    int32_t l_317 = (-8);
    uint32_t l_419 = 0x0B74501D;
    uint32_t l_425 = 0xD05E7022;
    int32_t l_549 = 0x5FA2BEF0;
    uint32_t l_711 = 0x7FAC2B07;
    struct S0 l_716 = {7,0x7802,8,4294967295U,0xB5FD9E1B,5,0xF79DE3C1,4294967292U};
    union U2 l_717 = {0x5F15EB5C};
lbl_602:
    if ((safe_rshift_func_int16_t_s_u(((((4294967289U >= ((g_31 < (safe_mod_func_uint32_t_u_u(l_310, (safe_div_func_int32_t_s_s(0x7E00CCF4, (safe_div_func_int32_t_s_s(((p_38 < ((__builtin_parityll(l_310) <= 0x2F378EE9) || (safe_mod_func_uint16_t_u_u(func_40(p_35, l_310, p_37, g_153.f7), g_153.f1)))) <= l_317), g_153.f2))))))) < g_153.f6)) <= l_317) != p_39) >= 0U), 1)))
    { 
lbl_635:
        l_317 ^= (p_36 <= (safe_lshift_func_uint16_t_u_s(p_37, 5)));
    }
    else
    { 
        int32_t l_325 = 0;
        int32_t l_390 = 0x0330E289;
        uint32_t l_561 = 4294967295U;
        if ((safe_mod_func_int16_t_s_s((((p_37 >= __builtin_popcountll(g_153.f3)) != ((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u((l_325 >= l_310), l_317)))) || p_38)) | g_153.f7), 0xBB27)))
        { 
            uint32_t l_341 = 0xAD81E34F;
            int32_t l_352 = (-1);
            int32_t l_357 = 0x860D3FAA;
            uint32_t l_491 = 4294967286U;
            g_145.f1 |= 0xFFB44109;
            if (g_145.f2)
            { 
                int32_t l_334 = 0x6308C6F9;
                uint32_t l_376 = 0x82D8CDE2;
                uint32_t l_377 = 0U;
                uint16_t l_422 = 65528U;
                struct S0 l_478 = {0xBBEE,0,0xE5556FB1,0x53E0E9FC,-1,0xD9BDEC7D,0x3D328635,0U};
                if ((((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((__builtin_ctz((safe_sub_func_uint16_t_u_u(func_40((safe_sub_func_uint32_t_u_u(p_39, g_153.f5)), l_334, p_36, (l_334 & (l_334 == ((p_38 && (((safe_add_func_int16_t_s_s(l_325, 0U)) | l_325) & 0)) ^ p_35)))), l_334))) < g_31) && 0xA92A369F), g_153.f2)) <= p_39), p_35)) == g_153.f4) != l_325))
                { 
                    uint32_t l_342 = 7U;
                    int32_t l_351 = 0x324280AD;
                    l_334 = p_36;
                    g_65.f3.f5 = (((safe_rshift_func_int16_t_s_s(((g_31 && l_342) && 0x38A6AAD2), (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(p_35, (safe_add_func_uint16_t_u_u(l_317, 0xDEA9)))), 8)), g_65.f2)))) || l_334) > l_342);
                    l_351 = 0xC9B6341C;
                    l_352 |= 0x16919995;
                }
                else
                { 
                    uint32_t l_382 = 0xC1A4616D;
                    int32_t l_424 = 7;
                    l_357 = ((safe_sub_func_int32_t_s_s((0xD807 && 9U), (safe_add_func_uint32_t_u_u((((l_357 || g_153.f7) != g_217) && (safe_lshift_func_int16_t_s_u(((__builtin_ctzl((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(0x8B05, (safe_mod_func_uint16_t_u_u(l_310, (g_217 || 0U))))), 0U)) == g_217), 1)), l_325)), l_376)) > 0), 13))) <= l_377) == g_153.f5), l_341))), l_352)))) > g_145.f1);
                    l_382 = (((safe_rshift_func_uint16_t_u_s(g_152, 3)) <= (safe_mod_func_uint32_t_u_u(g_65.f2, l_357))) && l_376);
                    for (g_145.f3.f5 = 0; (g_145.f3.f5 >= 25); g_145.f3.f5++)
                    { 
                        int16_t l_389 = (-2);
                        l_390 &= ((safe_add_func_uint32_t_u_u(__builtin_clzl((safe_add_func_uint32_t_u_u(l_389, p_39))), 1)) == l_317);
                        g_65.f3.f5 = (safe_lshift_func_uint16_t_u_s(1U, (__builtin_ctzll(g_153.f2) && (safe_div_func_uint16_t_u_u(0x7003, (safe_rshift_func_int16_t_s_u((-1), (l_352 != l_341))))))));
                    }
                    if ((g_145.f0 < (9U > l_317)))
                    { 
                        const uint32_t l_410 = 0xB3E2254A;
                        g_145.f3.f4 = (safe_unary_minus_func_uint16_t_u(p_38));
                        l_390 ^= g_153.f4;
                        g_145.f3.f4 = (safe_sub_func_uint32_t_u_u(p_35, (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_377 < g_217), p_35)), l_410))));
                        g_145.f3.f4 = (safe_div_func_int16_t_s_s((4 < (g_153.f5 > (-3))), p_39));
                    }
                    else
                    { 
                        int32_t l_423 = 0x4DDB46B1;
                        l_390 ^= (__builtin_bswap32(p_39) & ((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(l_419, (p_36 > p_37))) < l_341), l_382)) & g_4), p_35)) | p_39));
                        l_423 = (p_36 | p_36);
                        l_424 = g_153.f6;
                        l_352 &= l_310;
                    }
                }
                if (l_425)
                { 
                    uint32_t l_440 = 7U;
                    for (l_352 = 0; (l_352 > (-2)); l_352 = safe_sub_func_uint16_t_u_u(l_352, 1))
                    { 
                        l_440 = (safe_add_func_uint32_t_u_u(p_38, (safe_mod_func_uint16_t_u_u(l_425, (1 ^ (safe_rshift_func_int16_t_s_s((p_38 >= __builtin_ctz(p_37)), ((!(safe_rshift_func_uint16_t_u_s(g_153.f5, 13))) ^ (g_145.f1 && (safe_lshift_func_uint16_t_u_u((~(g_227 <= 5)), 7)))))))))));
                        return g_217;
                    }
lbl_443:
                    l_317 = p_37;
                    l_390 = l_440;
                    for (g_65.f3.f4 = (-18); (g_65.f3.f4 <= (-28)); g_65.f3.f4 = safe_sub_func_uint32_t_u_u(g_65.f3.f4, 1))
                    { 
                        int32_t l_456 = (-1);
                        if (p_36)
                            goto lbl_443;
                        l_456 |= ((g_145.f2 & (((p_37 > (safe_div_func_int16_t_s_s(g_153.f0, p_39))) && p_39) != __builtin_popcountll((((!(((0xCFE45B5A & (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((__builtin_clzl(g_145.f0) || ((safe_mod_func_int16_t_s_s(__builtin_parity(g_153.f0), 1)) && g_145.f2)), l_310)), l_440)), g_455))) != p_39) < g_153.f5)) <= l_422) > 4294967295U)))) || 1U);
                        if (g_153.f0)
                            break;
                    }
                }
                else
                { 
                    int32_t l_467 = 0x72A153D0;
                    for (g_65.f3.f7 = 0; (g_65.f3.f7 == 52); g_65.f3.f7 = safe_add_func_int32_t_s_s(g_65.f3.f7, 7))
                    { 
                        g_153.f4 = (p_39 != (safe_div_func_uint32_t_u_u((0xE882 && ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int32_t_s_s(__builtin_ctzl(l_325), (g_153.f7 == p_37))), 4U)), l_467)) < g_4)), 8)));
                        l_352 = (safe_mod_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((l_425 > (safe_mod_func_int32_t_s_s((l_310 <= func_47(l_478, g_145)), p_38))), 0x608F)) && (safe_sub_func_int32_t_s_s(__builtin_parityll(((((safe_mod_func_int16_t_s_s((l_467 >= 0U), g_65.f2)) | 0x23065366) >= g_153.f6) && l_310)), 0x865ADF17))), l_390)) & g_153.f5), l_419)) == p_38) <= p_36), 4294967295U));
                    }
                }
                l_334 = p_37;
            }
            else
            { 
                l_317 = l_317;
            }
            l_317 = (((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((l_491 <= p_38), l_491)) && 0x2FD6), g_455)) || g_217) || 0x1B87AFCB);
            l_317 ^= p_39;
        }
        else
        { 
            uint32_t l_492 = 6U;
            int32_t l_501 = 0;
            uint16_t l_520 = 0U;
            l_501 = (l_492 && ((safe_div_func_uint16_t_u_u((l_390 <= ((safe_add_func_int32_t_s_s(0x29F27B27, (((!p_36) ^ (l_390 ^ p_39)) && (safe_add_func_int16_t_s_s((0xF90E <= l_419), (!l_492)))))) <= g_153.f7)), l_310)) <= p_35));
            for (g_217 = (-2); (g_217 <= 55); g_217++)
            { 
                uint16_t l_518 = 5U;
                l_520 |= ((((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_390, (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((((p_37 <= g_153.f2) | p_38) | (l_518 >= (~((p_38 | l_518) || p_37)))), p_38)), p_36)))), p_39)) >= 1), p_37)), p_39)) & 0xCA5A9F7F) >= 0U) < 0);
                if (g_31)
                    continue;
                if (g_145.f1)
                    continue;
                l_317 = (safe_add_func_int32_t_s_s(g_4, 0x1E5BECB5));
            }
            for (l_310 = 13; (l_310 > 28); l_310 = safe_add_func_int16_t_s_s(l_310, 4))
            { 
                uint16_t l_563 = 65535U;
                l_317 = 0x0F0EF7A1;
                for (g_65.f3.f7 = (-27); (g_65.f3.f7 <= 47); g_65.f3.f7 = safe_add_func_uint16_t_u_u(g_65.f3.f7, 1))
                { 
                    uint16_t l_544 = 0x5FCD;
                    l_544++;
                    for (g_455 = 4; (g_455 != 31); g_455++)
                    { 
                        g_145.f3.f4 = l_549;
                    }
                    if (l_544)
                    { 
                        uint32_t l_562 = 8U;
                        l_561 |= (safe_rshift_func_int16_t_s_u((((safe_div_func_uint32_t_u_u((g_153.f3 >= ((safe_add_func_int16_t_s_s(0x9871, l_544)) ^ (!(safe_lshift_func_int16_t_s_u((g_145.f1 || p_37), 15))))), 0x099E2641)) ^ l_390) ^ g_153.f7), 0));
                        g_145.f1 = (l_562 ^ g_455);
                    }
                    else
                    { 
                        l_390 = l_390;
                    }
                }
                l_563 = p_36;
            }
            return l_561;
        }
        return l_390;
    }
    l_317 ^= ((safe_sub_func_int16_t_s_s(p_38, (((p_39 <= 0U) ^ (safe_sub_func_int16_t_s_s(0xCE5F, g_145.f1))) & 0x058D))) == p_37);
    if ((((l_317 ^ (safe_div_func_int16_t_s_s(((g_65.f2 ^ (g_153.f2 == ((safe_div_func_uint16_t_u_u((((l_310 < (__builtin_bswap32(g_153.f5) && (0xD1A2 < (g_31 ^ 0x59C0967E)))) && (-1)) | (-9)), g_153.f7)) >= (-7)))) == l_317), p_35))) || 0x6FE1) < 0U))
    { 
        int32_t l_590 = 0xC17979A8;
        int32_t l_592 = 0;
        union U2 l_601 = {4294967295U};
        struct S0 l_607 = {0x0B5A,0xD092,0x9DB7D522,9U,-7,0x02BC7F45,0x17E1E57C,0xA3E8A9B7};
        int16_t l_657 = 0;
        uint32_t l_713 = 4294967290U;
        l_549 |= (safe_sub_func_int16_t_s_s(0x32EF, (safe_mod_func_uint32_t_u_u((~(safe_div_func_int32_t_s_s(p_35, (g_153.f2 && 0x105D0D24)))), (l_419 & g_153.f6)))));
lbl_665:
        for (g_65.f3.f4 = 0; (g_65.f3.f4 >= (-2)); g_65.f3.f4 = safe_sub_func_int32_t_s_s(g_65.f3.f4, 1))
        { 
            int32_t l_583 = 0;
            uint32_t l_591 = 0x65F8236F;
            l_592 |= (0U && (p_35 || (g_227 == ((((l_583 || (safe_lshift_func_int16_t_s_u(l_419, __builtin_bswap64((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((0x349CD69A ^ (((g_65.f2 && (g_145.f0 | (l_590 && l_591))) && 0U) == l_583)), 10)), 1U)))))) & 0x1357) && g_153.f2) == l_583))));
            for (g_217 = (-17); (g_217 == 35); g_217++)
            { 
                l_592 &= 0xC8348010;
            }
        }
        for (g_145.f3.f3 = 0; (g_145.f3.f3 < 60); g_145.f3.f3 = safe_add_func_int32_t_s_s(g_145.f3.f3, 2))
        { 
            int32_t l_612 = 7;
            int32_t l_660 = 0x02EBDF4C;
            uint32_t l_697 = 0x1688951C;
            union U2 l_712 = {3U};
            for (g_65.f2 = 0; (g_65.f2 == 60); g_65.f2++)
            { 
                union U2 l_608 = {0xF9A3E13C};
                if (g_153.f6)
                { 
                    uint32_t l_599 = 7U;
                    l_317 ^= p_37;
                    if (l_599)
                    { 
                        return l_599;
                    }
                    else
                    { 
                        struct S0 l_600 = {3,-1,-9,0x312E5505,-6,-1,0U,0xA52FEF01};
                        l_601.f3.f5 = (l_599 != (65528U == func_47(l_600, l_601)));
                        l_601.f1 = 0x5B901C53;
                        if (g_153.f2)
                            goto lbl_602;
                        l_600.f5 = (safe_lshift_func_uint16_t_u_s((0 & (func_47(l_607, l_608) || (g_153.f6 == g_217))), __builtin_ffsl(l_590)));
                    }
                    for (g_31 = 18; (g_31 != 43); g_31 = safe_add_func_uint32_t_u_u(g_31, 5))
                    { 
                        l_549 = p_36;
                        l_592 &= (~__builtin_bswap32(l_612));
                    }
                }
                else
                { 
                    int16_t l_616 = (-4);
                    int32_t l_638 = 1;
                    if ((safe_sub_func_uint16_t_u_u((!g_152), (g_227 & l_612))))
                    { 
                        g_153.f5 = (0x0010 <= (0xE3570C58 < l_607.f0));
                        if (l_612)
                            continue;
                        g_153.f5 |= p_38;
                        l_608.f1 &= l_616;
                    }
                    else
                    { 
                        uint32_t l_617 = 0xBBF9F637;
                        int32_t l_622 = 8;
                        l_617 |= p_37;
                        l_622 = (((safe_rshift_func_uint16_t_u_u(func_47(g_153, g_65), 7)) >= (-1)) & (((safe_add_func_int16_t_s_s(g_217, (0U == __builtin_ffs(g_153.f5)))) <= ((((-1) <= l_617) < l_612) != l_617)) > p_39));
                        l_549 |= l_317;
                        l_317 = p_38;
                    }
                    if ((!(safe_sub_func_uint16_t_u_u(g_145.f1, ((safe_div_func_uint32_t_u_u(0x57D89F79, 0x43EFFCFE)) < ((((g_4 <= (g_145.f2 != ((g_630 > g_65.f2) != (safe_rshift_func_uint16_t_u_u(p_37, 15))))) & ((safe_add_func_uint16_t_u_u(p_36, 0)) >= g_227)) >= l_616) && g_153.f3))))))
                    { 
                        if (l_608.f1)
                            goto lbl_635;
                        l_638 = (g_153.f1 < (safe_rshift_func_int16_t_s_s(0, 13)));
                        l_638 = g_153.f6;
                    }
                    else
                    { 
                        g_153.f4 = l_612;
                        g_153.f5 = (p_37 == 0x7EA98A6B);
                        if (p_36)
                            continue;
                        g_153.f4 = p_37;
                    }
                    if (g_145.f2)
                        break;
                    if (p_35)
                    { 
                        g_153.f5 = 0x3BEE14C1;
                        l_608.f3.f4 = (((-1) >= l_317) ^ (safe_div_func_uint16_t_u_u(__builtin_popcountll(l_638), (((safe_unary_minus_func_int16_t_s((~(((safe_div_func_uint16_t_u_u(g_31, (safe_lshift_func_uint16_t_u_u((l_549 && g_145.f2), 6)))) && p_36) ^ l_612)))) == 65533U) && g_31))));
                        return l_608.f1;
                    }
                    else
                    { 
                        l_607.f5 &= (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_36, p_36)), p_35));
                        l_660 = (safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(0x83811687, p_36)) < (safe_rshift_func_uint16_t_u_s((l_657 | g_4), 8))) != l_607.f0) & (p_37 && (safe_lshift_func_int16_t_s_s(l_608.f0, (((1U && ((l_616 | 4294967286U) ^ g_145.f1)) ^ g_153.f1) & l_638))))), 10));
                        g_153.f4 = (safe_lshift_func_uint16_t_u_s(__builtin_ctz(g_227), 10));
                    }
                }
                l_601.f1 = __builtin_ctzl(p_39);
                for (l_608.f3.f5 = 0; (l_608.f3.f5 <= (-8)); l_608.f3.f5 = safe_sub_func_int32_t_s_s(l_608.f3.f5, 1))
                { 
                    if (g_153.f2)
                        goto lbl_665;
                    g_153.f5 = (p_36 != p_38);
                }
                g_153.f5 = (((((l_317 ^ g_153.f5) & g_31) ^ p_36) & (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((p_36 & l_660) > (g_153.f1 >= (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((0x7A0EF8EE ^ (p_35 == 0xA57F10DD)), p_39)), 4294967293U)))) || g_31), 14)), g_227)) == g_153.f4), 1)), p_37))) | l_590);
            }
            l_697 &= ((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((p_39 >= (((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(0x845F37CF, (p_39 ^ (safe_div_func_int32_t_s_s((((((safe_unary_minus_func_int16_t_s((0xD28112C1 || (safe_lshift_func_int16_t_s_s(((__builtin_clz(((safe_div_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(((g_153.f3 == g_153.f2) > l_425), g_145.f2)) != g_227) == 0x260A), 0x24FB)) || g_153.f6)) ^ p_39) == 0xC190), l_317))))) < 0xFC95) > g_455) | 0x1352) | 0xF2D0AB2C), 4294967286U))))) < 0x0F52), l_607.f4)), 1)) != p_36) & p_38)), 15)) | g_153.f4), p_36)) | p_38) && g_455) == 0U);
            g_65.f3.f4 = (safe_div_func_int32_t_s_s((((p_37 && (l_549 < (((safe_mod_func_uint16_t_u_u((0x4756E648 <= ((-1) <= ((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((~g_153.f7), ((0x39D6A1B4 >= ((((safe_lshift_func_uint16_t_u_s(0x3753, l_660)) >= (safe_rshift_func_uint16_t_u_s(((((g_227 != l_425) | 0x92557A98) && l_713) < g_153.f6), g_153.f5))) <= 65530U) | l_425)) ^ 7))), l_419)) ^ (-10)))), p_37)) ^ l_607.f7) != p_36))) || l_607.f0) < 0x3341C22D), l_549));
        }
    }
    else
    { 
        uint32_t l_723 = 0x9D9EC81A;
        int16_t l_755 = 1;
        int32_t l_760 = 0x39FA7EBD;
        for (g_630 = 0; (g_630 > 29); g_630 = safe_add_func_int32_t_s_s(g_630, 3))
        { 
            uint32_t l_718 = 4294967292U;
            g_65.f3.f4 = g_153.f2;
            l_718 = func_47(l_716, l_717);
            l_723 |= (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(0x7147, 10)), p_38));
        }
        for (p_36 = (-8); (p_36 >= 16); p_36++)
        { 
            uint32_t l_734 = 0xBD2C3F54;
            int32_t l_738 = 0;
            union U2 l_748 = {0U};
            for (l_716.f3 = 0; (l_716.f3 >= 23); l_716.f3 = safe_add_func_uint32_t_u_u(l_716.f3, 5))
            { 
                int32_t l_731 = 0xEB457653;
                for (g_227 = (-4); (g_227 >= 33); g_227++)
                { 
                    const uint16_t l_737 = 6U;
                    l_738 ^= ((~(g_153.f0 != (g_153.f5 <= ((0xC8BBC2B9 || (l_731 > ((safe_sub_func_uint32_t_u_u(g_153.f1, g_153.f0)) == l_731))) > 0x1B7DA329)))) > 0x8AD2);
                    g_65.f1 = (g_153.f0 && __builtin_bswap32(l_723));
                    g_153.f5 |= (-4);
                }
                g_65.f1 = l_738;
            }
            g_153.f4 |= (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_455, g_152)), g_153.f0)), (safe_lshift_func_uint16_t_u_u(0x3065, 13))));
            if (g_152)
            { 
                struct S0 l_747 = {0x8C97,0xBED4,0x6BAD2649,0xBECF6A51,-7,0x40A61C01,4294967291U,0xD27BA36C};
                l_738 |= (__builtin_parityl(p_35) ^ func_47(l_747, l_748));
            }
            else
            { 
                uint16_t l_754 = 0xFCB6;
                int32_t l_756 = 0x695EDF25;
                l_738 &= l_549;
                l_756 &= __builtin_clzll(l_754);
            }
        }
        l_760 ^= (safe_lshift_func_uint16_t_u_u(g_759, 3));
        return p_37;
    }
    l_717.f1 |= (0 & (g_217 <= (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(p_36, (l_716.f6 | (~g_630)))), l_425))));
    return g_630;
}




inline static uint32_t  func_40(uint32_t  p_41, uint32_t  p_42, uint16_t  p_43, uint32_t  p_44)
{ 
    int16_t l_191 = 0x683B;
    int32_t l_194 = (-1);
    union U2 l_215 = {4294967295U};
    uint16_t l_243 = 9U;
    for (g_153.f7 = 0; (g_153.f7 >= 28); g_153.f7 = safe_add_func_uint16_t_u_u(g_153.f7, 6))
    { 
        uint32_t l_175 = 2U;
        int32_t l_196 = 0xA32CF900;
        int16_t l_206 = 0x24A0;
        int16_t l_210 = (-1);
        for (g_145.f1 = 0; (g_145.f1 <= (-23)); g_145.f1 = safe_sub_func_uint32_t_u_u(g_145.f1, 6))
        { 
            int32_t l_168 = 0xDCF4DCFD;
            struct S0 l_182 = {0x559E,0x58F5,0x4B39CDCE,0x65EB517B,-4,-1,0x3DD90FB3,0xCEB7EDC9};
        }
        for (g_153.f5 = (-9); (g_153.f5 <= 26); g_153.f5 = safe_add_func_uint32_t_u_u(g_153.f5, 5))
        { 
            uint32_t l_289 = 9U;
            for (g_65.f2 = (-5); (g_65.f2 != 35); g_65.f2 = safe_add_func_int32_t_s_s(g_65.f2, 8))
            { 
                struct S0 l_292 = {1,0x0D74,-7,0xEE4DCE94,0,0,6U,0x4315AF73};
                union U2 l_293 = {0xC362547E};
                l_215.f1 = (!l_206);
                g_145.f1 = (0xD65A ^ p_44);
                g_145.f3.f4 = ((l_289 == (0xADF56351 != ((l_191 && (safe_div_func_uint16_t_u_u((func_47(l_292, l_293) && (p_44 < g_31)), 8))) <= p_44))) <= 7);
                return p_41;
            }
            l_196 = (0xA047 == 0xF824);
            g_145.f3.f5 = ((1 || p_41) && ((((p_43 | l_206) < g_153.f7) != p_41) ^ (1 < l_206)));
            l_196 ^= (safe_sub_func_int16_t_s_s(2, g_153.f5));
        }
        l_196 |= (safe_div_func_int16_t_s_s((p_43 || ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((!(-1)), g_4)), 6)) == 0xA347)), g_4));
    }
    return l_215.f2;
}




inline static int16_t  func_47(struct S0  p_48, union U2  p_49)
{ 
    uint32_t l_154 = 0x1DFD2E61;
    int32_t l_155 = (-10);
    l_155 |= l_154;
    return p_48.f0;
}




inline static struct S0  func_50(int32_t  p_51)
{ 
    int16_t l_52 = 0x31EA;
    int32_t l_57 = 0xBDED69B1;
    l_57 = ((0xD5CCFDEF == p_51) <= (__builtin_bswap64(l_52) < func_53(g_31, (__builtin_ctz(p_51) < (__builtin_ia32_crc32qi(l_57, (((func_58(func_60(p_51, g_31, g_65, p_51)) == g_31) <= l_57) & l_52)) <= 2U)), g_4)));
    return g_153;
}




inline static int32_t  func_53(uint16_t  p_54, uint32_t  p_55, uint16_t  p_56)
{ 
    uint32_t l_148 = 0x8B53E2DD;
    union U2 l_149 = {0xADED112D};
    g_152 ^= (safe_div_func_int32_t_s_s(p_54, (l_148 || (func_60(g_145.f0, p_54, l_149, p_54) || (safe_div_func_uint32_t_u_u((g_145.f1 && l_149.f2), l_149.f2))))));
    l_149.f1 = l_148;
    l_149.f1 = __builtin_clz(l_149.f1);
    return p_55;
}




static int32_t  func_58(uint16_t  p_59)
{ 
    uint32_t l_128 = 0x71502624;
    uint16_t l_129 = 65532U;
    const int32_t l_136 = (-5);
    g_65.f3.f5 = ((safe_rshift_func_int16_t_s_s(g_65.f2, (safe_add_func_int32_t_s_s((0x46D1 > g_4), (safe_add_func_int16_t_s_s(0, (0xF8EF | (safe_lshift_func_uint16_t_u_s((__builtin_bswap64((0x63F1 ^ (p_59 >= l_128))) == l_128), l_129))))))))) ^ 0xD13D);
    g_65.f3.f4 = (safe_add_func_uint16_t_u_u((func_60(l_128, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(func_66(l_136, l_129, (safe_rshift_func_uint16_t_u_s(__builtin_popcount(g_65.f1), 1)), (safe_sub_func_uint16_t_u_u(g_65.f2, (safe_rshift_func_int16_t_s_u((-4), 15))))), 3)), ((safe_sub_func_uint32_t_u_u((p_59 | 0), 1U)) >= p_59))), g_145, p_59) && g_65.f2), 0x4667));
    return l_136;
}




inline static uint16_t  func_60(uint16_t  p_61, uint32_t  p_62, union U2  p_63, uint16_t  p_64)
{ 
    int32_t l_75 = 1;
    uint16_t l_77 = 65528U;
    if (func_66((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x0BF0, (l_75 | (p_61 < p_63.f0)))), (~((1 == g_31) || (l_77 ^ g_31))))) < l_77) > g_4), l_75, g_4, l_77))
    { 
        return g_65.f2;
    }
    else
    { 
        int32_t l_99 = 0xAEE99EAD;
        uint32_t l_109 = 4294967288U;
        l_75 = ((-1) > l_99);
        l_99 = func_66(g_65.f2, __builtin_ctzll(((safe_sub_func_uint16_t_u_u(0x349D, (p_63.f1 <= p_64))) && (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((0x6A03D0BA != (p_63.f1 <= (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint16_t_u_u((p_63.f2 >= ((l_109 <= __builtin_parityl(g_4)) < 4294967295U)), l_109)))))), 5)), 4294967295U)))), g_65.f2, p_61);
        l_75 ^= (0x766912E2 ^ ((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s((l_99 > ((l_99 | __builtin_ctzl(p_63.f1)) == (safe_div_func_uint16_t_u_u(p_64, g_4)))), 8)) ^ (0x349BDABD != (safe_rshift_func_int16_t_s_s(func_66(l_77, g_65.f1, g_65.f1, g_31), g_4)))) <= 0x17FF2A75) < p_64), g_4)) <= g_4));
        return l_77;
    }
}




static int32_t  func_66(const int32_t  p_67, uint16_t  p_68, int32_t  p_69, uint16_t  p_70)
{ 
    uint32_t l_97 = 0x3D28B7FD;
    for (g_65.f3.f5 = 3; (g_65.f3.f5 > 1); g_65.f3.f5 = safe_sub_func_uint32_t_u_u(g_65.f3.f5, 1))
    { 
        uint32_t l_80 = 0x42739A3A;
        int32_t l_98 = 0xA24CD7C0;
        l_80 &= 0x49029496;
        l_98 = (safe_mod_func_int32_t_s_s((((0xF373 || p_69) != ((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(2U, (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((__builtin_ctzl(l_80) == g_65.f2) == ((p_70 > (((safe_lshift_func_int16_t_s_s(9, (safe_div_func_uint32_t_u_u(0xD34EA093, 1)))) > g_65.f2) >= p_69)) & l_80)) && 7U) == l_97), p_69)), g_65.f0)), g_65.f2)))), l_97)) < p_70)) > g_65.f0), p_70));
        if (l_97)
            break;
    }
    return p_69;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153.f0, "g_153.f0", print_hash_value);
    transparent_crc(g_153.f1, "g_153.f1", print_hash_value);
    transparent_crc(g_153.f2, "g_153.f2", print_hash_value);
    transparent_crc(g_153.f3, "g_153.f3", print_hash_value);
    transparent_crc(g_153.f4, "g_153.f4", print_hash_value);
    transparent_crc(g_153.f5, "g_153.f5", print_hash_value);
    transparent_crc(g_153.f6, "g_153.f6", print_hash_value);
    transparent_crc(g_153.f7, "g_153.f7", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_813.f0, "g_813.f0", print_hash_value);
    transparent_crc(g_813.f1, "g_813.f1", print_hash_value);
    transparent_crc(g_813.f2, "g_813.f2", print_hash_value);
    transparent_crc(g_813.f3, "g_813.f3", print_hash_value);
    transparent_crc(g_813.f4, "g_813.f4", print_hash_value);
    transparent_crc(g_813.f5, "g_813.f5", print_hash_value);
    transparent_crc(g_813.f6, "g_813.f6", print_hash_value);
    transparent_crc(g_813.f7, "g_813.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



