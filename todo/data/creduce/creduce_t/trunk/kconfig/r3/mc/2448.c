


#define NO_LONGLONG



static long __undefined;


struct S0 {
   volatile signed f0 : 26;
   signed f1 : 7;
   const volatile unsigned f2 : 13;
   int32_t  f3;
   volatile signed f4 : 22;
   int16_t  f5;
   unsigned f6 : 3;
   volatile int32_t  f7;
   volatile signed f8 : 18;
};


static int32_t g_12 = 0x9F6D4A0D;
static struct S0 g_44 = {7231,-6,50,0,79,0xC75D,0,0x08BBD188,-275};
static struct S0 *g_43 = &g_44;
static int16_t g_71 = 0x10A7;
static uint32_t g_90 = 0U;
static uint16_t g_111 = 0x0D3B;
static int32_t g_114 = 0;
static int32_t g_121 = 0xF43C7198;
static int16_t g_135 = 0xB76A;
static uint64_t g_138 = 7U;
static struct S0 ***g_158 = (void*)0;
static int16_t g_162 = 0x6E8D;
static uint32_t g_181 = 0xF08C6B94;
static int32_t *g_205 = &g_114;
static int32_t **g_204 = &g_205;
static uint16_t g_226 = 0xFBE3;
static uint16_t g_228 = 0x2FA3;
static struct S0 ****g_256 = &g_158;



inline static int32_t  func_30(void);
static struct S0 * func_31(uint16_t  p_32, uint16_t  p_33);
inline static const struct S0 * func_35(struct S0 * p_36, uint16_t  p_37, struct S0 * p_38);
static struct S0 * func_39(struct S0 * p_40, struct S0 * p_41, int16_t  p_42);
inline static struct S0 * func_45(struct S0 * p_46);
inline static struct S0 * func_47(struct S0 * p_48);
inline static struct S0 * func_49(struct S0 * p_50, struct S0 * p_51, const int32_t  p_52, uint32_t  p_53, uint32_t  p_54);
static struct S0 * func_55(struct S0 * p_56);
static int32_t  func_59(struct S0 * p_60, int32_t  p_61);
inline static struct S0 * func_62(const uint32_t  p_63, uint32_t  p_64, struct S0 * p_65);





inline static int32_t  func_30(void)
{ 
    uint32_t l_34 = 4294967295U;
    struct S0 **l_245 = (void*)0;
    struct S0 **l_246 = (void*)0;
    struct S0 **l_247 = &g_43;
    int32_t *l_248 = &g_114;
    (*l_247) = func_31(g_12, l_34);
    (*g_204) = l_248;
    for (g_111 = 0; (g_111 == 40); g_111 += 1)
    { 
        int32_t *l_251 = (void*)0;
        (*g_204) = l_251;
        for (g_44.f5 = 21; (g_44.f5 >= (-3)); g_44.f5 -= 9)
        { 
            (*l_248) = (g_90 <= 0x507154B7);
        }
        if ((*l_248))
            continue;
    }
    if ((*l_248))
    { 
        int16_t l_254 = (-7);
        int32_t *l_255 = &g_121;
        (*l_248) = l_254;
        (*l_248) = l_254;
        (*g_204) = l_255;
        g_43 = (void*)0;
    }
    else
    { 
        struct S0 *****l_257 = (void*)0;
        struct S0 *****l_258 = (void*)0;
        struct S0 ****l_260 = &g_158;
        struct S0 *****l_259 = &l_260;
        (*l_259) = (g_256 = &g_158);
    }
    return (*l_248);
}




