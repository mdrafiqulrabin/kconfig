



static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   const int64_t  f2;
   int32_t  f3;
   const uint32_t  f4;
};

struct S1 {
   int32_t  f0;
   int64_t  f1;
   uint64_t  f2;
};

struct S2 {
   struct S1  f0;
   uint16_t  f1;
};

struct S3 {
   uint32_t  f0;
   struct S1  f1;
   int32_t  f2;
   uint32_t  f3;
   const uint64_t  f4;
   uint16_t  f5;
   struct S0  f6;
   struct S2  f7;
   struct S2  f8;
};

union U4 {
   int32_t  f0;
   const int16_t  f1;
};


static int32_t g_3 = 0x5CABFC39L;
static uint64_t g_8 = 0UL;
static const struct S2 g_29 = {{5L,-6L,0xD850270F9E3D3B0CLL},0x5AA0L};
static union U4 g_56 = {0x27FB601BL};
static int16_t g_94 = (-10L);
static int32_t g_95 = 0xE4958F93L;
static uint16_t g_98 = 65535UL;
static uint64_t g_137 = 0x00671E2B228E054CLL;
static int32_t g_289 = 0x9D4765F5L;
static uint32_t g_315 = 3UL;
static uint32_t g_374 = 0x136F6219L;
static const int16_t g_385 = 0x748AL;
static int16_t g_392 = 0x4FF2L;
static struct S2 g_401 = {{1L,-6L,6UL},65529UL};
static uint16_t g_432 = 1UL;
static uint32_t g_440 = 1UL;
static int32_t g_528 = 1L;
static uint32_t g_535 = 6UL;
static struct S0 g_611 = {1UL,1L,-10L,1L,0x3F36CBF5L};
static struct S3 g_612 = {0xA663EB93L,{1L,0xCD437CF3C3DFB063LL,0UL},0x5E4A774BL,0UL,1UL,0xCA7EL,{0xA90CAF59L,-1L,-7L,0x32B0800DL,0xFAC68343L},{{3L,0xC5B8ABC3AD13291ELL,18446744073709551606UL},65535UL},{{0x746414B2L,1L,0UL},0xBACBL}};
static int32_t g_642 = 0xAFC0151BL;
static int16_t g_644 = (-10L);
static int32_t g_645 = 1L;
static int32_t g_648 = (-1L);
static uint32_t g_650 = 0xFF42A2B2L;
static uint32_t g_687 = 0UL;



inline static union U4  func_28(void);
static int16_t  func_34(const struct S1  p_35, uint16_t  p_36, uint32_t  p_37);
static int32_t  func_46(struct S0  p_47, int32_t  p_48, int32_t  p_49, struct S3  p_50);
inline static struct S0  func_51(union U4  p_52, struct S2  p_53, int16_t  p_54, uint64_t  p_55);
static uint64_t  func_64(union U4  p_65, uint32_t  p_66, struct S1  p_67, struct S0  p_68, struct S1  p_69);
inline static uint16_t  func_76(union U4  p_77, uint32_t  p_78);
inline static struct S1  func_79(int64_t  p_80, uint16_t  p_81, struct S3  p_82, struct S0  p_83);
static struct S1  func_90(int64_t  p_91);
inline static int32_t  func_105(struct S1  p_106);
inline static int32_t  func_133(const uint64_t  p_134, const uint64_t  p_135);





inline static union U4  func_28(void)
{ 
    struct S2 l_30 = {{-5L,1L,0x26A9D9E177C422D5LL},0xBA25L};
    int32_t l_31 = 0x39C01058L;
    int32_t l_59 = 0x4D73BB84L;
    int16_t l_653 = 1L;
    l_30 = g_29;
    l_31 = g_29.f1;
    if (((int16_t)func_34(g_29.f0, g_3, ((int16_t)g_8 - (int16_t)((uint32_t)((((int64_t)__builtin_parity(l_30.f1) + (int64_t)g_29.f0.f2) >= (((int32_t)func_46(func_51(g_56, l_30, ((uint64_t)(l_59 >= g_29.f0.f2) % (uint64_t)l_30.f0.f2), g_29.f0.f2), g_29.f0.f0, l_30.f1, g_612) + (int32_t)g_612.f6.f1) | 6L)) ^ 0x5DF2AC15L) / (uint32_t)l_653))) << (int16_t)g_29.f1))
    { 
        g_3 ^= ((uint64_t)(l_653 < l_30.f0.f1) - (uint64_t)g_612.f6.f1);
    }
    else
    { 
        uint32_t l_731 = 0x768CD98FL;
        int16_t l_732 = 1L;
        for (g_137 = 10; (g_137 < 4); g_137 -= 1)
        { 
            int32_t l_723 = 0L;
            struct S2 l_724 = {{0x58D25C6EL,8L,0x873DC524EAA50EE8LL},65527UL};
            l_723 = (+(g_612.f8.f0.f1 ^ ((uint16_t)g_644 >> (uint16_t)3)));
            l_724 = g_29;
            l_59 ^= (func_76(g_56, ((-(int32_t)((int32_t)((uint64_t)((((+((l_731 | (0x4652L ^ (l_723 | g_612.f1.f1))) >= l_723)) != g_401.f0.f0) >= ((2L ^ (0xF956L && (-5L))) & 0x252815FAD88CB794LL)) != l_724.f0.f1) % (uint64_t)l_731) % (int32_t)g_612.f3)) >= 0x14324D5CL)) > l_732);
            g_95 = (g_611.f3 < (l_59 & ((0xF90EEA8EL ^ ((((int16_t)((uint64_t)l_653 + (uint64_t)((int16_t)(((((((int64_t)__builtin_ctzll(((int16_t)((uint64_t)(((uint32_t)l_30.f0.f2 - (uint32_t)(((((int16_t)func_76(g_56, (-(uint32_t)(l_731 > g_612.f7.f0.f0))) >> (int16_t)l_653) | g_611.f3) ^ l_731) <= g_612.f6.f4)) < 0x277E1AD4414A183ELL) - (uint64_t)0xA603C42A665D2036LL) >> (int16_t)l_731)) % (int64_t)l_731) | l_30.f0.f2) != g_612.f0) < g_612.f6.f2) & g_56.f0) < l_59) >> (int16_t)l_732)) / (int16_t)9L) >= 18446744073709551610UL) | 0x606FL)) < (-6L))));
        }
    }
    return g_56;
}




