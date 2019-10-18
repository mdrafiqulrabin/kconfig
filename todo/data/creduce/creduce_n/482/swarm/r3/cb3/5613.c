



static long __undefined;


struct S0 {
   int8_t  f0;
   const uint8_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 28;
   const unsigned f1 : 21;
   unsigned f2 : 13;
   unsigned f3 : 30;
   uint16_t  f4;
};
#pragma pack(pop)

struct S2 {
   unsigned f0 : 13;
   uint32_t  f1;
   int16_t  f2;
   uint32_t  f3;
};

union U3 {
   uint16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int16_t  f3;
   uint32_t  f4;
};


static uint32_t g_5 = 1UL;
static uint32_t g_16 = 18446744073709551611UL;
static union U3 g_50 = {65535UL};
static union U3 *g_49 = &g_50;
static struct S0 g_71 = {8L,1UL,0xEA90L,1UL};
static int32_t g_85 = 0x911B6BEFL;
static struct S2 g_88 = {40,0x111BE169L,0xEA98L,0UL};
static int32_t g_98 = 0L;
static struct S2 *g_110 = &g_88;
static struct S2 **g_109 = &g_110;
static struct S2 ***g_108 = &g_109;
static struct S1 g_143 = {2649,16,79,25403,0x3742L};
static struct S1 *g_142 = &g_143;
static struct S2 g_220 = {27,0x5639792CL,0L,0x260BB337L};
static struct S2 ****g_224 = (void*)0;
static struct S2 *****g_223 = &g_224;
static struct S1 **g_239 = &g_142;
static struct S1 ***g_238 = &g_239;
static int32_t *g_276 = &g_98;



static uint32_t  func_26(void);
static uint8_t  func_31(struct S0  p_32, struct S1  p_33, int8_t  p_34, int16_t  p_35, uint32_t  p_36);
static struct S1  func_38(uint32_t  p_39, uint8_t  p_40, int32_t  p_41, uint16_t  p_42);
static union U3 * func_44(union U3 * p_45, uint32_t  p_46, union U3 * p_47, int32_t  p_48);
inline static union U3 * func_51(union U3 * p_52, uint32_t  p_53);
static uint32_t  func_55(const uint8_t  p_56, int32_t  p_57, union U3 * p_58);
static int32_t  func_59(struct S2  p_60, union U3 * p_61, int32_t  p_62, int32_t  p_63, union U3 * p_64);
inline static struct S2  func_65(struct S0  p_66, union U3 * p_67, union U3 * p_68, union U3  p_69, const union U3 * p_70);
inline static union U3 * func_72(union U3 * p_73, const union U3 * p_74, union U3 * p_75);
inline static union U3 * func_76(union U3 * p_77, union U3 * p_78);





static uint32_t  func_26(void)
{ 
    struct S0 l_37 = {-1L,0x5DL,0x8818L,4294967289UL};
    struct S1 ***l_345 = (void*)0;
    int32_t l_348 = 0x73D8C083L;
    union U3 *l_355 = &g_50;
    int32_t **l_359 = &g_276;
    int32_t ***l_358 = &l_359;
    struct S2 ***l_366 = (void*)0;
    union U3 *l_376 = (void*)0;
    struct S2 l_377 = {3,1UL,0xF57AL,8UL};
    if (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(__builtin_bswap32(g_16), g_5)), func_31(l_37, func_38((!(0xDC87A9B6L ^ 0xAB430688L)), g_16, g_16, g_5), l_37.f2, l_37.f0, l_37.f1))) != l_37.f0))
    { 
        struct S2 l_354 = {41,18446744073709551615UL,0xA258L,0x5304174EL};
        int32_t **l_357 = &g_276;
        int32_t ***l_356 = &l_357;
        if ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_37.f0 || l_37.f3), (safe_mul_func_uint16_t_u_u(((l_345 != (void*)0) < (-8L)), (safe_rshift_func_uint8_t_u_s(((__builtin_ctzll(l_37.f2) == g_5) ^ (g_143.f4 & l_348)), 5)))))), l_348)))
        { 
            int32_t *l_349 = &g_98;
            int32_t **l_350 = &g_276;
            (*l_350) = l_349;
        }
        else
        { 
            int32_t **l_351 = &g_276;
            (*l_351) = &g_98;
            (*g_110) = (***g_108);
        }
        (***l_358) = (safe_unary_minus_func_int8_t_s((~(func_59(l_354, &g_50, l_354.f3, g_88.f2, l_355) <= (l_356 != l_358)))));
        (**l_358) = (*l_359);
    }
    else
    { 
        int32_t l_369 = (-1L);
        if ((3UL <= ((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(0xB5L, ((safe_rshift_func_int16_t_s_u(g_220.f0, ((void*)0 == l_366))) && 0xC6697B58L))), 0x81734C23L)) <= (g_143.f0 ^ ((safe_mod_func_uint8_t_u_u((g_143.f2 != l_369), l_369)) < 0x8C5382C0L))) <= g_71.f2) && 0x662457B2L)))
        { 
            int32_t *l_370 = (void*)0;
            (**l_358) = l_370;
        }
        else
        { 
            uint32_t l_371 = 0x62E680BFL;
            int32_t *l_372 = (void*)0;
            int32_t *l_373 = &l_369;
            (*l_373) = l_371;
            (*l_373) = (safe_div_func_int16_t_s_s(0x6921L, g_98));
            return l_369;
        }
        return g_143.f3;
    }
    l_377 = func_65(l_37, l_355, l_376, (*g_49), &g_50);
    return (***l_358);
}




