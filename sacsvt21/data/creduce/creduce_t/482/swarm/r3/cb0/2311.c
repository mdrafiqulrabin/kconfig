


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 4;
   unsigned f1 : 9;
   unsigned f2 : 7;
   unsigned f3 : 23;
   signed f4 : 10;
};
#pragma pack(pop)


static int32_t g_9 = 1;
static uint8_t g_52 = 0xD4;
static const struct S0 g_91 = {3,15,9,1723,20};
static int32_t g_99 = 4;
static int32_t *g_130 = &g_99;
static int32_t **g_129 = &g_130;
static int32_t ***g_128 = &g_129;
static struct S0 g_150 = {2,19,5,211,-10};
static int32_t *g_219 = &g_99;
static int32_t g_221 = 6;
static uint32_t g_249 = 0x73FA2BBC;
static int32_t g_283 = (-5);
static int32_t *****g_308 = (void*)0;
static int32_t g_311 = 0x9EC63CFD;
static float g_313 = 0x5.08B3C0p+40;
static float g_316 = 0x6.234BBAp-28;
static struct S0 *g_356 = &g_150;
static struct S0 **g_355 = &g_356;



static int32_t  func_27(void);
static uint32_t  func_28(float  p_29, struct S0  p_30, uint8_t  p_31, int32_t  p_32, uint32_t  p_33);
static struct S0  func_34(uint8_t  p_35, int32_t  p_36, uint8_t  p_37);
static uint32_t  func_43(uint16_t  p_44, const uint8_t  p_45);
static float  func_46(uint16_t  p_47, struct S0  p_48, int32_t  p_49, uint16_t  p_50);
static struct S0  func_53(int16_t  p_54, uint16_t  p_55, uint32_t  p_56, uint32_t  p_57);
static int16_t  func_61(uint32_t  p_62, uint32_t  p_63, uint16_t  p_64, uint8_t  p_65, uint32_t  p_66);
static int32_t  func_73(uint16_t  p_74, float  p_75);
static float  func_80(int32_t  p_81, int32_t  p_82, float  p_83, int32_t  p_84, uint32_t  p_85);
static int32_t * func_93(int32_t * p_94, int32_t * p_95, int32_t * p_96, int32_t * p_97);





static int32_t  func_27(void)
{ 
    int32_t l_40 = 9;
    struct S0 l_51 = {3,4,1,2810,-11};
    float *l_312 = &g_313;
    const uint32_t l_320 = 0xCFA903B3;
    uint16_t l_321 = 65535U;
    return g_91.f4;
}




static uint32_t  func_28(float  p_29, struct S0  p_30, uint8_t  p_31, int32_t  p_32, uint32_t  p_33)
{ 
    int32_t ****l_289 = &g_128;
    int32_t *l_292 = (void*)0;
    struct S0 *l_309 = &g_150;
    struct S0 **l_310 = &l_309;
    l_289 = &g_128;
    for (p_32 = 0; (p_32 != (-5)); p_32 = safe_sub_func_int16_t_s_s(p_32, 1))
    { 
        int32_t *l_293 = &g_99;
        int32_t *l_304 = (void*)0;
        int32_t *l_305 = &g_283;
        int32_t *l_306 = &g_221;
        (*g_219) = 0;
        if (p_32)
            break;
        l_293 = l_292;
        if (__builtin_clz((l_292 != g_219)))
        { 
            if (p_30.f0)
                break;
        }
        else
        { 
            int32_t *l_294 = &g_221;
            uint32_t l_303 = 0x7730468D;
            int32_t **l_307 = &l_304;
            (*l_307) = &p_32;
            if ((*l_294))
                continue;
            p_30.f4 = (((g_150.f3 , (&p_32 != l_304)) && __builtin_parityl(p_32)) , (*l_306));
        }
    }
    g_308 = &l_289;
    (*l_310) = l_309;
    return g_311;
}




static struct S0  func_34(uint8_t  p_35, int32_t  p_36, uint8_t  p_37)
{ 
    int16_t l_288 = 0xAC5E;
    l_288 = 0xE0782091;
    return g_150;
}