static int16_t  func_34(const struct S1  p_35, uint16_t  p_36, uint32_t  p_37)
{ 
    uint32_t l_660 = 0UL;
    int32_t l_675 = 0x36B34183L;
    int32_t l_676 = 1L;
    int32_t l_677 = 0x28A3B6B4L;
    int32_t l_678 = 0x6690D187L;
    int32_t l_679 = 0x8AD4E4D2L;
    int32_t l_680 = 0x7E2BCC1AL;
    uint32_t l_681 = 0x393B028FL;
    int32_t l_706 = 0x75BC0DC9L;
    int32_t l_707 = 0L;
    int32_t l_709 = 0x73E63592L;
    int32_t l_710 = 0xC5121510L;
    struct S1 l_715 = {0L,0xB069CEC7F6DAF9F9LL,8UL};
    if (((p_35.f2 && ((uint16_t)(0x053CL && ((int16_t)((int16_t)p_35.f0 << (int16_t)g_612.f7.f0.f0) >> (int16_t)7)) >> (uint16_t)g_137)) != __builtin_popcountl((((l_660 & ((uint64_t)(((((1UL | (-(int64_t)((1L > p_35.f0) && g_29.f1))) >= 4294967295UL) < 9UL) || g_315) & p_35.f0) / (uint64_t)l_660)) != p_35.f0) & 0x392D2BE8L))))
    { 
        struct S0 l_665 = {0xFE012456L,1L,0x413CB5D74FE66801LL,0x1AA44EECL,1UL};
        g_645 = (!func_46(l_665, ((uint64_t)g_612.f6.f2 % (uint64_t)((int16_t)(((0x717D9985L & (p_35.f2 & p_35.f0)) & (((int16_t)((uint16_t)(~0L) / (uint16_t)p_35.f2) >> (int16_t)((9UL <= ((__builtin_clz(p_37) | l_665.f2) || l_660)) & g_3)) ^ g_401.f0.f0)) && 5UL) << (int16_t)14)), l_660, g_612));
        l_675 = p_36;
    }
    else
    { 
        int32_t l_686 = 0xF01C10BEL;
        int32_t l_703 = 0x0BE7B25EL;
        int32_t l_704 = 0x6AE4CC57L;
        int32_t l_705 = 0x7200DE4DL;
        int32_t l_708 = 0x56D9D091L;
        int32_t l_711 = 0xE96C0F29L;
        uint32_t l_712 = 0xF6AF9687L;
        l_681--;
        l_703 = ((((int64_t)((p_36 || (l_686 | g_687)) & ((uint64_t)((((uint16_t)g_612.f8.f0.f1 >> (uint16_t)p_35.f1) == ((((uint16_t)((int16_t)((int16_t)l_686 + (int16_t)0x0F03L) / (int16_t)(-(int64_t)(((int16_t)((int64_t)l_686 - (int64_t)0x2E2FA5B43B9F2D26LL) >> (int16_t)10) & l_676))) % (uint16_t)g_648) <= 0UL) != p_35.f1)) < g_612.f8.f0.f2) / (uint64_t)3L)) + (int64_t)4UL) != 0xD5CA0856L) || 0x5C12292DL);
        l_712++;
    }
    l_715 = p_35;
    g_645 &= (0xD4653E7BL && l_675);
    l_675 ^= p_35.f2;
    return l_715.f2;
}