static uint8_t  func_31(struct S0  p_32, struct S1  p_33, int8_t  p_34, int16_t  p_35, uint32_t  p_36)
{ 
    uint16_t l_332 = 0UL;
    int32_t **l_333 = &g_276;
    union U3 *l_336 = (void*)0;
    (*g_108) = (*g_108);
    if ((g_88.f3 < __builtin_popcountll((safe_sub_func_int8_t_s_s(((func_55((((void*)0 != (*g_223)) < (safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(__builtin_clz(l_332), 0x56L)) & (l_333 == l_333)) <= ((safe_div_func_uint32_t_u_u((p_34 < 0x0364D17AL), l_332)) <= g_143.f2)), l_332))), p_34, l_336) != p_32.f0) >= (-7L)), 255UL)))))
    { 
        int32_t ***l_337 = &l_333;
        (*l_337) = &g_276;
    }
    else
    { 
        int32_t *l_338 = (void*)0;
        (*l_333) = &g_98;
        (*l_333) = l_338;
    }
    return g_16;
}




static struct S1  func_38(uint32_t  p_39, uint8_t  p_40, int32_t  p_41, uint16_t  p_42)
{ 
    union U3 *l_54 = &g_50;
    union U3 l_139 = {0xB194L};
    int16_t l_148 = 1L;
    uint16_t l_162 = 4UL;
    union U3 **l_324 = &g_49;
    struct S1 l_325 = {-3056,1441,3,662,0x89F6L};
    (*l_324) = func_44(g_49, g_5, func_51(l_54, func_55((func_59(func_65(g_71, func_72(func_76(l_54, &g_50), l_54, l_54), l_54, l_139, &l_139), &l_139, l_139.f0, l_148, g_49) > p_42), l_162, &l_139)), l_139.f3);
    return l_325;
}