static uint32_t  func_43(uint16_t  p_44, const uint8_t  p_45)
{ 
    int32_t *l_273 = &g_221;
    struct S0 *l_280 = &g_150;
    int32_t *l_281 = &g_99;
    int32_t *l_282 = &g_283;
    int32_t **l_284 = &l_282;
    int32_t *l_285 = &g_283;
    (*l_284) = func_93(func_93(l_273, l_273, func_93((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((g_130 != g_130) > (safe_add_func_float_f_f(0x1.9p-1, (__builtin_ffs((l_280 != l_280)) , (g_221 , p_44))))) , (*l_273)), 8)), 65535U)) < p_44) , (void*)0), l_273, l_281, l_273), l_273), g_130, l_281, l_282);
    (*l_282) = __builtin_ia32_crc32qi(g_91.f4, (p_44 , 252U));
    (*l_284) = func_93((*l_284), l_285, func_93(func_93((*l_284), func_93((*l_284), (*l_284), ((((*l_281) || p_44) > (safe_mod_func_int16_t_s_s((-9), 0xDB39))) , (*l_284)), (*l_284)), (*l_284), (*l_284)), (*l_284), (*l_284), (*l_284)), &g_221);
    (*l_280) = (*l_280);
    return p_45;
}




static float  func_46(uint16_t  p_47, struct S0  p_48, int32_t  p_49, uint16_t  p_50)
{ 
    uint16_t l_58 = 9U;
    int16_t l_92 = 0x767E;
    struct S0 l_250 = {1,4,6,2576,9};
    int32_t *l_251 = (void*)0;
    int32_t ****l_271 = &g_128;
    const struct S0 l_272 = {1,9,0,2646,-4};
    l_250 = func_53(l_58, (((safe_lshift_func_int16_t_s_s(func_61(g_9, l_58, ((((!(((safe_mod_func_uint16_t_u_u((4294967291U & (((((safe_rshift_func_uint16_t_u_s(65532U, (l_58 , ((safe_unary_minus_func_int32_t_s(func_73(((((safe_sub_func_int32_t_s_s(g_52, (((safe_lshift_func_int16_t_s_u(((((func_80(((safe_rshift_func_int16_t_s_s((((g_9 | (safe_sub_func_int32_t_s_s(__builtin_ctzll(((!1U) && g_9)), g_52))) , g_91) , 0x6174), 13)) , g_91.f1), p_48.f1, g_91.f1, l_58, g_91.f0) , p_48.f4) ^ l_58) , p_50) | g_52), g_91.f0)) >= l_58) == p_48.f4))) < l_58) && l_92) < l_92), p_49))) > (-1))))) >= l_58) >= g_91.f4) | 0xB736387B) < g_9)), 0xE029)) | p_48.f0) == 0x905C)) != p_48.f4) , 0x642E7455) > 1), l_58, l_92), 10)) <= p_49) && l_92), g_9, g_91.f4);
    (*g_129) = func_93(l_251, l_251, (*g_129), (*g_129));
    (*g_128) = (void*)0;
    l_250 = l_272;
    return g_9;
}




static struct S0  func_53(int16_t  p_54, uint16_t  p_55, uint32_t  p_56, uint32_t  p_57)
{ 
    float l_212 = 0xC.71E5B3p+49;
    int32_t **l_213 = &g_130;
    struct S0 l_214 = {1,12,7,1359,-2};
    int32_t *l_220 = &g_221;
    float *l_222 = &l_212;
    (*g_129) = func_93((func_73(__builtin_ctzl(((0xFB4F4348 | g_91.f1) , ((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((l_212 , (l_213 == (l_214 , (*g_128)))), (((safe_add_func_uint32_t_u_u((g_91.f2 , (safe_div_func_int32_t_s_s(5, p_56))), 4294967290U)) < 0x50EBD88D) && p_55))) | 1), g_91.f1)) < g_150.f0))), g_91.f1) , g_219), g_219, g_219, l_220);
    (*l_222) = (p_57 >= (**l_213));
    for (p_54 = 0; (p_54 > (-2)); p_54 = safe_sub_func_uint32_t_u_u(p_54, 1))
    { 
        const uint32_t l_229 = 0x04548F12;
        int32_t *l_243 = &g_99;
        for (p_55 = 0; (p_55 == 23); p_55 = safe_add_func_uint32_t_u_u(p_55, 1))
        { 
            int32_t ****l_230 = (void*)0;
            struct S0 *l_237 = &l_214;
            struct S0 ** const l_236 = &l_237;
            if ((&g_128 == ((safe_mul_func_int16_t_s_s(((l_229 == p_54) | (((g_150.f3 > g_150.f3) , &g_150) == &g_91)), p_57)) , l_230)))
            { 
                (*l_213) = (**g_128);
            }
            else
            { 
                struct S0 *l_232 = &l_214;
                struct S0 **l_231 = &l_232;
                int32_t *l_233 = &g_99;
                (*l_231) = (g_91.f2 , &g_150);
                (**g_128) = l_233;
                if ((((safe_mul_func_int16_t_s_s(((((l_236 == (void*)0) == g_91.f2) | 65531U) && 0x2D82), ((void*)0 == (*g_128)))) != g_150.f0) != ((((((safe_mod_func_uint16_t_u_u(p_55, (-3))) && (**g_129)) != 0x49740BE6) ^ 0x2DCA3039) ^ p_57) > g_91.f2)))
                { 
                    int32_t *l_240 = &g_99;
                    (*g_129) = l_240;
                    (**g_128) = (*l_213);
                }
                else
                { 
                    for (p_57 = 0; (p_57 != 40); p_57 = safe_add_func_uint16_t_u_u(p_57, 8))
                    { 
                        struct S0 l_244 = {1,10,0,2266,23};
                        l_243 = l_233;
                        (*l_222) = (g_221 , (&g_128 != &g_128));
                        return l_244;
                    }
                }
                for (g_52 = 0; (g_52 > 31); g_52 = safe_add_func_uint32_t_u_u(g_52, 3))
                { 
                    int32_t *l_247 = &g_221;
                    (*l_243) = (-10);
                    (*l_213) = func_93(func_93(func_93((*g_129), (**g_128), (**g_128), (**g_128)), l_243, (*g_129), l_233), (*l_213), l_247, l_233);
                }
            }
            if (p_57)
                continue;
            g_249 = (p_55 < (((!(p_54 , g_91.f2)) , &l_243) == (*g_128)));
        }
        (*g_129) = func_93(((l_214 , ((void*)0 == (**g_128))) , (*g_129)), (*l_213), (*g_129), (*g_129));
        return l_214;
    }
    return l_214;
}