static int32_t  func_46(struct S0  p_47, int32_t  p_48, int32_t  p_49, struct S3  p_50)
{ 
    int64_t l_613 = (-1L);
    uint64_t l_629 = 0UL;
    int32_t l_632 = 0xF9EFB793L;
    struct S3 l_636 = {0xB60B0E66L,{0xA99CD742L,-8L,0x5AC33C26C68A5247LL},-2L,0xF3836B14L,0x1338B54624D93F11LL,0x2B11L,{0x7EF1A4A6L,0x00C7D1C1L,0xE935D95E9A0B733CLL,1L,0x99E1F8F8L},{{0x5DE37E39L,0xA06FB4740B221DBCLL,18446744073709551608UL},0xECA3L},{{0xA5228B54L,-4L,0x0554102A15524EA8LL},0x5C57L}};
    int32_t l_638 = 2L;
    int32_t l_641 = 0xD16A8805L;
    int32_t l_646 = 0xB87716D4L;
    l_613 = p_50.f1.f1;
    g_56.f0 |= ((g_612.f8.f0.f0 && g_612.f6.f3) ^ 4294967295UL);
    if ((l_613 >= g_612.f1.f2))
    { 
        uint32_t l_624 = 0xB0633A60L;
        g_611.f1 = (__builtin_parityl(((uint16_t)((((uint64_t)((g_612.f7.f1 <= ((((int32_t)p_49 - (int32_t)(l_613 == (((~(-(uint64_t)(((((g_612.f7.f1 == 0x9F26L) <= g_374) & g_611.f1) && l_624) < ((int16_t)((uint16_t)0xD6BCL - (uint16_t)l_624) >> (int16_t)l_629)))) == 0xDA6D287245DA1EA6LL) < p_50.f8.f1))) == l_613) > p_47.f3)) >= p_50.f8.f0.f1) + (uint64_t)g_8) < p_50.f0) && p_50.f4) >> (uint16_t)g_611.f0)) >= g_612.f6.f1);
        p_47.f1 &= p_50.f7.f0.f0;
        for (g_612.f0 = 0; (g_612.f0 <= 28); g_612.f0 += 5)
        { 
            uint64_t l_633 = 0x8DDAE5411332B8C5LL;
            l_633++;
        }
        g_612.f8.f0 = func_79(p_47.f2, g_611.f2, l_636, l_636.f6);
    }
    else
    { 
        int32_t l_637 = 0x6F482B13L;
        int32_t l_639 = 2L;
        int32_t l_640 = 0xC2603719L;
        int32_t l_643 = 6L;
        int32_t l_647 = 2L;
        int32_t l_649 = 0xD405364EL;
        ++g_650;
    }
    return p_50.f1.f2;
}




inline static struct S0  func_51(union U4  p_52, struct S2  p_53, int16_t  p_54, uint64_t  p_55)
{ 
    struct S0 l_85 = {3UL,-1L,-6L,-1L,0x4DCDAB58L};
    for (p_52.f0 = 0; (p_52.f0 <= (-3)); p_52.f0 -= 1)
    { 
        struct S0 l_443 = {0xE427DB72L,-1L,0xE7EA1D27C7C07CC9LL,0L,0xE974F8D4L};
        for (p_53.f0.f1 = (-13); (p_53.f0.f1 >= 6); p_53.f0.f1 += 4)
        { 
            union U4 l_70 = {-3L};
            struct S3 l_84 = {7UL,{-1L,0L,18446744073709551606UL},-1L,0UL,0UL,5UL,{1UL,0xE5124A76L,0x11F35E5FA5926F2DLL,0x12F6744EL,0UL},{{0L,0x105BDF17F541A3ACLL,0x9B7196FBAD4E8C80LL},2UL},{{1L,0L,0x3CBA28DA27851ED0LL},65530UL}};
            int32_t l_600 = 0xE78B14E0L;
            l_600 ^= __builtin_popcountll(func_64(l_70, (0L <= ((int16_t)((uint16_t)p_52.f1 % (uint16_t)65535UL) * (int16_t)(!func_76(g_56, l_70.f1)))), func_79(p_53.f0.f0, (0x6CD28588L >= g_56.f1), l_84, l_85), l_443, p_53.f0));
            l_443.f1 |= g_401.f0.f0;
        }
        for (g_98 = 0; (g_98 == 24); g_98 += 5)
        { 
            uint32_t l_610 = 0xEF94E310L;
            l_85.f1 |= (((int64_t)g_401.f0.f0 + (int64_t)(g_8 == (-(uint64_t)(l_443.f3 != g_289)))) < ((int16_t)((uint32_t)g_392 % (uint32_t)func_76(g_56, g_56.f0)) >> (int16_t)(((1UL != 0x19BA58ECL) && 0xD4A7L) > g_3)));
            l_443.f1 = p_52.f0;
            l_610 = func_76(p_52, p_53.f0.f1);
        }
        l_85.f1 = g_385;
    }
    return g_611;
}




