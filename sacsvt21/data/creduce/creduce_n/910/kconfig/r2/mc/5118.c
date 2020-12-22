


#define NO_LONGLONG



static long __undefined;


struct S0 {
   signed f0 : 18;
   unsigned f1 : 31;
   unsigned f2 : 5;
   unsigned f3 : 29;
   volatile signed f4 : 24;
   unsigned f5 : 15;
   signed f6 : 17;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 25;
   signed f1 : 29;
};
#pragma pack(pop)

struct S2 {
   uint16_t  f0;
   volatile uint32_t  f1;
   uint32_t  f2;
   volatile struct S1  f3;
   uint16_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   volatile struct S1  f0;
   volatile uint32_t  f1;
   volatile int32_t  f2;
   int8_t  f3;
   int8_t  f4;
};
#pragma pack(pop)


static volatile int8_t g_4 = 8;
static uint32_t g_30 = 1U;
static int8_t g_67 = 0x45;
static int32_t g_68 = 0xC53D1739;
static int32_t g_74 = 0;
static int8_t g_81 = 0x6D;
static struct S1 g_87 = {1882,-22920};
static int32_t g_142 = (-1);
static uint16_t g_167 = 1U;
static uint8_t g_168 = 0x96;
static int32_t g_186 = (-8);
static uint32_t g_249 = 0U;
static int16_t g_250 = 0x2BBB;
static uint32_t g_349 = 7U;
static int16_t g_371 = 0xFBF1;
static uint8_t g_397 = 248U;
static int16_t g_473 = 1;
static struct S2 g_482 = {9U,0xC93AB68C,1U,{3624,17624},6U};
static struct S3 g_498 = {{-1103,18755},0x1C2C7864,6,-4,-1};
static volatile struct S0 g_499 = {294,11897,4,1438,-15,65,-44};
static volatile struct S2 g_522 = {65533U,0xD2243F39,0xCFA197C6,{-1870,18348},0xA434};
static struct S0 g_527 = {479,5451,0,11227,2258,30,128};
static struct S3 g_532 = {{3030,17636},0x669858B9,0x4ABB65AF,-1,0x02};
static struct S3 g_533 = {{-5355,-10867},0x975298B4,0x3347DF2B,0x11,0x02};
static struct S0 g_535 = {-478,7272,1,2730,-581,175,-110};
static struct S2 g_541 = {65530U,4294967295U,0xEE6B0D0A,{-5756,-2181},65535U};



inline static uint16_t  func_1(void);
static int32_t  func_12(uint32_t  p_13);
inline static uint8_t  func_21(uint8_t  p_22, uint32_t  p_23);
inline static uint16_t  func_24(int32_t  p_25, int32_t  p_26, int32_t  p_27, int16_t  p_28);
static int16_t  func_38(struct S1  p_39, int16_t  p_40, int32_t  p_41, uint32_t  p_42, struct S1  p_43);
static uint16_t  func_47(uint8_t  p_48, uint16_t  p_49);
inline static int16_t  func_52(struct S1  p_53, struct S1  p_54, int32_t  p_55, struct S1  p_56);
static uint32_t  func_57(int32_t  p_58, int32_t  p_59, uint8_t  p_60, uint16_t  p_61);
static struct S1  func_88(struct S1  p_89, uint32_t  p_90, int32_t  p_91, int32_t  p_92);
static struct S1  func_93(uint32_t  p_94, uint16_t  p_95, int8_t  p_96, uint32_t  p_97, uint32_t  p_98);





