


#define NO_LONGLONG



static long __undefined;


struct S0 {
   uint32_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   int32_t  f3;
};

struct S1 {
   uint32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};

union U2 {
   struct S0  f0;
   struct S0  f1;
   uint32_t  f2;
   struct S0  f3;
};

union U3 {
   int16_t  f0;
   int32_t  f1;
};


static uint8_t g_4 = 0x60;
static union U3 g_44 = {-1};
static uint8_t g_51 = 252U;
static uint32_t g_56 = 3U;
static int32_t g_81 = (-1);
static int16_t g_83 = 0x04D0;
static int16_t g_94 = 0xB3A3;
static uint32_t g_96 = 0x76189EFA;
static struct S1 g_106 = {4294967295U,0xA54743E0,0xEB,0U};
static struct S1 *g_105 = &g_106;
static uint16_t g_114 = 0x356D;
static uint16_t g_120 = 0xD8D6;
static int32_t g_125 = 0x84D564CE;
static int32_t *g_124 = &g_125;
static int32_t **g_123 = &g_124;
static uint16_t g_128 = 9U;
static union U3 g_142 = {0};
static struct S0 g_149 = {4294967287U,0x6C,65535U,2};
static union U3 *g_154 = &g_44;
static union U3 **g_153 = &g_154;
static struct S1 g_167 = {0U,4294967291U,0U,0xF4667568};
static uint16_t *g_248 = &g_128;
static uint16_t **g_247 = &g_248;
static union U2 g_271 = {{0xF69E2F77,0xC4,65532U,0x7E34FB19}};
static uint8_t *g_312 = &g_106.f2;
static uint8_t **g_311 = &g_312;
static uint32_t *g_342 = &g_96;
static uint32_t **g_341 = &g_342;
static uint32_t ***g_340 = &g_341;
static uint8_t ***g_369 = (void*)0;
static uint8_t ****g_368 = &g_369;



inline static uint32_t  func_28(void);
inline static struct S1  func_29(uint32_t  p_30);
inline static int32_t  func_36(int32_t  p_37, union U2  p_38, int32_t  p_39, int16_t  p_40);
inline static union U2  func_41(int16_t  p_42, union U3  p_43);
inline static int32_t * func_45(uint8_t  p_46, int32_t  p_47, uint32_t  p_48);
static int32_t  func_57(uint16_t  p_58, uint16_t  p_59);
inline static union U3 * func_62(uint8_t * p_63, int32_t  p_64, int32_t * p_65);
static uint8_t * func_66(uint32_t * p_67, struct S1  p_68, struct S1  p_69, struct S1  p_70);
inline static uint32_t * func_71(uint32_t * p_72);
inline static int32_t  func_78(union U3 * p_79);





inline static uint32_t  func_28(void)
{ 
    struct S1 *l_405 = (void*)0;
    struct S1 *l_406 = &g_106;
    (*l_406) = func_29(g_4);
    
    assert (g_105 == &g_106 || g_105 == 0);
    
    assert (g_154 == 0 || g_154 == &g_44);
    
    return (**g_341);
}




inline static struct S1  func_29(uint32_t  p_30)
{ 
    int32_t l_33 = 0;
    int32_t l_402 = 0xE64486FD;
    int32_t *l_403 = &g_271.f1.f3;
    struct S1 l_404 = {0U,4294967289U,5U,4294967293U};
    (*l_403) = ((int16_t)(l_33 == (l_33 & l_33)) >> (int16_t)((((int32_t)func_36(__builtin_ctzl(g_4), func_41(l_33, g_44), (!p_30), g_4) - (int32_t)l_33) == p_30) > l_402));
    
    assert (g_105 == &g_106 || g_105 == 0);
    
    assert (g_154 == 0 || g_154 == &g_44);
    
    return l_404;
}