static uint64_t  func_64(union U4  p_65, uint32_t  p_66, struct S1  p_67, struct S0  p_68, struct S1  p_69)
{ 
    int16_t l_445 = 0xA0A1L;
    int32_t l_472 = (-1L);
    int32_t l_527 = (-9L);
    int32_t l_530 = (-1L);
    int32_t l_531 = 0L;
    int32_t l_532 = (-1L);
    uint16_t l_576 = 1UL;
    struct S1 l_596 = {1L,0L,0x05E8F6FAFF094920LL};
    if ((+0x029DA0CBL))
    { 
        uint16_t l_471 = 65535UL;
        int32_t l_533 = 4L;
        int16_t l_562 = 0xD716L;
        struct S2 l_579 = {{0L,0x6D7EAB7ACE291258LL,0x435CDE2B95946995LL},1UL};
        l_472 = (l_445 > ((int16_t)(!(18446744073709551615UL >= p_66)) + (int16_t)((~((int64_t)(((uint64_t)((uint16_t)(l_445 ^ (((uint16_t)p_68.f3 << (uint16_t)15) != (p_67.f2 ^ (((int32_t)(((((int64_t)((uint16_t)(((int32_t)((uint64_t)((int64_t)__builtin_parity((~func_76(p_65, (l_445 <= p_69.f1)))) % (int64_t)p_65.f0) % (uint64_t)0x589F4AD4536AE6BALL) - (int32_t)g_29.f0.f2) <= p_66) << (uint16_t)p_68.f2) + (int64_t)p_68.f4) | l_471) ^ l_445) || l_471) + (int32_t)0xE9CC74D4L) <= g_440)))) % (uint16_t)g_29.f0.f0) / (uint64_t)0x8ECCA2D5D52031F2LL) != l_445) - (int64_t)6L)) | l_471)));
        if ((((int16_t)0x2A5EL + (int16_t)((int16_t)g_8 >> (int16_t)((func_76(p_65, func_105(g_29.f0)) && (g_401.f0.f2 >= g_95)) & ((uint32_t)g_432 + (uint32_t)g_401.f0.f0)))) ^ g_29.f0.f1))
        { 
            uint32_t l_481 = 0xEAEA2844L;
            struct S1 l_522 = {0xF0D242C8L,0xAD5CA50311C4F684LL,18446744073709551615UL};
            uint16_t l_525 = 8UL;
            int32_t l_575 = 0L;
            for (p_69.f2 = 0; (p_69.f2 > 9); ++p_69.f2)
            { 
                int64_t l_496 = 6L;
                int32_t l_529 = 0xE49509F3L;
                l_481--;
                if (((uint16_t)((uint64_t)((int16_t)0x446FL >> (int16_t)9) / (uint64_t)((uint32_t)l_481 - (uint32_t)((int16_t)((int32_t)l_496 + (int32_t)__builtin_parityl(l_471)) - (int16_t)p_68.f0))) - (uint16_t)func_76(g_56, g_94)))
                { 
                    int16_t l_515 = 0x6D67L;
                    int32_t l_521 = (-5L);
                    l_515 = ((int16_t)((int16_t)p_68.f3 + (int16_t)((uint32_t)(((uint32_t)p_67.f2 % (uint32_t)((uint16_t)(l_472 || g_94) << (uint16_t)5)) || (!((uint16_t)l_481 % (uint16_t)((int16_t)g_95 << (int16_t)(((int16_t)g_29.f0.f1 - (int16_t)l_481) | ((-(uint64_t)__builtin_parityll(g_137)) | 0x25D8C701A78B9F14LL)))))) + (uint32_t)2L)) / (int16_t)p_68.f4);
                    for (p_65.f0 = 0; (p_65.f0 >= 8); p_65.f0 += 8)
                    { 
                        uint32_t l_518 = 0UL;
                        l_518++;
                        l_521 |= 0xA05A7788L;
                        if (g_29.f0.f2)
                            continue;
                        if (g_29.f0.f1)
                            continue;
                    }
                    l_522 = p_67;
                }
                else
                { 
                    int32_t l_526 = (-1L);
                    int32_t l_534 = 0x47E93642L;
                    p_68.f1 |= (g_98 == ((((uint32_t)l_522.f1 + (uint32_t)l_525) < p_65.f0) ^ 0xED99L));
                    g_95 = __builtin_parityll(g_401.f0.f2);
                    g_535--;
                    for (l_526 = 0; (l_526 > (-5)); l_526--)
                    { 
                        uint32_t l_541 = 9UL;
                        g_56.f0 = (+l_541);
                    }
                }
                if ((((uint16_t)g_432 >> (uint16_t)g_401.f0.f0) != (0x6F76AEF64FB8BEC4LL < (l_533 >= ((uint64_t)g_137 + (uint64_t)(((int16_t)((int32_t)((int16_t)((uint32_t)((int32_t)((g_29.f0.f0 ^ 0xCE02L) && (g_401.f1 & ((int64_t)l_533 + (int64_t)18446744073709551612UL))) / (int32_t)0xBD3278CBL) / (uint32_t)g_401.f0.f1) - (int16_t)g_29.f0.f2) / (int32_t)4294967287UL) << (int16_t)g_95) | 0xBDD7E7F9L))))))
                { 
                    const uint32_t l_563 = 0UL;
                    for (g_289 = 0; (g_289 >= (-5)); g_289 -= 9)
                    { 
                        p_65.f0 &= (p_69.f0 && func_76(g_56, p_68.f1));
                        if (l_529)
                            break;
                    }
                    for (g_401.f0.f0 = 0; (g_401.f0.f0 <= 5); ++g_401.f0.f0)
                    { 
                        int32_t l_565 = 5L;
                        l_562 &= g_137;
                        l_565 = func_133(l_563, (!l_529));
                    }
                    return p_67.f0;
                }
                else
                { 
                    int32_t l_574 = 7L;
                    p_68.f1 = ((int16_t)l_496 >> (int16_t)func_133(p_68.f4, (0xC3A53F2285380D96LL ^ ((+p_68.f3) < (p_69.f2 >= 1UL)))));
                    for (p_69.f0 = 27; (p_69.f0 != 17); p_69.f0 -= 1)
                    { 
                        uint16_t l_573 = 65535UL;
                        g_95 ^= p_68.f4;
                        if (l_573)
                            continue;
                        l_533 = l_522.f2;
                    }
                    l_576--;
                }
                g_401 = l_579;
            }
        }
        else
        { 
            for (l_530 = 0; (l_530 > 14); l_530 += 7)
            { 
                int32_t l_592 = 0xA59FD3DAL;
                for (p_66 = (-1); (p_66 != 55); p_66 += 1)
                { 
                    for (g_95 = 5; (g_95 < (-30)); g_95 -= 1)
                    { 
                        uint16_t l_595 = 65533UL;
                        g_56.f0 ^= ((((int64_t)(p_69.f0 > (g_289 != ((-1L) ^ l_579.f0.f1))) - (int64_t)((p_69.f2 <= (l_445 > ((uint16_t)l_592 - (uint16_t)((l_471 == ((int32_t)p_67.f0 % (int32_t)p_69.f1)) || l_595)))) & l_530)) && l_579.f0.f0) || 0UL);
                        return l_527;
                    }
                }
                g_401.f0 = l_596;
            }
            p_65.f0 |= (0x22D0028AL > g_401.f1);
            g_528 ^= (((int16_t)5L - (int16_t)(g_401.f0.f0 >= (l_445 && p_69.f2))) | (!p_66));
        }
    }
    else
    { 
        return l_532;
    }
    return l_527;
}