inline static uint16_t  func_1(void)
{ 
    uint32_t l_9 = 0x74B28ED4;
    struct S1 l_477 = {-1208,-16591};
    int16_t l_488 = 0;
    uint32_t l_493 = 4294967289U;
    int8_t l_497 = 0;
    int8_t l_528 = 0x5D;
    int32_t l_546 = 0x788E1E90;
    uint16_t l_549 = 0xDA61;
    int32_t l_550 = 0x52D8BE12;
    struct S1 l_560 = {-4905,-769};
    if (((uint8_t)g_4 << (uint8_t)6))
    { 
        int32_t l_14 = 0xD8143836;
        uint16_t l_476 = 65533U;
        uint8_t l_486 = 0U;
        int32_t l_487 = 1;
        struct S1 l_496 = {3636,18496};
        uint32_t l_531 = 0U;
        l_476 = (((int8_t)((int8_t)l_9 % (int8_t)g_4) + (int8_t)l_9) & ((int16_t)((func_12(l_14) && (1U < ((((l_9 , ((((l_9 >= ((uint16_t)(((g_371 >= l_14) <= l_14) <= l_9) - (uint16_t)l_14)) <= l_9) < g_349) | l_14)) , 4294967291U) >= 4) & l_14))) , 0xE55C) >> (int16_t)8));
        if (l_14)
        { 
            l_477 = g_87;
            return g_397;
        }
        else
        { 
            int16_t l_485 = 0;
            uint8_t l_503 = 5U;
            struct S1 l_515 = {-3889,-17352};
            l_488 = (((uint32_t)(l_487 = ((g_67 = ((int16_t)(g_482 , ((l_14 >= (((0U == (((uint32_t)(0xD722CDDA | (5U & ((1 && (((l_14 < g_397) , l_485) <= 0x2631EB68)) <= g_67))) + (uint32_t)l_477.f0) == g_482.f2)) ^ 0x99B3F84F) != g_87.f1)) ^ g_482.f3.f1)) << (int16_t)l_486)) & g_249)) % (uint32_t)0xF6C83595) == g_349);
            l_477.f0 = ((uint8_t)((g_167 , (((uint16_t)l_493 << (uint16_t)0) , l_476)) | l_477.f0) % (uint8_t)((g_168 , ((int16_t)(func_88(func_88((l_496 , func_88(l_477, ((l_486 && l_485) > l_488), g_67, g_482.f3.f1)), g_68, l_485, g_142), g_67, g_74, l_497) , g_482.f0) >> (int16_t)15)) & g_142));
            if ((l_503 = (g_87.f1 = (g_186 || ((l_496.f1 = ((((g_498 , (0xD9 || l_486)) , g_499) , (((((g_142 != (!(g_482 , (l_477.f0 = 0x1C2D)))) >= ((int16_t)(((g_81 & 1) , 0x908C5E04) , 0xEE59) << (int16_t)l_485)) | g_67) & 0) ^ 0x8A1D)) < l_477.f1)) | l_485)))))
            { 
                uint32_t l_516 = 4294967290U;
                g_87.f0 = ((g_498.f0 , ((uint16_t)((0 || ((uint16_t)((-(uint8_t)((int8_t)((((((((uint16_t)(0x88 <= (((int8_t)(l_515 , l_516) % (int8_t)((int8_t)(((9U != (~g_87.f0)) , (1U ^ (((int8_t)0x61 % (int8_t)l_485) ^ g_482.f3.f0))) != 4294967290U) + (int8_t)0xC5)) && 0x6D95)) % (uint16_t)l_485) ^ 0x54) && g_4) | g_482.f4) != l_487) <= g_74) <= g_167) + (int8_t)0x47)) <= l_477.f1) >> (uint16_t)g_473)) , g_482.f2) << (uint16_t)l_515.f1)) ^ g_81);
                return g_498.f3;
            }
            else
            { 
                g_482 = g_522;
            }
        }
        l_496.f1 = ((((uint8_t)((uint16_t)((g_527 , g_522.f3.f0) & (g_527.f5 & ((l_496 , 0U) != l_528))) % (uint16_t)g_527.f0) << (uint8_t)0) && (((l_477.f0 = (l_477.f1 = ((int8_t)((l_477.f1 && (((l_488 && l_14) ^ g_498.f4) != l_486)) != g_482.f4) >> (int8_t)l_488))) || l_531) || l_531)) != (-1));
        g_533 = g_532;
    }
    else
    { 
        uint16_t l_534 = 1U;
        int32_t l_538 = 0x3C8A3295;
        g_527.f6 = l_534;
        g_499 = g_535;
        g_498.f0.f0 = (l_477.f0 = (g_535.f4 >= (((int16_t)(l_538 = (l_477.f1 = l_477.f0)) + (int16_t)l_534) == g_527.f5)));
        for (g_482.f0 = (-21); (g_482.f0 > 59); g_482.f0 += 1)
        { 
            g_541 = g_541;
            return l_538;
        }
    }
    l_546 = ((g_535.f5 = (((g_87.f0 = (((g_527.f3 = ((l_477.f1 = 4294967286U) , ((g_541 , g_250) > (((((l_477.f1 || ((l_528 ^ (((int16_t)l_477.f1 << (int16_t)((g_473 = ((((g_482.f0 = ((int8_t)((l_477.f0 = g_74) && (l_9 & (l_477.f0 = g_527.f2))) >> (int8_t)7)) , g_527.f0) == l_488) , 8)) , l_477.f1)) , g_535.f0)) ^ 0xB8)) ^ 255U) | 0xC7) , l_477.f0) ^ g_498.f3)))) || g_498.f4) <= l_9)) > l_9) > 1)) && l_497);
    l_560.f1 = ((l_546 = (l_477.f1 = (l_477 , g_535.f3))) != ((255U ^ g_482.f3.f0) | ((uint16_t)(l_550 = (l_549 = l_488)) << (uint16_t)((int16_t)(((int16_t)(0x24FC & ((l_9 < l_528) , ((int32_t)((((int8_t)((((-(int16_t)g_541.f2) | l_528) | g_397) < 0x2C27) >> (int8_t)g_186) , l_560) , g_473) + (int32_t)g_249))) - (int16_t)(-1)) , l_560.f0) - (int16_t)7U))));
    g_533 = g_532;
    return g_541.f0;
}