static struct S0 * func_31(uint16_t  p_32, uint16_t  p_33)
{ 
    struct S0 ** const l_186 = (void*)0;
    const int32_t l_187 = 0x80E7157E;
    const int32_t **l_241 = (void*)0;
    const int32_t *l_243 = &g_114;
    const int32_t **l_242 = &l_243;
    struct S0 *l_244 = &g_44;
    if (p_32)
    { 
        int16_t l_188 = 0x8A79;
        const struct S0 *l_233 = &g_44;
        const struct S0 **l_232 = &l_233;
        (*l_232) = func_35(func_39(g_43, func_45(func_47(func_49(((p_32 >= __builtin_ffsll(p_33)) , func_55(&g_44)), ((__builtin_ctz(p_33) < ((uint16_t)(((l_186 != l_186) >= l_187) ^ p_32) >> (uint16_t)l_188)) , (void*)0), g_162, l_188, l_187))), p_32), p_32, g_43);
        for (g_162 = 0; (g_162 >= 15); g_162 += 2)
        { 
            int32_t *l_236 = &g_44.f3;
            uint32_t *l_237 = (void*)0;
            (*g_204) = l_236;
            (*l_236) = (((g_44.f6 = g_44.f1) | p_33) & 7);
        }
    }
    else
    { 
        (*g_204) = (*g_204);
    }
    for (g_111 = (-1); (g_111 == 40); g_111 += 1)
    { 
        struct S0 *l_240 = &g_44;
        return l_240;
    }
    (*l_242) = &l_187;
    return l_244;
}




inline static const struct S0 * func_35(struct S0 * p_36, uint16_t  p_37, struct S0 * p_38)
{ 
    uint16_t *l_220 = (void*)0;
    uint16_t *l_221 = &g_111;
    int32_t l_222 = 9;
    uint16_t *l_225 = &g_226;
    uint16_t *l_227 = &g_228;
    int32_t *l_229 = (void*)0;
    int32_t *l_230 = (void*)0;
    int32_t *l_231 = &l_222;
    (*l_231) = ((uint32_t)(((*l_221) = __builtin_ctzll(g_44.f3)) != ((*l_227) = ((*l_225) = (((l_222 || l_222) , p_37) || ((uint16_t)((void*)0 != &g_181) >> (uint16_t)6))))) - (uint32_t)l_222);
    (*g_204) = &l_222;
    return p_36;
}




static struct S0 * func_39(struct S0 * p_40, struct S0 * p_41, int16_t  p_42)
{ 
    struct S0 *l_217 = &g_44;
    return l_217;
}




inline static struct S0 * func_45(struct S0 * p_46)
{ 
    if ((g_114 == (&g_181 != (void*)0)))
    { 
        return p_46;
    }
    else
    { 
        struct S0 *l_216 = &g_44;
        return l_216;
    }
}




inline static struct S0 * func_47(struct S0 * p_48)
{ 
    struct S0 **l_200 = &g_43;
    struct S0 *l_202 = &g_44;
    struct S0 **l_201 = &l_202;
    int32_t l_203 = 0;
    g_44.f0 = __builtin_clzl(g_111);
    l_201 = l_200;
    if (l_203)
    { 
        int32_t ***l_206 = &g_204;
        (*l_206) = g_204;
        for (g_71 = 5; (g_71 == (-17)); g_71 -= 1)
        { 
            int32_t *l_209 = &g_114;
            (*g_204) = l_209;
        }
        (*g_204) = (**l_206);
    }
    else
    { 
        uint16_t *l_213 = &g_111;
        const int32_t l_214 = (-1);
        l_203 = func_59((*l_200), (!((void*)0 == &g_158)));
        (**g_204) = (((uint16_t)g_44.f4 + (uint16_t)(((*l_213) = g_181) > l_214)) == (-10));
    }
    (*g_204) = ((~g_138) , &l_203);
    return p_48;
}




inline static struct S0 * func_49(struct S0 * p_50, struct S0 * p_51, const int32_t  p_52, uint32_t  p_53, uint32_t  p_54)
{ 
    int32_t *l_189 = &g_114;
    int32_t **l_190 = &l_189;
    const int32_t *l_192 = (void*)0;
    const int32_t **l_191 = &l_192;
    const int32_t *l_194 = &g_12;
    const int32_t **l_193 = &l_194;
    (*l_190) = l_189;
    (*l_193) = ((*l_191) = (*l_190));
    for (g_111 = 0; (g_111 <= 5); g_111 += 1)
    { 
        uint32_t *l_199 = &g_90;
        (*l_193) = (*l_191);
        (*l_189) = ((int32_t)g_44.f7 - (int32_t)((*l_199) = __builtin_clzll((p_52 ^ g_162))));
    }
    return p_51;
}