inline static uint16_t  func_76(union U4  p_77, uint32_t  p_78)
{ 
    return g_29.f0.f0;
}




inline static struct S1  func_79(int64_t  p_80, uint16_t  p_81, struct S3  p_82, struct S0  p_83)
{ 
    int32_t l_97 = (-1L);
    union U4 l_383 = {0x40091062L};
    int64_t l_384 = 1L;
    int32_t l_388 = (-1L);
    int32_t l_390 = 0x007DCDA6L;
    struct S1 l_404 = {-1L,0xD7AD23072602DF71LL,18446744073709551615UL};
    for (p_83.f0 = 0; (p_83.f0 > 47); p_83.f0 += 7)
    { 
        struct S1 l_93 = {1L,-1L,1UL};
        int32_t l_96 = 0xBCD74381L;
        for (p_83.f1 = 0; (p_83.f1 >= (-22)); p_83.f1 -= 1)
        { 
            int32_t l_92 = 4L;
            l_93 = func_90(l_92);
            g_98--;
            l_96 = ((int64_t)0x904B385D38864000LL % (int64_t)((((uint32_t)l_96 / (uint32_t)func_105(g_29.f0)) == l_93.f2) ^ g_29.f1));
            g_374 |= func_133((0xB10A179D6CE19E99LL && (((uint32_t)p_82.f0 + (uint32_t)(((~0x59288803EDB0BF49LL) == ((((int64_t)(l_97 ^ p_82.f6.f3) + (int64_t)(((uint32_t)__builtin_bswap32(g_29.f1) % (uint32_t)((uint64_t)(p_82.f7.f0.f1 <= l_93.f2) - (uint64_t)l_97)) < g_29.f0.f1)) & 0xBAFF7DCAAD0FF3DFLL) >= 0x47678D6EL)) & p_83.f4)) > g_56.f0)), l_92);
        }
        l_96 ^= func_105(l_93);
    }
    if (((uint16_t)g_98 >> (uint16_t)(g_29.f0.f1 && 0xA85A41679F912CC4LL)))
    { 
        struct S1 l_379 = {0x85E9CE2AL,3L,0xA8C30F78D322387CLL};
        union U4 l_380 = {-1L};
        int32_t l_398 = 0x392C4AB7L;
        uint32_t l_422 = 0x3326BAF5L;
        p_82.f8 = g_29;
        if (((int16_t)(0L != (__builtin_ia32_crc32qi(func_105(l_379), (0x84BA3EB5A4A2F87CLL <= func_76(l_380, g_94))) | ((((uint64_t)(func_76(l_383, l_383.f1) <= l_384) + (uint64_t)g_385) == 1L) > (-1L)))) << (int16_t)l_384))
        { 
            int16_t l_389 = 0x658CL;
            int32_t l_391 = 1L;
            for (p_82.f1.f2 = 0; (p_82.f1.f2 > 33); p_82.f1.f2 += 1)
            { 
                uint64_t l_393 = 1UL;
                ++l_393;
                for (g_392 = 0; (g_392 >= 1); g_392++)
                { 
                    l_398 = (g_56.f1 & 0xADFCL);
                    for (l_390 = 0; (l_390 > (-4)); l_390--)
                    { 
                        p_82.f8.f0 = p_82.f7.f0;
                        l_380.f0 = p_80;
                    }
                    g_401 = p_82.f7;
                }
                g_95 = g_401.f0.f1;
            }
            g_289 = 0x8785AC9EL;
        }
        else
        { 
            int32_t l_410 = 0xBF9E9B86L;
            for (g_95 = 10; (g_95 == (-14)); g_95 -= 1)
            { 
                uint64_t l_405 = 18446744073709551615UL;
                p_82.f8.f0 = l_404;
                ++l_405;
                g_289 = ((g_56.f1 & p_82.f1.f2) >= func_76(g_56, ((l_410 & ((((uint16_t)__builtin_ffsl(g_94) << (uint16_t)0) | ((uint16_t)((uint32_t)g_29.f0.f2 / (uint32_t)(g_315 | ((~(((uint16_t)(((int32_t)g_3 % (int32_t)p_82.f8.f0.f1) && p_83.f0) << (uint16_t)7) <= 0xBFAC9C4EL)) != g_29.f1))) << (uint16_t)l_398)) > l_422)) == g_374)));
            }
        }
    }
    else
    { 
        int32_t l_429 = 0xA9EF4CD2L;
        g_401.f0 = func_90(p_82.f1.f1);
        g_289 = ((int32_t)0x94CEC3EFL % (int32_t)((uint16_t)((int16_t)l_429 >> (int16_t)4) + (uint16_t)(__builtin_popcount((__builtin_bswap32((((int16_t)(-1L) % (int16_t)g_432) > __builtin_bswap32(l_429))) >= (~((int16_t)p_82.f1.f2 << (int16_t)4)))) ^ p_82.f6.f2)));
        for (p_82.f1.f2 = 10; (p_82.f1.f2 != 21); p_82.f1.f2++)
        { 
            int32_t l_438 = 0x02EC6935L;
            int32_t l_439 = 0x7B278D9FL;
            ++g_440;
        }
        g_289 = p_82.f8.f0.f1;
    }
    p_82.f6.f1 ^= l_388;
    return p_82.f7.f0;
}