static int32_t  func_12(uint32_t  p_13)
{ 
    uint32_t l_17 = 0x2DB80EBB;
    int8_t l_18 = 1;
    int16_t l_29 = 5;
    int32_t l_31 = 0;
    int32_t l_32 = (-1);
    int32_t l_33 = 0x63EEDA78;
    struct S1 l_44 = {-499,21682};
    int32_t l_365 = (-1);
    int32_t l_366 = 0x2B45DF68;
    l_18 = (((uint16_t)p_13 - (uint16_t)0x0DE5) && l_17);
    g_473 = ((uint8_t)func_21((func_24(((g_30 = (l_29 >= (-1))) , ((((l_33 = (l_32 = (p_13 = ((l_31 = l_18) != 1U)))) > (((int16_t)(((g_30 == ((int16_t)func_38(l_44, ((uint16_t)(l_366 = (l_365 = func_47((((int16_t)func_52(l_44, l_44, (func_57(l_44.f0, l_18, l_44.f0, g_30) > (-1)), l_44) >> (int16_t)l_18) ^ l_29), g_30))) << (uint16_t)l_18), l_17, g_349, l_44) % (int16_t)(-1))) < l_17) > 0x3EAF) << (int16_t)15) == l_29)) <= l_44.f1) , l_17)), g_397, g_397, g_397) && g_167), g_397) << (uint8_t)0);
    return g_397;
}




inline static uint8_t  func_21(uint8_t  p_22, uint32_t  p_23)
{ 
    int32_t l_447 = 0;
    int8_t l_453 = 0;
    struct S1 l_454 = {-5625,-21146};
    int32_t l_472 = 0x4FCF984D;
    l_454 = func_88(g_87, (g_81 , l_447), g_74, (g_186 = (!(0x2B == (((uint8_t)0x30 >> (uint8_t)6) && (p_23 > (((int8_t)(0x53 ^ (l_453 = (-1))) % (int8_t)g_142) || g_371)))))));
    for (l_447 = 0; (l_447 != (-10)); l_447 -= 1)
    { 
        int32_t l_457 = 0;
        int32_t l_471 = 0;
        l_454 = (l_457 , func_88(func_93((l_454 , (l_457 = ((uint16_t)(((uint16_t)((int16_t)g_87.f1 >> (int16_t)13) + (uint16_t)(((uint8_t)((uint16_t)g_87.f0 << (uint16_t)((((!g_371) == ((l_447 , (~(((l_454.f0 = ((-(uint32_t)4294967295U) , 0x494E)) || 0x085E) > p_23))) >= 0xD2)) && p_23) > 65535U)) >> (uint8_t)7) >= g_68)) >= l_447) >> (uint16_t)10))), l_471, l_471, l_447, l_454.f1), p_23, g_87.f1, g_30));
        l_454.f1 = g_87.f0;
    }
    return l_472;
}




inline static uint16_t  func_24(int32_t  p_25, int32_t  p_26, int32_t  p_27, int16_t  p_28)
{ 
    uint8_t l_398 = 1U;
    int32_t l_421 = 0xBB0BCBC0;
    uint32_t l_422 = 6U;
    struct S1 l_424 = {2746,22364};
    int32_t l_444 = 0xCA0DB158;
    p_27 = l_398;
    if ((((int16_t)((~(-(int32_t)((uint32_t)g_397 - (uint32_t)((uint16_t)((!(~((int8_t)((((uint32_t)((1 != (((((g_87.f1 >= ((int8_t)(((l_421 = ((((int16_t)p_27 >> (int16_t)l_398) & ((!(l_398 & ((((((p_28 , (~((((int16_t)0x8904 >> (int16_t)9) && p_26) <= 65527U))) == p_28) && g_186) && 0) <= l_398) ^ 0x58))) <= l_398)) | g_168)) <= 4294967288U) == l_398) << (int8_t)p_27)) < g_81) != 0) == 1U) > g_87.f1)) , p_27) - (uint32_t)0x50D5363C) && p_28) , g_397) << (int8_t)5))) & l_422) % (uint16_t)p_26)))) == g_67) % (int16_t)0xA51E) && p_25))
    { 
        uint16_t l_423 = 0U;
        return l_423;
    }
    else
    { 
        int32_t l_435 = 0x6B522DBA;
        l_424 = l_424;
        for (g_250 = 6; (g_250 == 11); g_250 += 1)
        { 
            uint16_t l_443 = 1U;
            p_27 = 0;
            for (g_67 = 18; (g_67 != (-17)); g_67 -= 1)
            { 
                struct S1 l_436 = {4122,5868};
                l_444 = (((int8_t)(((((int16_t)1 + (int16_t)(((uint8_t)(g_68 && l_435) >> (uint8_t)(l_436.f0 = (((l_436.f1 = ((0x8C != p_27) < (l_436 , g_74))) || ((int16_t)(p_28 = ((uint32_t)1U + (uint32_t)(g_87.f1 = (((uint32_t)l_443 - (uint32_t)g_250) < l_424.f0)))) >> (int16_t)15)) && g_397))) == 249U)) , 0U) && p_27) & g_81) + (int8_t)0x4E) && p_28);
            }
        }
        g_87.f0 = ((-4) | ((uint8_t)p_27 % (uint8_t)(l_424.f1 & l_435)));
    }
    return l_424.f1;
}