static int16_t  func_61(uint32_t  p_62, uint32_t  p_63, uint16_t  p_64, uint8_t  p_65, uint32_t  p_66)
{ 
    uint8_t l_191 = 0x49;
    int32_t ***l_196 = &g_129;
    int32_t *l_197 = &g_99;
    int32_t *l_198 = &g_99;
    struct S0 l_207 = {2,4,2,1154,-8};
    (*g_129) = func_93(func_93(((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_150.f1, ((0x936D73F1 || ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_91.f3, (l_191 , p_62))), ((p_64 , (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_s(((p_66 , l_196) == l_196), p_64)) | p_66) < p_66), 3))) && g_99))) , p_63)) , l_191))), 1)) , &g_99), &g_99, l_197, l_198), l_197, l_198, l_197);
    for (p_62 = (-24); (p_62 > 20); p_62 = safe_add_func_int32_t_s_s(p_62, 1))
    { 
        int32_t *l_201 = (void*)0;
        (**g_128) = l_201;
        (*l_197) = (*l_197);
        for (p_65 = 0; (p_65 >= 12); p_65 = safe_add_func_int16_t_s_s(p_65, 1))
        { 
            struct S0 l_204 = {2,21,10,1271,-25};
            l_204 = l_204;
            for (l_191 = (-18); (l_191 >= 20); l_191 = safe_add_func_int16_t_s_s(l_191, 1))
            { 
                l_204 = l_207;
            }
        }
    }
    return p_64;
}