static struct S1  func_90(int64_t  p_91)
{ 
    return g_29.f0;
}




inline static int32_t  func_105(struct S1  p_106)
{ 
    int32_t l_116 = 0x20CDDF05L;
    const uint32_t l_125 = 4UL;
    int16_t l_126 = 0xA509L;
    int32_t l_363 = 4L;
    int32_t l_364 = 0x6B85FABEL;
    g_95 &= ((uint64_t)(((uint16_t)((~((int32_t)((int32_t)(g_29.f0.f0 | (l_116 & 0x3C1EL)) + (int32_t)p_106.f1) + (int32_t)(((p_106.f1 > (~0xE61E940A49417E07LL)) | ((uint64_t)(0xDA66L == ((!g_29.f0.f2) && ((int16_t)(((((int16_t)((((p_106.f2 || p_106.f2) < l_116) < g_56.f0) != g_8) / (int16_t)p_106.f1) && g_98) || g_3) >= 0x1880L) >> (int16_t)p_106.f0))) / (uint64_t)l_116)) != g_29.f0.f1))) > l_125) >> (uint16_t)3) == g_8) + (uint64_t)p_106.f0);
    l_363 = ((__builtin_bswap64(__builtin_ffs(((((l_126 >= ((int16_t)0x663EL >> (int16_t)(((int16_t)__builtin_ffsl(func_133(p_106.f1, p_106.f0)) << (int16_t)5) | (p_106.f1 == g_29.f0.f2)))) != (-(int32_t)(-(int64_t)l_126))) || p_106.f2) < l_125))) == g_29.f0.f2) >= l_126);
    l_364 |= l_363;
    return g_29.f1;
}