static int16_t  func_38(struct S1  p_39, int16_t  p_40, int32_t  p_41, uint32_t  p_42, struct S1  p_43)
{ 
    struct S1 l_367 = {504,10925};
    int32_t l_387 = 0x44119938;
    int32_t l_388 = 0xDF9F6BCF;
    p_43 = l_367;
    l_367.f0 = (-(uint32_t)((uint16_t)g_371 >> (uint16_t)9));
    l_388 = (-(int8_t)((((int16_t)(((g_87 , p_42) ^ ((0x2D | 255U) , (-(int16_t)((3 != (((((l_367.f1 = ((uint16_t)(((-1) <= (((uint8_t)(((int8_t)((((g_81 = ((l_367.f0 , (g_371 = ((l_367.f1 <= ((uint16_t)(((uint16_t)(~(l_387 = (l_367.f0 = p_39.f1))) >> (uint16_t)p_39.f0) , g_349) - (uint16_t)l_367.f1)) ^ 252U))) || 1U)) | 0x17) != p_42) , g_167) << (int8_t)p_39.f1) <= l_367.f1) >> (uint8_t)g_68) & 0x6D)) || l_387) << (uint16_t)p_39.f0)) , l_387) , g_87) , p_40) ^ l_388)) < 0x00)))) != p_41) + (int16_t)l_388) , l_388) , l_387));
    p_43.f1 = ((int8_t)(-1) - (int8_t)(((g_349 = 4294967289U) ^ ((g_87.f1 = p_43.f0) || (((uint16_t)(l_388 > ((((l_387 = p_43.f1) <= (l_367.f0 = (((uint8_t)g_67 >> (uint8_t)(4U || g_142)) , ((g_68 = (l_367.f1 = ((uint32_t)p_39.f1 - (uint32_t)0x4E5148E3))) > p_43.f1)))) || l_388) >= g_250)) % (uint16_t)p_39.f1) >= (-1)))) ^ p_43.f0));
    return g_67;
}