static int32_t  func_73(uint16_t  p_74, float  p_75)
{ 
    int32_t *l_98 = &g_99;
    float *l_137 = (void*)0;
    int32_t l_139 = 7;
    struct S0 l_170 = {1,21,9,1366,-9};
    struct S0 l_173 = {3,11,5,126,8};
    (*g_129) = func_93(l_98, &g_99, l_98, l_98);
    (*l_98) = (safe_mul_func_float_f_f((*l_98), (safe_mul_func_float_f_f(g_91.f0, (*l_98)))));
    (*l_98) = (l_98 == l_98);
    if (((safe_unary_minus_func_int16_t_s(((l_139 > (*l_98)) == 0x50803CBA))) , ((*l_98) & g_91.f0)))
    { 
        int32_t *l_140 = &g_99;
        (**g_128) = l_140;
    }
    else
    { 
        struct S0 *l_169 = &g_150;
        int32_t l_172 = (-4);
        int32_t *l_180 = &l_172;
        for (g_99 = 0; (g_99 != (-4)); g_99 = safe_sub_func_int16_t_s_s(g_99, 2))
        { 
            struct S0 l_159 = {2,18,3,2560,-23};
            for (l_139 = (-18); (l_139 < (-1)); l_139 = safe_add_func_int16_t_s_s(l_139, 8))
            { 
                uint32_t l_155 = 7U;
                int32_t l_171 = 0x813938A0;
                const uint32_t l_176 = 0U;
                int32_t *l_179 = &l_171;
                for (g_52 = 0; (g_52 != 5); g_52 = safe_add_func_int16_t_s_s(g_52, 1))
                { 
                    int16_t l_156 = 0x677A;
                    struct S0 *l_160 = &l_159;
                    for (p_74 = 10; (p_74 == 17); p_74 = safe_add_func_int16_t_s_s(p_74, 1))
                    { 
                        struct S0 *l_149 = &g_150;
                        (*l_149) = g_91;
                    }
                    l_159.f4 = (safe_mul_func_int16_t_s_s(__builtin_popcount((safe_sub_func_int16_t_s_s((1 & (l_155 , g_150.f4)), l_156))), (safe_add_func_int32_t_s_s((((l_159 , (l_160 != (((!(l_155 , ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((g_91.f4 != 0x8A9104C8), 0x101CFD3A)), 12)))), p_74)) != 0))) & g_91.f4) , l_169))) , g_9) > 0x30DB), (*l_98)))));
                    (*l_169) = l_170;
                    if ((***g_128))
                    { 
                        (*l_160) = l_170;
                        (*g_129) = (**g_128);
                        if (p_74)
                            break;
                    }
                    else
                    { 
                        (*g_129) = (*g_129);
                        l_171 = p_74;
                        g_150 = (*l_169);
                        if (l_172)
                            continue;
                    }
                }
                (*l_179) = (__builtin_popcountl(((1 > ((__builtin_clz((l_173 , p_74)) , g_91.f0) != (safe_lshift_func_uint16_t_u_u(l_176, ((**g_129) == (safe_mul_func_int16_t_s_s(g_99, l_155))))))) , p_74)) || 1U);
                (*l_169) = l_173;
                if ((*l_179))
                    continue;
            }
            if (p_74)
                break;
            (**g_128) = l_180;
            for (l_172 = 12; (l_172 <= (-12)); l_172 = safe_sub_func_uint32_t_u_u(l_172, 5))
            { 
                (*g_129) = (*g_129);
            }
        }
    }
    return (*l_98);
}




static float  func_80(int32_t  p_81, int32_t  p_82, float  p_83, int32_t  p_84, uint32_t  p_85)
{ 
    return p_84;
}




static int32_t * func_93(int32_t * p_94, int32_t * p_95, int32_t * p_96, int32_t * p_97)
{ 
    int32_t l_100 = (-1);
    struct S0 l_106 = {3,7,6,2124,-17};
    int32_t *l_132 = &g_99;
    if ((l_100 < (~g_99)))
    { 
        int32_t *l_103 = &g_99;
        int32_t **l_102 = &l_103;
        uint8_t l_107 = 0x98;
        float *l_108 = (void*)0;
lbl_109:
        (*l_102) = &g_99;
        l_106.f4 = func_80(((g_9 != (safe_lshift_func_int16_t_s_u(g_91.f4, (g_9 >= ((0U > (l_100 ^ (l_106 , (l_106.f0 ^ ((void*)0 != &l_103))))) || 0x2FD598C5))))) & l_107), l_106.f2, (**l_102), (*l_103), g_9);
        if (g_91.f4)
            goto lbl_109;
    }
    else
    { 
        uint16_t l_115 = 0xC5A1;
        int32_t ****l_131 = &g_128;
        (*p_96) = ((safe_sub_func_int16_t_s_s(__builtin_parityll(l_106.f1), (((!((safe_sub_func_int16_t_s_s((((__builtin_clzll(l_115) <= ((safe_sub_func_float_f_f(((safe_unary_minus_func_int16_t_s(((!(safe_add_func_uint16_t_u_u((~l_115), (safe_rshift_func_int16_t_s_s(l_115, 5))))) , 0xC119))) , (-((safe_lshift_func_int16_t_s_s(l_115, 3)) , l_106.f2))), l_106.f4)) < 0xB.20E1BCp+68)) , g_9) == g_91.f4), l_115)) , l_115)) ^ 3) == l_100))) == l_115);
        (*p_97) = g_52;
        (*l_131) = g_128;
        return l_132;
    }
    return l_132;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_150.f2, "g_150.f2", print_hash_value);
    transparent_crc(g_150.f3, "g_150.f3", print_hash_value);
    transparent_crc(g_150.f4, "g_150.f4", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc_bytes (&g_313, sizeof(g_313), "g_313", print_hash_value);
    transparent_crc_bytes (&g_316, sizeof(g_316), "g_316", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