inline static int32_t  func_133(const uint64_t  p_134, const uint64_t  p_135)
{ 
    int32_t l_136 = (-6L);
    union U4 l_150 = {8L};
    uint16_t l_151 = 0xD706L;
    int32_t l_181 = 1L;
    uint64_t l_360 = 0x0A52F9BF1B5D2702LL;
    if (l_136)
    { 
        l_136 ^= g_29.f1;
    }
    else
    { 
        uint64_t l_200 = 0x764CF3F2C5E0AD07LL;
        uint32_t l_205 = 18446744073709551609UL;
        union U4 l_208 = {-1L};
        if ((g_98 & (g_29.f1 != p_134)))
        { 
            ++g_137;
        }
        else
        { 
            union U4 l_145 = {-10L};
            uint32_t l_224 = 1UL;
            for (l_136 = 0; (l_136 != 14); l_136 += 7)
            { 
                uint32_t l_142 = 4294967286UL;
                int32_t l_159 = 0x556593A7L;
                union U4 l_197 = {-2L};
                g_95 = __builtin_clzl((l_142 == 0UL));
                if (((((((int16_t)((func_76(l_145, p_135) > 0x85BF0B68L) || g_29.f1) << (int16_t)0) >= ((((int32_t)(0x66E71845L ^ (((int16_t)(((-7L) & func_76(l_150, (0x7461C8C1L ^ p_135))) ^ 1UL) << (int16_t)p_135) | p_135)) % (int32_t)0x7A8CD555L) || 0x5121L) >= 0xF299L)) && l_151) == g_3) != l_150.f0))
                { 
                    uint32_t l_152 = 18446744073709551615UL;
                    int32_t l_164 = 0xEF6E5673L;
                    if (l_152)
                    { 
                        l_159 ^= (((int16_t)p_134 >> (int16_t)3) != ((uint16_t)((uint16_t)p_134 + (uint16_t)(-6L)) << (uint16_t)13));
                    }
                    else
                    { 
                        g_95 &= ((int16_t)g_29.f1 >> (int16_t)10);
                        l_145.f0 = 1L;
                    }
                    for (l_145.f0 = (-28); (l_145.f0 >= 13); l_145.f0 += 1)
                    { 
                        union U4 l_170 = {-1L};
                        if (p_135)
                            break;
                        l_164 = g_29.f0.f2;
                        l_181 = (((uint64_t)(((-(uint32_t)func_76(l_170, (g_137 > (((uint16_t)(g_95 != func_76(l_150, (p_134 || ((p_134 ^ ((uint16_t)g_29.f0.f2 << (uint16_t)((int32_t)((((int16_t)l_136 - (int16_t)l_145.f1) | l_170.f1) | p_135) - (int32_t)g_29.f0.f2))) < 0UL)))) + (uint16_t)l_151) >= 0UL)))) != 0L) >= p_134) % (uint64_t)p_135) < 0x155CL);
                        if (g_29.f0.f0)
                            break;
                    }
                }
                else
                { 
                    int32_t l_198 = 0xB16F6D41L;
                    l_159 = ((uint16_t)(((int16_t)(((g_98 && ((((p_135 || g_94) >= ((~(((((int16_t)g_29.f1 << (int16_t)9) > ((uint64_t)((int32_t)((((uint32_t)func_76(l_197, ((l_198 && g_3) & (~p_134))) + (uint32_t)0UL) <= g_29.f0.f1) | l_198) + (int32_t)p_134) % (uint64_t)g_8)) > 0UL) & l_145.f0)) != 0xC95E927660C2B274LL)) != l_198) == l_200)) && 0L) ^ l_198) << (int16_t)11) <= g_95) / (uint16_t)g_8);
                }
            }
            if ((((0xFAA4L ^ ((int16_t)(((int64_t)l_205 - (int64_t)(p_135 && l_145.f0)) != 0x2C14L) + (int16_t)(((int16_t)(func_76(l_208, l_205) > ((!l_208.f0) >= 0x6466B916L)) >> (int16_t)6) == 0x35087B76L))) & g_29.f0.f0) & 0x5558BBB9L))
            { 
                union U4 l_217 = {0x3D3E7146L};
                for (l_136 = (-18); (l_136 == (-10)); l_136 += 4)
                { 
                    int32_t l_225 = 1L;
                    int32_t l_238 = 0x5FEBA5A1L;
                    l_225 = ((uint16_t)(((((~p_135) ^ g_29.f0.f0) && ((((p_135 && (-7L)) >= ((int16_t)p_135 >> (int16_t)0)) & func_76(l_217, ((int16_t)(((((uint16_t)(0xA32BL >= ((p_135 ^ ((int32_t)g_94 - (int32_t)g_56.f1)) >= p_135)) << (uint16_t)l_217.f1) ^ g_29.f0.f2) | p_135) > p_135) << (int16_t)g_94))) != g_29.f0.f0)) <= g_94) == l_224) - (uint16_t)l_217.f1);
                    l_238 = ((func_76(g_56, ((uint16_t)g_56.f1 >> (uint16_t)g_56.f0)) ^ ((uint64_t)(((uint64_t)l_208.f0 % (uint64_t)p_134) == ((int16_t)g_29.f0.f1 >> (int16_t)7)) % (uint64_t)p_134)) >= ((int16_t)((uint16_t)func_76(l_208, g_29.f0.f1) >> (uint16_t)12) - (int16_t)g_95));
                }
            }
            else
            { 
                union U4 l_250 = {-1L};
                int64_t l_261 = (-1L);
                uint32_t l_262 = 18446744073709551612UL;
                g_95 = ((uint16_t)g_56.f0 >> (uint16_t)((0xA3167A90L & (((g_137 >= ((int64_t)((func_76(g_56, ((int64_t)((-(uint16_t)(((int64_t)l_208.f0 + (int64_t)((uint64_t)func_76(l_250, (((uint16_t)(((int32_t)p_134 / (int32_t)(((int16_t)(0xC5BCL && ((((uint64_t)((int32_t)0x51E7A812L - (int32_t)g_29.f0.f0) - (uint64_t)0x711357962F05AABCLL) || g_94) < g_3)) / (int16_t)l_250.f1) || g_98)) | l_208.f0) << (uint16_t)8) < l_224)) % (uint64_t)l_261)) || 0x39C2C3B8L)) && 0x69B939C0F99576B8LL) + (int64_t)g_3)) <= p_135) >= l_136) - (int64_t)0x022EB11DCCF7767CLL)) < l_262) & 3UL)) != p_135));
                return l_181;
            }
            if (l_145.f0)
            { 
                union U4 l_269 = {-7L};
                g_95 = ((int32_t)(((int32_t)((uint32_t)(l_208.f1 == (func_76(l_269, g_137) > (((int64_t)l_145.f0 % (int64_t)l_145.f1) <= g_3))) - (uint32_t)l_269.f0) + (int32_t)g_3) & p_135) / (int32_t)g_3);
                l_150.f0 = ((uint16_t)(5UL != func_76(g_56, g_56.f0)) << (uint16_t)((uint64_t)3UL % (uint64_t)(((uint32_t)(((uint32_t)0x40F6EF4EL / (uint32_t)((uint16_t)(2L > ((uint16_t)((0x7448L > l_269.f0) == p_134) >> (uint16_t)15)) % (uint16_t)0x1A63L)) >= l_208.f1) + (uint32_t)l_145.f0) && g_95)));
                l_150.f0 = g_56.f0;
            }
            else
            { 
                uint32_t l_301 = 18446744073709551615UL;
                const struct S2 l_358 = {{0x7528EB46L,6L,0xD604C6C6E6C73E76LL},1UL};
                struct S2 l_359 = {{3L,0xF77C82EAEAA3F01ELL,1UL},0xE4BAL};
                for (g_95 = 27; (g_95 >= 24); g_95--)
                { 
                    uint64_t l_288 = 0x1149BCCB01B5B14BLL;
                    g_289 ^= ((int16_t)__builtin_ffsl(p_135) / (int16_t)l_288);
                }
                for (l_150.f0 = (-25); (l_150.f0 <= (-26)); l_150.f0 -= 3)
                { 
                    uint32_t l_304 = 2UL;
                    int32_t l_349 = 0xA6592A20L;
                    union U4 l_354 = {1L};
                    g_315 |= ((int16_t)((+((uint32_t)((uint16_t)l_150.f0 % (uint16_t)p_135) + (uint32_t)((int16_t)g_289 >> (int16_t)(l_301 || ((int16_t)l_304 << (int16_t)(func_76(l_208, g_95) > ((int16_t)((uint16_t)((uint32_t)((((uint16_t)((int16_t)(5UL ^ 0x6EA63593L) << (int16_t)2) / (uint16_t)g_137) | p_135) != 2L) - (uint32_t)p_135) + (uint16_t)g_95) >> (int16_t)g_95))))))) == l_301) % (int16_t)0xA67FL);
                    if ((((!__builtin_popcount(l_208.f0)) == (-(uint32_t)p_135)) >= p_134))
                    { 
                        uint64_t l_346 = 18446744073709551611UL;
                        union U4 l_357 = {0xF7DD5602L};
                        g_95 = (0xF5139A76395540A5LL ^ ((int64_t)0xA1AFCBC47171A2D9LL / (int64_t)((uint16_t)(((int64_t)(((int16_t)(((uint64_t)func_76(g_56, l_224) % (uint64_t)l_304) || ((uint16_t)(0x7FD1788FD8152184LL < (!(+((int32_t)(((int16_t)(-1L) - (int16_t)p_135) || g_29.f1) / (int32_t)9UL)))) - (uint16_t)0xE467L)) >> (int16_t)g_289) ^ g_56.f0) - (int64_t)g_56.f0) <= p_134) - (uint16_t)g_95)));
                        l_145.f0 = p_135;
                        l_349 = (((l_145.f0 < ((int64_t)(l_304 && p_134) - (int64_t)((int32_t)(((int16_t)g_29.f1 >> (int16_t)11) >= (((((uint16_t)g_29.f0.f2 << (uint16_t)(((int16_t)__builtin_ffs(__builtin_ia32_crc32qi(l_346, ((((uint16_t)g_315 % (uint16_t)p_135) || 0x0FECL) <= p_135))) >> (int16_t)13) >= 18446744073709551615UL)) && g_94) || 0L) > 0x04BFBC94AE0E3976LL)) % (int32_t)g_98))) < g_95) < g_94);
                        l_145.f0 = (__builtin_clzl(((uint32_t)l_304 - (uint32_t)((uint32_t)(func_76(l_354, p_134) < ((int32_t)(((((func_76(l_357, p_135) != l_301) >= __builtin_parity(g_95)) & g_137) || 5UL) & g_289) % (int32_t)l_301)) - (uint32_t)(-1L)))) <= p_135);
                    }
                    else
                    { 
                        return g_29.f0.f2;
                    }
                }
                l_359 = l_358;
            }
        }
        l_150.f0 |= 0xEE55107FL;
    }
    return l_360;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_29.f0.f0, "g_29.f0.f0", print_hash_value);
    transparent_crc(g_29.f0.f1, "g_29.f0.f1", print_hash_value);
    transparent_crc(g_29.f0.f2, "g_29.f0.f2", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_401.f0.f0, "g_401.f0.f0", print_hash_value);
    transparent_crc(g_401.f0.f1, "g_401.f0.f1", print_hash_value);
    transparent_crc(g_401.f0.f2, "g_401.f0.f2", print_hash_value);
    transparent_crc(g_401.f1, "g_401.f1", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_611.f0, "g_611.f0", print_hash_value);
    transparent_crc(g_611.f1, "g_611.f1", print_hash_value);
    transparent_crc(g_611.f2, "g_611.f2", print_hash_value);
    transparent_crc(g_611.f3, "g_611.f3", print_hash_value);
    transparent_crc(g_611.f4, "g_611.f4", print_hash_value);
    transparent_crc(g_612.f0, "g_612.f0", print_hash_value);
    transparent_crc(g_612.f1.f0, "g_612.f1.f0", print_hash_value);
    transparent_crc(g_612.f1.f1, "g_612.f1.f1", print_hash_value);
    transparent_crc(g_612.f1.f2, "g_612.f1.f2", print_hash_value);
    transparent_crc(g_612.f2, "g_612.f2", print_hash_value);
    transparent_crc(g_612.f3, "g_612.f3", print_hash_value);
    transparent_crc(g_612.f4, "g_612.f4", print_hash_value);
    transparent_crc(g_612.f5, "g_612.f5", print_hash_value);
    transparent_crc(g_612.f6.f0, "g_612.f6.f0", print_hash_value);
    transparent_crc(g_612.f6.f1, "g_612.f6.f1", print_hash_value);
    transparent_crc(g_612.f6.f2, "g_612.f6.f2", print_hash_value);
    transparent_crc(g_612.f6.f3, "g_612.f6.f3", print_hash_value);
    transparent_crc(g_612.f6.f4, "g_612.f6.f4", print_hash_value);
    transparent_crc(g_612.f7.f0.f0, "g_612.f7.f0.f0", print_hash_value);
    transparent_crc(g_612.f7.f0.f1, "g_612.f7.f0.f1", print_hash_value);
    transparent_crc(g_612.f7.f0.f2, "g_612.f7.f0.f2", print_hash_value);
    transparent_crc(g_612.f7.f1, "g_612.f7.f1", print_hash_value);
    transparent_crc(g_612.f8.f0.f0, "g_612.f8.f0.f0", print_hash_value);
    transparent_crc(g_612.f8.f0.f1, "g_612.f8.f0.f1", print_hash_value);
    transparent_crc(g_612.f8.f0.f2, "g_612.f8.f0.f2", print_hash_value);
    transparent_crc(g_612.f8.f1, "g_612.f8.f1", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