inline static int32_t  func_36(int32_t  p_37, union U2  p_38, int32_t  p_39, int16_t  p_40)
{ 
    int16_t l_374 = 0x736B;
    uint32_t ****l_385 = &g_340;
    uint32_t *****l_384 = &l_385;
    uint16_t ***l_395 = (void*)0;
    if (l_374)
    { 
        uint32_t l_381 = 0x11ED50EA;
        int32_t *l_382 = &g_149.f3;
        uint32_t *****l_383 = (void*)0;
        for (g_271.f0.f2 = (-21); (g_271.f0.f2 != 28); g_271.f0.f2 += 1)
        { 
            uint32_t l_379 = 0x29EE725D;
            int32_t *l_380 = &g_81;
            l_381 = ((*l_380) = p_39);
            (*g_123) = l_382;
            
            assert (g_124 == &g_149.f3);
        }
        
        
        l_384 = l_383;
        
        assert (l_384 == 0);
    }
    else
    { 
        struct S0 *l_386 = &g_271.f3;
        int32_t l_387 = 9;
        uint16_t ***l_397 = &g_247;
        uint16_t ****l_396 = &l_397;
        int16_t *l_400 = &g_83;
        int16_t *l_401 = &g_44.f0;
        (*l_386) = p_38.f0;
        
        (*g_123) = &l_387;
        
        assert (g_124 == &l_387);
    }
    
    
    assert (l_384 == &l_385 || l_384 == 0);
    return p_38.f0.f1;
}




inline static union U2  func_41(int16_t  p_42, union U3  p_43)
{ 
    uint16_t l_49 = 0x8163;
    uint8_t *l_50 = &g_51;
    uint32_t *l_54 = (void*)0;
    uint32_t *l_55 = &g_56;
    int32_t l_276 = 0xFC4C37C8;
    union U2 l_372 = {{0xDD2EF524,9U,65532U,0}};
    (*g_123) = func_45(((*l_50) = l_49), (((int32_t)__builtin_ctzll(p_43.f0) + (int32_t)((*l_55) = l_49)) && ((l_276 = func_57(g_4, g_56)) && ((uint32_t)p_42 - (uint32_t)p_42))), g_271.f0.f1);
    
    assert (g_105 == &g_106 || g_105 == 0);
    assert (g_124 == &g_96 || g_124 == &g_56 || g_124 == 0 || g_124 == &g_81);
    assert (g_154 == 0 || g_154 == &g_44);
    
    (*g_123) = &l_276;
    
    assert (g_124 == &l_276);
    (*g_124) = 0x0D1068E3;
    return l_372;
    
    
    }