static union U3 * func_44(union U3 * p_45, uint32_t  p_46, union U3 * p_47, int32_t  p_48)
{ 
    int32_t l_194 = 0xE471B29BL;
    struct S2 **l_215 = &g_110;
    struct S2 ****l_228 = &g_108;
    struct S0 l_231 = {-1L,0x2BL,65535UL,0x08DD124EL};
    union U3 *l_291 = &g_50;
    int32_t **l_304 = &g_276;
    uint16_t l_305 = 0xF911L;
    uint32_t l_310 = 0x929E3FC9L;
    uint32_t l_323 = 18446744073709551612UL;
    for (g_88.f2 = 7; (g_88.f2 > (-17)); g_88.f2 = safe_sub_func_uint32_t_u_u(g_88.f2, 1))
    { 
        struct S1 *l_198 = &g_143;
        const int32_t l_209 = 0L;
        union U3 l_219 = {8UL};
        struct S2 *l_290 = &g_220;
        if (g_50.f0)
        { 
            int32_t *l_184 = &g_85;
            union U3 *l_185 = &g_50;
            int32_t **l_248 = &l_184;
            struct S2 l_265 = {79,0x25A2B327L,-3L,0xEAF15A9DL};
            struct S0 *l_277 = &l_231;
            (*l_184) = p_48;
            if (func_55(g_88.f0, (*l_184), func_76(p_45, func_76(&g_50, func_76(l_185, func_76(func_76(func_76(p_47, &g_50), g_49), g_49))))))
            { 
                const int16_t l_216 = 0xEF34L;
                struct S0 l_217 = {6L,0x54L,0x1F78L,0UL};
                struct S2 *****l_227 = (void*)0;
                int32_t *l_242 = (void*)0;
                for (g_71.f0 = 9; (g_71.f0 < 16); g_71.f0 = safe_add_func_uint16_t_u_u(g_71.f0, 8))
                { 
                    const int32_t l_197 = (-1L);
                    int32_t **l_222 = &l_184;
                    struct S2 l_232 = {32,0x23AC88D0L,4L,0xC0775B32L};
                }
            }
            else
            { 
                uint16_t l_243 = 0xEC4BL;
                int32_t l_244 = (-4L);
                int32_t **l_247 = &l_184;
                l_244 = (1L < (p_46 < (p_46 != (l_243 == p_46))));
                (*l_184) = func_55((safe_lshift_func_int8_t_s_u((l_228 == (void*)0), p_46)), (func_55(g_5, p_46, p_45) ^ (1UL | 0x4C8DAF8AL)), p_45);
                if (g_88.f1)
                    continue;
                (*l_247) = &p_48;
            }
            (*l_248) = &l_194;
            if ((0x50L > g_220.f2))
            { 
                uint16_t l_253 = 65535UL;
                uint16_t l_268 = 0x8200L;
                if ((*l_184))
                { 
                    int32_t *l_261 = &g_50.f1;
                    union U3 *l_262 = &l_219;
                    if ((safe_sub_func_int32_t_s_s(((void*)0 != &l_228), func_55((*l_184), (safe_div_func_int16_t_s_s(l_253, (__builtin_ffsll((!(safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_71.f0, 5)), (&g_85 != l_261))) <= (0x10L || ((g_220.f1 < 0xA1L) || g_98))) > g_16), 13)))) | g_143.f4))), l_262))))
                    { 
                        union U3 **l_263 = (void*)0;
                        union U3 **l_264 = &g_49;
                        (*l_264) = &g_50;
                        if (p_48)
                            break;
                        if (p_46)
                            break;
                    }
                    else
                    { 
                        l_265 = (**g_109);
                        if (p_46)
                            break;
                        (*l_248) = &p_48;
                        p_48 = (((safe_mod_func_uint8_t_u_u(0x0DL, __builtin_ffs(p_48))) && l_268) && 0x25L);
                    }
                    return &g_50;
                }
                else
                { 
                    uint8_t l_274 = 0x39L;
                    for (l_265.f3 = 0; (l_265.f3 != 26); l_265.f3 = safe_add_func_int32_t_s_s(l_265.f3, 1))
                    { 
                        struct S2 *l_271 = &g_88;
                        (***l_228) = l_271;
                        if (g_71.f3)
                            break;
                    }
                    if ((safe_div_func_int8_t_s_s(0x9FL, l_274)))
                    { 
                        int32_t *l_275 = &g_50.f1;
                        g_276 = l_275;
                    }
                    else
                    { 
                        struct S0 **l_278 = &l_277;
                        (*l_278) = l_277;
                    }
                    (*g_276) = ((g_143.f3 || 248UL) != (safe_div_func_int16_t_s_s(((((*g_276) || (((g_88.f1 || (**l_248)) != (safe_add_func_int32_t_s_s(0x149B3240L, (p_46 & (safe_add_func_int32_t_s_s((-7L), g_220.f3)))))) != 0x3D3EL)) < g_143.f1) ^ 0xFB2A6EC4L), l_231.f2)));
                }
            }
            else
            { 
                if ((**l_248))
                    break;
            }
        }
        else
        { 
            uint32_t l_285 = 0xD07ED48EL;
            struct S2 *l_286 = &g_220;
            struct S0 l_309 = {-1L,0xD2L,0x0B2EL,4294967288UL};
            if (((p_48 & (__builtin_parity(l_231.f3) | g_143.f2)) ^ (p_46 > l_285)))
            { 
                if ((l_285 || g_220.f3))
                { 
                    l_286 = (*l_215);
                }
                else
                { 
                    int32_t **l_287 = &g_276;
                    (*l_287) = &p_48;
                }
            }
            else
            { 
                int32_t **l_303 = (void*)0;
                union U3 **l_308 = &g_49;
                for (g_50.f4 = 0; (g_50.f4 == 8); g_50.f4++)
                { 
                    if (l_285)
                    { 
                        (**g_108) = l_290;
                    }
                    else
                    { 
                        return l_291;
                    }
                    (**l_215) = (*g_110);
                    (*g_276) = __builtin_parityll(((safe_mod_func_uint16_t_u_u((l_209 | p_48), (~((safe_mul_func_int8_t_s_s(p_48, p_46)) >= (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((func_55((p_48 < (safe_mul_func_int8_t_s_s((l_303 == l_304), l_305))), l_219.f3, p_45) != g_88.f0), 10)), p_46)))))) < g_88.f0));
                    (*g_276) = (safe_add_func_int32_t_s_s(1L, (&p_45 == l_308)));
                }
            }
            (*g_276) = (g_71.f3 < 0x66L);
            (*l_290) = func_65(l_309, &l_219, &l_219, (*p_47), &l_219);
        }
        if (l_219.f3)
            break;
        return &g_50;
    }
    (*g_276) = __builtin_ia32_crc32qi(p_46, l_310);
    (**l_304) = (safe_rshift_func_uint8_t_u_s(g_85, (safe_lshift_func_uint8_t_u_u((p_48 || (safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((g_143.f0 & (9UL != p_46)), p_48)), 14))), ((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(((((~65529UL) | ((((*l_228) != (*l_228)) | 246UL) & p_48)) || l_323) | p_46), 0x8C7CL)))) >= 0xEE829FB8L)))));
    return p_45;
}