static uint16_t  func_47(uint8_t  p_48, uint16_t  p_49)
{ 
    uint32_t l_71 = 4294967292U;
    int32_t l_255 = 0x2CD189FC;
    uint32_t l_269 = 0x587F00E5;
    struct S1 l_330 = {3725,-3102};
    uint8_t l_363 = 0x27;
    uint8_t l_364 = 0U;
    for (p_48 = 0; (p_48 > 27); p_48 += 1)
    { 
        int32_t l_80 = 0xB35A07F5;
        uint32_t l_82 = 0U;
        int32_t l_86 = 6;
        struct S1 l_253 = {5209,5186};
        uint32_t l_254 = 0x556991D4;
        uint16_t l_292 = 1U;
        uint32_t l_305 = 0x0C997590;
        if (g_30)
            break;
        if ((l_71 , p_49))
        { 
            uint16_t l_77 = 4U;
            int32_t l_83 = 0xD3D8B2F9;
            l_83 = (0xE9 <= (((((0x52E9 > ((((int8_t)0x77 * (int8_t)(((g_74 = 9U) | p_49) <= ((uint16_t)g_67 - (uint16_t)func_57((l_77 = l_71), ((uint8_t)((((g_81 = l_80) <= g_30) <= 0xFC) | g_67) - (uint8_t)0xAE), g_68, g_67)))) & p_48) , l_82)) >= g_67) && g_74) | 7U) == p_49));
            l_255 = ((((int16_t)(l_86 = 0x33F6) - (int16_t)func_52(g_87, func_88(func_93(l_71, p_49, g_68, p_49, ((int8_t)(-6) << (int8_t)6)), g_87.f0, l_82, l_71), g_87.f1, l_253)) , p_49) ^ l_254);
        }
        else
        { 
            uint32_t l_267 = 0x66BC57D9;
            int32_t l_274 = 0x4F9F1FA6;
            for (g_250 = 7; (g_250 != 16); g_250 += 1)
            { 
                uint16_t l_264 = 0x7B80;
                int32_t l_268 = 0x231ABC1F;
                l_253.f1 = ((((((uint8_t)((int8_t)(((int16_t)(l_264 ^ 1) >> (int16_t)(g_67 < ((p_48 != ((l_268 = (l_267 = (((int16_t)(-3) % (int16_t)(p_48 | 0x93BE05BE)) && 0x75))) <= p_48)) & 0x2ADA))) >= l_269) + (int8_t)p_48) + (uint8_t)0x0E) | 0x7C0EDF71) , p_48) | p_48) ^ l_269);
            }
            for (l_269 = (-1); (l_269 >= 4); l_269 += 1)
            { 
                int16_t l_275 = 0x7C4C;
                struct S1 l_280 = {-3002,-7256};
                l_280 = func_93(l_267, (((int8_t)((l_274 = l_255) && (-7)) >> (int8_t)g_249) || l_275), g_81, ((uint8_t)(l_254 ^ (((int16_t)(p_49 || (g_74 == 7U)) << (int16_t)g_87.f0) < 0)) + (uint8_t)g_142), l_269);
            }
        }
        g_87.f0 = (l_253.f1 = (((int16_t)(g_250 = (-(uint16_t)((l_254 && (l_253.f0 = (0x4282 >= 0x696D))) == g_30))) >> (int16_t)((l_255 = (((uint16_t)g_68 << (uint16_t)(((((int16_t)(((((int8_t)l_255 >> (int8_t)(((0x8FDA2760 >= (g_87.f1 = (-1))) , ((uint32_t)0x047D9953 - (uint32_t)p_48)) <= 1)) < g_186) <= g_74) == l_292) << (int16_t)p_49) || 0xEA4EB418) && 0) <= l_71)) , p_49)) && 0x8533)) ^ 6));
        for (l_82 = (-13); (l_82 >= 44); l_82 += 1)
        { 
            uint16_t l_304 = 65532U;
            l_80 = (((0xCE14 | (g_167 = 0xFF0B)) == g_87.f1) ^ (l_255 && g_87.f1));
            g_87.f1 = ((uint16_t)(((g_81 = ((l_80 = (0x1E ^ g_81)) || (((8 ^ (((((int32_t)l_255 - (int32_t)g_68) >= (!(0U == (((((uint8_t)(((int16_t)l_304 >> (int16_t)(0x1E != g_68)) > l_253.f0) << (uint8_t)p_48) & p_48) == l_304) ^ 0x0582)))) < l_304) > l_71)) && l_253.f1) || l_292))) || g_67) != l_305) % (uint16_t)0x8F9C);
            if (g_74)
                continue;
            if (p_49)
                break;
        }
    }
    for (g_168 = 0; (g_168 != 27); g_168 += 3)
    { 
        struct S1 l_308 = {5237,18305};
        int32_t l_344 = 0xA8574855;
        g_68 = g_167;
        g_87 = (l_308 = g_87);
        for (g_186 = (-11); (g_186 == 26); g_186 += 1)
        { 
            uint8_t l_319 = 0xFE;
            g_87.f0 = (-(uint16_t)((uint16_t)((((!((uint16_t)((((uint16_t)65528U % (uint16_t)l_319) != 0) | (((((uint8_t)(p_49 || (((uint16_t)((((int8_t)1 + (int8_t)(l_319 <= (-5))) ^ 4) ^ (9 < 0)) % (uint16_t)p_49) ^ l_319)) << (uint8_t)l_319) , 0x0DF4) > l_308.f0) > 0x0C)) + (uint16_t)g_74)) <= l_319) || 5) != p_48) - (uint16_t)l_269));
            l_308.f0 = 0x453BB767;
        }
        g_87.f0 = ((((0x5DB8D7A7 ^ (((p_49 ^ ((p_49 < 0U) , p_49)) | (l_308.f1 = (l_330 , ((int32_t)((l_308.f0 = ((uint8_t)g_87.f0 >> (uint8_t)(((int8_t)(~((int32_t)(((int8_t)((uint16_t)0x5953 + (uint16_t)(g_250 = 0x1DD7)) >> (int8_t)3) , g_74) - (int32_t)0x34350790)) % (int8_t)(-1)) != g_30))) > g_87.f1) - (int32_t)l_71)))) >= l_344)) && l_344) < p_49) && 0x54);
    }
    for (g_250 = (-9); (g_250 == 18); g_250 += 1)
    { 
        return l_269;
    }
    for (g_67 = (-14); (g_67 > 26); g_67 += 1)
    { 
        int8_t l_362 = (-1);
        l_330 = func_88(g_87, p_49, g_349, ((int8_t)((uint8_t)g_349 + (uint8_t)g_349) - (int8_t)((int32_t)((int32_t)((int8_t)(-1) >> (int8_t)((((((int16_t)(4 & l_362) % (int16_t)(((l_255 = (8 < l_362)) && g_67) | g_67)) || 0) == g_167) , g_249) >= 65534U)) + (int32_t)l_363) + (int32_t)g_87.f0)));
    }
    return l_364;
}