inline static int32_t * func_45(uint8_t  p_46, int32_t  p_47, uint32_t  p_48)
{ 
    struct S1 *l_285 = (void*)0;
    int32_t l_286 = 0x5C6A8F6B;
    union U2 *l_308 = &g_271;
    union U2 **l_307 = &l_308;
    int32_t l_315 = (-3);
    uint32_t *l_338 = &g_96;
    uint32_t **l_337 = &l_338;
    uint32_t ***l_336 = &l_337;
    struct S1 **l_367 = &g_105;
    uint8_t *****l_370 = &g_368;
    uint8_t ****l_371 = &g_369;
    if (p_47)
    { 
        union U2 *l_279 = &g_271;
        union U2 **l_280 = (void*)0;
        l_279 = l_279;
        l_286 = (p_47 = ((uint32_t)((uint16_t)0U % (uint16_t)g_4) + (uint32_t)(&g_167 == l_285)));
    }
    else
    { 
        int32_t *l_294 = (void*)0;
        union U3 *l_321 = (void*)0;
        struct S1 *l_343 = &g_106;
        for (g_81 = 0; (g_81 >= 15); g_81 += 1)
        { 
            int32_t *l_289 = (void*)0;
            int32_t *l_290 = (void*)0;
            int32_t *l_291 = (void*)0;
            int32_t *l_292 = (void*)0;
            int32_t *l_293 = &g_271.f0.f3;
            (*l_293) = p_46;
            (*g_123) = &g_125;
            
            assert (g_124 == &g_125);
        }
        l_294 = ((*g_123) = l_294);
        
        assert (g_124 == 0);
        for (g_271.f3.f1 = 0; (g_271.f3.f1 != 51); g_271.f3.f1 += 3)
        { 
            int32_t *l_303 = &g_81;
            uint8_t **l_313 = &g_312;
            union U2 **l_327 = &l_308;
            int32_t l_335 = 0xB2800C3B;
            struct S1 *l_344 = &g_167;
            struct S0 l_359 = {0U,0x7F,0U,0xF3013D53};
            int16_t *l_365 = &g_83;
            int16_t **l_364 = &l_365;
            int16_t ***l_363 = &l_364;
            int16_t ****l_366 = &l_363;
            if (__builtin_popcountll(((int32_t)((*l_303) = ((uint16_t)0U >> (uint16_t)((((int16_t)p_47 * (int16_t)func_78(func_62(&p_46, ((g_271.f0.f1 || g_4) == p_48), ((*g_123) = (*g_123))))) != p_47) >= 65531U))) + (int32_t)l_286)))
            { 
                union U3 *l_306 = &g_44;
                int16_t *l_332 = (void*)0;
                int16_t **l_331 = &l_332;
                if ((0xC9A8 <= ((int16_t)((g_114 >= (func_78(l_306) || ((((l_307 != (void*)0) | (g_149.f1 ^ 0U)) | p_47) && l_286))) | l_286) + (int16_t)(-1))))
                { 
                    (*g_105) = (*g_105);
                }
                else
                { 
                    int32_t l_314 = 0x9C2CA9A2;
                    for (g_51 = (-16); (g_51 < 39); g_51 += 1)
                    { 
                        l_313 = g_311;
                        p_47 = p_48;
                    }
                    (*l_303) = (l_314 >= l_315);
                    if (g_51)
                    { 
                        int32_t l_316 = 1;
                        (*l_303) = l_316;
                    }
                    else
                    { 
                        int32_t *l_326 = &l_286;
                        int32_t *l_328 = &l_314;
                        uint32_t ****l_339 = &l_336;
                        (*l_328) = (((g_51 ^ ((*l_303) = 0x8E098A7A)) > ((uint32_t)(((g_106.f1 >= ((((int16_t)((l_321 == (void*)0) || (g_125 = ((int16_t)(((*l_326) = p_48) && ((void*)0 != l_327)) % (int16_t)p_48))) - (int16_t)p_46) >= p_48) | (**g_247))) <= 0x9DE7) != g_114) + (uint32_t)g_167.f0)) <= 0x0D74);
                        (*g_123) = func_71(&g_56);
                        
                        assert (g_124 == &g_96 || g_124 == &g_56);
                        l_314 = ((*g_124) = (g_167.f2 | (((uint16_t)(1U < ((((l_331 != (void*)0) >= (((**g_247) = ((void*)0 != &g_105)) | p_48)) ^ ((((uint16_t)p_46 - (uint16_t)g_114) || g_149.f2) == p_47)) | 0x228F)) >> (uint16_t)l_335) || (*l_303))));
                        g_340 = ((*l_339) = l_336);
                        
                        assert (g_340 == &l_337);
                    }
                }
                l_344 = l_343;
                
                assert (l_344 == &g_106);
                if (p_47)
                { 
                    (*l_303) = (&g_341 != &g_341);
                }
                else
                { 
                    (*g_123) = func_71((**g_340));
                    
                    assert (g_124 == &g_96);
                    if (p_46)
                        break;
                }
            }
            else
            { 
                (*l_303) = p_47;
                if ((*l_303))
                    break;
                (*l_303) = (!(**g_247));
                if ((4294967286U == ((int32_t)(((((*g_342) = p_47) != __builtin_parity(((*l_303) = 0U))) ^ 0U) < p_46) / (int32_t)1U)))
                { 
                    int32_t l_356 = 0;
                    l_356 = ((int16_t)(((int32_t)((p_48 ^ 0x8FCEAAE3) <= (g_167.f0 & ((((int16_t)((*l_303) = 0xEDC4) << (int16_t)(0xAC1F8926 == (-6))) | p_48) | (((uint32_t)(*g_342) + (uint32_t)0x6B856220) <= l_286)))) - (int32_t)(***g_340)) < 0x5CE0B114) >> (int16_t)g_271.f0.f3);
                }
                else
                { 
                    for (g_128 = (-18); (g_128 > 22); g_128 += 1)
                    { 
                        struct S0 *l_360 = (void*)0;
                        struct S0 *l_361 = &l_359;
                        struct S0 *l_362 = &g_149;
                        (*g_123) = (*g_123);
                        (*l_362) = ((*l_361) = l_359);
                    }
                    (*l_327) = &g_271;
                    return (*g_123);
                    
                    
                    
                }
            }
            
            assert (l_344 == &g_167 || l_344 == &g_106);
            (*l_366) = l_363;
        }
        
        assert (g_124 == &g_96 || g_124 == &g_56 || g_124 == 0);
        assert (g_340 == &l_337 || g_340 == &g_341);
    }
    
    
    assert (g_340 == &l_337 || g_340 == &g_341);
    (*l_367) = (l_285 = (void*)0);
    
    assert (g_105 == 0);
    l_371 = ((*l_370) = g_368);
    return &g_81;
    
    
    
}