static struct S0 * func_55(struct S0 * p_56)
{ 
    uint32_t l_69 = 0x5D01CD43;
    int32_t *l_156 = &g_114;
    uint16_t * const l_170 = &g_111;
    uint16_t * const *l_169 = &l_170;
    for (g_44.f5 = 0; (g_44.f5 < 0); ++g_44.f5)
    { 
        int16_t *l_70 = &g_71;
        int32_t l_73 = 0xB27067D5;
        int32_t *l_87 = (void*)0;
        int32_t *l_88 = &g_12;
        uint32_t *l_89 = &g_90;
        int32_t **l_157 = &l_88;
        struct S0 ****l_159 = &g_158;
        (*l_88) = func_59(func_62(((int16_t)(~(((*l_70) = l_69) == (((*l_89) = ((~l_73) || ((int32_t)((int16_t)(((0x50EB ^ ((*p_56) , l_73)) <= (((uint32_t)(-(int16_t)((int16_t)(((*l_88) = (((l_73 | ((uint32_t)((__builtin_clzl(l_69) < (((int16_t)3 >> (int16_t)l_73) & 3)) <= g_44.f1) % (uint32_t)l_73)) ^ 7U) | g_44.f3)) <= l_69) << (int16_t)l_69)) + (uint32_t)0) , g_12)) | l_69) << (int16_t)9) - (int32_t)(-7)))) && g_44.f2))) - (int16_t)g_44.f5), g_44.f3, p_56), g_44.f6);
        (*l_157) = ((*g_43) , l_156);
        (*l_159) = g_158;
    }
    if ((func_59(func_62(((((*l_156) = (*l_156)) < (((int32_t)g_135 + (int32_t)0xC77404BF) < (g_12 , 0x22B7714D))) , __builtin_ffs((__builtin_popcountl(g_162) , (*l_156)))), g_71, p_56), l_69) && 4294967295U))
    { 
        if ((*l_156))
        { 
            struct S0 *l_168 = (void*)0;
            for (l_69 = 13; (l_69 < 60); l_69 += 1)
            { 
                int32_t *l_165 = &g_12;
                l_156 = l_165;
            }
            for (g_121 = 0; (g_121 == 3); g_121 += 7)
            { 
                return l_168;
            }
            return l_168;
        }
        else
        { 
            return &g_44;
        }
    }
    else
    { 
        uint16_t * const **l_171 = &l_169;
        const int32_t l_182 = (-1);
        (*l_171) = l_169;
        for (g_44.f5 = 0; (g_44.f5 <= (-12)); g_44.f5 -= 1)
        { 
            int16_t l_179 = (-1);
            uint32_t *l_180 = &g_181;
            uint32_t *l_183 = &g_90;
            (*l_156) = __builtin_popcount(((*l_183) = ((*l_156) > ((g_135 < (~((int16_t)(g_44.f3 > ((*l_170) = (g_162 && ((uint32_t)(((g_44.f5 > (g_135 , __builtin_clz(l_179))) <= __builtin_clzl(((*l_180) = __builtin_parityl((*l_156))))) != 0xA996) + (uint32_t)0U)))) >> (int16_t)6))) < l_182))));
            (*l_156) = g_138;
            return &g_44;
        }
    }
    return p_56;
}