inline static int16_t  func_52(struct S1  p_53, struct S1  p_54, int32_t  p_55, struct S1  p_56)
{ 
    struct S1 l_64 = {-2747,15314};
    l_64 = p_53;
    g_68 = ((((0x6747 != (4294967288U < (g_67 = ((uint16_t)(((((((func_57(g_30, (p_54.f1 >= 0), g_30, g_30) ^ g_30) | 65533U) != p_54.f1) >= 0x75) <= (-1)) >= p_53.f1) != 0xA6B1) << (uint16_t)1)))) == 0U) < g_30) > g_30);
    return l_64.f0;
}




static uint32_t  func_57(int32_t  p_58, int32_t  p_59, uint8_t  p_60, uint16_t  p_61)
{ 
    uint32_t l_62 = 0x167519BA;
    int32_t l_63 = 1;
    l_63 = l_62;
    return p_60;
}




static struct S1  func_88(struct S1  p_89, uint32_t  p_90, int32_t  p_91, int32_t  p_92)
{ 
    int32_t l_231 = 0x14262232;
    uint32_t l_248 = 0x17533681;
    int32_t l_251 = (-1);
    struct S1 l_252 = {-5667,-22265};
    p_91 = (((((uint16_t)l_231 << (uint16_t)12) ^ (((int32_t)((g_186 && 1) , (l_251 = ((uint8_t)(((uint32_t)(((g_250 = (0xB0 >= ((uint16_t)(((g_168 <= ((uint8_t)(g_68 == (((uint16_t)(g_68 < (((uint8_t)0xC0 >> (uint8_t)5) < (g_249 = ((((uint16_t)l_231 << (uint16_t)l_248) , 249U) <= g_142)))) >> (uint16_t)g_67) <= l_248)) << (uint8_t)p_92)) > 0xD9579318) && g_186) - (uint16_t)p_89.f1))) && p_89.f0) & p_89.f1) + (uint32_t)l_231) ^ g_186) >> (uint8_t)1))) + (int32_t)p_89.f1) > g_87.f0)) != g_87.f1) >= 255U);
    return l_252;
}