inline static union U3 * func_51(union U3 * p_52, uint32_t  p_53)
{ 
    int16_t l_177 = 0x3FF4L;
    union U3 *l_180 = &g_50;
    int32_t *l_181 = &g_50.f1;
    for (g_88.f1 = 21; (g_88.f1 == 53); g_88.f1 = safe_add_func_int32_t_s_s(g_88.f1, 1))
    { 
        int32_t l_167 = (-10L);
        struct S2 ****l_171 = &g_108;
        if ((safe_mod_func_int8_t_s_s(l_167, 250UL)))
        { 
            union U3 **l_168 = (void*)0;
            union U3 *l_170 = &g_50;
            union U3 **l_169 = &l_170;
            (*l_169) = func_76(p_52, p_52);
        }
        else
        { 
            struct S2 *****l_172 = &l_171;
            (*l_172) = l_171;
            if (g_88.f1)
                goto lbl_173;
        }
    }
lbl_173:
    (*g_110) = (***g_108);
    (*l_181) = (0xD2L <= (g_88.f2 == (safe_sub_func_uint8_t_u_u(((!(l_177 || (g_143.f2 > g_143.f3))) || g_143.f2), ((func_55(g_85, func_55(((safe_div_func_int32_t_s_s((l_177 != p_53), l_177)) <= p_53), p_53, l_180), p_52) != g_88.f2) & 5UL)))));
    return p_52;
}




static uint32_t  func_55(const uint8_t  p_56, int32_t  p_57, union U3 * p_58)
{ 
    return g_88.f3;
}




static int32_t  func_59(struct S2  p_60, union U3 * p_61, int32_t  p_62, int32_t  p_63, union U3 * p_64)
{ 
    uint16_t l_159 = 8UL;
    int32_t *l_160 = &g_85;
    int32_t **l_161 = &l_160;
    (*l_160) = (safe_lshift_func_uint16_t_u_s(((__builtin_parity(g_71.f2) != g_88.f3) ^ __builtin_ctz(((safe_div_func_int8_t_s_s(p_60.f3, g_71.f0)) && 1L))), (safe_rshift_func_int16_t_s_u((((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(l_159, l_159)) && 9L), 0UL)) || g_143.f3) || p_60.f3), g_143.f1))));
    (*g_110) = (*g_110);
    (*l_161) = l_160;
    (*l_161) = &g_98;
    return g_5;
}