static int32_t  func_59(struct S0 * p_60, int32_t  p_61)
{ 
    uint32_t l_140 = 0U;
    int32_t *l_141 = (void*)0;
    int32_t *l_142 = &g_121;
    int32_t **l_143 = &l_142;
    int16_t l_150 = (-1);
    int32_t *l_151 = &g_44.f3;
    struct S0 *l_153 = &g_44;
    struct S0 **l_152 = &l_153;
    (*l_142) = ((g_135 , l_140) ^ __builtin_parityl(l_140));
    (*l_143) = ((*g_43) , l_141);
    (*l_152) = func_62(p_61, (((-(int32_t)((uint32_t)(~(-1)) - (uint32_t)(((*l_151) = (p_61 & ((uint32_t)g_44.f8 - (uint32_t)(l_150 != 0x85C1)))) != (g_12 = (p_61 < p_61))))) , ((&p_61 == (void*)0) > 0x6E85BCF7)) | p_61), g_43);
    (*l_151) = (((uint16_t)(p_61 == g_44.f0) << (uint16_t)1) >= p_61);
    return g_44.f2;
}




inline static struct S0 * func_62(const uint32_t  p_63, uint32_t  p_64, struct S0 * p_65)
{ 
    int32_t * const l_95 = &g_12;
    int32_t *l_122 = &g_12;
    int32_t **l_123 = (void*)0;
    int32_t **l_124 = (void*)0;
    int32_t **l_125 = &l_122;
    int32_t *l_126 = &g_44.f3;
    for (g_44.f3 = 0; (g_44.f3 >= (-19)); g_44.f3 -= 1)
    { 
        uint32_t l_97 = 4294967295U;
        struct S0 *l_100 = &g_44;
        uint16_t *l_110 = &g_111;
        int32_t *l_112 = (void*)0;
        int32_t *l_113 = &g_114;
        const uint16_t l_115 = 0x2F9D;
        int32_t *l_116 = (void*)0;
        int32_t *l_117 = (void*)0;
        int32_t *l_118 = (void*)0;
        int32_t *l_119 = (void*)0;
        int32_t *l_120 = &g_121;
        (*l_95) = ((uint16_t)p_64 << (uint16_t)((g_44.f0 , l_95) == ((~p_64) , l_95)));
        if (l_97)
            continue;
        (*l_120) = ((((((*l_113) = ((((uint32_t)0xBA4BDACA - (uint32_t)((void*)0 == l_100)) == (g_44.f4 <= ((int32_t)((*l_95) = ((uint16_t)l_97 << (uint16_t)10)) % (int32_t)(-(uint32_t)(((((-(uint32_t)p_63) | ((*l_110) = ((uint16_t)(~g_44.f1) << (uint16_t)g_44.f1))) <= (p_63 > p_63)) , g_44.f1) , 4294967295U))))) , 4)) , (*l_95)) ^ g_44.f3) >= l_115) , 1);
    }
    l_126 = ((*l_125) = l_122);
    for (g_44.f3 = 0; (g_44.f3 < 8); g_44.f3 += 1)
    { 
        int32_t l_132 = 1;
        uint32_t l_136 = 6U;
        uint64_t *l_137 = &g_138;
        int32_t *l_139 = &g_114;
        (*l_126) = __builtin_ctzll(((*l_137) = (-(uint16_t)(((((((uint16_t)g_44.f7 >> (uint16_t)(((void*)0 != g_43) ^ l_132)) ^ (((*l_95) = p_63) | p_63)) > ((int16_t)(g_121 , ((__builtin_popcountl((g_135 = 0x16E9852B)) , 8) >= p_63)) << (int16_t)2)) | g_71) , l_136) <= p_64))));
        if (g_44.f7)
            break;
        (*l_125) = l_139;
    }
    return p_65;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_30();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_44.f1, "g_44.f1", print_hash_value);
    transparent_crc(g_44.f2, "g_44.f2", print_hash_value);
    transparent_crc(g_44.f3, "g_44.f3", print_hash_value);
    transparent_crc(g_44.f4, "g_44.f4", print_hash_value);
    transparent_crc(g_44.f5, "g_44.f5", print_hash_value);
    transparent_crc(g_44.f6, "g_44.f6", print_hash_value);
    transparent_crc(g_44.f7, "g_44.f7", print_hash_value);
    transparent_crc(g_44.f8, "g_44.f8", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