static struct S1  func_93(uint32_t  p_94, uint16_t  p_95, int8_t  p_96, uint32_t  p_97, uint32_t  p_98)
{ 
    struct S1 l_101 = {147,-13852};
    uint16_t l_109 = 0xB0DE;
    int32_t l_149 = 0;
    struct S1 l_176 = {5652,-18974};
    int8_t l_211 = 4;
    l_101 = g_87;
    if (((((uint16_t)((((~(p_95 && ((3 | 1U) < ((uint8_t)((((((((g_87.f0 , 0x5032) & l_101.f1) <= (((g_81 = l_109) , ((0xC377822E && ((~(p_94 <= g_67)) && g_67)) != g_68)) == l_101.f0)) || g_67) < g_74) <= p_98) <= 0xA371577C) | 0xC2D95366) << (uint8_t)1)))) | 0) < 0xBF4B6F1E) > l_101.f0) % (uint16_t)g_74) > l_101.f1) , l_109))
    { 
        uint32_t l_115 = 0xA911A91D;
        struct S1 l_147 = {5661,1833};
        g_68 = (p_96 , ((uint8_t)((int16_t)((p_95 ^ l_115) ^ (l_115 , (l_101.f1 | l_115))) + (int16_t)((int8_t)(g_81 = (l_115 | (0xECA9 | (p_96 & g_74)))) >> (int8_t)g_87.f1)) >> (uint8_t)g_74));
        if (l_101.f1)
        { 
            uint8_t l_131 = 0xD7;
            int16_t l_148 = (-1);
            int32_t l_150 = 0xC1848BC0;
            l_150 = ((((uint16_t)((((uint16_t)((-(int32_t)(((uint8_t)0x77 - (uint8_t)(g_67 = 0x87)) <= (((int8_t)(((uint16_t)g_87.f1 % (uint16_t)((uint32_t)(0x371A <= ((l_101.f0 = l_131) >= ((((int16_t)(l_147.f1 = (((((int32_t)((int16_t)((((((int16_t)(l_101.f1 = (l_131 & (((uint8_t)(g_142 = p_98) >> (uint8_t)p_96) > ((((((((uint8_t)(((uint8_t)(l_147 , 255U) + (uint8_t)g_30) ^ 7) << (uint8_t)g_68) >= g_30) <= g_68) >= g_68) , p_97) && 0xC6) == 0x1E)))) % (int16_t)l_109) | p_94) , p_95) > g_74) && 0x0A51E9D5) >> (int16_t)l_148) - (int32_t)4294967295U) & 0U) > p_94) > 0x19CE)) - (int16_t)g_87.f0) != l_131) ^ (-1)))) % (uint32_t)g_74)) > l_148) % (int8_t)p_97) > l_149))) || l_109) << (uint16_t)l_131) || 0xF4EC) , p_96) << (uint16_t)9) == g_30) && g_87.f1);
        }
        else
        { 
            uint8_t l_166 = 255U;
            int32_t l_169 = 0x83A99FBD;
            l_101.f0 = ((int32_t)(((p_94 >= 0x1531) , g_30) || g_142) + (int32_t)(((((((((int16_t)((int8_t)((uint8_t)(((g_168 = ((g_30 , ((((((uint16_t)(0x9C9891BA || g_87.f0) >> (uint16_t)1) & ((p_95 >= ((uint16_t)((g_167 = ((((l_166 = ((!(((((uint16_t)(((p_95 == l_147.f0) != g_68) <= p_95) << (uint16_t)p_98) > 0xDDC8) & g_67) == 1U)) && p_98)) < g_81) > g_74) || g_74)) == 0U) + (uint16_t)g_30)) & g_142)) ^ 0xA221) > p_95) <= 4294967295U)) & p_94)) & l_169) >= 0xEF) >> (uint8_t)7) % (int8_t)g_67) >> (int16_t)4) <= p_96) == 1) != p_98) & g_87.f0) != 0xBB) && 4294967289U) != 0x3399));
            l_176.f1 = (((uint8_t)p_96 >> (uint8_t)l_169) , ((uint8_t)((uint16_t)(l_176 , ((uint16_t)((-(uint8_t)((int8_t)g_68 - (int8_t)(~l_166))) == (g_186 = (((uint8_t)(~l_166) - (uint8_t)1U) == ((g_67 || ((((g_67 < 1U) > 0x53B87936) < l_147.f0) != p_97)) , 0xBF8F)))) << (uint16_t)g_87.f1)) % (uint16_t)p_95) - (uint8_t)g_30));
        }
    }
    else
    { 
        struct S1 l_194 = {1659,5901};
        l_176.f1 = 0xBABF467C;
        for (g_81 = 7; (g_81 == 26); g_81 += 6)
        { 
            int32_t l_191 = 0x9B283B4B;
            l_191 = ((int32_t)l_149 % (int32_t)g_168);
            if (p_95)
                continue;
        }
        l_194.f1 = (p_96 > ((l_194 , ((int8_t)(g_167 ^ 0xDCCB) + (int8_t)(((int8_t)((uint16_t)(((uint8_t)255U % (uint8_t)0x32) <= (((255U <= ((int8_t)0 >> (int8_t)6)) & ((((0U < l_194.f1) | g_67) != g_87.f1) < l_194.f0)) <= 0xDBE1DBCC)) >> (uint16_t)7) << (int8_t)0) , g_142))) <= p_98));
    }
    l_101.f0 = ((~(((0U & (((uint32_t)g_87.f1 + (uint32_t)(-(uint8_t)((uint16_t)0U + (uint16_t)((p_98 == (((g_68 , ((0U > ((l_101.f1 = ((l_176.f0 = (0x81 != p_96)) | ((((g_68 = ((l_211 = ((l_176.f1 = (p_98 >= 255U)) <= 0x51)) & g_68)) || g_74) == g_74) || g_87.f0))) == p_94)) && 0)) > 0) <= p_97)) , p_96)))) | l_149)) , p_94) & g_74)) < g_74);
    l_101.f1 = (((p_98 = (((int8_t)((((int8_t)l_211 - (int8_t)((((int16_t)((((int8_t)(p_96 = ((!(((int8_t)(((l_211 <= (l_176.f1 < (g_67 , (((0x7AF27645 <= l_211) && ((int16_t)(l_149 , ((int16_t)(((uint16_t)(((l_149 , g_74) ^ p_94) || g_167) >> (uint16_t)8) <= g_87.f0) + (int16_t)g_30)) + (int16_t)p_97)) > g_168)))) , p_95) != 0x2474) << (int8_t)g_87.f0) >= p_94)) <= g_30)) << (int8_t)4) < 0x11BE) , 0) >> (int16_t)1) > l_176.f0) >= 0U)) > p_97) || 0xD83B) << (int8_t)p_95) && 0)) , l_109) || l_101.f0);
    return l_101;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_482.f0, "g_482.f0", print_hash_value);
    transparent_crc(g_482.f1, "g_482.f1", print_hash_value);
    transparent_crc(g_482.f2, "g_482.f2", print_hash_value);
    transparent_crc(g_482.f3.f0, "g_482.f3.f0", print_hash_value);
    transparent_crc(g_482.f3.f1, "g_482.f3.f1", print_hash_value);
    transparent_crc(g_482.f4, "g_482.f4", print_hash_value);
    transparent_crc(g_498.f0.f0, "g_498.f0.f0", print_hash_value);
    transparent_crc(g_498.f0.f1, "g_498.f0.f1", print_hash_value);
    transparent_crc(g_498.f1, "g_498.f1", print_hash_value);
    transparent_crc(g_498.f2, "g_498.f2", print_hash_value);
    transparent_crc(g_498.f3, "g_498.f3", print_hash_value);
    transparent_crc(g_498.f4, "g_498.f4", print_hash_value);
    transparent_crc(g_499.f0, "g_499.f0", print_hash_value);
    transparent_crc(g_499.f1, "g_499.f1", print_hash_value);
    transparent_crc(g_499.f2, "g_499.f2", print_hash_value);
    transparent_crc(g_499.f3, "g_499.f3", print_hash_value);
    transparent_crc(g_499.f4, "g_499.f4", print_hash_value);
    transparent_crc(g_499.f5, "g_499.f5", print_hash_value);
    transparent_crc(g_499.f6, "g_499.f6", print_hash_value);
    transparent_crc(g_522.f0, "g_522.f0", print_hash_value);
    transparent_crc(g_522.f1, "g_522.f1", print_hash_value);
    transparent_crc(g_522.f2, "g_522.f2", print_hash_value);
    transparent_crc(g_522.f3.f0, "g_522.f3.f0", print_hash_value);
    transparent_crc(g_522.f3.f1, "g_522.f3.f1", print_hash_value);
    transparent_crc(g_522.f4, "g_522.f4", print_hash_value);
    transparent_crc(g_527.f0, "g_527.f0", print_hash_value);
    transparent_crc(g_527.f1, "g_527.f1", print_hash_value);
    transparent_crc(g_527.f2, "g_527.f2", print_hash_value);
    transparent_crc(g_527.f3, "g_527.f3", print_hash_value);
    transparent_crc(g_527.f4, "g_527.f4", print_hash_value);
    transparent_crc(g_527.f5, "g_527.f5", print_hash_value);
    transparent_crc(g_527.f6, "g_527.f6", print_hash_value);
    transparent_crc(g_532.f0.f0, "g_532.f0.f0", print_hash_value);
    transparent_crc(g_532.f0.f1, "g_532.f0.f1", print_hash_value);
    transparent_crc(g_532.f1, "g_532.f1", print_hash_value);
    transparent_crc(g_532.f2, "g_532.f2", print_hash_value);
    transparent_crc(g_532.f3, "g_532.f3", print_hash_value);
    transparent_crc(g_532.f4, "g_532.f4", print_hash_value);
    transparent_crc(g_533.f0.f0, "g_533.f0.f0", print_hash_value);
    transparent_crc(g_533.f0.f1, "g_533.f0.f1", print_hash_value);
    transparent_crc(g_533.f1, "g_533.f1", print_hash_value);
    transparent_crc(g_533.f2, "g_533.f2", print_hash_value);
    transparent_crc(g_533.f3, "g_533.f3", print_hash_value);
    transparent_crc(g_533.f4, "g_533.f4", print_hash_value);
    transparent_crc(g_535.f0, "g_535.f0", print_hash_value);
    transparent_crc(g_535.f1, "g_535.f1", print_hash_value);
    transparent_crc(g_535.f2, "g_535.f2", print_hash_value);
    transparent_crc(g_535.f3, "g_535.f3", print_hash_value);
    transparent_crc(g_535.f4, "g_535.f4", print_hash_value);
    transparent_crc(g_535.f5, "g_535.f5", print_hash_value);
    transparent_crc(g_535.f6, "g_535.f6", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_541.f1, "g_541.f1", print_hash_value);
    transparent_crc(g_541.f2, "g_541.f2", print_hash_value);
    transparent_crc(g_541.f3.f0, "g_541.f3.f0", print_hash_value);
    transparent_crc(g_541.f3.f1, "g_541.f3.f1", print_hash_value);
    transparent_crc(g_541.f4, "g_541.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