inline static struct S2  func_65(struct S0  p_66, union U3 * p_67, union U3 * p_68, union U3  p_69, const union U3 * p_70)
{ 
    struct S1 *l_140 = (void*)0;
    struct S1 **l_141 = (void*)0;
    int32_t l_144 = 0L;
    struct S1 ***l_146 = &l_141;
    struct S2 l_147 = {65,0x7B9C7346L,-6L,4UL};
lbl_145:
    g_142 = l_140;
    l_144 = g_88.f1;
    if (g_88.f1)
        goto lbl_145;
    (*l_146) = &l_140;
    return l_147;
}




inline static union U3 * func_72(union U3 * p_73, const union U3 * p_74, union U3 * p_75)
{ 
    struct S2 *l_107 = &g_88;
    struct S2 **l_106 = &l_107;
    int32_t *l_115 = &g_98;
    struct S2 ****l_132 = &g_108;
    int32_t *l_138 = &g_85;
    for (g_50.f3 = (-11); (g_50.f3 < 13); g_50.f3 = safe_add_func_uint16_t_u_u(g_50.f3, 1))
    { 
        int32_t l_90 = 0x6D7BFF02L;
        union U3 *l_94 = &g_50;
        int32_t *l_99 = &g_85;
        uint8_t l_136 = 0xD8L;
        if (((void*)0 == p_74))
        { 
            int32_t l_93 = 0x685266ADL;
            struct S2 *l_103 = &g_88;
            struct S2 **l_102 = &l_103;
            uint8_t l_125 = 0x4BL;
            for (g_85 = 0; (g_85 > 23); g_85 = safe_add_func_uint8_t_u_u(g_85, 2))
            { 
                struct S2 *l_89 = &g_88;
                int32_t l_122 = 1L;
                (*l_89) = g_88;
                if (((__builtin_clzl((0x9BD9L <= l_90)) >= (safe_div_func_int32_t_s_s(0x0ECE9518L, g_88.f0))) < l_93))
                { 
                    return l_94;
                }
                else
                { 
                    int32_t *l_96 = (void*)0;
                    int32_t **l_95 = &l_96;
                    int32_t *l_97 = &g_98;
                    (*l_95) = &g_85;
                    (*l_97) = (0x4CL & g_88.f2);
                    (*l_97) = (((*l_95) == l_99) & 0x59L);
                    for (g_88.f2 = 1; (g_88.f2 != 23); ++g_88.f2)
                    { 
                        struct S2 ***l_104 = (void*)0;
                        struct S2 ***l_105 = (void*)0;
                        struct S2 ****l_111 = &l_104;
                        l_106 = l_102;
                        (*l_111) = g_108;
                    }
                }
                (*l_115) = (((!(safe_sub_func_uint8_t_u_u((&g_85 != l_115), 0x3DL))) >= __builtin_bswap64((__builtin_ffsl(((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(g_71.f2, g_50.f3)) > (safe_add_func_uint32_t_u_u(l_93, 0UL))), (__builtin_popcount(l_122) ^ g_71.f2))) != g_5)) ^ g_5))) & 0L);
                return p_73;
            }
            (*l_115) = ((g_71.f0 ^ (safe_lshift_func_int16_t_s_s((&l_106 == (void*)0), (((*l_99) >= (l_125 >= (safe_mul_func_uint8_t_u_u(((0x027EA7EAL && l_125) | g_71.f0), ((safe_add_func_uint32_t_u_u((*l_99), (*l_115))) > (*l_115)))))) == (*l_115))))) != g_98);
            for (l_93 = 0; (l_93 == 18); ++l_93)
            { 
                uint32_t l_135 = 0xDBB176A9L;
                (*l_99) = ((l_132 == &g_108) | (safe_mod_func_int8_t_s_s(l_135, l_136)));
                return &g_50;
            }
            (*l_106) = (*g_109);
        }
        else
        { 
            union U3 *l_137 = &g_50;
            return l_137;
        }
    }
    l_115 = l_138;
    return &g_50;
}




inline static union U3 * func_76(union U3 * p_77, union U3 * p_78)
{ 
    int32_t *l_79 = &g_50.f1;
    int32_t ***l_80 = (void*)0;
    int32_t **l_81 = &l_79;
    union U3 *l_82 = &g_50;
    (*l_79) = 0x2D86A023L;
    l_81 = &l_79;
    return l_82;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_143.f3, "g_143.f3", print_hash_value);
    transparent_crc(g_143.f4, "g_143.f4", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