static int32_t  func_57(uint16_t  p_58, uint16_t  p_59)
{ 
    struct S1 l_130 = {0x6C92F0D9,0x09F7ADB2,0x49,4294967293U};
    uint32_t l_159 = 0xD609A04A;
    int32_t *l_163 = &g_81;
    struct S0 l_201 = {0x1D116AA0,255U,0x3DE1,0xFC347C86};
    for (g_44.f0 = 0; (g_44.f0 != 23); g_44.f0 += 1)
    { 
        uint32_t *l_73 = &g_56;
        struct S1 l_129 = {0x8261C1CA,0x6320CFA8,250U,0xEE99EAD7};
        (*g_153) = func_62(func_66(func_71(l_73), l_129, l_129, l_130), (-(int32_t)l_159), l_73);
        
        assert (g_154 == 0);
        if ((*g_124))
            continue;
        for (p_58 = 0; (p_58 <= 1); p_58 += 1)
        { 
            if ((*g_124))
                break;
        }
        (*g_123) = l_163;
        
        assert (g_124 == &g_81);
    }
    
    assert (g_124 == &g_81 || g_124 == &g_125 || g_124 == &g_96);
    assert (g_154 == 0 || g_154 == &g_44);
    (*g_123) = func_71(&l_159);
    
    assert (g_124 == &g_96 || g_124 == &l_159);
    if ((**g_123))
    { 
        int32_t l_164 = 0x8EAE7A24;
        struct S1 *l_168 = &g_167;
        uint32_t *l_198 = (void*)0;
        int32_t *l_244 = &g_125;
        struct S0 l_250 = {0x3852427B,255U,0x6286,-1};
        union U3 **l_255 = &g_154;
        int16_t l_258 = 0;
        if (l_164)
        { 
            for (g_149.f1 = 0; (g_149.f1 == 36); g_149.f1 += 1)
            { 
                g_167 = ((*g_105) = l_130);
                if (p_59)
                    break;
            }
        }
        else
        { 
            struct S1 **l_169 = &l_168;
            struct S0 *l_170 = (void*)0;
            struct S0 *l_171 = &g_149;
            (*l_169) = l_168;
            (*g_123) = l_163;
            
            assert (g_124 == &g_81);
            (*l_171) = g_149;
        }
        
        assert (g_124 == &g_81 || g_124 == &g_96 || g_124 == &l_159);
        (*g_153) = (*g_153);
        (*g_123) = (void*)0;
        
        assert (g_124 == 0);
        if (((uint16_t)0xADED >> (uint16_t)p_59))
        { 
            uint32_t l_176 = 2U;
            union U3 *l_193 = &g_44;
            int32_t l_216 = 0xCF958245;
            if ((*l_163))
            { 
                int16_t l_178 = 0;
                for (g_96 = 0; (g_96 == 53); g_96 += 7)
                { 
                    int32_t l_177 = 0;
                    if (l_176)
                    { 
                        (*l_163) = l_177;
                        return l_178;
                    }
                    else
                    { 
                        return p_59;
                    }
                }
            }
            else
            { 
                uint16_t *l_185 = &g_128;
                int32_t *l_197 = &g_81;
                uint16_t l_214 = 9U;
                struct S1 **l_215 = (void*)0;
                if ((((int16_t)((uint16_t)p_59 / (uint16_t)(((uint16_t)((*l_185) = p_59) % (uint16_t)(g_114 = (((uint32_t)1U + (uint32_t)__builtin_parity(p_58)) & 4294967295U))) ^ ((uint32_t)((*l_163) = p_58) - (uint32_t)0))) << (int16_t)1) ^ 0U))
                { 
                    int16_t l_192 = (-2);
                    if (((int16_t)l_192 << (int16_t)(g_94 & (0U >= ((*l_163) = (func_78(l_193) >= p_59))))))
                    { 
                        struct S0 l_194 = {0x28449A31,255U,1U,0xCF4DCFDA};
                        l_164 = ((*l_163) = l_192);
                        l_194 = l_194;
                        (*l_163) = p_58;
                        (*g_123) = (void*)0;
                    }
                    else
                    { 
                        (*l_163) = p_58;
                    }
                }
                else
                { 
                    struct S0 *l_206 = &g_149;
                    if (((int16_t)((*g_123) == l_197) + (int16_t)func_78(func_62(&g_4, l_176, (*g_123)))))
                    { 
                        int32_t l_199 = 0x61DA5A7F;
                        int16_t *l_200 = &g_44.f0;
                        struct S0 *l_202 = &g_149;
                        (*l_163) = (l_199 & ((*l_200) = g_96));
                        (*l_202) = l_201;
                        (*g_123) = (*g_123);
                    }
                    else
                    { 
                        struct S1 **l_203 = &l_168;
                        (*g_123) = func_71(l_197);
                        
                        assert (g_124 == &g_96 || g_124 == &g_81);
                        (*l_203) = &g_106;
                        
                        assert (l_168 == &g_106);
                    }
                    
                    assert (g_124 == &g_96 || g_124 == &g_81 || g_124 == 0);
                    assert (l_168 == &g_106 || l_168 == &g_167);
                    for (g_149.f1 = (-3); (g_149.f1 == 25); g_149.f1 += 7)
                    { 
                        struct S0 **l_207 = &l_206;
                        (*l_207) = l_206;
                        (*l_163) = ((uint32_t)4294967289U + (uint32_t)(((uint16_t)(l_214 >= ((void*)0 != l_215)) << (uint16_t)(*l_197)) | (l_216 = g_4)));
                        (*l_197) = 0x4EF15C95;
                    }
                    return (*l_197);
                }
                (*l_168) = (*g_105);
            }
        }
        else
        { 
            struct S0 *l_218 = &g_149;
            struct S0 **l_217 = &l_218;
            int32_t l_235 = 8;
            uint32_t *l_253 = &g_56;
            (*g_123) = (*g_123);
            (*l_217) = &l_201;
            
            assert (l_218 == &l_201);
            if (((void*)0 != &g_149))
            { 
                int32_t l_219 = 0;
                uint32_t l_228 = 0x248DD3C9;
                union U3 *l_240 = &g_142;
                l_219 = (*l_163);
                if (p_58)
                { 
                    int32_t l_225 = 0x7C0604E3;
                    int16_t *l_226 = &g_94;
                    uint16_t *l_227 = &l_201.f2;
                    uint8_t *l_230 = (void*)0;
                    uint8_t **l_229 = &l_230;
                    if ((0xEB92 && ((uint16_t)((*l_227) = ((int16_t)((*l_226) = (g_125 ^ (((*l_163) = (((g_114 | (g_81 != (p_59 && p_59))) >= g_96) == (-(int16_t)l_225))) == l_164))) * (int16_t)l_219)) >> (uint16_t)5)))
                    { 
                        uint8_t ***l_231 = &l_229;
                        (*l_163) = (0x8B09 & l_228);
                        (*g_123) = (*g_123);
                        (*l_217) = &g_149;
                        
                        assert (l_218 == &g_149);
                        (*l_231) = l_229;
                    }
                    else
                    { 
                        (*l_163) = p_58;
                        l_164 = ((int16_t)g_167.f2 << (int16_t)15);
                    }
                    
                    assert (l_218 == &l_201 || l_218 == &g_149);
                    (*l_163) = (!0xFA803EE8);
                    (*g_123) = (*g_123);
                }
                else
                { 
                    (*g_123) = (void*)0;
                    (*l_163) = l_235;
                    for (l_159 = (-3); (l_159 == 3); l_159 += 1)
                    { 
                        int16_t *l_241 = &g_83;
                        (*l_163) = ((int16_t)((*l_241) = (p_58 ^ ((func_78(l_240) | (g_128 = g_149.f0)) < p_59))) << (int16_t)6);
                    }
                }
                
                assert (l_218 == &l_201 || l_218 == &g_149);
                for (l_235 = 0; (l_235 != 0); l_235 += 1)
                { 
                    (*g_123) = l_244;
                    
                    assert (g_124 == &g_125);
                    for (p_58 = 0; (p_58 == 15); p_58 += 1)
                    { 
                        uint16_t ***l_249 = &g_247;
                        (*l_249) = g_247;
                        if ((*g_124))
                            continue;
                    }
                }
                
                assert (g_124 == &g_125 || g_124 == 0);
                (*l_244) = ((void*)0 != l_240);
            }
            else
            { 
                (*l_218) = l_250;
                (*l_244) = p_59;
            }
            
            assert (g_124 == &g_125 || g_124 == 0);
            assert (l_218 == &l_201 || l_218 == &g_149);
            (*l_163) = (__builtin_popcount(((uint16_t)(((0x374556D8 | ((*l_253) = (*l_244))) == ((!p_59) >= (*g_248))) <= (l_255 == &g_154)) + (uint16_t)((int32_t)(((*g_153) == (void*)0) | l_258) / (int32_t)0xAFE74C3F))) == g_149.f0);
        }
        
        assert (g_124 == &g_125 || g_124 == 0);
    }
    else
    { 
        uint8_t *l_262 = &l_130.f2;
        union U2 *l_270 = &g_271;
        union U2 **l_269 = &l_270;
        for (l_130.f2 = (-1); (l_130.f2 < 28); l_130.f2 += 7)
        { 
            uint16_t l_274 = 0x7058;
            int32_t l_275 = (-4);
            l_275 = (((**g_247) = (g_149.f3 >= p_59)) & (~(((*g_153) = func_62(l_262, ((g_114 >= ((int16_t)(((int16_t)((uint32_t)(g_56 = (p_58 | (l_269 != &l_270))) - (uint32_t)((int32_t)((__builtin_popcountl(l_274) >= g_149.f1) != g_4) - (int32_t)p_58)) << (int16_t)p_58) == (-9)) + (int16_t)0x4B7D)) <= p_59), (*g_123))) != (void*)0)));
            
            assert (g_154 == 0);
        }
    }
    
    assert (g_124 == &g_96 || g_124 == &l_159 || g_124 == &g_125 || g_124 == 0);
    return (*l_163);
    
    
}




inline static union U3 * func_62(uint8_t * p_63, int32_t  p_64, int32_t * p_65)
{ 
    union U3 *l_160 = (void*)0;
    return l_160;
    
    
}




static uint8_t * func_66(uint32_t * p_67, struct S1  p_68, struct S1  p_69, struct S1  p_70)
{ 
    union U3 *l_136 = &g_44;
    int32_t *l_145 = &g_81;
    struct S0 *l_148 = &g_149;
    for (g_128 = 20; (g_128 > 29); g_128 += 6)
    { 
        uint32_t *l_134 = &g_96;
        uint32_t **l_133 = &l_134;
        uint32_t ***l_135 = &l_133;
        int16_t *l_137 = &g_94;
        int16_t *l_139 = &g_83;
        int16_t **l_138 = &l_139;
        union U3 *l_141 = &g_142;
        union U3 *l_143 = (void*)0;
        (*l_135) = l_133;
        if ((func_78(l_136) || ((*l_137) = ((0x4167AD25 < ((*l_134) = (*p_67))) <= (l_137 == ((*l_138) = &g_83))))))
        { 
            union U3 **l_140 = &l_136;
            int32_t *l_144 = &g_125;
            (*g_123) = p_67;
            
            assert (g_124 == &g_56 || g_124 == &g_96);
            (*g_123) = l_134;
            
            assert (g_124 == &g_96);
            l_143 = (l_141 = ((*l_140) = &g_44));
            
            assert (l_141 == &g_44);
            assert (l_143 == &g_44);
            (*g_123) = l_144;
            
            assert (g_124 == &g_125);
        }
        else
        { 
            (**g_123) = (**g_123);
            (*g_123) = l_145;
            
            assert (g_124 == &g_81);
            p_68 = p_68;
        }
        
        assert (g_124 == &g_81 || g_124 == &g_125);
        assert (l_141 == &g_142 || l_141 == &g_44);
        assert (l_143 == 0 || l_143 == &g_44);
    }
    for (g_120 = 0; (g_120 >= 12); g_120 += 1)
    { 
        struct S0 **l_150 = &l_148;
        int32_t *l_151 = &g_149.f3;
        if ((*l_145))
            break;
        (*l_150) = l_148;
        (*l_151) = ((**g_123) = __builtin_ffs((*g_124)));
        (*g_123) = l_145;
        
        assert (g_124 == &g_81);
    }
    if ((~(((((g_128 >= g_106.f1) ^ (0xB652 == ((void*)0 == g_153))) == 0xBCDA42CE) < 0x563F1C15) == (**g_123))))
    { 
        (*g_123) = func_71(func_71(l_145));
        
        assert (g_124 == &g_96 || g_124 == &g_81);
        (**g_123) = 0x4E3A6584;
    }
    else
    { 
        int16_t l_155 = 0x0366;
        int16_t *l_156 = &g_83;
        int32_t *l_157 = &g_149.f3;
        (*l_157) = ((*l_145) = (((*l_156) = l_155) < g_96));
    }
    (*l_145) = __builtin_ctzl(p_70.f1);
    return &g_4;
    
    
}




inline static uint32_t * func_71(uint32_t * p_72)
{ 
    uint32_t l_93 = 3U;
    uint32_t *l_95 = &g_96;
    int16_t *l_97 = (void*)0;
    int32_t l_98 = 0x40743585;
    int32_t *l_104 = &l_98;
    struct S1 l_108 = {0xBFC796D6,4294967294U,1U,3U};
    union U3 *l_110 = &g_44;
    union U3 **l_109 = &l_110;
    uint16_t *l_113 = &g_114;
    uint16_t *l_119 = &g_120;
    uint16_t *l_126 = (void*)0;
    uint16_t *l_127 = &g_128;
    if ((((l_98 = ((int32_t)((0x3A4B <= ((int32_t)func_78(&g_44) / (int32_t)(g_56 && ((*l_95) = ((int16_t)((uint16_t)((int16_t)((int16_t)0xB582 >> (int16_t)g_44.f0) - (int16_t)l_93) - (uint16_t)g_94) + (int16_t)l_93))))) <= l_93) + (int32_t)l_93)) != (-7)) & 0x37D796E9))
    { 
        int32_t *l_99 = &g_81;
        (*l_99) = __builtin_parity((*p_72));
        l_99 = (void*)0;
        
        assert (l_99 == 0);
    }
    else
    { 
        return p_72;
        
        
    }
    if ((6 | (l_97 != &g_83)))
    { 
        union U2 *l_100 = (void*)0;
        union U2 **l_101 = &l_100;
        int32_t *l_102 = &l_98;
        int32_t **l_103 = &l_102;
        (*l_101) = l_100;
        (*l_102) = 0xBA242739;
        (*l_103) = &g_81;
        
        assert (l_102 == &g_81);
        l_104 = &g_81;
        
        assert (l_104 == &g_81);
    }
    else
    { 
        struct S1 **l_107 = &g_105;
        (*l_107) = g_105;
        (*g_105) = l_108;
    }
    
    assert (l_104 == &l_98 || l_104 == &g_81);
    (*l_109) = &g_44;
    (*l_104) = ((int16_t)((((*l_113) = func_78((*l_109))) && g_106.f3) == ((int16_t)((uint16_t)((*l_119) = 65535U) * (uint16_t)(((int16_t)g_106.f2 % (int16_t)0x9069) < ((*l_127) = (g_123 == (void*)0)))) >> (int16_t)g_94)) % (int16_t)0x0F61);
    return &g_96;
    
    
}




inline static int32_t  func_78(union U3 * p_79)
{ 
    int32_t *l_80 = &g_81;
    int16_t *l_82 = &g_83;
    int32_t **l_84 = &l_80;
    l_80 = l_80;
    (*l_80) = (g_81 && ((*l_82) = g_56));
    (*l_84) = l_80;
    return g_56;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_167.f1, "g_167.f1", print_hash_value);
    transparent_crc(g_167.f2, "g_167.f2", print_hash_value);
    transparent_crc(g_167.f3, "g_167.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



