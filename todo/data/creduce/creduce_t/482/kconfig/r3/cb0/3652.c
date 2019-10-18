


#define NO_LONGLONG



static long __undefined;


union U0 {
   uint32_t  f0;
   unsigned f1 : 17;
   uint32_t  f2;
   int16_t  f3;
   uint32_t  f4;
};

union U1 {
   int16_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int16_t  f3;
};

union U2 {
   uint16_t  f0;
   int16_t  f1;
};





static union U2  func_27(void);
inline static uint32_t  func_33(union U0  p_34, int32_t  p_35);
inline static union U0  func_36(union U1  p_37);
inline static int32_t  func_42(int16_t  p_43);
inline static union U1  func_59(uint16_t  p_60, int32_t  p_61, int32_t  p_62, int16_t  p_63);
inline static int32_t  func_65(uint32_t  p_66, int32_t  p_67, union U1  p_68);
static union U0  func_78(uint32_t  p_79, union U2  p_80, uint16_t  p_81, uint32_t  p_82, uint32_t  p_83);
inline static uint32_t  func_94(uint32_t  p_95, uint32_t  p_96, int32_t  p_97, union U1  p_98, union U0  p_99);
static uint16_t  func_100(int32_t  p_101, uint16_t  p_102);
inline static uint32_t  func_106(int32_t  p_107, uint32_t  p_108, uint16_t  p_109, uint32_t  p_110, int16_t  p_111);





static union U2  func_27(void)
{ 
    int32_t l_28 = (-6);
    union U1 l_38 = {-8};
    uint16_t l_3217 = 0U;
    union U0 l_3598 = {0xEFBD922E};
    int32_t l_3600 = 0;
    int32_t l_3618 = 0x3C69351A;
    int32_t l_3619 = (-9);
    int16_t l_3630 = (-10);
    uint16_t l_3658 = 6U;
    int32_t l_3674 = 0;
    int32_t l_3675 = 0x3197ED22;
    int32_t l_3681 = (-7);
    int32_t l_3687 = 0;
    uint32_t l_3742 = 1U;
    uint32_t l_3751 = 4U;
    int32_t l_3772 = 0xC6CA91A7;
    union U2 l_3812 = {65530U};
    uint16_t l_3843 = 0xE158;
    uint32_t l_3846 = 0x085C38FD;
    for (l_28 = 0; (l_28 != (-15)); l_28 -= 3)
    { 
        int32_t l_3597 = (-6);
        int32_t l_3599 = 0xFF282264;
        l_3600 = ((int16_t)((l_28 == (func_33(func_36(l_38), l_3217) >= l_3597)) != l_3597) << (int16_t)((l_3599 = __builtin_ia32_crc32qi(l_38.f3, (l_3598 , 0xB5))) , 0x606C));
        for (l_38.f2 = (-12); (l_38.f2 != 13); l_38.f2 += 5)
        { 
            int32_t l_3603 = 0xF3E6491B;
            l_3603 = 0x9E302810;
        }
        if (l_3598.f1)
            break;
    }
    l_3619 = __builtin_ctzl((((uint16_t)0xD0DE * (uint16_t)l_38.f3) | ((((int16_t)l_3598.f0 % (int16_t)(((uint32_t)(((((int32_t)((int32_t)__builtin_bswap64(__builtin_ffsll(l_3600)) - (int32_t)((int32_t)(l_28 = ((l_3598 , (__builtin_ctz(l_3618) == l_3618)) && 0xA7BE)) - (int32_t)l_3598.f2)) - (int32_t)l_3598.f2) == l_3598.f2) >= l_3598.f1) > l_3598.f1) - (uint32_t)l_3619) || l_28)) || l_3618) <= l_38.f0)));
    for (l_3619 = 0; (l_3619 != 5); l_3619 += 5)
    { 
        int32_t l_3622 = 0x7ACB162C;
        int32_t l_3629 = 0;
        int32_t l_3631 = (-1);
        union U2 l_3642 = {0x08D2};
        int32_t l_3649 = (-2);
        int32_t l_3650 = (-1);
        int32_t l_3651 = 1;
        union U1 l_3686 = {-3};
        union U0 l_3759 = {0U};
        int32_t l_3793 = (-8);
        int16_t l_3837 = (-2);
        l_28 = (l_3622 && ((uint16_t)(0x790B43EF ^ ((((l_3631 = ((l_3622 || l_3598.f0) && (((l_3629 = ((uint32_t)l_3622 + (uint32_t)((l_3622 > l_3598.f0) < 65535U))) , l_3630) < l_3622))) <= l_3622) & l_3622) == l_3622)) - (uint16_t)l_3622));
        l_3629 = l_3598.f1;
        if ((func_106(l_3629, (((int16_t)((0xCA66 <= ((int32_t)l_3629 % (int32_t)l_3629)) != ((int16_t)func_42(((int16_t)l_3598.f1 + (int16_t)(l_3650 &= (((int16_t)((l_3642 , ((uint32_t)((l_3649 = func_106(l_3598.f3, (__builtin_ffs(((l_3631 = l_28) , (l_3631 = (((uint32_t)(((int16_t)(l_3598.f2 == l_3598.f4) << (int16_t)l_3598.f2) <= l_3619) % (uint32_t)l_3217) , l_3642.f0)))) , l_3598.f4), l_3642.f0, l_3629, l_3630)) ^ l_3598.f3) % (uint32_t)l_28)) >= 65535U) >> (int16_t)15) , 4)))) + (int16_t)l_3622)) >> (int16_t)1) >= 0U), l_3629, l_3629, l_3642.f0) && l_3651))
        { 
            int32_t l_3656 = (-1);
            union U2 l_3657 = {0x1653};
            l_28 = (func_78((((-5) <= __builtin_bswap64(l_3650)) , (0x0ECBE2B3 && ((((int16_t)(((l_3656 & (l_3657 , l_3629)) , l_38.f0) ^ (0U == l_3630)) >> (int16_t)13) , l_38.f0) <= 0U))), l_3657, l_3642.f0, l_3656, l_3598.f0) , l_3650);
            l_3658 = l_3651;
        }
        else
        { 
            int16_t l_3671 = 3;
            int32_t l_3673 = 3;
            int32_t l_3682 = 0xB5B991FE;
            union U2 l_3720 = {0x4915};
            int32_t l_3752 = 0xDC5844E5;
            uint32_t l_3771 = 4294967294U;
            int32_t l_3773 = 0x92E1E4C4;
            union U0 l_3788 = {4294967291U};
            union U0 l_3789 = {0xFB26062B};
            int16_t l_3803 = 0x7E32;
            int32_t l_3810 = 1;
            union U2 l_3814 = {4U};
            l_3675 |= ((((uint16_t)l_3629 * (uint16_t)(l_3650 = ((((int16_t)0x5ADF - (int16_t)((l_3651 &= (((l_28 = l_3598.f4) & ((uint16_t)l_3631 << (uint16_t)14)) > (((uint32_t)((l_3674 |= ((uint16_t)1U * (uint16_t)__builtin_clzl((((l_3673 ^= ((int16_t)l_3600 + (int16_t)(l_3618 || ((l_3671 < (~0x0B6A0D39)) != l_3671)))) != l_3600) | 65532U)))) & l_38.f0) % (uint32_t)l_38.f3) >= l_3671))) <= l_3622)) || l_3671) <= l_3598.f1))) <= 0x019FB000) < l_3671);
            if ((-(uint32_t)(l_3673 >= (((int16_t)((l_3671 , __builtin_bswap32(l_3674)) != (-4)) + (int16_t)((uint32_t)l_3681 - (uint32_t)(l_3682 = l_3675))) & (~(0xFF33C344 & (func_106((l_28 |= ((uint32_t)__builtin_ctz((l_3686 , l_3687)) % (uint32_t)l_3671)), l_3671, l_3630, l_3598.f1, l_3630) >= 4294967286U)))))))
            { 
                uint32_t l_3688 = 4294967290U;
                int32_t l_3702 = (-8);
                union U1 l_3731 = {-1};
                union U0 l_3732 = {0x54B7409D};
                if (l_3688)
                { 
                    uint32_t l_3698 = 0xD5426059;
                    union U1 l_3699 = {-2};
                    int32_t l_3705 = (-5);
                    for (l_3686.f1 = 24; (l_3686.f1 < 32); l_3686.f1 += 8)
                    { 
                        int32_t l_3693 = 0;
                        union U0 l_3700 = {0xB4C7B4A1};
                        uint32_t l_3701 = 4294967295U;
                        l_3682 &= ((int16_t)(l_3693 , ((uint16_t)l_3693 << (uint16_t)(((uint16_t)func_94(l_3688, l_3673, l_3698, l_3699, l_3700) * (uint16_t)(l_3688 != l_3701)) , l_3701))) - (int16_t)1);
                    }
                    l_3651 |= (0x07EC ^ ((l_3705 |= (((l_3702 = l_3671) && 0xD832B93C) & (((int16_t)(l_3671 == (l_3598.f2 & (l_3642.f1 | l_3699.f0))) % (int16_t)l_3642.f0) ^ (l_3631 < 0x8AF6)))) | l_3686.f3));
                    if (l_3630)
                        continue;
                    for (l_38.f3 = (-26); (l_38.f3 > (-4)); l_38.f3 += 1)
                    { 
                        l_3631 = (-5);
                    }
                }
                else
                { 
                    uint32_t l_3715 = 0x8DBE99F9;
                    uint32_t l_3723 = 5U;
                    int32_t l_3730 = 1;
                    if ((((-(int32_t)((uint16_t)(func_42(__builtin_clzll((((uint16_t)(0xD1AB < (l_3674 = (((uint32_t)0xE477A838 % (uint32_t)func_94(l_3715, l_3702, ((uint16_t)(l_3730 = (l_3702 & ((uint16_t)((l_3720 , (l_3682 = ((int16_t)((l_3723 <= (((int16_t)(((int16_t)((uint32_t)l_3688 % (uint32_t)9) << (int16_t)l_3720.f1) ^ 4294967295U) >> (int16_t)l_38.f0) , l_3702)) , l_3702) * (int16_t)0x5F6B))) , 0U) * (uint16_t)l_3702))) << (uint16_t)l_3715), l_3731, l_3732)) < 0x31AF))) * (uint16_t)l_3732.f3) || 4U))) && 0) * (uint16_t)l_3732.f3)) && l_3720.f1) != l_3651))
                    { 
                        uint32_t l_3735 = 0xF29D0114;
                        union U2 l_3738 = {0U};
                        int32_t l_3753 = (-9);
                        int32_t l_3754 = 0;
                        l_3702 ^= __builtin_clzl(l_3732.f3);
                        l_3675 = (l_3671 < ((uint32_t)l_3650 * (uint32_t)(((l_3735 , (l_3730 = (0x0B78 < l_3702))) && (func_106((((int16_t)(((l_3642 = l_3738) , l_3723) , (-1)) - (int16_t)__builtin_ctzl(((uint16_t)(-(int32_t)((l_3742 = (l_3730 ^ l_3687)) , l_3618)) + (uint16_t)0x5D40))) | l_3673), l_3686.f0, l_3702, l_3629, l_3671) != l_3738.f0)) != 0x4FC5E9DE)));
                        l_3754 |= (l_3753 = ((-(int32_t)(l_3650 = (l_3735 >= l_3686.f3))) < (l_3642 , ((((l_3732 = func_36(func_59(((((l_3682 ^= __builtin_ffsll(((l_3751 = ((l_3618 && __builtin_clz(l_3681)) < (((((~((uint32_t)l_3642.f1 - (uint32_t)(((uint16_t)l_3642.f0 >> (uint16_t)((l_3702 ^= 2U) <= 0xB85CB457)) > 0x583F))) >= l_3738.f0) < l_3651) | l_3738.f1) < 65526U))) ^ l_3720.f0))) || l_3649) > l_3752) | l_3688), l_3671, l_3731.f0, l_28))) , l_3675) >= l_3686.f0) || 0))));
                        if (l_3702)
                            continue;
                    }
                    else
                    { 
                        l_3730 = ((4294967295U > 0x4D943B5C) ^ l_3731.f0);
                    }
                    l_3682 = ((int16_t)(l_3742 , __builtin_popcountll(func_42(l_3671))) * (int16_t)(l_3674 = l_3688));
                }
            }
            else
            { 
                return l_3720;
            }
            if (((int16_t)l_3673 - (int16_t)(l_3759 , (~(((int16_t)((((int16_t)0x7372 >> (int16_t)6) == (((uint16_t)l_3720.f0 << (uint16_t)(l_3759.f3 && 0)) > l_3720.f0)) || ((int32_t)((l_3720 , ((int16_t)__builtin_ia32_crc32qi(__builtin_ctzl((__builtin_bswap32((l_3649 = (l_3752 ^= l_3771))) & l_3598.f4)), l_3771) << (int16_t)l_3686.f0)) & l_3772) - (int32_t)l_3773)) << (int16_t)l_3759.f1) < 0xD154)))))
            { 
                uint16_t l_3774 = 0U;
                int32_t l_3790 = (-1);
                l_3773 = (l_3774 != (((l_3618 != (((~((int16_t)0xF8D7 % (int16_t)(0 || 0xD7BB555F))) || (((uint32_t)l_3774 + (uint32_t)l_3771) , ((uint16_t)((int16_t)(((((((0x31C35E2F && ((l_3622 & l_3771) , l_3774)) > l_3774) , l_3752) , 0x1B13C22B) == 0x42A2A5BA) > 0x121C) ^ 65530U) << (int16_t)l_3771) << (uint16_t)2))) | l_3774)) ^ l_3774) & 0x055A));
                l_3793 |= (__builtin_bswap64(l_3598.f3) , (1U >= ((int32_t)(((int16_t)((l_3789 = l_3788) , (l_3790 = 0xECCF)) << (int16_t)l_3788.f4) | (__builtin_popcount(l_3774) < ((int32_t)0x48342A8B + (int32_t)0U))) + (int32_t)4294967292U)));
                if (l_3675)
                    continue;
                if (l_38.f0)
                    break;
            }
            else
            { 
                uint32_t l_3811 = 4294967290U;
                int32_t l_3813 = 0;
                int32_t l_3815 = (-1);
                union U1 l_3818 = {-6};
                for (l_3788.f3 = (-18); (l_3788.f3 == (-11)); l_3788.f3 += 1)
                { 
                    int32_t l_3796 = 0xB01FC16E;
                    int32_t l_3838 = 0xD7EFC36E;
                    l_3796 &= l_3789.f2;
                    l_3815 = ((uint16_t)(((l_3796 = 0x5815) , __builtin_ia32_crc32qi(((((l_3673 &= (l_3813 &= (((int16_t)((l_3674 & (0x9335 < 0)) , (((((((uint16_t)((l_3789.f2 < l_3803) ^ l_3686.f0) * (uint16_t)(l_3811 = ((((int16_t)(((uint16_t)((int16_t)1 % (int16_t)l_3759.f4) >> (uint16_t)7) > l_3682) + (int16_t)l_3671) ^ l_3810) >= l_3642.f0))) , l_3619) | 8U) < l_3681) , l_3812) , l_3674)) << (int16_t)14) < l_3788.f3))) , l_3814) , l_3642) , l_3813), l_3815)) & l_3682) + (uint16_t)0x0D6F);
                    l_3681 ^= ((((int16_t)(-6) % (int16_t)((((l_3818 , ((int16_t)(0x07722AA4 || ((int16_t)((uint16_t)((uint16_t)l_3796 >> (uint16_t)(((uint32_t)(l_3838 = (l_3813 = (((uint16_t)l_3810 >> (uint16_t)l_3651) , (0xD6BA430A < (((int16_t)((uint32_t)0x110CC3CA + (uint32_t)((int16_t)(((l_3759.f3 > l_3674) < l_3837) ^ 0xBD3C) - (int16_t)l_3598.f0)) >> (int16_t)l_3796) > 1U))))) % (uint32_t)l_3674) == l_3796)) >> (uint16_t)9) * (int16_t)l_3687)) >> (int16_t)10)) , l_3650) <= l_3651) & 0x8C6B)) != l_28) | 0xACC3BC45);
                    return l_3814;
                }
                for (l_3686.f1 = (-27); (l_3686.f1 >= 55); l_3686.f1 += 1)
                { 
                    l_3629 ^= l_3650;
                }
                l_3815 = l_3598.f1;
            }
            for (l_3788.f2 = 0; (l_3788.f2 == 19); l_3788.f2 += 1)
            { 
                int16_t l_3847 = (-10);
                int32_t l_3848 = 4;
                l_3848 = func_106((l_3773 | ((l_3674 = func_65(((((l_3843 <= ((uint16_t)(func_33(l_3759, l_3846) < (-1)) % (uint16_t)l_3847)) && (l_3681 = (((l_3812.f1 >= 65535U) ^ l_3629) == 0))) > l_3598.f0) , 4294967295U), l_3847, l_38)) , l_3814.f1)), l_3789.f3, l_38.f0, l_3759.f3, l_3788.f1);
                l_3848 = __builtin_bswap32(l_3619);
                l_3682 = (-8);
            }
        }
        l_3649 = (((uint16_t)((l_3629 = l_3759.f0) == (l_3686.f3 != l_3772)) >> (uint16_t)15) , ((int32_t)9 + (int32_t)l_3651));
    }
    return l_3812;
}




inline static uint32_t  func_33(union U0  p_34, int32_t  p_35)
{ 
    uint16_t l_3218 = 65535U;
    int32_t l_3219 = 0xFB1646E8;
    int32_t l_3231 = 0;
    uint32_t l_3247 = 1U;
    union U1 l_3262 = {0};
    uint32_t l_3285 = 0xCEE8C0E0;
    uint16_t l_3410 = 0xD2C6;
    int16_t l_3507 = 0xDA81;
    union U0 l_3511 = {0xFDB8722C};
    uint32_t l_3534 = 0xFF36CC1A;
    int32_t l_3566 = (-1);
    int32_t l_3591 = 0;
    l_3219 = __builtin_parityll(l_3218);
    if (p_34.f3)
    { 
        uint32_t l_3222 = 1U;
        for (p_35 = (-16); (p_35 > 3); p_35 += 1)
        { 
            l_3222 = p_34.f0;
        }
    }
    else
    { 
        uint32_t l_3225 = 0U;
        int32_t l_3236 = 0x24BC1E70;
        int32_t l_3237 = 1;
        for (p_34.f3 = 0; (p_34.f3 > (-28)); p_34.f3 -= 3)
        { 
            uint32_t l_3230 = 4294967287U;
            int32_t l_3232 = 0x4E605995;
            int32_t l_3235 = 0;
            union U1 l_3241 = {1};
            if (((((l_3225 = p_34.f3) < (l_3237 = (l_3236 = ((int16_t)l_3218 + (int16_t)(((l_3231 = (l_3219 = __builtin_ctzl((l_3230 ^= p_35)))) | p_34.f3) | (((l_3232 = 0x2EA1) != (((p_35 & ((int16_t)(-1) << (int16_t)12)) != ((l_3235 > l_3235) <= l_3236)) <= p_35)) <= p_34.f3)))))) , p_35) & 0))
            { 
                return p_34.f3;
            }
            else
            { 
                l_3236 &= (p_34.f3 >= (!p_34.f3));
            }
            for (l_3230 = 20; (l_3230 != 4); l_3230 -= 2)
            { 
                int16_t l_3242 = (-2);
                l_3237 = ((l_3241 , l_3242) == (l_3231 = ((uint16_t)(l_3219 = l_3232) >> (uint16_t)5)));
            }
        }
    }
    if ((l_3219 = (0U == (((int16_t)((p_34.f3 & 0xAB74) & func_100(l_3247, func_100(p_34.f3, (l_3231 = p_35)))) << (int16_t)12) > (((((uint16_t)((uint16_t)(__builtin_ffsl(l_3247) , 1U) << (uint16_t)13) + (uint16_t)p_35) >= (-10)) | 3U) | l_3218)))))
    { 
        uint32_t l_3261 = 4294967290U;
        union U0 l_3283 = {0x9C41C722};
        for (p_34.f4 = 0; (p_34.f4 == 5); p_34.f4 += 1)
        { 
            uint32_t l_3254 = 0U;
            int32_t l_3265 = 0;
            uint32_t l_3266 = 0x32D18105;
            union U2 l_3278 = {5U};
            union U1 l_3282 = {0};
            l_3254 = 0x1FBE2FB6;
            if (((((l_3219 > 0x3C55) | (-1)) && 0x0E5209E8) == ((uint16_t)__builtin_clz((((uint32_t)((((int16_t)p_34.f0 * (int16_t)((p_34.f0 <= (l_3261 == (func_36(l_3262) , p_35))) < 0U)) , l_3231) > 4294967289U) % (uint32_t)l_3247) , 2U)) % (uint16_t)0x4A0F)))
            { 
                l_3265 = ((uint16_t)l_3261 << (uint16_t)0);
                return l_3266;
            }
            else
            { 
                int32_t l_3279 = 0x81AF9787;
                int32_t l_3284 = 1;
                l_3265 = func_42(p_35);
                l_3284 = ((uint16_t)((((((uint16_t)((uint16_t)l_3261 << (uint16_t)0) * (uint16_t)0) && p_34.f0) | (l_3279 = func_94((((((int16_t)((l_3231 = l_3254) >= (~(((int16_t)((((l_3278 , ((func_94((4294967287U & l_3279), ((uint16_t)(__builtin_ia32_crc32qi(l_3266, ((l_3279 , 0x9384B6FD) || l_3279)) , p_34.f4) * (uint16_t)l_3279), p_34.f1, l_3282, p_34) < l_3261) ^ l_3254)) && 0xB5E93056) && 1) , 0x9E4F) * (int16_t)0x28AD) < 0xEA907463))) % (int16_t)p_34.f4) == (-7)) == 0U) <= 9), l_3261, l_3279, l_3262, l_3283))) ^ 0x323F4250) , l_3254) + (uint16_t)l_3265);
            }
        }
    }
    else
    { 
        uint16_t l_3289 = 0x8C14;
        int16_t l_3293 = 0xA5FC;
        int32_t l_3294 = 0;
        union U1 l_3300 = {0};
        int16_t l_3346 = 0x4067;
        union U0 l_3401 = {0x67ABFC6B};
        int32_t l_3456 = 0x9783E44E;
        int32_t l_3472 = (-1);
        union U2 l_3482 = {0xCCD9};
        int16_t l_3487 = 0;
        int32_t l_3535 = 0x69ED2333;
        l_3231 ^= (l_3285 = (-10));
        for (l_3285 = 18; (l_3285 >= 1); l_3285 -= 1)
        { 
            uint32_t l_3288 = 0xC978934D;
            l_3288 = (-8);
            l_3231 &= (l_3219 = l_3289);
        }
        l_3231 = (!(l_3289 , (l_3294 = ((int16_t)l_3218 % (int16_t)(func_42((l_3293 = p_35)) || p_35)))));
        if ((0x0B541A92 | 6U))
        { 
            union U1 l_3299 = {0x0C8E};
            uint32_t l_3319 = 0x974A7C65;
            int32_t l_3320 = (-3);
            int32_t l_3321 = 2;
            uint32_t l_3364 = 0xD11457FE;
            union U0 l_3400 = {4294967295U};
            union U2 l_3411 = {1U};
            union U1 l_3510 = {0xA6E3};
            int32_t l_3514 = 0x722AD63E;
            union U1 l_3555 = {0};
            if (((((0xA6689E25 < 0x6A8EDB6B) ^ l_3247) , (((p_35 | ((int16_t)0xB53C >> (int16_t)8)) > __builtin_bswap32(p_34.f3)) < (((int16_t)((l_3300 = l_3299) , (l_3299.f3 ^ l_3231)) << (int16_t)p_34.f3) | p_35))) < 0x72F1))
            { 
                int32_t l_3301 = 4;
                union U1 l_3316 = {0x1CFF};
                l_3301 = p_35;
                l_3294 = l_3301;
                l_3219 |= p_34.f3;
                l_3321 = (l_3320 = (((uint32_t)((uint16_t)65533U * (uint16_t)(((uint16_t)l_3218 % (uint16_t)((((int16_t)(-5) >> (int16_t)5) , ((uint32_t)__builtin_popcountll(p_34.f3) - (uint32_t)(l_3299.f0 == (((uint16_t)func_100((((((((uint16_t)(l_3316 , ((uint16_t)l_3301 * (uint16_t)l_3316.f0)) + (uint16_t)p_35) >= 0xDC2006C5) | 1) >= 0xE5869499) || p_34.f3) | l_3289), p_34.f3) % (uint16_t)p_35) ^ 65526U)))) | l_3319)) <= l_3285)) + (uint32_t)l_3285) != p_35));
            }
            else
            { 
                union U1 l_3329 = {0x06E1};
                uint32_t l_3339 = 0xF40E07BC;
                int32_t l_3341 = 0x53882F06;
                union U0 l_3424 = {0U};
                int16_t l_3454 = 0x4561;
                int32_t l_3512 = (-4);
                if (p_34.f3)
                { 
                    int32_t l_3340 = 8;
                    int32_t l_3343 = 4;
                    for (l_3321 = 6; (l_3321 == 7); l_3321 += 1)
                    { 
                        uint16_t l_3332 = 65533U;
                        int16_t l_3335 = 1;
                        int32_t l_3342 = 0x3BA83663;
                        l_3342 = ((((int16_t)(((uint16_t)((((~(l_3329 , ((int16_t)l_3332 * (int16_t)p_35))) > (((uint16_t)func_42(l_3335) - (uint16_t)(func_42((p_34.f3 = (l_3341 ^= ((((~(-3)) , ((uint32_t)0xB386BFE8 + (uint32_t)__builtin_popcountll(l_3339))) < l_3332) >= l_3340)))) & 1)) < p_35)) || 0U) & l_3299.f0) + (uint16_t)1U) ^ l_3340) >> (int16_t)l_3299.f3) || l_3300.f3) ^ 0x6CE3A1D8);
                        l_3343 = l_3219;
                        l_3231 = (0xFEABDEF8 > (((((l_3342 = l_3219) <= (((uint16_t)l_3346 << (uint16_t)((uint32_t)((uint32_t)((int16_t)6 + (int16_t)(((((int32_t)(func_59(p_34.f3, p_34.f3, ((int16_t)p_34.f3 >> (int16_t)l_3300.f0), p_35) , 1) + (int32_t)(-1)) , p_34.f3) == p_35) , p_35)) + (uint32_t)0x35C0C893) % (uint32_t)l_3340)) <= 0x676BD8C8)) == 1U) ^ 0x2E40) > 0xC0AF));
                    }
                    l_3219 = (((((uint16_t)p_35 << (uint16_t)((uint16_t)p_34.f3 >> (uint16_t)((-(int16_t)p_35) >= func_100((0x0CC6 != (((int16_t)l_3364 << (int16_t)(l_3289 || (l_3299.f3 == p_34.f3))) < (l_3343 = ((int16_t)((uint16_t)func_100(((int16_t)0 % (int16_t)l_3218), l_3329.f0) * (uint16_t)l_3289) * (int16_t)l_3340)))), l_3294)))) == l_3341) ^ l_3299.f0) | 0x23B9);
                }
                else
                { 
                    uint32_t l_3375 = 0x0CF095F5;
                    l_3294 = ((uint16_t)p_34.f3 + (uint16_t)(l_3300 , l_3375));
                }
                if (l_3299.f0)
                { 
                    uint32_t l_3384 = 0x6DE72D2D;
                    int32_t l_3397 = (-5);
                    union U2 l_3412 = {9U};
                    int32_t l_3432 = 0x2716CB6B;
                    l_3341 = (6 > ((int32_t)0x27600BFB - (int32_t)((l_3397 = ((int16_t)(((int16_t)__builtin_ia32_crc32qi((l_3299.f0 >= (l_3299.f3 <= (((int32_t)l_3384 - (int32_t)((uint16_t)((uint32_t)(((int16_t)l_3329.f0 << (int16_t)11) == (((l_3219 = (l_3285 > (p_34.f3 && ((int16_t)(p_34.f3 = ((uint16_t)((uint32_t)(p_34.f3 | l_3319) - (uint32_t)8) * (uint16_t)l_3346)) << (int16_t)l_3339)))) ^ 0x4419C105) , p_34.f3)) - (uint32_t)l_3218) - (uint16_t)l_3364)) >= l_3262.f3))), l_3293) + (int16_t)l_3294) < p_35) >> (int16_t)9)) && p_35)));
                    l_3219 ^= p_35;
                    if ((__builtin_popcount(p_35) || (((((((((l_3401 = l_3400) , ((uint16_t)((uint16_t)(l_3320 &= (l_3401.f3 ^ (__builtin_parityll((p_34.f3 & ((l_3364 , func_78(p_34.f3, (((int16_t)l_3319 + (int16_t)((((((int16_t)l_3410 * (int16_t)l_3397) <= p_34.f3) != (-4)) , l_3411) , p_34.f3)) , l_3412), l_3410, p_34.f3, l_3412.f1)) , l_3401.f2))) && l_3294))) * (uint16_t)65535U) * (uint16_t)p_34.f3)) & l_3300.f0) , 0U) <= p_35) || 0x27DE) & p_34.f3) != l_3346) != 0x71DB)))
                    { 
                        int16_t l_3419 = 0x1DB0;
                        l_3341 = ((uint16_t)p_34.f3 << (uint16_t)15);
                        l_3397 |= ((int16_t)((uint32_t)func_100(p_35, (l_3419 = (l_3300.f3 && l_3219))) + (uint32_t)(-1)) << (int16_t)11);
                    }
                    else
                    { 
                        int32_t l_3429 = 0;
                        l_3432 = (l_3411 , ((int16_t)((int32_t)(((l_3300.f0 < (l_3424 , ((((int32_t)(((uint16_t)((l_3429 ^ ((p_34.f4 = (((int16_t)(l_3319 > l_3429) >> (int16_t)14) & ((l_3397 ^= (l_3424.f2 > (((l_3412.f0 != (p_34.f3 <= p_34.f3)) <= 0xC3951D44) || l_3429))) & l_3321))) , l_3294)) > l_3262.f3) * (uint16_t)0x3505) >= 9U) - (int32_t)0x4B226926) , l_3400.f0) > 0x1534C3AB))) >= l_3294) ^ l_3300.f3) % (int32_t)l_3299.f3) << (int16_t)6));
                    }
                    l_3432 = l_3262.f3;
                }
                else
                { 
                    int32_t l_3445 = (-6);
                    int32_t l_3455 = 1;
                    union U2 l_3459 = {0x0F20};
                    union U1 l_3508 = {0x950E};
                    int32_t l_3541 = 0x40004323;
                    union U0 l_3556 = {4294967295U};
                    int32_t l_3565 = 0x53387EB1;
                    for (l_3231 = 0; (l_3231 > (-28)); l_3231 -= 2)
                    { 
                        uint32_t l_3453 = 4294967295U;
                        int32_t l_3471 = 0xE376D7BF;
                        l_3456 &= ((uint16_t)((int32_t)((l_3321 = (l_3401.f2 , ((uint16_t)((uint32_t)l_3424.f4 + (uint32_t)((int16_t)(l_3455 = (((((-1) < (l_3285 , l_3445)) , (p_34.f2 = (l_3454 &= (-(int32_t)(__builtin_popcount(((l_3424.f2 && (l_3294 ^= (((int16_t)((int32_t)0xDB7039A3 - (int32_t)func_65(p_35, ((uint32_t)(p_34.f3 > l_3445) % (uint32_t)p_34.f3), l_3262)) << (int16_t)9) && l_3364))) & l_3445)) != l_3453))))) > l_3285) < (-1))) >> (int16_t)1)) * (uint16_t)p_35))) && 0x88155D4B) - (int32_t)l_3320) * (uint16_t)0U);
                        l_3341 = (p_35 & __builtin_popcount(func_42(p_34.f2)));
                        l_3455 = ((uint16_t)(l_3459 , ((int16_t)(func_106(p_35, (((l_3294 &= (__builtin_ctzll((-(uint32_t)0xD86FA23D)) >= (((int16_t)p_34.f0 << (int16_t)9) , (((int16_t)(((int32_t)((uint16_t)(l_3219 ^= l_3453) * (uint16_t)__builtin_bswap64((l_3472 ^= (l_3471 = l_3453)))) - (int32_t)((l_3321 |= ((l_3456 = (0x452E & 1U)) && l_3455)) == p_34.f1)) ^ l_3401.f4) * (int16_t)p_34.f0) ^ l_3453)))) != (-6)) == l_3262.f0), l_3400.f0, l_3459.f0, l_3401.f1) != 0xCFC23667) - (int16_t)l_3454)) * (uint16_t)p_35);
                    }
                    if ((func_36(l_3299) , (~func_100(l_3400.f2, p_34.f3))))
                    { 
                        uint32_t l_3485 = 0x354CAE85;
                        l_3294 |= (l_3219 = (func_36(func_59(l_3400.f2, ((uint16_t)((uint16_t)65535U << (uint16_t)(65535U != ((int16_t)(((int16_t)((__builtin_popcountll((l_3482 , __builtin_ffs(__builtin_popcount(l_3321)))) || (l_3485 |= (((((int16_t)(l_3299 , 1) * (int16_t)p_35) || l_3321) , 0) < l_3247))) != 0) << (int16_t)14) >= 0x5CDD9D3A) >> (int16_t)p_34.f3))) % (uint16_t)l_3219), l_3410, l_3400.f4)) , p_35));
                        l_3231 = 0x897EA1D7;
                        l_3341 ^= 0x9E102D2C;
                    }
                    else
                    { 
                        int32_t l_3486 = 0;
                        union U2 l_3488 = {0xBC7D};
                        uint32_t l_3493 = 0xDA0692BA;
                        uint16_t l_3502 = 0x7698;
                        uint16_t l_3509 = 65526U;
                        int32_t l_3513 = 0x7923D894;
                        int32_t l_3515 = 1;
                        l_3472 = (l_3455 >= (l_3486 , (((l_3294 = l_3487) >= 0x9D76E006) != ((l_3488 , p_34.f3) | ((uint16_t)(((p_35 , (((uint16_t)((func_59(l_3400.f1, l_3262.f0, l_3488.f0, p_34.f3) , l_3262.f0) , p_34.f3) - (uint16_t)1U) > l_3219)) , p_35) | l_3424.f2) * (uint16_t)l_3493)))));
                        l_3515 &= ((int16_t)((uint16_t)(((l_3514 ^= (l_3513 |= ((l_3512 ^= ((int16_t)(func_94(p_35, (1 < (l_3321 >= l_3262.f0)), ((int32_t)(l_3320 = l_3502) + (int32_t)l_3247), ((((((p_34.f3 = ((uint16_t)(l_3459.f1 , 1U) << (uint16_t)l_3509)) <= l_3424.f2) || 65527U) | l_3300.f0) >= 0) , l_3510), l_3511) > p_35) * (int16_t)l_3341)) != p_35))) != l_3218) != (-1)) << (uint16_t)11) << (int16_t)l_3411.f0);
                    }
                    if (((func_100(p_34.f3, (l_3514 = 1U)) | ((l_3472 = (p_34.f3 & p_35)) && l_3219)) , (l_3231 = func_106((0xB33C7CF9 & (l_3510.f0 != (l_3299.f3 > p_34.f3))), l_3424.f4, l_3508.f0, l_3459.f1, p_35))))
                    { 
                        l_3456 = p_35;
                    }
                    else
                    { 
                        int16_t l_3523 = 1;
                        union U1 l_3536 = {2};
                        int16_t l_3540 = (-1);
                        int32_t l_3552 = 0x506EF295;
                        l_3472 &= (p_35 >= func_65((((int16_t)(!((uint16_t)(!p_34.f3) << (uint16_t)11)) * (int16_t)(((~l_3482.f1) <= l_3523) & ((l_3512 = p_35) && ((0x081C1CD6 < (l_3514 = ((int32_t)((int32_t)((int32_t)((int16_t)__builtin_popcount((l_3508.f3 == (1 >= (l_3456 = (((l_3320 &= ((int16_t)(l_3534 ^ l_3424.f3) * (int16_t)l_3299.f0)) < p_34.f3) <= (-7)))))) >> (int16_t)l_3401.f0) - (int32_t)l_3523) - (int32_t)6) - (int32_t)4294967295U))) < l_3535)))) > l_3459.f1), p_34.f3, l_3536));
                        l_3541 = (l_3320 = ((((l_3536.f0 ^ l_3401.f2) <= (p_35 && (p_34.f3 <= p_34.f3))) < ((l_3455 |= (func_59((p_35 <= ((uint16_t)(!(l_3540 ^= __builtin_popcountl((p_35 >= l_3329.f3)))) % (uint16_t)l_3536.f3)), l_3285, p_34.f3, l_3454) , l_3536.f0)) == l_3508.f0)) > 65535U));
                        l_3455 = ((int16_t)l_3510.f0 % (int16_t)(l_3541 = func_94(p_35, l_3299.f0, ((((func_42((l_3472 ^= (((uint16_t)(((int16_t)l_3535 - (int16_t)(l_3456 = 65532U)) & l_3424.f1) + (uint16_t)(-(int16_t)l_3411.f1)) < func_65((~(l_3219 = (((uint32_t)p_34.f3 - (uint32_t)l_3455) == l_3339))), l_3512, l_3329)))) && l_3523) < p_34.f3) ^ l_3424.f1) < 0x4AC5), l_3508, l_3401)));
                        l_3552 = l_3507;
                    }
                    l_3566 ^= ((((int32_t)((0x6D924F21 >= l_3400.f0) < (l_3219 = ((l_3329 , ((l_3555 , l_3556) , ((uint32_t)0x6B7F66F1 % (uint32_t)p_34.f3))) < (((((uint32_t)(((uint16_t)(65532U ^ (((int16_t)l_3565 - (int16_t)0xFBBE) && l_3329.f0)) % (uint16_t)p_34.f3) | 3U) + (uint32_t)(-1)) & l_3341) , l_3400) , 0x7A43)))) + (int32_t)p_35) , 3U) <= 0x7809);
                }
                for (l_3319 = (-1); (l_3319 > 56); l_3319 += 7)
                { 
                    l_3512 = ((((__builtin_bswap64(p_35) == l_3401.f4) > ((!((p_35 || l_3262.f0) | (l_3329 , (l_3321 ^= (p_34.f2 = 1U))))) , (p_34.f2 |= (l_3514 = 0xE13746AC)))) ^ 6) <= 1U);
                }
                l_3294 = (~p_35);
            }
            for (l_3410 = 0; (l_3410 == 57); l_3410 += 3)
            { 
                int32_t l_3573 = 0x617DAC6D;
                int32_t l_3584 = 0x015F75C7;
                l_3294 = l_3573;
                if (l_3573)
                    continue;
                l_3321 &= (((((l_3219 &= ((int16_t)__builtin_bswap32(((l_3231 = ((uint32_t)(l_3472 ^= p_34.f3) - (uint32_t)((uint16_t)(((uint16_t)l_3534 * (uint16_t)(0x81E5 >= __builtin_popcountll(l_3555.f0))) ^ (l_3584 &= (8U || (((int16_t)p_34.f3 % (int16_t)p_34.f3) , 0)))) + (uint16_t)p_34.f3))) , p_34.f3)) + (int16_t)p_35)) == l_3555.f0) | 0x40CA) ^ l_3364) >= l_3510.f3);
                l_3320 = l_3573;
            }
            l_3566 = ((l_3299 , 1U) && ((uint32_t)((int16_t)func_42((((int32_t)(1U && l_3591) - (int32_t)l_3511.f1) <= (__builtin_ia32_crc32qi(((int32_t)0xE8D13863 + (int32_t)p_35), (((uint16_t)(((l_3262.f3 & (~l_3231)) >= 0x491D) | l_3401.f0) % (uint16_t)0x47E7) ^ 4)) < l_3410))) << (int16_t)3) + (uint32_t)0U));
        }
        else
        { 
            return l_3401.f3;
        }
    }
    return p_34.f3;
}




inline static union U0  func_36(union U1  p_37)
{ 
    int16_t l_39 = 0xFA97;
    int32_t l_2808 = 9;
    int32_t l_2809 = 0x4C3612E4;
    union U0 l_2828 = {6U};
    union U1 l_2874 = {0xE8EC};
    int32_t l_2902 = 2;
    int32_t l_2952 = (-1);
    int32_t l_3022 = 8;
    uint16_t l_3023 = 8U;
    union U2 l_3047 = {5U};
    uint16_t l_3056 = 0U;
    int32_t l_3058 = 0x04A2BC28;
    union U1 l_3060 = {0x588E};
    int32_t l_3075 = 1;
    uint16_t l_3148 = 65532U;
    int32_t l_3216 = 0x43BB2973;
    if (l_39)
    { 
        uint32_t l_46 = 0x0DCEE052;
        union U1 l_2747 = {6};
        int32_t l_2810 = 0xC6270ABB;
        int16_t l_2826 = 0;
        union U2 l_2848 = {0U};
        union U0 l_2849 = {0x254068EF};
        int32_t l_2850 = 0;
        uint16_t l_2872 = 0x52C1;
        l_2809 = (l_2808 = (((int16_t)(((func_42(((((uint16_t)l_46 * (uint16_t)((uint16_t)((uint16_t)p_37.f3 * (uint16_t)0x3E1B) % (uint16_t)(((int16_t)5 * (int16_t)__builtin_ctzl(p_37.f3)) ^ (p_37.f3 | l_39)))) <= (((uint16_t)((int32_t)((uint16_t)((l_2747 = func_59(l_46, p_37.f0, l_46, l_39)) , l_46) * (uint16_t)0xF653) % (int32_t)p_37.f3) + (uint16_t)0xEE48) <= 0xF4D1)) <= l_46)) , p_37.f3) == l_39) <= l_39) % (int16_t)l_39) || p_37.f0));
        l_2810 &= 0x012F7BEE;
        l_2809 = (p_37.f3 ^ 0x67CEA1B8);
        for (p_37.f1 = 0; (p_37.f1 != 6); p_37.f1 += 3)
        { 
            int16_t l_2827 = 0xC263;
            union U0 l_2835 = {0x423AF6EB};
            uint32_t l_2836 = 0xFE0B3679;
            union U1 l_2837 = {-1};
            int32_t l_2838 = 0x17B9788C;
            l_2810 |= p_37.f3;
            for (l_2747.f1 = 0; (l_2747.f1 <= 35); l_2747.f1 += 1)
            { 
                uint16_t l_2823 = 0x7D7C;
                l_2810 = ((uint16_t)((int16_t)(l_2809 & (((p_37.f2 <= (((int16_t)((__builtin_ffsll(p_37.f1) ^ ((p_37.f0 < ((uint16_t)l_2823 >> (uint16_t)func_106(__builtin_ffsl(p_37.f2), (l_2808 ^= ((int32_t)(p_37.f0 == l_2826) % (int32_t)p_37.f3)), p_37.f0, p_37.f0, l_2823))) == 0xEAD2)) >= 0) * (int16_t)l_2827) ^ 0x3718E018)) > l_2747.f1) , p_37.f1)) * (int16_t)p_37.f2) + (uint16_t)l_2827);
                return l_2828;
            }
            if (((uint32_t)0U + (uint32_t)func_94(p_37.f1, l_2827, (__builtin_parityl(((func_42((p_37.f2 != (l_39 <= l_2827))) , l_2828) , (((l_2810 = (((uint16_t)(((int16_t)(l_2835 , l_2836) % (int16_t)l_2828.f0) | p_37.f1) >> (uint16_t)p_37.f1) ^ (-1))) != 1) ^ 0x7AE2))) | p_37.f1), l_2837, l_2835)))
            { 
                uint32_t l_2875 = 0x14A98576;
                int32_t l_2881 = 0x71D5DD89;
                int32_t l_2883 = 0xEFDCB3D3;
                l_2838 |= l_2828.f4;
                l_2838 = ((((uint16_t)((int16_t)(l_2747.f3 != ((((uint16_t)(l_39 ^ 1) * (uint16_t)p_37.f1) < ((!4U) == ((uint16_t)(l_2848 , ((l_2808 && (func_94(((__builtin_popcountll(p_37.f1) < p_37.f2) & l_2747.f3), l_2828.f1, l_2835.f3, p_37, l_2849) > l_2850)) <= l_2837.f3)) << (uint16_t)l_2809))) || l_2838)) << (int16_t)10) * (uint16_t)p_37.f0) == 0x0AD1D4D7) >= l_2828.f4);
                for (l_2808 = (-19); (l_2808 <= (-13)); l_2808 += 1)
                { 
                    uint32_t l_2855 = 4294967294U;
                    int32_t l_2867 = (-9);
                    int32_t l_2868 = 0x0338D3CA;
                    for (l_2835.f3 = 2; (l_2835.f3 != 18); l_2835.f3 += 1)
                    { 
                        int16_t l_2873 = 0xAC53;
                        int32_t l_2876 = 1;
                        int32_t l_2877 = 0x2AE7AA65;
                        if (l_2855)
                            break;
                        if (p_37.f3)
                            break;
                        l_2877 ^= (l_2809 = ((uint32_t)l_2828.f0 - (uint32_t)(0x1E191CE1 > (l_2876 = ((l_2875 = ((uint16_t)(!__builtin_popcount((l_2838 = ((uint16_t)((int16_t)((uint32_t)(l_2850 ^ func_65((((((l_2867 |= l_39) & func_65(p_37.f0, l_2855, func_59(p_37.f1, (l_2868 = p_37.f2), ((int32_t)(((-(int32_t)(__builtin_ffsl(l_2747.f3) > p_37.f3)) & l_2855) && p_37.f2) + (int32_t)l_2872), l_2873))) ^ p_37.f2) && p_37.f1) | 4294967294U), l_39, l_2874)) % (uint32_t)p_37.f2) - (int16_t)l_2836) << (uint16_t)p_37.f3)))) * (uint16_t)8U)) , p_37.f2)))));
                        l_2810 &= ((((((uint16_t)((func_106(((-(int16_t)0xAC49) && p_37.f2), (l_2881 && p_37.f2), (p_37.f2 , ((l_2883 = (-(int16_t)l_2828.f3)) != (l_2838 &= p_37.f1))), l_2877, l_2868) == (-8)) , p_37.f3) >> (uint16_t)l_2855) , 7U) != 0x25C9DDB9) ^ p_37.f1) >= 0U);
                    }
                }
                for (l_2848.f1 = 0; (l_2848.f1 > 4); l_2848.f1 += 7)
                { 
                    l_2808 = ((uint32_t)(l_2881 > 0xDA0E) - (uint32_t)(((int32_t)p_37.f2 % (int32_t)p_37.f2) | ((uint16_t)func_100((p_37.f0 , 7), ((int32_t)(l_2838 = func_100((~(l_2881 & p_37.f0)), l_2828.f4)) + (int32_t)9U)) * (uint16_t)(-1))));
                }
            }
            else
            { 
                l_2810 &= (-6);
            }
        }
    }
    else
    { 
        uint16_t l_2895 = 0x6E74;
        int32_t l_2904 = 0xBA1DD793;
        union U2 l_2909 = {65535U};
        l_2902 = ((p_37.f3 & (((l_2808 = l_2895) == ((uint16_t)(8 | ((uint32_t)(((int16_t)((1U && (__builtin_ffsl(p_37.f3) | l_2895)) , (l_2809 = 0x9A54)) * (int16_t)l_2828.f4) > 0xC39C9D94) % (uint32_t)p_37.f0)) >> (uint16_t)6)) , p_37.f0)) > p_37.f0);
        l_2904 ^= (-(int32_t)l_2895);
        l_2809 = ((func_78(((l_2895 > p_37.f3) != (0x73D4 == (((uint32_t)(((l_2895 || (p_37.f3 ^ ((p_37.f3 < l_2895) >= (((uint16_t)(l_2904 = 0U) >> (uint16_t)l_2895) , 4294967292U)))) == l_2828.f2) >= 0x1401) % (uint32_t)p_37.f3) <= l_2874.f3))), l_2909, l_2909.f0, l_2895, l_2909.f1) , p_37.f3) < l_2874.f0);
    }
    for (l_2874.f2 = 0; (l_2874.f2 <= 28); l_2874.f2 += 9)
    { 
        uint32_t l_2926 = 0x5DBDFDDC;
        int32_t l_2930 = 1;
        uint32_t l_2940 = 0x0ADFBA6F;
        int32_t l_3048 = 0x95090CE4;
        int16_t l_3057 = 0xB69B;
        union U0 l_3059 = {0U};
        int32_t l_3072 = (-4);
        union U1 l_3097 = {0x8CF6};
        union U1 l_3120 = {0xAF3B};
        int16_t l_3125 = 0x8B0E;
        union U2 l_3180 = {1U};
        for (l_2902 = 0; (l_2902 == (-18)); l_2902 -= 7)
        { 
            union U0 l_2916 = {0U};
            int32_t l_2927 = 8;
            union U2 l_3024 = {6U};
            l_2927 &= (((p_37.f3 > 0x5C2A3DA7) | (((((int32_t)(l_2916 , p_37.f3) % (int32_t)l_2809) | 65535U) < ((int16_t)(l_2926 = ((int32_t)l_2828.f2 % (int32_t)(((~func_100(((int16_t)1 * (int16_t)((int16_t)(((7 & 1U) ^ p_37.f0) & p_37.f3) << (int16_t)p_37.f0)), p_37.f0)) != p_37.f3) , p_37.f0))) << (int16_t)6)) < p_37.f0)) < p_37.f3);
            if (__builtin_ffs(p_37.f3))
            { 
                uint16_t l_2928 = 0U;
                l_2928 = l_2926;
                l_2809 = (l_2926 & (l_2928 && 0x83FFB38B));
                l_2809 = ((l_2928 || (~(l_2930 &= 0x1E6D))) == ((uint16_t)p_37.f3 * (uint16_t)func_106(p_37.f0, ((((int16_t)p_37.f0 + (int16_t)__builtin_ia32_crc32qi(p_37.f3, l_2916.f1)) >= l_2828.f3) <= 0x234C), p_37.f0, p_37.f0, p_37.f3)));
            }
            else
            { 
                union U2 l_2951 = {0U};
                int32_t l_2954 = 1;
                uint32_t l_2956 = 8U;
                union U1 l_3009 = {1};
                if (l_2828.f0)
                    break;
                l_2927 ^= p_37.f0;
                if (((uint16_t)p_37.f0 >> (uint16_t)(l_2809 = (((int16_t)(~(p_37.f0 & l_2940)) - (int16_t)(__builtin_ctzll((l_2930 = (p_37.f0 ^ 5))) > (((l_39 >= __builtin_ffsll(p_37.f0)) >= (-1)) , 0xE036))) < p_37.f3))))
                { 
                    uint16_t l_2944 = 0x6704;
                    int16_t l_2953 = 0x9196;
                    if (((0x05D2 | l_2927) , p_37.f3))
                    { 
                        uint32_t l_2941 = 0xDCD999CB;
                        l_2941 = (__builtin_popcountll(p_37.f0) , l_2828.f2);
                        l_2930 |= (((((uint16_t)((((l_2944 | (l_2916.f2 >= l_2944)) , (l_2926 | ((func_78(((int32_t)((uint16_t)(p_37.f3 , p_37.f0) >> (uint16_t)p_37.f0) + (int32_t)((int16_t)(l_2941 & (p_37.f3 < l_2916.f3)) + (int16_t)5U)), l_2951, l_2952, p_37.f0, l_2951.f1) , l_2953) , l_2941))) , 0xC293) >= 0x17A5) * (uint16_t)l_2954) > p_37.f0) == p_37.f3) || l_2944);
                    }
                    else
                    { 
                        int32_t l_2955 = (-10);
                        l_2956 = l_2955;
                    }
                }
                else
                { 
                    union U1 l_2957 = {0xF8A0};
                    int32_t l_2961 = 0x43BFD272;
                    union U0 l_2968 = {0x7E908363};
                    if (func_42(l_2874.f0))
                    { 
                        int32_t l_2960 = (-1);
                        l_2930 &= (((l_2957 = l_2957) , l_2828.f2) != ((int16_t)((l_2961 = l_2960) > (l_2954 ^= (((uint16_t)((((int16_t)p_37.f0 << (int16_t)9) , p_37.f0) | l_2940) << (uint16_t)((p_37.f0 , ((l_2960 >= ((((uint32_t)l_2956 + (uint32_t)4294967295U) | l_2828.f1) >= l_2916.f1)) && p_37.f0)) == 0U)) && l_2874.f2))) << (int16_t)p_37.f0));
                        return l_2968;
                    }
                    else
                    { 
                        int32_t l_2969 = 2;
                        if (l_2874.f3)
                            break;
                        l_2952 ^= (((func_100(l_2969, l_2874.f3) <= p_37.f3) || (((p_37.f3 >= p_37.f3) == ((uint16_t)((int16_t)((uint16_t)(l_2940 || ((p_37 , ((uint16_t)(l_2930 = 65529U) * (uint16_t)l_2968.f2)) & 0U)) * (uint16_t)l_2828.f0) >> (int16_t)8) * (uint16_t)l_2951.f1)) || p_37.f3)) >= l_2940);
                    }
                }
                if ((4294967291U > l_2954))
                { 
                    int16_t l_2978 = 0x292B;
                    int32_t l_2981 = 0x7E4F71DE;
                    if ((p_37.f0 == (((l_2978 = 0x69A06140) < (p_37.f0 ^ 3U)) , l_2930)))
                    { 
                        l_2930 &= 0;
                    }
                    else
                    { 
                        l_2930 = __builtin_clz(p_37.f0);
                        l_2809 &= (0xE8B2 & p_37.f0);
                    }
                    for (l_2956 = 0; (l_2956 > 54); l_2956 += 1)
                    { 
                        int32_t l_2998 = (-7);
                        int32_t l_2999 = 0x673D79CA;
                        l_2981 = ((0xC493E54A | l_2828.f2) || l_2926);
                        l_2809 = (((int16_t)((!((l_2874.f1 , (((p_37.f0 , ((uint16_t)((int16_t)((l_2874.f0 ^ (((int32_t)p_37.f0 + (int32_t)(((l_2998 |= ((int16_t)p_37.f0 + (int16_t)((((uint16_t)(((((0x05BD <= 0U) | (((!(l_2927 = __builtin_bswap32((l_2954 ^= __builtin_popcountll(((uint16_t)__builtin_popcountl(l_2981) >> (uint16_t)l_2951.f1)))))) > l_2981) < 0xBCFC)) > 1) , p_37.f3) && p_37.f3) * (uint16_t)l_2916.f2) > 0U) & p_37.f0))) != p_37.f0) || 4)) && 0)) , l_2940) + (int16_t)0x0F73) + (uint16_t)l_2999)) ^ 0xD340) >= 8)) <= l_2999)) | p_37.f3) << (int16_t)l_2999) && l_2916.f4);
                        if (l_2940)
                            break;
                    }
                    if ((__builtin_parity(l_2916.f2) != ((int32_t)(l_2952 = p_37.f0) - (int32_t)p_37.f0)))
                    { 
                        int32_t l_3012 = 0x6997C529;
                        l_3012 = (l_2954 , (((uint16_t)((p_37.f0 , (!((int32_t)__builtin_ffsl(p_37.f0) % (int32_t)((((((uint16_t)(l_3009 , ((l_2981 = (-5)) != (((int16_t)(-1) >> (int16_t)p_37.f0) && ((((p_37.f0 >= p_37.f3) && l_2916.f0) >= l_2926) > 4U)))) * (uint16_t)65531U) <= (-9)) >= 0x9B36) | l_2916.f4) | l_2926)))) && p_37.f0) * (uint16_t)p_37.f0) , p_37.f3));
                        l_2981 = ((p_37 , (p_37.f0 , l_2951)) , (p_37.f0 < ((int16_t)(((l_2902 <= (((int16_t)(~(-1)) << (int16_t)((((uint16_t)(l_2809 = ((uint16_t)l_2981 >> (uint16_t)12)) << (uint16_t)(func_100(l_2930, (((l_2940 < p_37.f0) != 4294967286U) > p_37.f3)) , l_3022)) != p_37.f0) && 6)) , 0)) | p_37.f3) , p_37.f3) << (int16_t)15)));
                        l_2927 ^= l_2940;
                    }
                    else
                    { 
                        int32_t l_3033 = 0x11891900;
                        l_2927 = p_37.f0;
                        l_2954 = (l_2930 = (func_78(l_3023, l_3024, (l_2981 = p_37.f3), (((uint16_t)((uint16_t)((uint32_t)p_37.f3 % (uint32_t)((int16_t)(l_3033 <= __builtin_parityll(l_2940)) + (int16_t)l_3024.f1)) * (uint16_t)(((int16_t)l_2978 * (int16_t)p_37.f0) != l_2978)) % (uint16_t)8) | 0x5A9904C2), p_37.f3) , 0xBE829238));
                        if (l_3024.f1)
                            break;
                    }
                }
                else
                { 
                    int16_t l_3036 = 0x1895;
                    union U2 l_3046 = {0x9CE9};
                    union U0 l_3049 = {1U};
                    l_2930 = (l_2940 || 0x46E7);
                    l_3036 ^= p_37.f3;
                    if (((int16_t)(p_37.f3 = ((((((((((int16_t)(((uint16_t)((l_2828 , l_3009.f3) && ((0xDDE1F1B1 || (l_2828.f1 , ((l_3036 > ((l_2927 ^ l_3024.f0) , (((int32_t)1 % (int32_t)l_2930) == p_37.f3))) <= 65535U))) > l_2940)) % (uint16_t)p_37.f3) & p_37.f0) * (int16_t)0xC472) , p_37.f3) != p_37.f0) == p_37.f0) >= l_2916.f0) == l_2828.f2) != p_37.f0) , l_2940) ^ p_37.f3)) >> (int16_t)5))
                    { 
                        l_2809 = (func_106(l_2828.f2, p_37.f0, p_37.f3, __builtin_ffsl(((0 >= (func_78(((-(int32_t)4) | 0U), (l_3047 = l_3046), (l_3048 ^= (__builtin_bswap32(p_37.f3) & l_2930)), p_37.f3, p_37.f0) , p_37.f0)) , p_37.f3)), p_37.f0) && p_37.f0);
                        return l_3049;
                    }
                    else
                    { 
                        int32_t l_3051 = 1;
                        l_3051 = (~l_2940);
                    }
                }
            }
            if (p_37.f3)
                continue;
        }
        l_2809 = ((uint32_t)4294967295U % (uint32_t)(((int16_t)l_3056 * (int16_t)(l_3057 & ((l_3060 = func_59((l_2952 = (p_37.f0 , l_2940)), (func_42(func_65(l_3058, l_2828.f2, (l_3023 , func_59((l_2930 &= (((((((l_2808 |= (l_3022 = func_94((p_37.f0 | 0x2A9E), p_37.f0, p_37.f0, l_2874, l_3059))) && 0U) && l_3048) >= 1U) || p_37.f0) <= l_3047.f1) != l_3056)), l_2828.f2, p_37.f3, l_3047.f1)))) | 0x6315E06B), l_3059.f3, p_37.f0)) , l_3057))) ^ p_37.f3));
        l_3048 = ((uint16_t)(l_2808 = (func_94(((p_37.f1 = (l_2902 | (l_2828.f2 , (l_2828.f0 < l_3059.f4)))) >= l_3057), l_2926, l_2828.f3, l_2874, l_3059) > 4294967295U)) % (uint16_t)0x5032);
        if ((((l_2828.f1 == (l_3048 = p_37.f0)) | (~(((int32_t)(l_3072 = (((int32_t)((int32_t)(l_2809 = (l_2808 = p_37.f3)) % (int32_t)l_2874.f2) + (int32_t)((uint16_t)(p_37 , (l_2930 = l_2828.f3)) << (uint16_t)7)) != p_37.f3)) % (int32_t)((int16_t)l_3075 + (int16_t)1)) || 0))) | 1U))
        { 
            uint32_t l_3095 = 0xD20FDB97;
            int32_t l_3113 = 1;
            int32_t l_3115 = 0x8838779D;
            if (l_3048)
            { 
                int16_t l_3086 = 0x6826;
                int32_t l_3096 = 8;
                union U0 l_3098 = {0x0F907501};
                l_3072 |= ((((uint16_t)__builtin_popcountll(l_2940) << (uint16_t)7) || l_2940) , (l_3047.f0 ^ func_94(l_2828.f1, ((uint16_t)((uint16_t)((((uint32_t)(l_3096 &= ((((int16_t)(l_3086 , (((((int32_t)p_37.f2 + (int32_t)(((int32_t)(((l_3060 = (((uint32_t)((uint16_t)p_37.f3 << (uint16_t)14) - (uint32_t)((l_2828.f0 | l_3095) > l_3095)) , l_3060)) , l_3059.f1) & l_2902) % (int32_t)l_3086) || 0xC809)) , 0) != 0x437F) || p_37.f2)) * (int16_t)3U) == 0x6E64) == 1)) % (uint32_t)l_2940) , l_2828.f3) != l_3075) * (uint16_t)l_2874.f1) >> (uint16_t)4), l_3086, l_3097, l_3098)));
            }
            else
            { 
                int32_t l_3099 = 0x06499F25;
                int32_t l_3101 = (-1);
                union U0 l_3114 = {0U};
                l_3115 ^= func_100(l_3099, ((((((((!(((l_3101 = (p_37.f0 , l_3099)) != ((((int16_t)func_94(l_3095, (l_2930 = ((uint16_t)__builtin_ia32_crc32qi(p_37.f1, ((((uint16_t)((l_3113 = (0xC9F6 > (((int32_t)(((l_2808 = __builtin_ffsl((((int16_t)((-(int32_t)0x7020AE25) > __builtin_parityl(l_2874.f0)) << (int16_t)l_2926) , p_37.f2))) & l_3099) != 0x09B3) + (int32_t)0) | l_3047.f1))) != l_3022) % (uint16_t)2) != p_37.f0) || 6U)) - (uint16_t)p_37.f3)), p_37.f1, l_3097, l_3114) << (int16_t)10) > p_37.f2) , 0x1930)) , p_37.f3)) , p_37.f3) & p_37.f1) < l_3114.f1) && l_3059.f0) , 0xF695) < p_37.f0) , 0x1BE6));
            }
            l_3048 = ((!((p_37.f3 = (~((p_37 , (1 <= ((uint16_t)(((l_2828 , l_3120) , ((uint32_t)l_3115 - (uint32_t)(((int32_t)l_3048 + (int32_t)func_94(p_37.f2, l_3115, p_37.f1, l_2874, l_2828)) & l_3125))) < p_37.f3) + (uint16_t)0x2BE5))) != 0xCBA468E9))) != l_3048)) >= l_3057);
            if (p_37.f0)
                break;
            l_2952 = (p_37.f0 | p_37.f0);
        }
        else
        { 
            uint32_t l_3132 = 4294967295U;
            union U1 l_3147 = {0x1C2A};
            int32_t l_3152 = 0x0527B90E;
            int32_t l_3195 = 0;
            uint32_t l_3197 = 0U;
            union U2 l_3198 = {0x96A8};
            union U0 l_3203 = {1U};
            l_2808 &= ((int16_t)p_37.f1 % (int16_t)p_37.f1);
            for (l_3060.f2 = 18; (l_3060.f2 == 46); l_3060.f2 += 1)
            { 
                uint32_t l_3170 = 0U;
                int32_t l_3196 = 1;
                for (p_37.f1 = 0; (p_37.f1 <= 15); p_37.f1 += 1)
                { 
                    int16_t l_3151 = 0x485D;
                    int32_t l_3153 = 0x2EA30448;
                    union U0 l_3167 = {4294967290U};
                    uint32_t l_3187 = 9U;
                    if (l_3132)
                    { 
                        union U0 l_3133 = {0x52429227};
                        return l_3133;
                    }
                    else
                    { 
                        int32_t l_3140 = 7;
                        int32_t l_3143 = 0x8A697731;
                        int32_t l_3171 = 0xF5EB5AFF;
                        l_3148 = (((int16_t)((int16_t)((uint16_t)l_2809 + (uint16_t)(((func_65(((l_3140 = l_2828.f3) != ((int32_t)l_3143 + (int32_t)l_3132)), (~((uint32_t)(((((l_3047 , 1) && l_3143) ^ 1) , func_94(l_3143, p_37.f1, l_3143, l_3147, l_2828)) ^ l_3120.f0) + (uint32_t)l_3132)), p_37) && 0xF5BABF0A) | 0xF316) | (-6))) * (int16_t)l_3143) * (int16_t)p_37.f2) & p_37.f1);
                        l_3153 = ((int16_t)(((l_3151 = l_3147.f3) && l_3151) ^ l_3143) - (int16_t)(l_3152 = l_3147.f0));
                        l_3171 |= ((((((uint16_t)p_37.f2 << (uint16_t)((int16_t)((uint32_t)0U % (uint32_t)((uint16_t)(l_3153 != (p_37.f2 == (l_3072 &= ((int16_t)(~((l_3143 = ((int16_t)((l_3167 , p_37.f1) < ((uint16_t)p_37.f1 << (uint16_t)10)) % (int16_t)0x12FF)) && (0 > l_3120.f0))) + (int16_t)l_3151)))) * (uint16_t)(-2))) % (int16_t)0x08EA)) , l_3140) == l_3170) != p_37.f2) | l_3170);
                        l_3143 = ((int32_t)(1 || (l_3153 = (((uint32_t)(func_59(((uint32_t)(((((((int32_t)(l_3180 , p_37.f3) - (int32_t)((uint32_t)4294967295U + (uint32_t)l_3170)) > l_3152) <= ((l_3170 || (((-(uint32_t)p_37.f2) < ((int16_t)(__builtin_parityll(((~((p_37.f0 ^ p_37.f1) | 0x1E93)) , l_3152)) >= p_37.f0) * (int16_t)p_37.f2)) == 0xF240)) || p_37.f2)) == 4) <= l_2940) || p_37.f0) + (uint32_t)p_37.f3), p_37.f1, l_3170, l_3132) , l_2828.f4) % (uint32_t)0xEA6511E1) & l_3187))) + (int32_t)p_37.f1);
                    }
                    l_3153 = p_37.f2;
                    l_3197 = __builtin_ffs(((int16_t)((!p_37.f3) == (p_37.f1 , (l_3180 , ((l_3196 = (((uint16_t)l_3056 << (uint16_t)15) == (func_100(((int16_t)(l_3195 = __builtin_bswap32((l_3152 = (l_3153 |= (l_3120.f3 & 0x50FEE80A))))) >> (int16_t)12), l_2874.f3) > p_37.f2))) >= l_3167.f0)))) * (int16_t)0x075E));
                    l_3022 = (l_3198 , ((((int16_t)((uint32_t)((l_3153 = __builtin_clz(p_37.f0)) , (0x12270CDB & func_94(l_3167.f4, l_3057, __builtin_parityl(p_37.f3), p_37, l_3203))) - (uint32_t)0x61E43FC7) + (int16_t)l_3048) == l_3198.f0) | l_3152));
                }
            }
            return l_2828;
        }
    }
    l_2809 = 0x89A63BA8;
    l_3216 = __builtin_parityll(((__builtin_ffsl(((int16_t)p_37.f3 >> (int16_t)2)) != (l_3060.f3 | ((int16_t)func_94(((int16_t)0 * (int16_t)((int16_t)7 + (int16_t)(~(((l_2809 = (((((!p_37.f3) || ((uint16_t)(((l_3022 &= (func_42(l_2808) || (((l_3047 , p_37.f3) || l_2902) || 0U))) & p_37.f3) >= p_37.f0) << (uint16_t)l_3047.f0)) > p_37.f3) ^ 0x489AC199) < 0)) < p_37.f0) && l_3216)))), l_3148, l_39, p_37, l_2828) * (int16_t)l_3148))) != l_2828.f4));
    return l_2828;
}




inline static int32_t  func_42(int16_t  p_43)
{ 
    int32_t l_2748 = 5;
    int32_t l_2759 = 0x5C7F00CF;
    union U1 l_2775 = {-4};
    union U2 l_2776 = {0x5F07};
    uint16_t l_2807 = 65535U;
    if (l_2748)
    { 
        union U0 l_2752 = {0x5AFF878A};
        for (l_2748 = 0; (l_2748 >= 13); l_2748 += 1)
        { 
            uint16_t l_2751 = 65532U;
            int32_t l_2760 = 4;
            l_2751 |= (1 && 1);
            l_2760 = (l_2748 & ((((l_2752 , p_43) <= ((int16_t)p_43 << (int16_t)l_2752.f2)) != (l_2752 , ((int32_t)((uint16_t)0U >> (uint16_t)12) % (int32_t)p_43))) || (func_100(l_2759, l_2752.f1) < 0)));
        }
    }
    else
    { 
        uint32_t l_2772 = 0xB0268545;
        uint32_t l_2773 = 4294967295U;
        int32_t l_2774 = 1;
        for (p_43 = 0; (p_43 != (-6)); p_43 -= 3)
        { 
            union U0 l_2763 = {0U};
            int32_t l_2783 = 0xE01B5894;
            uint32_t l_2794 = 3U;
            union U2 l_2795 = {0x36D9};
            int32_t l_2796 = 0x406A8512;
            l_2774 = ((0U <= (l_2763 , 0x92299A67)) | ((uint16_t)(p_43 <= (((uint16_t)((((1U == (((int32_t)func_106(((uint16_t)__builtin_ctzl((l_2772 ^ (0xE18DC4F2 == 0U))) << (uint16_t)15), l_2763.f3, l_2773, l_2759, p_43) % (int32_t)l_2763.f4) , p_43)) != p_43) < p_43) > l_2748) << (uint16_t)13) >= l_2748)) << (uint16_t)p_43));
            l_2783 &= ((((l_2775 = l_2775) , (l_2776 , l_2776.f0)) , ((-1) && (0U ^ l_2772))) & (p_43 ^ ((int32_t)((int16_t)p_43 + (int16_t)(((uint32_t)((0x4D4D == p_43) < (-1)) % (uint32_t)l_2773) | 0x979812A5)) % (int32_t)4294967295U)));
            if (l_2783)
                break;
            l_2796 = ((func_78(((l_2776 , ((int16_t)((int16_t)l_2775.f0 % (int16_t)((uint16_t)((uint32_t)(l_2775 , (p_43 | (l_2763.f2 , (l_2759 = l_2772)))) - (uint32_t)p_43) * (uint16_t)((int16_t)l_2748 << (int16_t)4))) * (int16_t)((func_100((l_2774 , p_43), l_2794) , p_43) <= p_43))) | p_43), l_2795, p_43, l_2774, l_2775.f3) , l_2759) <= 0x635C62CD);
        }
        l_2748 = (l_2773 , ((uint32_t)((l_2748 , ((uint16_t)l_2776.f0 * (uint16_t)(l_2772 , p_43))) <= (l_2774 , 0xE4F1)) % (uint32_t)(-9)));
        l_2759 = ((uint16_t)65527U * (uint16_t)65535U);
    }
    for (l_2776.f0 = 0; (l_2776.f0 != 49); l_2776.f0 += 1)
    { 
        int32_t l_2805 = (-1);
        int32_t l_2806 = 4;
        l_2748 &= (p_43 || l_2805);
        l_2806 = (l_2805 ^= l_2759);
    }
    return l_2807;
}




inline static union U1  func_59(uint16_t  p_60, int32_t  p_61, int32_t  p_62, int16_t  p_63)
{ 
    union U1 l_64 = {0xB068};
    int32_t l_74 = 0x91C6C8EC;
    int32_t l_75 = 0x04A86D6A;
    if ((9U != ((((p_62 < (p_62 && (l_64 , func_65(((uint16_t)((int16_t)((~((l_75 ^= ((p_60 != __builtin_ffs((l_74 |= ((l_64.f3 ^ ((__builtin_ctz(l_64.f3) | p_63) || 0x5E06C083)) <= p_63)))) , 0x21D2)) || p_63)) , p_60) + (int16_t)l_64.f3) - (uint16_t)l_64.f3), p_62, l_64)))) ^ (-1)) , 0xAC09) <= l_64.f3)))
    { 
        union U2 l_2725 = {0xBE17};
        int32_t l_2729 = 6;
        int32_t l_2730 = 0x5845D764;
        int16_t l_2734 = 2;
        union U1 l_2735 = {0x2F99};
        union U0 l_2736 = {1U};
        l_75 = p_63;
        l_2729 ^= ((((p_62 , l_2725) , p_61) >= l_75) | ((l_74 |= 0) != ((int16_t)(((-(int16_t)(p_61 , (__builtin_ffsll(l_2725.f1) ^ 0x5CCE))) & p_62) , p_60) + (int16_t)p_61)));
        l_74 = (func_94(l_2730, ((p_61 = (l_2725.f0 <= (l_64.f0 < ((l_2729 = (l_75 = (l_74 , (p_60 , ((int16_t)(!0x6C11) >> (int16_t)(l_2734 , ((((p_60 | p_60) == l_75) || l_2725.f0) ^ 5U))))))) < l_2730)))) , l_64.f0), p_63, l_2735, l_2736) > (-1));
    }
    else
    { 
        p_61 = (l_74 = (-2));
    }
    l_75 = (p_60 >= 0U);
    l_74 = (((int16_t)((int16_t)1 * (int16_t)((uint16_t)l_64.f0 << (uint16_t)13)) * (int16_t)1U) == (((p_60 &= l_74) <= l_75) < p_63));
    l_74 = (func_65(l_75, l_75, l_64) > ((uint16_t)p_60 + (uint16_t)((uint16_t)p_62 % (uint16_t)l_64.f0)));
    return l_64;
}




inline static int32_t  func_65(uint32_t  p_66, int32_t  p_67, union U1  p_68)
{ 
    int16_t l_76 = 0x693C;
    uint32_t l_91 = 1U;
    union U1 l_1481 = {0x6159};
    union U0 l_1482 = {0xF8452C21};
    int32_t l_1885 = 0x8A836FF1;
    uint32_t l_1886 = 0x44D91516;
    int32_t l_1887 = 9;
    union U2 l_1888 = {65526U};
    int32_t l_1900 = 0x0FF60151;
    int32_t l_1907 = 7;
    uint32_t l_1928 = 4294967290U;
    int16_t l_1934 = 7;
    uint32_t l_2003 = 1U;
    int16_t l_2019 = 0x780A;
    int32_t l_2047 = 0xDC362F07;
    uint16_t l_2089 = 65530U;
    uint32_t l_2112 = 0U;
    uint16_t l_2119 = 1U;
    union U2 l_2151 = {1U};
    int32_t l_2270 = (-1);
    int16_t l_2275 = 0xF166;
    union U0 l_2281 = {0x1654E5D5};
    uint32_t l_2303 = 9U;
    int16_t l_2344 = 1;
    int32_t l_2371 = 0;
    int16_t l_2501 = 0xED8E;
    int32_t l_2533 = 1;
    uint16_t l_2615 = 0x36EF;
    uint16_t l_2655 = 5U;
    l_1900 = (l_76 , (((-(uint16_t)((func_78((((int16_t)0x4B93 - (int16_t)((l_1887 = ((uint16_t)((~((uint16_t)l_91 << (uint16_t)(((int16_t)((l_1885 |= func_94(l_76, (func_100((l_91 >= (l_76 == l_76)), ((l_91 & l_91) ^ 0U)) < p_68.f3), l_91, l_1481, l_1482)) ^ p_68.f0) >> (int16_t)14) , l_1482.f4))) , l_1886) - (uint16_t)l_76)) != l_1482.f0)) < l_1482.f1), l_1888, l_1886, l_1888.f1, l_1482.f4) , 0xE3238C82) | p_68.f0)) , p_68.f3) & p_66));
    l_1885 = (p_67 = (l_1888 , l_76));
    if ((p_68.f3 == p_67))
    { 
        int16_t l_1901 = 0x06A7;
        union U1 l_1902 = {0x272F};
        int32_t l_1906 = 1;
        uint32_t l_1908 = 0x7C01F518;
        int32_t l_1929 = 0xE54B1556;
        union U2 l_1951 = {0x6E96};
        int16_t l_2042 = (-1);
        uint32_t l_2075 = 0x8A9D27C0;
        int32_t l_2115 = 0xFE5342C8;
        union U0 l_2279 = {0xB114A774};
        if (((func_94(p_68.f0, (0xFA02 < p_66), l_1901, p_68, (l_1902 , func_78((l_1907 &= (l_1906 = (((l_1900 = ((int16_t)((((__builtin_popcountll((l_1885 ^= (l_1482.f0 < (~(func_106(p_66, l_1887, l_1902.f3, l_1902.f0, p_68.f3) || l_1482.f1))))) | 1U) , l_1887) == l_1901) && 0xF9AAFC42) >> (int16_t)13)) , l_1481.f3) | p_67))), l_1888, l_1902.f0, p_68.f0, l_1481.f3))) < 4294967290U) <= 1U))
        { 
            uint32_t l_1927 = 0x14E9DCE5;
            int32_t l_1952 = 1;
            int32_t l_2018 = 0x867875E2;
            int32_t l_2055 = 0;
            int32_t l_2073 = (-1);
            union U0 l_2165 = {4294967294U};
            union U1 l_2175 = {0x5150};
            uint32_t l_2221 = 4294967292U;
            l_1908 = 0x907DF639;
            if ((((uint16_t)((int32_t)(l_1888 , p_68.f0) % (int32_t)__builtin_ffsl(l_1907)) - (uint16_t)((uint16_t)(((l_1482.f1 < func_94((l_1906 = ((((int32_t)((uint16_t)((int16_t)((uint16_t)(((int16_t)((((int16_t)0x20AC * (int16_t)2) & ((l_1927 > l_1927) >= l_1928)) < l_1482.f3) << (int16_t)l_1927) , p_68.f0) % (uint16_t)p_68.f0) * (int16_t)0xF3C3) * (uint16_t)0x1095) - (int32_t)l_1927) , p_68.f3) || 7)), p_68.f0, l_1929, l_1902, l_1482)) > (-1)) | l_1888.f0) + (uint16_t)l_1927)) == p_66))
            { 
                uint32_t l_1939 = 4294967295U;
                union U2 l_1940 = {1U};
                union U0 l_1941 = {0xD62D2417};
                int16_t l_1967 = 0x41A4;
                union U1 l_1973 = {-8};
                int32_t l_2034 = 0x4EAA8E4C;
                if ((((l_1941 = func_78(((uint16_t)p_67 >> (uint16_t)((uint16_t)l_1934 % (uint16_t)((uint32_t)(l_1482.f0 < (l_1482.f0 >= p_66)) + (uint32_t)(p_66 & (((((uint32_t)l_1908 % (uint32_t)p_68.f3) ^ p_68.f0) && p_68.f3) >= l_1939))))), l_1940, l_1901, l_1927, l_1906)) , 0x2015) != l_1888.f1))
                { 
                    union U2 l_1950 = {0x1498};
                    int32_t l_1964 = (-1);
                    int32_t l_1971 = 1;
                    uint32_t l_2008 = 4294967286U;
                    for (l_1482.f2 = 0; (l_1482.f2 >= 59); l_1482.f2 += 1)
                    { 
                        return p_67;
                    }
                    if ((p_66 <= (((uint32_t)4294967295U - (uint32_t)((int16_t)((p_68.f1 = (l_1902.f3 & ((int16_t)(l_1900 |= __builtin_clz(p_68.f0)) << (int16_t)p_67))) < p_67) << (int16_t)4)) == ((l_1951 = l_1950) , l_1951.f1))))
                    { 
                        int32_t l_1957 = 1;
                        int32_t l_1970 = 0xAB6FA396;
                        l_1906 = (l_1952 || ((int16_t)(p_66 != ((l_1952 , (((int16_t)(l_1957 == ((l_1964 ^= ((int16_t)((int16_t)(__builtin_parityl(l_1941.f4) >= 0xC130) >> (int16_t)(p_68.f0 , ((int16_t)p_68.f2 % (int16_t)p_66))) << (int16_t)p_66)) && p_68.f0)) + (int16_t)p_68.f2) < (-1))) , l_1957)) * (int16_t)(-1)));
                        l_1970 = func_106(p_68.f1, p_68.f1, l_1929, ((uint32_t)l_1967 - (uint32_t)(((uint16_t)p_68.f0 % (uint16_t)p_66) != l_1941.f4)), l_1952);
                        l_1971 = ((l_1964 &= (-8)) > (l_1906 = (-1)));
                    }
                    else
                    { 
                        int32_t l_2002 = 0;
                        int32_t l_2017 = 0x13A941AD;
                        p_67 = (!(l_1973 , (-(int16_t)((int16_t)((-(int32_t)((((int16_t)(((p_66 > p_68.f3) <= (((uint32_t)((int32_t)p_68.f2 - (int32_t)((uint16_t)(((uint16_t)((((uint16_t)(((int16_t)((uint16_t)(((__builtin_popcountll(l_1967) ^ ((((uint16_t)((((int32_t)(l_1964 = (((uint16_t)p_68.f1 + (uint16_t)p_68.f3) , ((int16_t)p_67 * (int16_t)p_68.f1))) % (int32_t)l_1929) , p_66) < l_1952) << (uint16_t)p_68.f1) < l_2002) <= 0x5E1C)) && l_1927) && l_1950.f0) >> (uint16_t)l_2002) + (int16_t)0x933F) >= l_2003) << (uint16_t)7) > l_2002) <= p_67) * (uint16_t)p_67) <= l_2002) * (uint16_t)0x9A86)) - (uint32_t)0x24FD9A28) >= p_68.f1)) | p_67) >> (int16_t)1) , p_66) & 0xBF62)) <= 0x3542) % (int16_t)l_1927))));
                        l_1907 = l_1941.f3;
                        l_2018 = (p_67 = ((int16_t)((-(uint16_t)(~(__builtin_parityll(l_2008) || (((!(~((uint16_t)(l_2002 ^= (((uint16_t)65535U << (uint16_t)8) <= p_68.f2)) + (uint16_t)(((int32_t)(l_1952 = p_68.f0) + (int32_t)(0x733D6ABF || func_106(l_2017, ((l_1939 >= (p_68.f3 < p_66)) != l_2017), l_2017, l_1941.f2, p_68.f0))) && 1)))) < l_1482.f1) & l_1888.f0)))) ^ 0x0818) - (int16_t)l_1927));
                        l_1900 = p_67;
                    }
                    l_1906 = ((__builtin_parity(l_1950.f1) <= ((l_2019 , (((0x1C04AC13 > l_1950.f1) <= l_2003) >= (l_1964 & p_68.f2))) != (((int16_t)((((int16_t)__builtin_clzl((l_1964 , p_68.f2)) + (int16_t)p_66) , p_68.f3) > l_1482.f1) * (int16_t)p_68.f3) || l_2003))) , l_1950.f1);
                    for (l_1941.f0 = 0; (l_1941.f0 > 1); l_1941.f0 += 1)
                    { 
                        l_1906 = 0xF446FEDF;
                    }
                }
                else
                { 
                    uint32_t l_2032 = 0U;
                    union U1 l_2033 = {-1};
                    int32_t l_2038 = 0xD832ED11;
                    l_2034 = ((p_66 == p_68.f3) >= (((int16_t)(func_94(((1U != 0x4CB01711) == (((int16_t)p_68.f3 >> (int16_t)14) <= 65531U)), p_67, (l_1887 = (((int16_t)(0x977D612E & ((p_68.f0 | p_66) ^ l_2032)) << (int16_t)5) && l_1941.f3)), l_2033, l_1941) ^ 5) >> (int16_t)l_1940.f0) == l_2018));
                    if ((p_67 = __builtin_parity((l_2018 = (l_2038 = (((0xC098 || (l_1952 , (~(((p_68.f0 &= p_66) < (((uint32_t)__builtin_parityl(p_67) - (uint32_t)(p_67 <= l_1941.f0)) > ((l_1906 = p_66) | __builtin_ctz(p_66)))) <= p_67)))) != p_66) ^ p_66))))))
                    { 
                        uint32_t l_2039 = 0U;
                        l_2038 = (l_1929 , l_2039);
                        p_67 = p_68.f3;
                    }
                    else
                    { 
                        int32_t l_2043 = 0xB330DD84;
                        l_2034 = __builtin_bswap64((p_68.f0 | __builtin_popcountl(l_1482.f0)));
                        p_67 = 0x3A8F34F8;
                        p_67 = ((((uint32_t)l_2042 - (uint32_t)0) > l_2043) , 1);
                    }
                }
                for (l_1973.f3 = (-5); (l_1973.f3 != 25); l_1973.f3 += 1)
                { 
                    int32_t l_2046 = 0xCCA6BE60;
                    int32_t l_2056 = 0xCBF83EE1;
                    uint32_t l_2059 = 0U;
                    int32_t l_2060 = 0x726C1126;
                    int32_t l_2061 = 0x21EE1904;
                    l_2047 &= l_2046;
                    if (l_1900)
                        break;
                    p_67 = ((0x6D09 == (p_68.f3 = (!(((((p_68.f3 < ((((int16_t)((uint16_t)((uint16_t)((__builtin_parityll((l_2056 = (p_67 || (l_2055 = p_66)))) >= (l_2060 = (p_68.f3 | ((uint16_t)(l_1940.f0 || (p_67 > (p_66 , p_68.f0))) - (uint16_t)l_2059)))) | 0xDA90FD58) - (uint16_t)65531U) * (uint16_t)65535U) * (int16_t)0U) , l_2061) > l_1952)) , p_68.f0) != 0xE3BD8B0D) , p_68.f0) < l_1940.f0)))) && p_68.f3);
                    p_67 = __builtin_ctzll(l_1901);
                }
                l_1906 = p_68.f0;
            }
            else
            { 
                union U2 l_2067 = {0x50AF};
                int32_t l_2071 = 0;
                int32_t l_2111 = 0x26B0662B;
                uint32_t l_2114 = 4294967295U;
                int32_t l_2117 = (-3);
                int32_t l_2219 = 0xA9EC36E3;
                union U0 l_2220 = {1U};
                if ((l_1906 ^ (p_68.f0 == l_1885)))
                { 
                    int32_t l_2072 = (-2);
                    int32_t l_2074 = 0x2958F878;
                    int32_t l_2113 = 0x754D434C;
                    l_2074 |= ((p_68.f3 == ((int16_t)0x9A80 >> (int16_t)4)) & func_106(((~(p_67 = ((((((int32_t)(__builtin_parity(p_67) || p_68.f0) % (int32_t)p_68.f3) , l_2067) , (l_2067.f0 != ((!((int16_t)p_67 + (int16_t)p_67)) == l_2071))) != l_2072) < l_1888.f0))) || l_2073), p_68.f3, p_66, l_2073, l_1901));
                    l_2075 = p_66;
                    l_1907 = ((int16_t)l_2072 >> (int16_t)10);
                    for (l_1481.f1 = 0; (l_1481.f1 != 60); l_1481.f1 += 3)
                    { 
                        int32_t l_2088 = 0xCEB56D54;
                        p_67 = (0xD10D > (l_2072 <= (l_2074 = __builtin_popcountl(l_1902.f3))));
                        p_67 = (((uint16_t)((uint32_t)0x65E45C9B - (uint32_t)(((l_2067.f1 && ((int16_t)l_2067.f1 + (int16_t)p_68.f0)) || (0x0C89FCF9 >= ((((l_2088 && (p_68.f3 == (((l_2089 ^= p_68.f0) | p_68.f3) > 0))) , l_1481.f2) | l_2075) , (-1)))) < 0xE8CA05BE)) >> (uint16_t)p_67) ^ 0x288E);
                        if (p_68.f3)
                            break;
                        l_1885 |= (l_2115 = (((l_1906 = 0xB21D92EC) , (l_2072 = (((p_67 >= ((int16_t)((!(((((int16_t)((((uint16_t)(((int16_t)(p_67 || (l_2071 ^= 3)) >> (int16_t)(2 | 0U)) && (p_68.f1 = ((int32_t)((l_2113 ^= (func_106((((int16_t)(((l_2088 , func_100((((((int32_t)((uint32_t)(func_100((l_2071 |= p_66), (l_2074 ^= ((l_2111 &= ((int16_t)l_2088 * (int16_t)0x5060)) == l_2072))) <= 2U) % (uint32_t)9U) - (int32_t)(-1)) , 3U) == l_2112) == 0x5FA93730), p_68.f0)) > p_67) && p_66) >> (int16_t)3) > 0), p_68.f0, p_67, l_1906, p_68.f3) | 0xAB3A)) , 7) % (int32_t)0x88E024B8))) >> (uint16_t)5) <= 0x2EFA401E) != l_2072) * (int16_t)0x36FA) , p_68.f0) ^ 0U) , l_2114)) | l_1482.f1) - (int16_t)0x7A38)) & p_67) >= 0x7F630E67))) | l_1901));
                    }
                }
                else
                { 
                    int32_t l_2116 = 0x7B1042BC;
                    l_2116 |= p_68.f0;
                }
                if (((func_78((l_1906 = (p_66 = l_1902.f0)), l_1951, p_68.f3, l_2117, (!(l_1481 , func_100(l_2089, p_67)))) , l_2119) != l_2115))
                { 
                    uint16_t l_2123 = 65533U;
                    union U2 l_2127 = {0x90A0};
                    int32_t l_2139 = 1;
                    for (l_1888.f1 = (-12); (l_1888.f1 > 24); l_1888.f1 += 1)
                    { 
                        uint32_t l_2122 = 0xE03CAF64;
                        int32_t l_2124 = (-1);
                        l_2111 = (p_68.f3 & l_2122);
                        l_2124 = (l_2123 &= p_66);
                    }
                    if (((p_66 = p_68.f0) , (((uint32_t)((l_2123 , __builtin_parity((((p_66 == (l_2127 , (p_68.f3 = l_2071))) , ((uint16_t)((p_67 = (l_1952 <= ((int16_t)(0xB316B0EF != ((l_1907 = 0xB798A533) < ((uint16_t)l_2123 * (uint16_t)l_1482.f2))) * (int16_t)p_66))) & l_2115) + (uint16_t)p_68.f3)) , l_2075))) || l_1906) + (uint32_t)8U) ^ l_2067.f1)))
                    { 
                        uint32_t l_2134 = 0x7CE18583;
                        l_2055 = (l_2071 |= (((__builtin_popcountll(l_2134) , p_66) || ((((int16_t)((((int16_t)(l_2139 ^= p_68.f0) << (int16_t)p_66) | (~l_1906)) & (((l_1927 || ((l_2067 , (p_67 &= p_68.f3)) ^ p_68.f3)) | p_66) == 65535U)) >> (int16_t)p_68.f3) ^ l_2111) != l_1887)) > 0x5EFB));
                        return l_91;
                    }
                    else
                    { 
                        uint16_t l_2141 = 0x344C;
                        union U1 l_2144 = {1};
                        p_67 = __builtin_popcountl(l_2141);
                        l_2117 = ((uint16_t)((l_1902 = l_2144) , ((uint16_t)((uint32_t)((int32_t)(0 > ((p_67 = (l_2115 , 0x904FE2C2)) | (l_2151 , ((int16_t)(l_2139 |= (-(int16_t)(((int16_t)(((((p_68 , l_1906) <= (p_66 > l_1902.f0)) >= l_2144.f3) != (-7)) | l_1482.f4) - (int16_t)p_68.f0) & l_2127.f0))) << (int16_t)15)))) - (int32_t)p_66) - (uint32_t)p_68.f0) - (uint16_t)p_68.f0)) >> (uint16_t)p_66);
                    }
                    l_2139 |= ((int16_t)(l_2055 = ((int32_t)(func_106((p_67 = l_2018), p_68.f0, func_94((l_2073 , l_1901), ((uint16_t)((uint16_t)6U << (uint16_t)3) - (uint16_t)l_1482.f1), p_68.f0, p_68, (l_91 , l_2165)), l_1951.f1, p_68.f0) > 0x1855310A) + (int32_t)0x5AB6E54E)) * (int16_t)(-4));
                }
                else
                { 
                    int32_t l_2185 = 0x148CF7BF;
                    union U1 l_2200 = {0x491A};
                    int32_t l_2205 = 0xD2BD6B13;
                    uint16_t l_2222 = 0x5B25;
                    if (((int16_t)p_67 * (int16_t)0x5D10))
                    { 
                        int32_t l_2168 = 3;
                        union U2 l_2178 = {0x282C};
                        int32_t l_2186 = 2;
                        l_2168 = p_67;
                        l_2018 = ((int16_t)((((((((uint16_t)l_1901 << (uint16_t)((int16_t)((p_68.f0 = 0x8AE3) && p_68.f0) >> (int16_t)(l_2175 , l_91))) , (l_2186 = __builtin_ia32_crc32qi(((uint16_t)(l_2178 , l_2178.f0) >> (uint16_t)((uint16_t)(((uint16_t)((int16_t)__builtin_ffs(l_2185) % (int16_t)0xBD33) << (uint16_t)0) || l_2165.f2) * (uint16_t)l_2185)), p_67))) ^ 4294967286U) != 0xE2FA4074) , 0x97EE) & l_2055) > (-8)) >> (int16_t)14);
                        p_67 ^= 0;
                    }
                    else
                    { 
                        uint16_t l_2192 = 0xEFBF;
                        int32_t l_2197 = 0;
                        l_1887 = p_68.f0;
                        l_2073 = func_100(((int16_t)p_68.f0 << (int16_t)3), (l_2205 = ((uint32_t)1U + (uint32_t)((!l_2192) || ((int16_t)((int32_t)p_67 + (int32_t)(((l_2071 = (((l_2197 ^= p_67) && l_2175.f0) ^ (((int32_t)(((l_2200 = p_68) , __builtin_bswap64(((int16_t)((uint16_t)(l_1887 ^= 9U) - (uint16_t)p_68.f0) << (int16_t)p_68.f0))) >= l_1952) + (int32_t)p_67) != p_68.f3))) & p_67) >= 1U)) + (int16_t)p_67)))));
                    }
                    for (p_68.f0 = 0; (p_68.f0 < (-10)); p_68.f0 -= 1)
                    { 
                        union U2 l_2210 = {65530U};
                        int32_t l_2223 = (-10);
                        int32_t l_2224 = 0x8AF51EC1;
                        l_2073 ^= ((int16_t)(__builtin_ctzl(((l_2067.f0 == (((l_1951 , l_2210) , func_106(l_2200.f0, p_66, ((l_2224 = (l_2223 = ((uint16_t)(((int32_t)((int16_t)(l_2205 ^= ((int16_t)(l_2221 = (l_2219 , (func_94((l_2210.f1 == ((l_2018 == 0x1E7ACFD4) ^ 0x6CFFB6B2)), l_1906, p_68.f0, p_68, l_2220) , (-1)))) >> (int16_t)13)) * (int16_t)p_67) % (int32_t)l_2222) || l_2220.f4) >> (uint16_t)p_68.f3))) , 0x5B87), p_68.f3, l_2210.f1)) > p_68.f0)) > p_66)) ^ p_66) << (int16_t)4);
                        p_67 = ((((uint16_t)(!4U) + (uint16_t)((int32_t)4 + (int32_t)((!(p_67 || __builtin_popcountll(((l_2224 = (((int16_t)((l_1482.f1 || l_1907) <= l_1482.f3) >> (int16_t)0) && (((uint16_t)(0xCF0A | ((uint16_t)0U * (uint16_t)((((uint16_t)__builtin_ffsll(l_2210.f1) >> (uint16_t)l_1902.f0) || p_66) == 0x80C5))) - (uint16_t)1U) >= 0x49D9ECA2))) != l_2222)))) > l_1952))) | l_2222) | p_67);
                    }
                    p_67 = (0xC994 == (((uint32_t)l_2075 - (uint32_t)p_68.f3) , (l_1952 = l_1902.f3)));
                }
                l_2073 = (l_2067 , (l_1952 = 5));
                for (l_1481.f2 = 0; (l_1481.f2 == 3); l_1481.f2 += 1)
                { 
                    if (l_1902.f3)
                        break;
                }
            }
            l_1887 = ((((l_1951 = l_2151) , ((l_2003 >= p_68.f3) || (((p_68.f0 <= ((((__builtin_bswap32(l_2115) > ((uint16_t)l_1482.f4 >> (uint16_t)(l_1885 = p_68.f3))) | 0xC0AB) | l_1902.f3) != p_68.f3)) > l_1888.f1) | 0xED6EB476))) >= l_1481.f0) | l_2042);
        }
        else
        { 
            uint32_t l_2245 = 4294967294U;
            int32_t l_2272 = 0xC884545D;
            int32_t l_2273 = 0xB0D12E34;
            union U2 l_2274 = {0U};
            int32_t l_2315 = 1;
            if ((p_67 = func_106(l_1951.f0, p_67, ((l_2245 < (((int16_t)0x75FE >> (int16_t)3) | (((uint16_t)(l_1885 = p_67) * (uint16_t)((int32_t)(p_67 && ((!(-(int16_t)p_67)) > p_68.f0)) - (int32_t)(5U || 4294967287U))) ^ (-1)))) ^ 0x1A1D), l_2245, p_68.f0)))
            { 
                uint16_t l_2258 = 65535U;
                l_1906 &= p_68.f0;
                p_67 = p_67;
                if (((int16_t)0x6615 >> (int16_t)p_68.f3))
                { 
                    int32_t l_2259 = 0x8796B9DC;
                    l_2259 = l_2258;
                }
                else
                { 
                    for (l_2119 = 5; (l_2119 < 29); l_2119 += 1)
                    { 
                        l_2047 |= l_2245;
                    }
                }
                l_1906 = p_68.f0;
            }
            else
            { 
                uint32_t l_2271 = 4294967295U;
                int32_t l_2282 = (-1);
                int32_t l_2317 = 0x21EE0242;
                if (((uint16_t)((int16_t)p_68.f3 << (int16_t)15) - (uint16_t)(l_2273 |= (l_2272 &= (l_2271 = ((uint32_t)(l_2270 &= ((uint16_t)l_1901 >> (uint16_t)14)) - (uint32_t)(-1)))))))
                { 
                    p_67 = l_2273;
                }
                else
                { 
                    int32_t l_2276 = 0x7F36CF43;
                    union U0 l_2280 = {0xC3F7D2E8};
                    uint32_t l_2306 = 0x68E4D265;
                    p_67 ^= l_1902.f0;
                    if (((p_67 |= (l_2274 , (l_2275 != l_2276))) , (((int16_t)func_94(p_68.f0, ((l_2280 = l_2279) , p_67), ((l_2047 = l_1901) | l_2271), p_68, l_2281) % (int16_t)0xBC78) , 0x4F757C14)))
                    { 
                        uint32_t l_2287 = 0x532B97A7;
                        int32_t l_2288 = 1;
                        int16_t l_2293 = 0x975F;
                        union U0 l_2296 = {0x83551466};
                        l_2282 = p_67;
                        l_1887 ^= ((((uint16_t)((l_2282 = (((((uint16_t)(0x9B25 < 0x129B) << (uint16_t)8) == (((l_2287 != p_66) ^ 4) >= ((p_68.f0 <= (func_100(p_68.f3, (l_2276 |= l_2288)) == 1)) , 0x6FAC))) < l_2281.f1) || l_2287)) | (-4)) + (uint16_t)l_2280.f2) , p_68.f3) <= 0xE00AF8A1);
                        p_67 = (p_68.f0 < ((l_2279 , ((uint16_t)((p_66 <= ((int16_t)p_68.f0 - (int16_t)1U)) != (l_2288 <= (((l_2293 & ((uint16_t)(l_2296 , (((((((int32_t)(((int16_t)(l_2273 = __builtin_ffs(((uint16_t)p_68.f3 % (uint16_t)l_2282))) * (int16_t)p_68.f0) > p_67) % (int32_t)l_2288) > (-3)) < p_67) >= l_2303) & 0xBA26B0BF) == l_2280.f0)) + (uint16_t)l_1902.f3)) , l_2274.f1) > 0x11B478C1))) << (uint16_t)l_2115)) <= 0x35FB));
                    }
                    else
                    { 
                        p_67 = ((l_1908 < (l_2115 = p_66)) || l_2273);
                    }
                    l_2317 = (((l_1887 = (l_1906 &= (p_68.f3 && (((__builtin_bswap64(l_2245) <= ((int16_t)((l_2306 = p_68.f3) | 65531U) * (int16_t)((int32_t)((uint16_t)((uint16_t)(l_2282 ^= p_67) >> (uint16_t)((l_2272 = ((int16_t)l_2280.f0 << (int16_t)15)) , l_2315)) * (uint16_t)((!0x841E) < p_66)) % (int32_t)p_67))) , 0x8C5D) >= l_2047)))) <= l_2280.f0) , 0);
                    p_67 |= ((p_68.f0 = (!p_68.f3)) | ((int16_t)(l_2270 = 0) * (int16_t)1U));
                }
                return l_2282;
            }
            l_1906 = __builtin_ffsl((l_2272 <= l_2274.f1));
        }
        p_67 = p_68.f0;
    }
    else
    { 
        uint16_t l_2323 = 0x3FDB;
        uint32_t l_2328 = 4294967295U;
        union U2 l_2336 = {0x57C0};
        int32_t l_2361 = 0xA3E6B531;
        union U1 l_2364 = {1};
        uint32_t l_2384 = 0x02C03237;
        int32_t l_2433 = 8;
        int32_t l_2552 = 0xE1A4F5A2;
        union U0 l_2582 = {0U};
        uint32_t l_2618 = 0xFEE3D12F;
        for (l_1481.f1 = 0; (l_1481.f1 <= 29); l_1481.f1 += 1)
        { 
            union U2 l_2330 = {0x039D};
            int32_t l_2351 = 0;
            if (l_2323)
                break;
            for (p_68.f0 = 0; (p_68.f0 <= (-3)); p_68.f0 -= 1)
            { 
                int32_t l_2335 = 3;
                int32_t l_2337 = 0x099A18C7;
                l_2337 = ((uint16_t)(l_2328 >= (__builtin_parity((((func_100(p_68.f3, (-(int16_t)(p_68 , ((7 <= l_2328) >= (l_2330 , ((int16_t)((uint16_t)(__builtin_ffs(p_67) , ((l_2335 , l_1885) >= l_2335)) + (uint16_t)l_2323) * (int16_t)p_68.f3)))))) , p_66) , l_2336) , l_2281.f1)) <= 0xCD0787A3)) - (uint16_t)l_2330.f1);
            }
            l_2351 &= ((int32_t)(((uint16_t)((uint32_t)(__builtin_popcountll(l_2344) > ((int16_t)(((((l_2336 , ((0x5629D7CA | (((p_67 &= ((int32_t)((0xC25D <= (0xA5BD541D && ((p_68.f3 = func_106(l_76, ((uint16_t)l_2336.f1 + (uint16_t)(l_2270 > l_1482.f0)), p_68.f3, l_2323, l_2330.f1)) & p_66))) & l_2330.f1) + (int32_t)1)) ^ p_66) && 0xE3C76F5C)) || p_67)) ^ l_2328) || 0x4DC68897) != l_1481.f3) & p_66) >> (int16_t)5)) - (uint32_t)p_66) >> (uint16_t)p_66) || p_66) % (int32_t)9U);
            for (l_1887 = (-21); (l_1887 > (-21)); l_1887 += 3)
            { 
                p_67 = ((uint32_t)(p_68 , (((int16_t)((uint16_t)p_68.f3 << (uint16_t)0) << (int16_t)p_68.f0) <= l_2323)) + (uint32_t)(p_68.f0 < (-(uint32_t)p_68.f3)));
            }
        }
        p_67 = func_94(((l_2328 < __builtin_bswap32((l_1900 = ((__builtin_ffsll((l_2361 |= (-4))) > 1) < (((int16_t)l_2336.f0 * (int16_t)(l_2364 , p_68.f0)) < 0x78D5))))) != p_66), l_2281.f3, p_66, p_68, l_2281);
        if (((l_2364.f3 & p_68.f0) | ((l_2328 != (((uint16_t)((__builtin_ctz(((int16_t)((int16_t)(0xFE7FE28E | (0U | 0x61CB)) * (int16_t)p_66) >> (int16_t)(l_2361 &= l_2336.f0))) >= l_2364.f0) | l_2364.f3) - (uint16_t)l_2303) <= p_66)) < 1U)))
        { 
            int32_t l_2381 = 0x2136F7E4;
            l_2361 = (func_106(l_2371, (((l_2047 = p_68.f3) & (((uint16_t)((4294967295U & l_1907) < l_2281.f3) >> (uint16_t)3) > ((p_68 , (((~((int32_t)0x21D565DF % (int32_t)(((uint16_t)((uint16_t)0x5CC4 % (uint16_t)l_2381) * (uint16_t)p_66) & l_2361))) , l_2364) , 65535U)) <= 65530U))) > p_68.f3), l_2336.f0, p_68.f0, p_66) ^ 0);
            return l_2361;
        }
        else
        { 
            int16_t l_2388 = (-10);
            union U2 l_2402 = {6U};
            int32_t l_2404 = 0;
            int16_t l_2419 = 0x4F42;
            int32_t l_2423 = 0x5E8D1DB7;
            union U0 l_2468 = {0xAC15C1A1};
            int16_t l_2478 = 0x1EDA;
            if (p_66)
            { 
                int16_t l_2385 = 1;
                int32_t l_2422 = 5;
                union U0 l_2428 = {4294967295U};
                union U1 l_2467 = {0x4B7B};
                int32_t l_2469 = 0x082E0252;
                if ((l_1888.f0 > (l_2364.f0 > ((l_2388 |= (0xF4798235 > ((l_2384 < l_2385) >= ((int16_t)((l_2003 && p_66) <= p_67) - (int16_t)0x7159)))) >= (-1)))))
                { 
                    for (l_2112 = 9; (l_2112 == 20); l_2112 += 1)
                    { 
                        int32_t l_2393 = 0xA989B1FD;
                        p_67 = ((int16_t)(l_2361 = p_66) << (int16_t)6);
                        l_2393 &= 0xFC75C292;
                        if (l_2393)
                            break;
                        p_67 = l_2393;
                    }
                }
                else
                { 
                    uint32_t l_2403 = 0x5470F82C;
                    l_2404 |= (((int16_t)((((uint32_t)((uint16_t)l_2388 * (uint16_t)(((uint16_t)(p_68 , (1 ^ (p_67 ^ p_68.f3))) % (uint16_t)((l_2336 = l_2402) , p_68.f3)) == (__builtin_clzll(l_2402.f1) , p_66))) - (uint32_t)p_68.f0) & l_2402.f0) >= l_2403) * (int16_t)l_2385) > 0x602C);
                    p_67 ^= (((int32_t)((uint16_t)(((l_1887 , (1U != l_2385)) > p_68.f3) && ((int16_t)0x4C58 << (int16_t)((int32_t)((((int16_t)((int16_t)((uint16_t)((l_2404 |= l_1888.f1) >= (l_2419 = (-5))) << (uint16_t)8) * (int16_t)65530U) - (int16_t)(l_2423 = (((l_2422 = (((int16_t)l_2403 + (int16_t)p_68.f3) || (-1))) & p_66) | l_2388))) != l_2402.f1) ^ p_68.f3) % (int32_t)l_2403))) << (uint16_t)l_2402.f1) % (int32_t)0x2DE98ED1) < l_2089);
                    p_67 = (-10);
                    l_2047 = __builtin_ia32_crc32qi(((int16_t)(l_2422 = p_67) * (int16_t)(((((l_2385 != 0x3B22) >= (-1)) <= ((int16_t)(0 & ((l_2385 == p_68.f3) < ((l_2428 , func_78((l_2402 , 9U), l_2336, p_66, l_1482.f4, p_66)) , 5))) % (int16_t)l_2404)) , p_68.f3) | p_68.f3)), p_68.f3);
                }
                for (l_2112 = 0; (l_2112 == 3); l_2112 += 1)
                { 
                    uint16_t l_2451 = 8U;
                    for (l_76 = 0; (l_76 <= 18); l_76 += 1)
                    { 
                        uint32_t l_2444 = 0x35D1B179;
                        l_2433 = (p_67 = p_67);
                        if (p_68.f3)
                            break;
                        p_67 = ((uint16_t)(l_2336.f0 && ((65529U != ((uint32_t)((uint16_t)((int16_t)((uint16_t)p_68.f3 * (uint16_t)l_2444) >> (int16_t)7) << (uint16_t)((uint16_t)(l_2423 = l_1482.f1) * (uint16_t)1)) % (uint32_t)l_2433)) <= ((int16_t)l_2444 << (int16_t)((int16_t)(l_2270 = l_2451) >> (int16_t)l_2019)))) << (uint16_t)1);
                    }
                    for (l_2364.f3 = 0; (l_2364.f3 <= (-27)); l_2364.f3 -= 1)
                    { 
                        p_67 ^= ((int16_t)0x715D >> (int16_t)4);
                    }
                }
                l_2469 = ((p_67 = ((uint16_t)((uint16_t)((((uint16_t)(l_2428.f3 > func_94(p_68.f0, ((uint16_t)(l_2404 ^= (p_67 <= ((!l_2422) > ((((int32_t)p_68.f0 - (int32_t)0x5BA4D2F2) < l_1481.f2) >= l_2364.f3)))) % (uint16_t)(l_2361 |= p_66)), l_2423, l_2467, l_2468)) % (uint16_t)p_67) & l_2468.f3) & p_68.f3) << (uint16_t)l_2388) >> (uint16_t)p_66)) != 0xDC73D3D7);
                l_2270 ^= ((uint16_t)(((int16_t)(p_68.f3 &= p_67) % (int16_t)l_2323) , 7U) << (uint16_t)12);
            }
            else
            { 
                l_2270 = 0x98933818;
            }
            l_2423 = (((int16_t)((l_2478 = ((__builtin_parityl(l_1907) == (p_66 || __builtin_clzl((func_100((p_68.f3 != p_66), p_67) , __builtin_parityl((p_66 = (p_68.f0 == ((uint16_t)func_106(p_67, p_67, p_68.f0, l_2003, p_67) << (uint16_t)p_68.f0)))))))) <= l_2388)) , p_67) >> (int16_t)5) != l_2384);
        }
        for (l_2151.f0 = 20; (l_2151.f0 != 33); l_2151.f0 += 1)
        { 
            int32_t l_2481 = (-9);
            union U1 l_2500 = {0xC7D7};
            int32_t l_2522 = (-10);
            uint16_t l_2602 = 0x4A3B;
            union U0 l_2606 = {0x6031767F};
            union U2 l_2630 = {65535U};
            int32_t l_2636 = (-9);
            int32_t l_2706 = 0x19FE1134;
            if (l_2481)
            { 
                union U1 l_2484 = {-8};
                union U0 l_2503 = {0x6B899072};
                uint32_t l_2519 = 0x8AACA5F4;
                int32_t l_2520 = 0xAF181489;
                for (l_1888.f1 = 20; (l_1888.f1 >= 18); l_1888.f1 -= 1)
                { 
                    p_67 &= ((p_68 , l_2484) , 0x0AED2438);
                }
                if (__builtin_parity(((int32_t)((int32_t)((l_2484.f3 == ((-1) != (((int16_t)p_68.f0 >> (int16_t)7) < (((p_67 = (l_2019 | (-3))) && (l_1481.f0 | ((int16_t)l_2484.f0 + (int16_t)(l_1885 = p_67)))) <= (0xE3D2EF9F < p_68.f0))))) ^ 0x200BB45A) + (int32_t)l_1482.f3) - (int32_t)l_2364.f0)))
                { 
                    int16_t l_2495 = 0x8B39;
                    union U1 l_2502 = {-1};
                    p_67 = ((l_2151 , func_94(l_2384, func_94((p_68.f1 = ((p_68.f3 < (l_2495 = l_2336.f0)) | (l_2371 == ((int32_t)((int32_t)p_68.f3 % (int32_t)l_2151.f1) + (int32_t)__builtin_bswap64((l_2500 , (0xD4C9E178 && 0x70015A06))))))), p_67, p_66, l_1481, l_2281), l_2501, l_2502, l_2503)) == 9U);
                }
                else
                { 
                    int32_t l_2521 = 0xBDD0AC1A;
                    for (l_2481 = (-30); (l_2481 != (-20)); l_2481 += 1)
                    { 
                        uint16_t l_2512 = 0xC7A4;
                        l_2522 ^= (((int16_t)p_66 >> (int16_t)8) && (l_2521 = (l_2520 = ((int32_t)(l_2112 < ((int16_t)(func_106(l_2503.f1, ((l_2503.f2 > l_2512) , p_68.f0), l_2481, (l_2484 , (((int16_t)((uint16_t)__builtin_clzll(((uint16_t)1U * (uint16_t)p_68.f3)) * (uint16_t)p_66) >> (int16_t)l_2364.f0) , 0x3C0696B1)), l_2481) || 0) >> (int16_t)p_68.f0)) + (int32_t)l_2519))));
                    }
                    return l_2500.f3;
                }
                return p_66;
            }
            else
            { 
                int32_t l_2539 = 0;
                int32_t l_2540 = 0;
                int16_t l_2581 = 0;
                union U0 l_2601 = {8U};
                if (((int16_t)(-9) << (int16_t)((l_2540 |= ((int16_t)((int16_t)((p_66 & ((((uint32_t)((int32_t)p_66 + (int32_t)(l_2533 = 0x9DF5B088)) + (uint32_t)(((uint16_t)65535U * (uint16_t)(p_68.f0 &= ((uint32_t)l_2364.f3 + (uint32_t)(l_2481 & ((!((p_67 , l_2539) <= p_67)) != l_2481))))) , p_68.f0)) > 0U) & l_2500.f3)) , p_68.f0) - (int16_t)p_67) << (int16_t)l_2501)) >= 0xBFBB)))
                { 
                    uint32_t l_2544 = 0x62294F95;
                    l_2481 = ((__builtin_clz(((p_67 != (((-1) && p_67) && ((int16_t)func_106((l_1885 = (~__builtin_clzll((l_2361 |= l_2544)))), (((int16_t)(l_2552 = ((((int32_t)l_2500.f3 + (int32_t)((!(l_2275 , (p_68.f0 &= 1))) && ((int16_t)0xAD3E + (int16_t)l_2500.f0))) >= 0xC21B1434) , 0)) << (int16_t)3) & l_2500.f3), l_2539, l_2433, l_2500.f0) >> (int16_t)l_2539))) ^ 65535U)) == 65535U) | l_2544);
                    for (l_1888.f0 = 0; (l_1888.f0 != 18); l_1888.f0 += 9)
                    { 
                        l_2522 = 0;
                        p_67 |= (l_2270 = ((int16_t)5 >> (int16_t)14));
                    }
                }
                else
                { 
                    int16_t l_2557 = 0xE44D;
                    int32_t l_2560 = 0x5F6838E4;
                    union U0 l_2580 = {0U};
                    uint32_t l_2583 = 0x7AA54974;
                    l_1885 ^= l_2557;
                    p_67 = p_68.f0;
                    for (l_1481.f1 = 27; (l_1481.f1 >= 21); l_1481.f1 -= 1)
                    { 
                        union U0 l_2567 = {0x88E2B9DC};
                        int32_t l_2578 = 0;
                        l_2560 ^= l_2557;
                        l_2522 = __builtin_ffs(((int32_t)((func_94(l_2522, __builtin_clzl(l_2433), ((int16_t)((0x1F85 != p_66) <= p_67) - (int16_t)(((int32_t)(l_2047 = (l_2323 >= 0)) - (int32_t)p_67) | 0x8551)), p_68, l_2567) <= l_2557) > l_2384) % (int32_t)0x39D3139B));
                        p_67 = __builtin_ctzll((((uint32_t)((int16_t)(p_68 , __builtin_popcount(l_2384)) - (int16_t)func_94((((int16_t)(l_2281.f3 <= (((((((uint16_t)l_2567.f2 >> (uint16_t)6) == ((int16_t)(65535U || ((func_94((l_2578 = (l_2567.f4 != p_67)), (l_2552 &= (((~(l_2501 , l_2567.f2)) && 0xB33C1BF8) , p_68.f0)), p_67, p_68, l_2580) == 0xF7D5) > 0xEFC88C39)) << (int16_t)l_2581)) || 0xCBEAC3F6) <= 0x447C) && (-1)) == l_2580.f4)) * (int16_t)65534U) , 0x095236D0), l_2580.f4, p_67, p_68, l_2582)) + (uint32_t)0xEFB959F7) , p_67));
                        l_2540 = l_2583;
                    }
                }
                l_2481 = ((int16_t)(l_2522 = (__builtin_parityll(p_68.f3) <= p_68.f0)) << (int16_t)((func_78(l_2539, l_1888, (l_1907 = (((int32_t)(((0xEEC3 ^ ((int16_t)(func_100(l_2500.f3, (((uint16_t)((0xC5E1AC95 || (l_2384 == l_2582.f2)) ^ 1U) >> (uint16_t)11) == 4294967286U)) <= l_2539) * (int16_t)l_1481.f0)) ^ l_2364.f3) & 0x5F2E621C) - (int32_t)p_66) && p_68.f3)), p_67, p_66) , l_2500.f0) , l_2364.f3));
                for (l_2364.f2 = 22; (l_2364.f2 == 4); l_2364.f2 -= 6)
                { 
                    uint32_t l_2600 = 8U;
                    int32_t l_2603 = 0xAFF56357;
                    union U1 l_2605 = {1};
                    int32_t l_2627 = 0x047D808E;
                    if (p_68.f0)
                        break;
                    if (((((uint16_t)func_100((((int16_t)p_68.f3 * (int16_t)l_2539) == (0x046E ^ (((uint32_t)((((func_94(l_2384, p_66, l_2600, p_68, l_2601) , l_2500.f0) >= l_2602) >= 0U) < l_2481) + (uint32_t)4294967294U) & l_2500.f3))), p_68.f0) >> (uint16_t)5) >= l_2581) , 0xB906B063))
                    { 
                        l_2603 = p_68.f0;
                    }
                    else
                    { 
                        uint32_t l_2607 = 0x5F23A6E5;
                        int32_t l_2608 = 0x634991A1;
                        l_2608 ^= ((0U | (__builtin_bswap32(p_68.f3) == ((((-(int16_t)func_106(l_2540, l_2600, ((((l_2605 = l_2364) , p_66) | (-1)) >= __builtin_bswap32((l_2606 , l_2151.f0))), l_2364.f1, p_67)) <= l_2603) < l_2607) <= 0x4FB1453B))) , 8);
                    }
                    if (((int16_t)l_1886 >> (int16_t)(l_2615 = ((int16_t)((int32_t)p_68.f3 % (int32_t)(p_67 = l_2601.f3)) * (int16_t)0x9257))))
                    { 
                        l_2603 ^= (((l_2618 = ((int16_t)(-5) << (int16_t)8)) | p_67) ^ l_2601.f4);
                        l_2552 = 0;
                    }
                    else
                    { 
                        l_2540 = ((l_2336.f1 | (l_2481 , (l_2151.f1 , ((l_2522 = ((uint16_t)0xF3D2 << (uint16_t)((uint32_t)(p_68.f1 = ((uint16_t)func_106(p_68.f3, l_2606.f1, l_2606.f0, l_2603, p_66) >> (uint16_t)8)) % (uint32_t)0x8F34BB10))) < p_67)))) | p_66);
                        l_2540 = ((p_68.f0 > p_68.f1) , __builtin_parityl((func_100(p_68.f0, (p_68.f1 >= ((int32_t)l_2627 % (int32_t)p_66))) <= 0x41C89250)));
                        p_67 = p_68.f1;
                    }
                    l_2627 = ((uint16_t)((0xE5EA & p_68.f0) < ((l_2603 = (func_78(l_2601.f1, l_2630, ((!(~(p_67 |= (l_2361 = ((uint16_t)(l_2552 = (l_1907 = p_66)) - (uint16_t)(((0 == __builtin_clz(l_2630.f1)) && ((1U < l_2606.f4) >= p_68.f3)) & l_2582.f3)))))) , l_2384), l_2601.f1, p_68.f3) , 6U)) ^ 0x1F38)) >> (uint16_t)p_68.f3);
                }
            }
            if (p_68.f0)
            { 
                int16_t l_2635 = 0xA079;
                if (p_68.f0)
                    break;
                l_2635 |= p_66;
                l_2522 = l_2636;
            }
            else
            { 
                uint16_t l_2639 = 1U;
                union U0 l_2645 = {4294967293U};
                union U1 l_2646 = {0xC5E4};
                int32_t l_2647 = 0x3A302C28;
                uint32_t l_2654 = 4294967295U;
                int32_t l_2668 = 0x157C1F0F;
                uint32_t l_2707 = 0x3AC894B3;
                l_2647 = (p_68.f0 < ((uint16_t)((65535U || (l_1907 = (l_2639 = p_68.f3))) == (1U <= (((uint16_t)((l_2522 |= 65532U) , l_2618) % (uint16_t)((uint16_t)p_66 << (uint16_t)6)) != (-(uint32_t)func_94((func_94((p_67 == (l_2500.f0 & l_1482.f0)), l_2630.f1, p_68.f0, l_2364, l_2645) ^ 0xC60C), p_66, p_66, l_2646, l_2582))))) >> (uint16_t)10));
                l_2361 = (0x83A2 >= ((int16_t)(p_66 || (l_1885 = (l_2647 &= (((uint16_t)((p_67 && ((uint16_t)(l_2645 , __builtin_parity((l_2281.f3 ^ p_67))) % (uint16_t)p_68.f0)) && (l_2654 == 0x237CF195)) * (uint16_t)l_2533) >= l_2655)))) >> (int16_t)7));
                if (p_67)
                    continue;
                if (l_2323)
                { 
                    int16_t l_2656 = (-9);
                    int32_t l_2665 = 0;
                    if (p_66)
                        break;
                    p_67 = (l_2646.f0 != (l_2656 && ((l_2656 <= __builtin_clz(((int16_t)(p_68.f0 |= l_2645.f2) * (int16_t)((int16_t)((uint32_t)0x844C7CB3 + (uint32_t)((uint16_t)0xAAA7 * (uint16_t)(l_2668 |= (l_2647 ^= (l_2656 != ((((l_2665 ^= l_2639) != ((uint16_t)(l_2361 = ((-4) ^ l_2618)) << (uint16_t)p_67)) , l_1481) , 7)))))) << (int16_t)11)))) & l_2645.f1)));
                    l_2361 = ((p_68.f1 = (((int16_t)(((uint16_t)p_68.f0 * (uint16_t)((uint16_t)((l_2481 = (((l_2047 = (p_66 <= 0x181A)) >= (func_106(((l_2615 , ((uint16_t)0x0349 >> (uint16_t)p_67)) < 1), __builtin_ctzl((l_2665 = ((uint32_t)((!(((p_68 , ((int16_t)func_100(p_67, p_67) << (int16_t)15)) , l_2630) , l_1482.f3)) >= 0U) + (uint32_t)0xB185676E))), l_2089, p_68.f3, p_67) && l_2606.f1)) , l_2500.f0)) > 0xEC3F) * (uint16_t)l_2500.f3)) && l_2656) * (int16_t)l_2364.f0) & 0xE3DD)) == l_2646.f3);
                    for (l_2364.f2 = 0; (l_2364.f2 <= 27); l_2364.f2 += 5)
                    { 
                        int32_t l_2701 = 0;
                        int32_t l_2702 = (-4);
                        int16_t l_2703 = 0xBBC5;
                        l_2481 |= (((-(uint32_t)(__builtin_ctz(((uint32_t)((l_2702 = ((~((((uint16_t)func_100(p_66, l_2654) * (uint16_t)l_2606.f4) <= (p_68.f0 = (l_2552 != ((uint16_t)p_67 * (uint16_t)(((int16_t)0x92E2 * (int16_t)((int16_t)l_2645.f1 + (int16_t)(~((((p_67 ^ p_68.f3) & 0U) , l_2701) < 0x2E9DD5A0)))) >= p_68.f3))))) && 0x2F49)) & l_2618)) | p_66) % (uint32_t)p_66)) & 0U)) > l_2019) & p_66);
                        l_2703 &= p_68.f0;
                    }
                }
                else
                { 
                    uint32_t l_2708 = 4294967295U;
                    int32_t l_2709 = (-1);
                    for (l_1907 = 0; (l_1907 >= (-16)); l_1907 -= 1)
                    { 
                        if (l_1481.f3)
                            break;
                        if (l_2500.f0)
                            continue;
                        return l_2706;
                    }
                    l_2361 &= ((l_2709 |= (((p_68.f3 ^= (l_2707 > (l_2655 >= l_2364.f2))) | (l_2706 | l_2275)) >= l_2708)) ^ (l_2647 = (l_2630.f0 , ((uint32_t)((((((((uint32_t)(~(p_67 ^ (p_66 | l_2618))) + (uint32_t)p_67) <= l_2708) != (-1)) || p_67) , 0xA7905441) >= 0x9237D4CD) | (-1)) + (uint32_t)0U))));
                    for (l_1481.f1 = 0; (l_1481.f1 == 35); l_1481.f1 += 1)
                    { 
                        l_2709 = p_68.f3;
                        p_67 |= ((uint16_t)((int16_t)1 % (int16_t)p_68.f3) >> (uint16_t)(p_66 < ((int16_t)(l_2709 = (l_2646.f3 < l_2645.f1)) >> (int16_t)11)));
                    }
                }
            }
        }
    }
    return l_1888.f1;
}




static union U0  func_78(uint32_t  p_79, union U2  p_80, uint16_t  p_81, uint32_t  p_82, uint32_t  p_83)
{ 
    int32_t l_1890 = 1;
    uint16_t l_1898 = 1U;
    union U0 l_1899 = {0xA439ED38};
    if ((-(uint32_t)(l_1890 ^ l_1890)))
    { 
        int32_t l_1891 = 0xBEEEA751;
        l_1891 = l_1890;
    }
    else
    { 
        uint32_t l_1892 = 0xC4CF017D;
        int32_t l_1893 = 1;
        l_1893 = l_1892;
    }
    l_1890 ^= ((int16_t)((uint32_t)p_79 % (uint32_t)4294967295U) * (int16_t)l_1898);
    return l_1899;
}




inline static uint32_t  func_94(uint32_t  p_95, uint32_t  p_96, int32_t  p_97, union U1  p_98, union U0  p_99)
{ 
    int32_t l_1485 = (-1);
    union U2 l_1490 = {0xB660};
    uint32_t l_1493 = 0x40A9595A;
    int32_t l_1494 = (-8);
    union U0 l_1506 = {1U};
    union U1 l_1509 = {1};
    uint16_t l_1550 = 0x4503;
    int32_t l_1884 = 0x9ABB21CA;
    l_1494 |= (__builtin_ctz(p_99.f3) <= ((uint32_t)((p_97 = ((((l_1485 |= p_96) && ((uint32_t)p_97 + (uint32_t)((p_95 == (((int16_t)(l_1490 , (func_106(p_99.f0, (l_1485 |= (((uint16_t)((l_1490.f1 < __builtin_parityll(p_99.f0)) >= 0x98AF) * (uint16_t)l_1493) , l_1490.f0)), l_1493, l_1493, l_1490.f1) ^ l_1490.f0)) * (int16_t)p_96) <= l_1490.f0)) ^ p_99.f1))) >= (-3)) == 7)) == 1) + (uint32_t)0xDC443203));
    p_97 |= (l_1490.f1 > (((int16_t)1 - (int16_t)(p_99.f0 <= ((uint32_t)((-6) >= (l_1490.f1 != (l_1493 && ((~(((int16_t)((__builtin_ctz(l_1490.f1) == (p_99.f1 , l_1485)) >= l_1493) % (int16_t)p_98.f3) | l_1493)) && 0x5E5F737A)))) - (uint32_t)p_99.f2))) == p_99.f3));
    for (p_99.f0 = 0; (p_99.f0 < 37); p_99.f0 += 9)
    { 
        int32_t l_1519 = 0x08BCC96B;
        uint32_t l_1540 = 0U;
        union U2 l_1541 = {65529U};
        int32_t l_1578 = (-1);
        union U0 l_1583 = {0x389E5E7E};
        union U1 l_1596 = {0xB6FC};
        uint16_t l_1704 = 1U;
        int16_t l_1705 = 6;
        for (p_96 = 11; (p_96 == 58); p_96 += 1)
        { 
            uint32_t l_1514 = 4294967292U;
            int32_t l_1520 = 1;
            l_1520 &= func_106(((l_1506 , ((int16_t)((((l_1509 , ((int16_t)((uint16_t)((((l_1514 && 4294967290U) && (p_98 , 65535U)) , p_98.f3) < l_1514) + (uint16_t)((uint16_t)((int32_t)p_99.f3 % (int32_t)l_1506.f3) * (uint16_t)p_98.f0)) + (int16_t)0x5E64)) , p_95) != l_1514) || l_1519) << (int16_t)14)) < p_99.f0), l_1519, p_99.f4, p_97, l_1519);
            for (p_97 = 5; (p_97 < (-27)); p_97 -= 2)
            { 
                int32_t l_1535 = 0;
                l_1494 = (((uint16_t)((uint16_t)(((((int16_t)((l_1490 , ((((uint16_t)((int16_t)((uint16_t)l_1535 >> (uint16_t)8) - (int16_t)func_100(p_99.f0, (((((int16_t)l_1519 >> (int16_t)l_1519) & p_99.f0) , ((l_1520 = (((l_1485 && 0U) ^ __builtin_parity(p_97)) == p_99.f1)) <= p_98.f0)) , 0xABBE))) >> (uint16_t)11) < l_1514) < 1)) ^ l_1535) * (int16_t)p_99.f3) & 0x3A0F) | p_98.f0) >= p_97) >> (uint16_t)l_1514) >> (uint16_t)12) , p_99.f4);
                return p_99.f4;
            }
            if (l_1506.f0)
                break;
        }
        if (((uint32_t)(6U & (l_1540 >= ((p_99.f2 <= ((l_1490 = l_1541) , (((int32_t)__builtin_clzl(((int16_t)((p_96 ^ l_1490.f0) > (3 || ((0x898E < ((p_95 |= (l_1509.f0 != l_1540)) < 5)) & 0xE8056CFA))) % (int16_t)0x7DC0)) - (int32_t)4294967293U) && 1))) > 0x2345))) + (uint32_t)0xD3E70EAA))
        { 
            uint32_t l_1549 = 4294967295U;
            uint32_t l_1563 = 0U;
            int32_t l_1579 = 0x08BFB70A;
            int32_t l_1627 = 5;
            union U1 l_1651 = {0x425C};
            union U2 l_1671 = {2U};
            p_97 ^= __builtin_ctzl(l_1506.f2);
            if ((l_1519 , (-(uint32_t)(p_98.f1 = ((int32_t)l_1519 + (int32_t)(p_97 = ((p_98 , l_1549) , l_1550)))))))
            { 
                uint32_t l_1556 = 4294967286U;
                int32_t l_1581 = 0xBE3981DE;
                int32_t l_1582 = 3;
                if (((uint16_t)((__builtin_bswap64(((uint32_t)(-(uint32_t)l_1519) + (uint32_t)l_1556)) <= ((p_97 , 0x5B3D) , 4294967289U)) == func_100(((l_1540 <= ((int16_t)l_1540 * (int16_t)(((((((int16_t)((uint16_t)(((l_1563 &= p_99.f3) || l_1519) , p_98.f3) * (uint16_t)0x5C51) + (int16_t)p_95) < 0xDBFC) >= l_1519) == 0x61ED) <= p_97) | p_98.f0))) ^ 65531U), p_99.f1)) % (uint16_t)0xE8F5))
                { 
                    if (l_1563)
                        break;
                }
                else
                { 
                    uint32_t l_1580 = 0x4D02CFA8;
                    int32_t l_1584 = 0x9C7BFF89;
                    l_1584 = (func_100(p_99.f1, (((((p_98.f0 ^ ((uint16_t)((int16_t)p_95 << (int16_t)(p_99.f3 ^ ((int16_t)((((l_1582 = (((int16_t)l_1519 << (int16_t)(l_1581 = ((l_1506.f2 < l_1549) <= (l_1485 = ((uint16_t)((p_97 |= ((__builtin_clz((l_1579 = ((int16_t)((((((int16_t)l_1509.f0 - (int16_t)((l_1578 |= (3U && p_98.f0)) != 0x80C5)) && l_1541.f1) == p_99.f1) > (-1)) < l_1556) >> (int16_t)2))) && l_1580) <= 0)) || p_97) + (uint16_t)0x3991))))) ^ p_98.f3)) || p_99.f4) | 1) <= p_99.f3) * (int16_t)1U))) % (uint16_t)p_99.f3)) , p_96) > 0x8290) , l_1583) , 65534U)) <= l_1583.f0);
                    if (p_99.f1)
                        continue;
                    p_97 ^= ((p_95 >= 0xCC8A5060) < ((uint16_t)(((uint16_t)((func_106(l_1583.f4, (~(p_98 , ((uint16_t)(((int16_t)(l_1583 , ((uint32_t)(l_1584 || ((l_1596 , (p_98.f3 ^ func_106(p_99.f1, p_98.f3, p_99.f2, p_99.f2, l_1493))) > 0)) % (uint32_t)0x56088A10)) % (int16_t)l_1581) & 0xFF1A) >> (uint16_t)p_99.f0))), p_99.f0, l_1563, p_96) >= p_98.f0) , l_1563) * (uint16_t)0x56C5) == l_1506.f2) >> (uint16_t)l_1582));
                }
                l_1579 = l_1563;
                p_97 = (((uint16_t)(((((l_1541 , (-(uint32_t)(l_1541.f0 | (((-(uint16_t)0x4FBC) & (!((int16_t)(l_1583.f2 >= ((l_1549 && ((int16_t)(p_98.f0 = 0xD36D) * (int16_t)(((uint16_t)(l_1506.f0 , l_1583.f0) >> (uint16_t)9) ^ ((uint16_t)l_1581 >> (uint16_t)p_99.f2)))) , p_99.f1)) + (int16_t)0x5712))) != l_1549)))) < p_95) , l_1506.f3) > l_1581) , l_1506.f0) >> (uint16_t)l_1506.f2) , 7);
                return l_1563;
            }
            else
            { 
                union U2 l_1614 = {0x18C6};
                p_97 |= (l_1578 = ((uint16_t)(l_1541 , ((__builtin_parityll(((int32_t)(((l_1614 , ((int16_t)(p_99.f4 | (((int16_t)((int32_t)((p_95 >= (((l_1490 , l_1509.f0) > ((int16_t)(1U < ((l_1579 = p_98.f1) >= (0x454AFAEB > p_98.f2))) - (int16_t)(-1))) && 0x742A)) ^ p_99.f4) % (int32_t)7) << (int16_t)p_99.f4) & l_1583.f3)) * (int16_t)0x7704)) > p_99.f0) | p_99.f2) - (int32_t)1)) || 0x9D713703) <= 0x8E993344)) >> (uint16_t)11));
                l_1519 &= ((l_1579 > (l_1549 < p_98.f1)) & ((uint16_t)((__builtin_clzl(p_99.f2) >= l_1579) > (l_1578 ^= ((uint16_t)(((l_1509.f0 | __builtin_parityll(p_99.f1)) & 0x54C9F90D) == l_1627) >> (uint16_t)6))) * (uint16_t)p_99.f0));
                p_97 = l_1583.f3;
            }
            if (((uint16_t)((uint32_t)((uint16_t)((uint32_t)((((l_1519 = ((int16_t)0x4BA2 >> (int16_t)3)) == l_1583.f3) ^ (((int32_t)p_96 - (int32_t)((((-(uint32_t)0x6F6A878D) > 65529U) , l_1583.f2) || ((l_1485 = (((int32_t)((p_98.f3 &= ((int32_t)((p_99.f2 & p_99.f3) | p_99.f3) - (int32_t)(-1))) != p_97) - (int32_t)l_1506.f3) && 0xEDFE)) < l_1578))) != l_1506.f3)) < p_96) - (uint32_t)0xCF832D46) - (uint16_t)0x3C4B) + (uint32_t)0x634DD400) * (uint16_t)p_99.f3))
            { 
                int32_t l_1660 = 5;
                int32_t l_1673 = 7;
                for (l_1485 = 10; (l_1485 <= 13); l_1485 += 4)
                { 
                    uint32_t l_1659 = 0U;
                    for (l_1583.f3 = 0; (l_1583.f3 > (-21)); l_1583.f3 -= 3)
                    { 
                        uint16_t l_1670 = 0x88CF;
                        uint16_t l_1672 = 0xDA1F;
                        int32_t l_1674 = 0x50A375F0;
                        l_1627 |= (((l_1651 , p_99) , (func_106(l_1541.f0, (p_98.f2 = (__builtin_ffsll(p_98.f0) < (~__builtin_parityll((((((int16_t)((int32_t)0xFC9B5ED3 - (int32_t)((l_1494 &= ((uint32_t)func_100(((l_1659 > 0x2B5E) <= p_96), l_1490.f0) - (uint32_t)p_99.f2)) > p_97)) >> (int16_t)12) < 0x6A25) ^ l_1651.f0) && p_98.f3))))), l_1659, p_99.f0, l_1578) <= p_99.f3)) ^ l_1541.f0);
                        l_1627 = ((l_1660 ^ ((uint16_t)(((l_1673 = (((((int16_t)(~p_99.f2) * (int16_t)(((((l_1563 <= (~p_98.f2)) & ((l_1659 != (p_95 = __builtin_bswap32(((-(uint16_t)((int32_t)l_1670 + (int32_t)(l_1671 , p_98.f3))) && l_1596.f3)))) > l_1672)) | l_1672) > 1U) || l_1550)) < p_98.f0) , l_1583.f3) && (-6))) >= p_99.f2) >= 0xDE3F155A) << (uint16_t)14)) == p_99.f4);
                        l_1674 = __builtin_ffs(p_98.f0);
                    }
                    l_1579 = (-1);
                    return p_99.f4;
                }
                p_97 ^= (!p_99.f2);
                l_1579 |= ((uint16_t)((l_1506.f1 & ((int16_t)(l_1494 = (p_98.f0 = (__builtin_ctzl(((((int16_t)(((l_1673 = l_1651.f0) ^ p_99.f0) != 0xE376) >> (int16_t)7) & (((uint16_t)__builtin_ctzl(l_1660) << (uint16_t)__builtin_ia32_crc32qi(l_1651.f3, (((int16_t)(((uint16_t)((7 >= (((int16_t)((uint16_t)(func_100(p_99.f0, l_1583.f0) != l_1627) - (uint16_t)0xFBC5) >> (int16_t)14) , 0U)) && 0x622BD514) % (uint16_t)p_98.f0) ^ p_99.f0) * (int16_t)l_1506.f4) || l_1549))) , p_99.f4)) != 4294967288U)) , p_99.f2))) << (int16_t)10)) , p_98.f0) - (uint16_t)l_1583.f1);
            }
            else
            { 
                uint32_t l_1692 = 0U;
                int32_t l_1706 = 0xEB12CA29;
                p_97 = l_1692;
                l_1706 |= func_100(l_1550, (((uint16_t)((int16_t)((l_1494 = (p_95 ^ ((int16_t)(l_1485 = (l_1519 = ((p_99.f4 < ((uint16_t)0x04B3 * (uint16_t)(0x3071FD9F < p_95))) & (~((uint16_t)p_99.f1 >> (uint16_t)1))))) << (int16_t)l_1704))) && ((__builtin_ffsll(l_1705) <= p_99.f3) , l_1509.f3)) >> (int16_t)12) * (uint16_t)0xB456) == l_1583.f0));
                p_97 &= (0U && (p_99.f1 , ((uint16_t)(((int16_t)l_1706 % (int16_t)((int16_t)(p_98.f3 ^= 1) + (int16_t)(l_1651.f3 || (~(p_99 , (l_1506.f1 >= ((uint16_t)(p_95 != l_1506.f2) * (uint16_t)0xDE89))))))) > p_96) >> (uint16_t)p_99.f3)));
            }
            for (l_1578 = 0; (l_1578 != (-15)); l_1578 -= 1)
            { 
                int32_t l_1718 = (-1);
                l_1627 ^= ((((l_1490 , l_1718) && (((l_1718 = (0xAAA8 || ((uint32_t)((uint16_t)((__builtin_ia32_crc32qi(func_106(((uint32_t)p_98.f0 % (uint32_t)((uint16_t)((int16_t)((l_1490.f0 != ((uint16_t)l_1579 * (uint16_t)0)) == l_1506.f3) * (int16_t)(p_99.f2 , p_99.f1)) << (uint16_t)l_1509.f0)), p_99.f1, p_99.f4, p_99.f3, l_1490.f0), p_96) | p_98.f0) || 0xD05C3C53) - (uint16_t)l_1583.f2) % (uint32_t)l_1651.f3))) ^ 65526U) , l_1485)) < 0) && 0x18F92F92);
            }
        }
        else
        { 
            int16_t l_1731 = 0x0E55;
            union U2 l_1740 = {3U};
            int32_t l_1772 = 0x0A5DFAE4;
            int32_t l_1800 = 0x28B789E3;
            l_1519 = p_99.f0;
            if (__builtin_ffsll(p_97))
            { 
                union U2 l_1739 = {0x0A63};
                if (l_1731)
                    break;
                p_97 = (func_106((((uint16_t)((uint16_t)((uint16_t)((l_1493 == (8U != (0xB3AD2C40 & ((!((l_1740 = l_1739) , l_1739.f1)) != (p_99 , l_1731))))) < p_98.f0) * (uint16_t)p_99.f2) >> (uint16_t)1) >> (uint16_t)p_96) == 0x8135), l_1731, l_1583.f3, l_1731, l_1731) <= p_95);
            }
            else
            { 
                union U2 l_1741 = {0xCB81};
                uint32_t l_1749 = 4294967289U;
                p_97 |= (l_1741 , l_1740.f0);
                if ((((uint16_t)func_100(((l_1740.f1 , 0U) || p_99.f0), (~(((int16_t)l_1485 << (int16_t)((int32_t)l_1485 - (int32_t)func_100(l_1749, p_98.f0))) > ((uint16_t)((func_106(l_1506.f1, l_1749, p_95, l_1731, p_99.f2) & l_1506.f4) == p_99.f1) * (uint16_t)l_1506.f0)))) % (uint16_t)l_1749) || l_1741.f1))
                { 
                    uint32_t l_1754 = 0x8843343F;
                    l_1754 = ((int16_t)l_1578 * (int16_t)(func_100(p_99.f2, l_1731) != l_1749));
                }
                else
                { 
                    uint32_t l_1763 = 3U;
                    int32_t l_1773 = 0x3917F92C;
                    union U1 l_1778 = {-4};
                    l_1519 = __builtin_bswap64(((__builtin_ia32_crc32qi((l_1506.f0 && ((int16_t)((int16_t)(p_95 < ((uint32_t)((uint16_t)(l_1763 ^ (p_99.f1 < (l_1773 = ((p_96 & ((uint16_t)l_1583.f1 << (uint16_t)(((int16_t)((uint16_t)0x517B >> (uint16_t)((uint32_t)p_99.f0 - (uint32_t)(l_1772 &= l_1740.f1))) >> (int16_t)p_99.f4) < p_99.f0))) && 9U)))) * (uint16_t)l_1741.f1) - (uint32_t)l_1763)) << (int16_t)2) - (int16_t)0xCC92)), p_98.f3) < l_1741.f0) ^ l_1583.f0));
                    l_1773 = (((-(int32_t)((-(int16_t)(p_98.f0 = (((p_99 , l_1596.f3) != ((int32_t)(l_1494 ^= (l_1778 , (l_1772 = (((int16_t)l_1740.f1 - (int16_t)65535U) && l_1763)))) + (int32_t)((!((0xBB14 >= (l_1583.f4 > ((uint32_t)((p_99 , 0xA25BFA5A) | p_99.f1) % (uint32_t)p_95))) != l_1506.f2)) && p_95))) , l_1506.f3))) != l_1763)) <= l_1778.f0) ^ l_1578);
                }
                l_1485 = l_1704;
            }
            if ((l_1541.f1 > (((((p_96 , 5) && l_1509.f0) && (((((uint32_t)((((l_1772 = p_98.f0) < ((int16_t)func_100(l_1740.f0, p_97) >> (int16_t)p_99.f1)) , p_99.f3) && l_1740.f1) + (uint32_t)1) , 0xE14C) , 8U) & 1)) || p_99.f1) || l_1541.f0)))
            { 
                p_97 = 0x57B21536;
            }
            else
            { 
                int32_t l_1802 = 0xD2DECF78;
                int32_t l_1803 = 0xD1F7A128;
                int32_t l_1841 = (-5);
                int32_t l_1851 = 0x99DBF511;
                if (p_98.f0)
                    break;
                if (p_96)
                { 
                    union U0 l_1794 = {4294967287U};
                    if (p_99.f2)
                        break;
                    p_97 = (l_1803 &= ((p_99 , ((uint16_t)((int16_t)p_99.f2 + (int16_t)((uint32_t)((__builtin_popcountll((l_1596.f0 < (((p_98 , (((l_1740.f1 , l_1794) , (l_1772 ^= (p_96 ^= ((uint16_t)(-(uint16_t)((uint16_t)l_1800 % (uint16_t)(func_106(p_95, (((l_1802 = (-(int16_t)__builtin_bswap64(((p_98.f0 = (l_1490 , p_95)) <= l_1794.f3)))) , p_99.f1) | 65535U), p_97, l_1794.f1, p_99.f2) , p_99.f0))) << (uint16_t)l_1506.f4)))) < l_1490.f0)) & 0x119DB021) , 0x5A0AAAD7))) >= 0xB120) , p_98.f0) + (uint32_t)p_99.f4)) % (uint16_t)p_99.f2)) , l_1509.f3));
                    if (p_99.f3)
                        break;
                    for (l_1704 = 0; (l_1704 > 4); l_1704 += 7)
                    { 
                        uint32_t l_1816 = 0x8E98079C;
                        int32_t l_1825 = 0x6421F84E;
                        p_97 = p_99.f3;
                        l_1494 = (((int16_t)((int16_t)((int32_t)l_1794.f0 % (int32_t)__builtin_parity(p_96)) * (int16_t)((p_98 , (l_1485 = ((((uint32_t)p_96 + (uint32_t)(p_97 = ((uint16_t)(l_1816 = l_1794.f1) - (uint16_t)((l_1596.f3 & (((int16_t)(l_1519 = (p_98.f3 = l_1803)) + (int16_t)((((uint16_t)((uint16_t)((int16_t)1 >> (int16_t)11) << (uint16_t)0) - (uint16_t)l_1802) && p_99.f2) <= 0xEC33)) & p_95)) >= l_1731)))) , (-1)) >= l_1825))) & p_99.f4)) >> (int16_t)2) == 0x87B4);
                    }
                }
                else
                { 
                    int32_t l_1836 = 0x7EFA2493;
                    if ((__builtin_clzll(((int16_t)((((uint16_t)(((int16_t)l_1596.f0 - (int16_t)(((uint16_t)(l_1490 , (((((l_1578 = (l_1490 , (__builtin_popcountll(((p_99.f1 , p_99) , (((l_1803 <= ((uint16_t)(l_1836 & ((int16_t)(p_98.f0 = ((uint16_t)l_1841 << (uint16_t)(((uint16_t)l_1772 >> (uint16_t)p_99.f3) >= 0x03665FEC))) << (int16_t)5)) - (uint16_t)p_97)) && l_1800) | 8))) & l_1836))) || 0) && l_1802) && p_99.f2) < p_97)) << (uint16_t)p_99.f0) , 0)) || l_1740.f1) >> (uint16_t)2) ^ 4294967294U) | p_99.f0) >> (int16_t)p_96)) || p_96))
                    { 
                        int16_t l_1846 = (-10);
                        l_1519 |= (func_106((p_97 |= ((uint16_t)l_1846 >> (uint16_t)((p_98.f0 != l_1740.f1) & p_95))), l_1803, l_1583.f4, (l_1509 , (l_1506.f2 | ((0xC3F925E3 == l_1494) , 0xDF25DBE9))), l_1731) && l_1493);
                        if (p_96)
                            continue;
                    }
                    else
                    { 
                        l_1836 = p_99.f3;
                        l_1851 = (2 >= ((int16_t)((int16_t)p_98.f0 << (int16_t)5) << (int16_t)4));
                        p_97 |= (((int16_t)l_1490.f1 % (int16_t)p_99.f3) >= 0xC8E6);
                    }
                    l_1519 = l_1803;
                    for (p_96 = (-16); (p_96 > 9); p_96 += 1)
                    { 
                        return l_1772;
                    }
                    l_1578 = (((int16_t)(p_96 <= (l_1578 > p_98.f0)) - (int16_t)l_1578) & (p_99 , (((l_1485 ^= ((int16_t)(l_1803 = (-(int16_t)l_1490.f0)) >> (int16_t)15)) == ((l_1841 = (p_97 = 0)) >= (p_95 = p_98.f0))) , p_99.f4)));
                }
                for (l_1519 = 0; (l_1519 >= (-13)); l_1519 -= 1)
                { 
                    uint32_t l_1865 = 0x5E2E1AA6;
                    l_1578 = __builtin_ffsll(p_99.f2);
                    for (l_1772 = 0; (l_1772 < (-24)); l_1772 -= 1)
                    { 
                        union U1 l_1866 = {0x5C65};
                        l_1494 = (((((p_98.f3 ^ l_1865) == (p_99 , 0xB13F)) && func_100((l_1866 , (func_106(p_99.f4, p_95, func_100((0xCAFF780C >= (p_96 &= (l_1851 , 0U))), l_1802), p_98.f3, p_99.f2) , 0x8644E022)), p_99.f4)) <= l_1841) , l_1802);
                        l_1800 = l_1493;
                    }
                }
            }
            l_1485 = (-(int16_t)((uint32_t)1U - (uint32_t)(p_96 = (l_1578 = __builtin_bswap64((p_98 , 4294967295U))))));
        }
        p_97 = ((0xDCC2 <= ((int16_t)((uint16_t)((int16_t)__builtin_ffsl(((((l_1506.f3 , 4294967288U) || l_1519) == (65528U > (l_1583 , p_96))) , func_100(((uint16_t)(l_1493 & (__builtin_ffs((((int16_t)(((uint16_t)((uint16_t)p_99.f1 - (uint16_t)6U) >> (uint16_t)13) < l_1705) + (int16_t)l_1506.f4) , p_96)) < p_99.f3)) * (uint16_t)p_98.f0), p_99.f0))) % (int16_t)p_97) - (uint16_t)p_96) >> (int16_t)l_1506.f3)) ^ p_97);
    }
    return l_1884;
}




static uint16_t  func_100(int32_t  p_101, uint16_t  p_102)
{ 
    uint16_t l_105 = 0x9396;
    union U2 l_112 = {1U};
    int32_t l_752 = 1;
    uint32_t l_784 = 0xB2298004;
    union U1 l_806 = {-1};
    int32_t l_816 = (-5);
    int32_t l_817 = (-1);
    int32_t l_818 = 0xD5B07AEB;
    int32_t l_846 = 0xB85702DA;
    uint16_t l_921 = 8U;
    int32_t l_980 = 1;
    int32_t l_1083 = 7;
    union U0 l_1156 = {4294967295U};
    int32_t l_1236 = (-1);
    int16_t l_1237 = 0x8219;
    union U0 l_1257 = {1U};
    int32_t l_1285 = 0;
    union U1 l_1303 = {-2};
    uint32_t l_1329 = 0x338B6B25;
    uint16_t l_1383 = 65535U;
    uint32_t l_1392 = 4294967295U;
    int16_t l_1453 = (-5);
    for (p_102 = 0; (p_102 != 10); p_102 += 1)
    { 
        uint32_t l_119 = 0xD205C6C2;
        int32_t l_121 = 1;
        int32_t l_787 = (-7);
        int32_t l_788 = 0xF1632077;
        union U1 l_808 = {0x6582};
        l_752 = (p_101 | (p_101 >= (((p_102 , (l_105 = p_102)) >= func_106((((p_101 && ((l_112 , ((uint16_t)(((int16_t)((uint16_t)(l_119 = p_101) * (uint16_t)((-(int32_t)(l_121 == l_121)) & l_121)) % (int16_t)l_121) , l_121) >> (uint16_t)10)) || 3U)) , p_102) | l_112.f0), l_112.f1, l_112.f1, l_112.f0, l_121)) || p_102)));
        for (l_105 = 0; (l_105 >= 35); l_105 += 1)
        { 
            union U0 l_755 = {0x409A4EDE};
            int32_t l_756 = (-7);
            int32_t l_768 = 1;
            uint32_t l_809 = 4294967289U;
            int16_t l_812 = 0x7F59;
            union U2 l_815 = {65530U};
            if ((l_755 , (l_756 ^= __builtin_parity((l_755 , 0x6D5FCE67)))))
            { 
                uint32_t l_769 = 0x064969E5;
                if (p_102)
                    break;
                for (l_112.f0 = 0; (l_112.f0 == 43); l_112.f0 += 1)
                { 
                    uint16_t l_761 = 3U;
                    l_121 = ((int16_t)(l_761 == (65535U | ((((uint16_t)p_102 >> (uint16_t)((-1) != (l_769 ^= func_106(p_101, (((int16_t)p_101 * (int16_t)l_105) > (l_768 = (l_756 = func_106(((((int32_t)0x35BA3FCB - (int32_t)(-2)) , l_755.f2) , 1), l_112.f1, l_755.f3, l_755.f2, l_755.f1)))), p_102, l_755.f2, p_101)))) && l_769) & l_121))) << (int16_t)6);
                }
            }
            else
            { 
                uint16_t l_772 = 0xFA1F;
                int32_t l_789 = 1;
                int32_t l_790 = 0xDED09E91;
                union U0 l_803 = {1U};
                union U1 l_807 = {0xA859};
                if ((((int16_t)l_768 - (int16_t)l_772) < ((int32_t)(0xEB88 && p_102) + (int32_t)(1 || ((p_101 , 0x53C1F88A) , (~l_772))))))
                { 
                    uint32_t l_776 = 0x2C98F5F0;
                    uint32_t l_781 = 0xA1469EA8;
                    int32_t l_791 = (-1);
                    l_776 = p_102;
                    l_790 ^= ((l_121 ^ ((((7 || ((((l_788 = ((int16_t)(((((int16_t)l_781 >> (int16_t)((uint32_t)((l_784 , ((int32_t)(((((l_772 <= ((l_787 = ((l_768 = (((l_112.f1 , ((l_776 , (__builtin_parityll(l_772) != 0U)) != 0xB931)) >= p_102) >= l_768)) || 1U)) | p_102)) | l_121) | p_101) & p_102) , p_101) + (int32_t)l_112.f0)) && l_112.f1) + (uint32_t)p_101)) <= 0xA4DFEBEB) && l_105) & l_105) << (int16_t)10)) , l_772) == 0U) , l_789)) <= p_102) <= p_101) < 0x6ABB)) < l_755.f4);
                    l_791 ^= p_102;
                    l_791 |= ((uint16_t)(l_768 ^= l_787) << (uint16_t)9);
                }
                else
                { 
                    if (p_101)
                        break;
                }
                l_790 = func_106(((uint16_t)((int16_t)0xB679 >> (int16_t)15) * (uint16_t)(7 && (1U | (__builtin_bswap64((l_789 , ((int16_t)((~(p_101 ^ p_102)) & __builtin_ia32_crc32qi(((int16_t)((l_803 , __builtin_ffsl(((uint32_t)(l_768 = ((l_808 = (l_807 = l_806)) , l_755.f2)) - (uint32_t)p_101))) != l_803.f0) % (int16_t)l_772), p_101)) >> (int16_t)l_752))) , 4294967292U)))), p_101, l_121, l_809, l_121);
            }
            l_756 = (((uint16_t)__builtin_clzl((l_812 ^ ((int16_t)(l_815 , l_809) + (int16_t)p_102))) >> (uint16_t)4) , (p_102 ^ l_806.f0));
            l_787 = (p_102 == (l_812 , p_102));
        }
    }
    l_818 |= ((l_816 ^= (l_752 = 0x216897F5)) != (l_112.f0 || (l_817 = p_102)));
    for (l_105 = (-17); (l_105 > 10); l_105 += 3)
    { 
        int16_t l_835 = 0xE2F2;
        int32_t l_841 = (-7);
        int32_t l_844 = 0x5A79B0A3;
        union U0 l_891 = {9U};
        union U0 l_895 = {3U};
        union U1 l_920 = {0x8D89};
        union U1 l_943 = {1};
        uint32_t l_952 = 0x6AA9345F;
        union U2 l_993 = {65526U};
        if (l_112.f0)
            break;
        for (l_112.f0 = 0; (l_112.f0 == 43); l_112.f0 += 1)
        { 
            uint32_t l_823 = 1U;
            uint32_t l_832 = 1U;
            union U1 l_842 = {-1};
            int32_t l_843 = 0;
            int32_t l_845 = 6;
            int32_t l_863 = 0x581FE3CA;
            int16_t l_887 = 1;
            union U2 l_961 = {0xB3EF};
            int32_t l_989 = 0;
            if (func_106(((l_823 <= ((uint16_t)0U >> (uint16_t)(((l_818 = (p_102 == ((int16_t)(l_112.f0 | (((uint16_t)0x512C << (uint16_t)(l_817 = func_106((((uint32_t)l_832 + (uint32_t)(l_845 = (l_816 , (((uint16_t)l_835 >> (uint16_t)((uint16_t)(l_844 = ((~((((l_841 = ((int16_t)(-1) * (int16_t)p_101)) || p_101) , l_842) , l_843)) == 0xFCB4)) >> (uint16_t)p_101)) , p_101)))) , l_844), l_817, l_818, p_102, p_102))) , p_102)) * (int16_t)7U))) , 0xD97B9249) | 0U))) , l_846), p_101, p_101, l_842.f0, p_101))
            { 
                union U2 l_849 = {65529U};
                union U0 l_894 = {0xBC7EB4ED};
                int32_t l_900 = 0x28D1FAE4;
                if ((((l_849 , (l_841 = l_849.f1)) <= 0U) , p_102))
                { 
                    return p_101;
                }
                else
                { 
                    int32_t l_858 = 0xD5991138;
                    union U2 l_878 = {0x7527};
                    int32_t l_919 = 7;
                    int32_t l_922 = 0x6E4108AD;
                    int16_t l_925 = 0xEA18;
                    if (((uint16_t)((int32_t)((((int16_t)(l_845 = p_102) * (int16_t)(((int32_t)(l_858 = p_102) % (int32_t)((int16_t)(func_106(p_101, (((uint16_t)((((((l_863 = p_102) || (p_101 && ((uint16_t)p_101 + (uint16_t)(((uint32_t)(((uint16_t)(p_101 , (l_849.f1 != l_112.f0)) * (uint16_t)l_784) >= p_101) + (uint32_t)p_102) >= l_842.f0)))) < p_102) || l_846) && l_842.f0) > 0xA167CC05) * (uint16_t)p_101) >= 0x09B7D35B), p_102, p_102, p_102) , l_112.f1) >> (int16_t)l_105)) < 6)) ^ 0) < 0x7C8F3F67) % (int32_t)0x8FA98197) >> (uint16_t)15))
                    { 
                        int32_t l_883 = 0;
                        l_883 = ((uint16_t)((int16_t)0x4C67 >> (int16_t)p_101) >> (uint16_t)((int16_t)((uint16_t)(((l_845 = (l_878 , (((uint16_t)((__builtin_popcountll((((((int16_t)l_883 * (int16_t)(p_102 &= (l_844 |= 1U))) , ((int32_t)(l_841 && ((l_878.f0 | (func_106(p_102, (l_883 > p_102), p_102, p_102, p_101) & 0x05B2E998)) < 0xF00A)) % (int32_t)l_883)) <= l_883) , p_101)) > p_101) >= p_101) << (uint16_t)15) < 0))) & 9) | p_101) >> (uint16_t)0) << (int16_t)l_858));
                        l_841 |= 0x7035BD56;
                        l_818 &= p_101;
                        l_844 |= l_878.f0;
                    }
                    else
                    { 
                        int16_t l_886 = 0x6FFD;
                        union U2 l_890 = {1U};
                        int32_t l_901 = 0x35B2D357;
                        int32_t l_902 = 0x570822A8;
                        l_887 = l_886;
                        l_902 ^= ((l_818 ^= ((l_890 , (((l_891 , 1U) , 0x7E76) , 0xB961F0AB)) <= ((uint16_t)(p_102 ^= l_849.f1) * (uint16_t)((l_895 = l_894) , (!0x0899FFC7))))) & (((int32_t)(!(l_901 = (l_900 = 0xC4E7))) % (int32_t)p_101) & l_894.f3));
                        if (l_842.f3)
                            break;
                    }
                    for (l_752 = 0; (l_752 != 18); l_752 += 2)
                    { 
                        uint32_t l_918 = 0x708BB916;
                        uint32_t l_935 = 1U;
                        int32_t l_937 = 1;
                        union U0 l_940 = {0x62C249FE};
                        int32_t l_944 = 0x02C5F1F9;
                        int32_t l_945 = 0xEAD42964;
                        l_922 |= ((int32_t)(l_844 = (l_752 , l_894.f1)) - (int32_t)func_106(((((uint16_t)((int16_t)(((int16_t)(l_817 ^= ((((uint16_t)(!(((int16_t)0x4A49 + (int16_t)0x7D64) , ((func_106((l_863 ^= (l_818 = (l_845 = (func_106(p_101, ((((l_919 ^= __builtin_ctzl(((l_918 |= l_832) | p_101))) == (((__builtin_ffsll(l_858) ^ l_878.f0) & l_849.f1) < p_101)) , l_920) , l_921), l_818, l_878.f1, p_101) & p_102)))), l_105, l_858, l_894.f1, p_101) , p_102) , p_102))) + (uint16_t)l_878.f0) > (-2)) , p_102)) - (int16_t)p_102) > l_112.f0) * (int16_t)p_102) % (uint16_t)0xAE4C) == 0x8B4038F1) && p_101), l_816, l_832, l_846, p_102));
                        l_937 = ((uint32_t)l_925 % (uint32_t)((uint16_t)((uint16_t)p_102 >> (uint16_t)(((uint32_t)(l_816 = ((!3) >= ((uint32_t)l_935 % (uint32_t)p_101))) % (uint32_t)__builtin_ffsl((p_101 , (p_102 < (-(int32_t)(-7)))))) & p_102)) << (uint16_t)13));
                        l_945 |= (((l_845 ^= ((((p_101 >= p_102) != (((int16_t)(l_944 = ((l_894 , (l_940 , 0x69BACBDB)) < ((l_841 = __builtin_ffs(((int16_t)__builtin_clzl(((l_844 = (l_943 , ((l_900 = l_863) >= ((l_894 , (l_937 = ((l_920 , l_849) , l_895.f3))) != p_101)))) ^ p_101)) * (int16_t)p_101))) && l_920.f0))) << (int16_t)9) | p_102)) == 5U) , l_894.f1)) < l_806.f3) > (-6));
                    }
                    l_919 ^= p_102;
                    l_900 ^= (-10);
                }
                if (((uint16_t)(((l_849 , ((int32_t)((l_841 , (((l_900 |= (l_818 |= l_752)) < (p_102 <= p_102)) != ((-10) ^ (l_844 = ((int16_t)func_106(p_102, p_102, l_887, p_101, l_823) << (int16_t)l_887))))) , l_952) % (int32_t)l_752)) == p_102) , 4U) - (uint16_t)l_105))
                { 
                    uint32_t l_953 = 7U;
                    int32_t l_962 = 1;
                    if (l_112.f0)
                    { 
                        l_844 = (4294967295U ^ l_953);
                    }
                    else
                    { 
                        uint16_t l_960 = 0x5E7A;
                        if (l_894.f1)
                            break;
                        if (l_784)
                            break;
                        l_900 &= ((((uint16_t)l_953 * (uint16_t)((int16_t)l_835 - (int16_t)(l_842.f3 , ((65535U & ((p_101 & (((((int16_t)((l_960 , l_961) , (((l_895.f1 != (p_102 , l_962)) ^ 0U) < p_102)) << (int16_t)l_960) & 0x29E6) , p_101) ^ 65526U)) ^ (-7))) > 0xEF47)))) <= p_101) ^ l_962);
                    }
                    l_900 |= (-1);
                }
                else
                { 
                    uint16_t l_967 = 0U;
                    int32_t l_971 = 0;
                    if ((((l_806.f3 , 0x63C5BCD5) <= l_105) | (((uint16_t)(l_849 , (0U > l_863)) << (uint16_t)(l_900 = ((0 ^ l_891.f0) >= ((uint32_t)(l_967 , p_101) % (uint32_t)0xC71464F6)))) > 0x2C6E63AE)))
                    { 
                        int16_t l_970 = (-1);
                        l_844 = (l_863 ^= ((p_102 = (l_970 = ((int16_t)(-7) - (int16_t)l_961.f1))) < ((l_971 ^= (p_101 > l_895.f0)) & 0xC020)));
                        return l_970;
                    }
                    else
                    { 
                        l_900 = ((int32_t)((int16_t)(!((-(int32_t)l_843) != (-9))) >> (int16_t)4) - (int32_t)(l_971 ^= l_806.f3));
                        if (p_101)
                            continue;
                        if (l_952)
                            continue;
                    }
                }
                l_841 ^= (((uint16_t)(l_894 , l_980) + (uint16_t)l_842.f3) == ((-(int16_t)l_920.f3) || (((uint16_t)(l_818 ^= (l_894.f4 , 65528U)) * (uint16_t)((int16_t)l_849.f0 - (int16_t)((~((l_900 = 8) , l_842.f0)) < (-1)))) && l_894.f4)));
            }
            else
            { 
                int32_t l_994 = (-9);
                int32_t l_995 = 7;
                union U1 l_1000 = {0x7BB4};
                union U1 l_1001 = {0x6E56};
                l_752 |= (l_845 ^= (l_841 = (l_995 ^= (l_994 = func_106(p_102, ((int16_t)(l_989 = l_806.f0) << (int16_t)9), l_806.f3, ((uint16_t)(l_863 = l_921) + (uint16_t)((l_842.f0 != l_920.f3) <= (-(int32_t)((func_106(p_102, (l_816 |= (l_842 , (l_993 , l_112.f1))), p_102, l_895.f2, p_102) <= 9) || 0x2E31)))), p_101)))));
                if ((((0xFC46729B == (-3)) >= l_920.f3) != (p_101 ^ ((uint16_t)((((int16_t)((l_1000 , ((l_1001 = (l_1000 = l_920)) , ((p_101 && (l_989 <= (((int16_t)p_101 << (int16_t)p_102) == 0U))) >= p_101))) & 1) % (int16_t)p_102) ^ l_995) > 0x2A3EA881) >> (uint16_t)6))))
                { 
                    int32_t l_1011 = 0x48189AF5;
                    int32_t l_1012 = 0x79B4372F;
                    l_841 = l_961.f1;
                    l_1012 |= ((func_106(p_102, __builtin_parityll((l_844 = ((l_995 = ((uint16_t)l_817 + (uint16_t)(-(uint32_t)(((l_989 = ((int16_t)l_895.f0 >> (int16_t)5)) != (__builtin_ctz(p_102) & ((l_993.f1 < (l_1000.f0 != l_1011)) && p_101))) != l_846)))) && l_844))), l_1011, l_784, l_961.f1) != p_101) != 4294967295U);
                    l_816 &= p_102;
                    l_1012 = ((p_102 < (l_980 > (__builtin_ffsll(l_1011) && 0U))) == l_891.f1);
                }
                else
                { 
                    int16_t l_1021 = (-9);
                    l_1021 = ((uint16_t)l_817 * (uint16_t)((uint16_t)(l_1001.f0 ^ l_995) - (uint16_t)(__builtin_parityl((l_863 = p_102)) == ((int16_t)((0xAE781246 <= ((int32_t)0 % (int32_t)1U)) == 4294967295U) * (int16_t)l_994))));
                    if (l_832)
                        break;
                }
            }
            l_844 = ((0xF8B216D9 || ((uint16_t)(((p_102 , ((l_818 = (~p_101)) , l_842)) , ((p_102 , (p_101 < ((((uint32_t)((int16_t)(l_841 = (func_106((((uint16_t)p_102 + (uint16_t)((uint16_t)((l_989 ^= (l_845 = l_943.f3)) != (-(int16_t)7)) >> (uint16_t)l_895.f2)) != 0xF75E), p_102, l_993.f1, l_842.f0, l_921) && l_887)) % (int16_t)l_835) + (uint32_t)p_101) && l_784) != 4294967295U))) | p_102)) , 1U) * (uint16_t)p_102)) , 5);
            l_818 &= (l_863 = (l_845 = ((uint16_t)0x9C47 % (uint16_t)(l_989 = l_832))));
            for (l_920.f0 = (-2); (l_920.f0 >= (-9)); l_920.f0 -= 1)
            { 
                int16_t l_1038 = 0;
                int32_t l_1039 = (-1);
                l_1039 = (l_818 , (l_1038 == (l_961 , p_102)));
            }
        }
        if (l_891.f3)
        { 
            int32_t l_1042 = (-10);
            int32_t l_1049 = 0x89C2F682;
            int32_t l_1050 = 1;
            if (l_816)
                break;
            l_1050 = ((((int16_t)p_101 >> (int16_t)func_106((l_1042 = ((-5) != 0xABE3)), ((l_841 = p_101) >= (((uint32_t)((uint16_t)0U >> (uint16_t)l_844) - (uint32_t)((int16_t)8 << (int16_t)l_844)) , ((p_101 & p_102) ^ l_891.f2))), l_1049, p_102, l_1049)) ^ l_1049) >= 0xF6D61FA1);
        }
        else
        { 
            int32_t l_1051 = 0x4D962437;
            if (l_891.f4)
                break;
            l_818 = l_1051;
        }
    }
    for (l_784 = 0; (l_784 >= 8); l_784 += 1)
    { 
        uint16_t l_1054 = 0x7B05;
        union U2 l_1055 = {0xAC11};
        union U1 l_1056 = {0x7F79};
        uint16_t l_1076 = 65535U;
        int32_t l_1077 = 1;
        int32_t l_1082 = (-1);
        int32_t l_1088 = 6;
        int32_t l_1117 = 0x244CF4B8;
        union U0 l_1139 = {1U};
        int16_t l_1140 = 6;
        int32_t l_1146 = 2;
        int16_t l_1163 = 7;
        int32_t l_1164 = 0xDBC523E8;
        int32_t l_1174 = 1;
        uint16_t l_1218 = 0xA470;
        uint16_t l_1235 = 0xE11C;
        int32_t l_1261 = 0x85165050;
        int32_t l_1286 = (-6);
        uint32_t l_1288 = 0x05671644;
        int16_t l_1353 = 9;
        uint32_t l_1367 = 0x409408CF;
        int16_t l_1480 = 0x564D;
        if (l_1054)
        { 
            union U2 l_1057 = {1U};
            l_1077 = (l_806.f0 == (p_102 <= ((l_1076 = (l_752 = func_106((l_1055 , (l_1056 , ((l_1057 , p_102) & ((__builtin_ia32_crc32qi(((uint16_t)((uint32_t)((int32_t)(((((uint32_t)((((uint16_t)(((int16_t)((int16_t)l_1055.f1 << (int16_t)10) - (int16_t)l_1057.f0) | ((int16_t)(((uint16_t)p_102 << (uint16_t)l_112.f0) != 5U) * (int16_t)p_101)) >> (uint16_t)9) ^ p_102) == 0U) % (uint32_t)1) != 0x0FD953F7) ^ p_102) | l_1056.f0) + (int32_t)p_102) - (uint32_t)l_1057.f1) << (uint16_t)8), l_846) & l_1056.f0) < 4294967295U)))), l_1057.f0, l_1057.f0, l_980, p_101))) , p_101)));
        }
        else
        { 
            uint32_t l_1080 = 0x29928024;
            l_818 = ((int16_t)1 + (int16_t)(l_1080 = p_101));
        }
        l_1082 = (__builtin_parityll(p_101) && (!l_1056.f0));
        l_1082 = (__builtin_parityl(l_1083) , ((uint16_t)(l_806 , ((int16_t)l_1088 << (int16_t)((l_112 , ((int16_t)p_101 >> (int16_t)4)) < (__builtin_popcount((l_752 = __builtin_ffsl(((-(uint16_t)0xB40D) | (p_102 = p_101))))) , p_102)))) * (uint16_t)p_101));
        if ((((uint16_t)__builtin_ffsll((0x96587811 == (((((uint32_t)(((((int16_t)((((int16_t)p_101 << (int16_t)p_101) <= (p_102 <= ((((uint16_t)p_102 - (uint16_t)((1U & (l_1056 , ((l_1055 , p_102) <= 0xE478))) > p_102)) < 0xFA08) | p_101))) || 0U) << (int16_t)p_102) ^ 1) ^ 0x29461E15) > p_101) - (uint32_t)p_101) == l_818) && l_1077) || l_846))) << (uint16_t)p_102) && 0xE492))
        { 
            int32_t l_1106 = (-6);
            union U0 l_1145 = {0xCD89E49F};
            union U1 l_1167 = {-1};
            uint32_t l_1178 = 0xE01F640B;
            int32_t l_1193 = (-1);
            int32_t l_1260 = 0x71CC597A;
            uint16_t l_1339 = 0x042E;
            int32_t l_1432 = 1;
            for (l_1055.f1 = (-3); (l_1055.f1 > (-5)); l_1055.f1 -= 7)
            { 
                int32_t l_1105 = (-1);
                union U1 l_1152 = {0x85CB};
                int32_t l_1183 = (-8);
                l_817 = ((((-(uint16_t)(l_1105 != __builtin_ctzll(l_1076))) != ((((l_1082 = l_1106) > (l_1117 = func_106(((uint16_t)((~(((int16_t)(p_102 | ((uint16_t)(p_101 > ((~(!p_101)) || (0xD9EF9606 && ((!((p_102 , l_817) != l_1105)) , p_102)))) << (uint16_t)14)) << (int16_t)8) == l_1105)) | l_1056.f3) >> (uint16_t)2), l_1106, l_806.f0, p_102, p_101))) ^ p_101) || 4294967289U)) , 0x5249B431) > p_101);
            }
            if (func_106(l_1056.f0, ((l_1193 = (0xFC3B16EA || 0U)) , (((int16_t)(l_1106 = ((uint16_t)(((int32_t)(l_1083 = (l_806.f0 || (-(uint32_t)((l_1055 , (((((((int16_t)(l_818 = (((l_1193 = l_1056.f0) != ((int32_t)((uint16_t)((int16_t)1 * (int16_t)__builtin_bswap64(l_1235)) << (uint16_t)10) - (int32_t)0)) , 1)) * (int16_t)l_1236) && 0) || p_102) <= (-2)) == 0U) > l_1145.f0)) , l_817)))) + (int32_t)0x827B307C) , 65535U) * (uint16_t)0)) * (int16_t)l_1088) , l_1082)), l_1237, p_101, l_1139.f0))
            { 
                int32_t l_1241 = 0xBD07610B;
                int32_t l_1262 = 0x353F226F;
                if ((!((l_105 , (65535U >= 0U)) < (0xE784 ^ 1))))
                { 
                    return p_101;
                }
                else
                { 
                    for (l_980 = 0; (l_980 < 18); l_980 += 7)
                    { 
                        l_752 = func_106((l_1106 = 0xE460F6B7), l_1241, p_101, p_101, l_818);
                    }
                }
                for (l_1218 = 9; (l_1218 < 32); l_1218 += 1)
                { 
                    l_1106 = l_1055.f0;
                }
                l_1262 = ((uint16_t)(4294967289U >= ((l_1083 = ((uint16_t)((l_752 = p_101) , l_1106) << (uint16_t)((int16_t)l_1241 - (int16_t)func_106((~(l_1236 = ((int16_t)((int16_t)6 >> (int16_t)l_1076) * (int16_t)((uint16_t)(((l_1257 , ((__builtin_ctzl((l_1260 = (l_1193 = func_106(p_101, ((((((uint16_t)p_101 + (uint16_t)p_101) == 0xD4419FD0) != l_1174) < l_1241) & 0), l_1241, p_101, l_112.f1)))) ^ l_1167.f3) != 0U)) || p_101) != 0x67BAA072) >> (uint16_t)12)))), l_1139.f3, l_1261, l_1145.f3, l_1145.f0)))) <= p_102)) * (uint16_t)p_101);
                l_1260 = (((((uint16_t)((uint32_t)(l_1145 , ((0xBFCA30BE | l_1262) != p_101)) - (uint32_t)((int16_t)p_101 >> (int16_t)((uint16_t)l_1262 * (uint16_t)((uint16_t)((l_818 <= ((4294967292U && l_1174) < 1)) < p_101) - (uint16_t)p_101)))) * (uint16_t)p_101) != l_980) && 0x5607612F) , l_1139.f2);
            }
            else
            { 
                uint32_t l_1273 = 1U;
                int32_t l_1280 = 0x8F478355;
                int32_t l_1369 = 0xE5512C43;
                int32_t l_1370 = 1;
                l_818 = ((((l_1273 >= func_106(((int16_t)(func_106((((((uint32_t)(__builtin_popcountll(l_1076) , p_101) + (uint32_t)p_101) && l_1273) || ((uint16_t)(l_1280 = p_102) >> (uint16_t)(((uint16_t)p_101 + (uint16_t)(p_101 , 0xF05A)) >= 0x9FA2))) || 1), l_1076, p_101, l_1237, l_1076) , 0xB5DF) * (int16_t)0x4C3C), l_1145.f1, l_1273, l_1083, l_806.f0)) || p_102) == l_1156.f4) && l_816);
                if (((l_1280 = (l_1178 == (l_1273 > 4294967292U))) , func_106(((((((l_1174 , (l_1145.f4 , l_1145.f3)) < ((__builtin_parityll(p_102) == (4294967295U & l_1257.f4)) ^ 0x09F7)) <= p_102) || l_1193) , l_806.f0) , p_101), p_101, l_1178, l_1146, p_102)))
                { 
                    int16_t l_1287 = 0x0317;
                    int32_t l_1289 = (-6);
                    if (__builtin_bswap64(((uint16_t)0x8881 << (uint16_t)9)))
                    { 
                        return l_1285;
                    }
                    else
                    { 
                        l_1287 = __builtin_bswap32(l_1286);
                        l_1082 &= 0xBF735845;
                        l_1174 &= l_1288;
                        l_1289 = l_1146;
                    }
                    for (l_1077 = 0; (l_1077 <= 6); l_1077 += 1)
                    { 
                        uint32_t l_1296 = 4294967295U;
                        int32_t l_1312 = 0;
                        l_1289 = ((((int16_t)((uint16_t)p_102 >> (uint16_t)l_1296) + (int16_t)((int16_t)(p_102 && (__builtin_parityl(((int16_t)(l_1083 = (l_1312 = ((int16_t)(func_106((l_1303 , ((uint16_t)p_101 << (uint16_t)l_1257.f0)), l_1145.f2, ((int16_t)(p_101 | ((uint16_t)(l_816 = ((((uint16_t)l_1296 * (uint16_t)l_1280) , 1) <= p_101)) >> (uint16_t)3)) + (int16_t)p_102), p_101, l_1296) , p_102) << (int16_t)l_1257.f3))) >> (int16_t)p_101)) && l_1287)) >> (int16_t)p_101)) && l_1280) , 6);
                        if (p_102)
                            continue;
                        return l_1287;
                    }
                    return l_1280;
                }
                else
                { 
                    int32_t l_1328 = (-7);
                    int32_t l_1340 = 0xC259B8C9;
                    int32_t l_1352 = (-1);
                    l_1236 = func_106(((l_1280 &= ((uint16_t)0x106B - (uint16_t)func_106(((int32_t)((uint32_t)((uint16_t)((uint16_t)((((int16_t)(((int16_t)0x2F43 << (int16_t)((l_1261 = func_106((l_1083 = (p_102 > (l_1055 , ((-(int32_t)p_102) | (0x32BE > p_101))))), l_1167.f0, p_101, l_1328, l_1193)) == l_1273)) && p_101) >> (int16_t)l_1055.f1) > p_102) == l_1156.f1) << (uint16_t)9) << (uint16_t)l_1303.f0) % (uint32_t)(-10)) + (int32_t)p_101), l_1329, p_101, p_101, l_1117))) <= 0x99CE090D), p_102, p_101, l_1054, p_101);
                    for (l_1077 = 0; (l_1077 <= (-30)); l_1077 -= 1)
                    { 
                        l_818 = p_101;
                    }
                    if ((p_101 , ((!65535U) & ((uint16_t)(func_106(((int32_t)(l_1339 |= ((uint16_t)(0x0EA7DE6B != p_102) * (uint16_t)p_101)) - (int32_t)(((l_1156.f0 , (l_1145.f1 ^ (l_1174 | (((l_1235 || l_1145.f3) , l_1328) == p_102)))) == 0x0072) != l_846)), l_1340, p_101, p_102, l_1340) == l_1340) - (uint16_t)0x47A0))))
                    { 
                        if (l_1273)
                            break;
                    }
                    else
                    { 
                        uint32_t l_1342 = 0xE38CBC2C;
                        int32_t l_1349 = 0x5C15A019;
                        l_1280 = (~(p_102 & l_1342));
                        if (l_1088)
                            break;
                        l_1349 ^= func_106(p_101, __builtin_popcountl(p_101), (((int16_t)(l_1273 != (((uint16_t)l_1056.f3 >> (uint16_t)4) || ((uint16_t)(p_101 , (p_102 != (p_101 , (p_102 >= p_101)))) * (uint16_t)l_1340))) << (int16_t)p_102) > 0), l_1117, l_1193);
                        l_1352 = ((uint16_t)0x83F3 >> (uint16_t)1);
                    }
                    if (l_1273)
                        break;
                }
                if (l_1353)
                { 
                    uint32_t l_1358 = 0x4D909381;
                    int32_t l_1368 = (-3);
                    l_1117 ^= (l_1370 &= ((int32_t)p_102 - (int32_t)(((l_1369 ^= __builtin_ctz((((int16_t)(l_1055.f1 || (p_102 , l_1358)) >> (int16_t)((int32_t)((l_1236 &= (p_101 | ((func_106(((uint16_t)(((uint16_t)p_102 << (uint16_t)7) , ((func_106(((uint16_t)5U << (uint16_t)p_102), l_1280, l_1178, l_1273, p_102) > p_102) >= p_102)) >> (uint16_t)l_1145.f2), l_1339, l_1367, l_1368, l_846) , l_1358) <= p_102))) >= p_101) - (int32_t)0xA12ABA4B)) ^ l_1280))) >= 0x35A428CD) <= p_102)));
                    return l_1286;
                }
                else
                { 
                    int32_t l_1381 = 0x7D410ED3;
                    uint32_t l_1382 = 4294967295U;
                    l_1383 &= ((((int32_t)(((((uint32_t)p_101 - (uint32_t)((l_1257 , ((uint16_t)((uint16_t)(0x375F86C1 || 6) << (uint16_t)1) << (uint16_t)2)) != (l_1339 & (l_1193 = p_101)))) <= 0x6E956004) ^ p_102) <= ((uint16_t)l_1381 - (uint16_t)l_1145.f4)) % (int32_t)l_1382) , 0xAA01) != p_101);
                }
                l_1082 = ((l_112.f1 ^ p_101) ^ (p_102 | ((int16_t)(((0 | ((((int32_t)l_1077 - (int32_t)((uint32_t)(__builtin_ia32_crc32qi(((0x7E01 != (((int32_t)(l_1193 = 0x2848414B) + (int32_t)(l_1106 >= l_1237)) == (-4))) , 0U), l_1106) & l_1280) % (uint32_t)4294967295U)) < p_101) <= 0)) || l_1167.f0) ^ p_101) * (int16_t)(-1))));
            }
            if (l_1392)
            { 
                int16_t l_1409 = 0xA41E;
                int32_t l_1412 = 0x81727997;
                uint16_t l_1427 = 0x6019;
                uint32_t l_1433 = 0x2685A5B0;
                for (l_1163 = 0; (l_1163 != (-8)); l_1163 -= 1)
                { 
                    int16_t l_1424 = 7;
                    int32_t l_1434 = 0x34E8270E;
                    int32_t l_1440 = (-8);
                    l_818 = ((int32_t)(l_1409 = ((uint16_t)((uint16_t)l_1257.f3 << (uint16_t)7) % (uint16_t)((int16_t)func_106(p_101, l_1076, (((int32_t)0x0A35E75A - (int32_t)((uint32_t)((int16_t)p_101 % (int16_t)p_102) % (uint32_t)0xDC920C29)) , p_102), p_101, p_102) << (int16_t)p_102))) % (int32_t)p_101);
                    for (l_1193 = 0; (l_1193 == 20); l_1193 += 1)
                    { 
                        int16_t l_1417 = 1;
                        l_1412 = (l_1261 = 0);
                        l_1412 = ((int16_t)((int16_t)l_1417 * (int16_t)(l_1286 , (((p_102 , l_1055) , p_101) && ((int16_t)(l_1117 ^= __builtin_ctzl(((int16_t)((int16_t)__builtin_popcountl((__builtin_parityll(__builtin_ffsl(((1 == l_1236) > p_101))) , p_102)) << (int16_t)0) << (int16_t)l_1417))) >> (int16_t)l_1424)))) - (int16_t)l_1174);
                        l_1432 |= ((int16_t)((l_1260 = p_101) ^ ((l_806 , ((p_101 <= (0x9FEE761E == __builtin_clzll(p_102))) & ((((l_1427 > (0x05BF9FB3 == ((uint16_t)((uint16_t)p_102 << (uint16_t)5) % (uint16_t)p_102))) && l_1167.f0) < (-2)) <= 1))) , l_1412)) * (int16_t)l_1106);
                        l_1434 |= (p_101 & ((l_1417 ^ func_106(p_102, l_1145.f2, p_101, l_1427, p_101)) | l_1433));
                    }
                    l_1261 = ((int16_t)l_1145.f3 * (int16_t)(p_101 == (l_1260 = l_1424)));
                    l_1440 |= ((l_1412 = p_101) != (l_1145 , ((-(int32_t)func_106(((uint16_t)((p_102 != p_102) > l_1288) * (uint16_t)(((func_106((l_1145 , ((l_1257.f4 , (-1)) , (3U >= 0))), l_1427, l_1427, p_102, p_102) , l_1434) , l_1424) < 7U)), l_1260, l_1056.f0, p_102, p_101)) & p_102)));
                }
                l_816 = l_1237;
            }
            else
            { 
                int32_t l_1451 = 0xBCBAFBFE;
                union U0 l_1452 = {0x19FBDE85};
                l_1117 = func_106((l_752 = ((int16_t)l_1260 << (int16_t)13)), l_1139.f4, ((int32_t)(l_1106 = (((uint16_t)((int32_t)(0x697B & (l_1451 = ((uint16_t)(func_106(l_1451, ((l_1145 = l_1452) , (__builtin_parity(func_106(l_1261, p_102, p_101, (l_817 = 0U), l_1453)) && 0x9D6F0DE4)), p_102, l_1453, p_101) || 0x03D08089) << (uint16_t)14))) - (int32_t)p_102) >> (uint16_t)l_1285) >= 8)) - (int32_t)l_1452.f4), p_101, p_102);
                l_1451 = ((uint16_t)l_1164 >> (uint16_t)(((uint32_t)p_101 - (uint32_t)(((uint16_t)((uint16_t)(p_102 = (l_1145 , __builtin_ctz((l_816 ^= p_101)))) - (uint16_t)((-(int32_t)(((int16_t)((int32_t)((int16_t)func_106(l_1082, l_1257.f3, p_101, l_1156.f4, p_101) * (int16_t)3U) - (int32_t)0x73B50042) >> (int16_t)l_1106) && 4294967291U)) , 65535U)) - (uint16_t)p_101) && l_1367)) || p_101));
                l_1082 = ((l_1117 &= l_1145.f2) == 0x3A55);
            }
        }
        else
        { 
            int32_t l_1479 = (-1);
            if (p_102)
                break;
            l_1083 = __builtin_parityll(func_106(((l_1082 = func_106(l_1392, l_1139.f1, (l_1286 > ((((int16_t)(((uint32_t)p_102 + (uint32_t)(((65529U >= p_101) ^ (p_101 > 0x9855)) , ((uint16_t)(((int16_t)((int32_t)0xF7AFB188 % (int32_t)p_101) + (int16_t)65534U) > 3) >> (uint16_t)l_1479))) <= p_101) << (int16_t)2) >= l_1088) < l_1164)), l_1353, l_1479)) & p_101), l_1236, l_1479, l_1480, p_101));
        }
    }
    return l_1257.f3;
}




inline static uint32_t  func_106(int32_t  p_107, uint32_t  p_108, uint16_t  p_109, uint32_t  p_110, int16_t  p_111)
{ 
    uint32_t l_122 = 4294967292U;
    int32_t l_130 = 0;
    int32_t l_187 = (-1);
    union U2 l_195 = {0x2803};
    int32_t l_207 = 0x62C38B1D;
    union U1 l_244 = {0};
    uint32_t l_247 = 4294967295U;
    int32_t l_261 = 0xA50AF277;
    uint16_t l_336 = 65535U;
    union U0 l_356 = {4U};
    int32_t l_387 = 0x5F9CC065;
    int16_t l_413 = (-4);
    uint32_t l_496 = 0U;
    int32_t l_519 = 7;
    int32_t l_751 = 0;
    if (l_122)
    { 
        uint32_t l_123 = 4294967291U;
        int32_t l_128 = 0x5A6083B6;
        int16_t l_141 = 0x1BB2;
        uint32_t l_142 = 0x26D39625;
        uint32_t l_146 = 1U;
        int32_t l_177 = 4;
        union U0 l_223 = {1U};
        l_123 = __builtin_parity(p_109);
        for (p_108 = 27; (p_108 <= 42); p_108 += 4)
        { 
            uint32_t l_129 = 4294967295U;
            int16_t l_176 = 0x4CFD;
            int32_t l_179 = 0;
            int32_t l_210 = 0x27D2546F;
            l_128 = __builtin_ctzl(((int16_t)p_107 + (int16_t)l_122));
            p_107 = (l_130 = (p_109 || l_129));
            for (l_129 = (-14); (l_129 != 44); l_129 += 1)
            { 
                int16_t l_163 = 1;
                int32_t l_175 = (-3);
                int32_t l_178 = 0x902CEC10;
                for (l_128 = 0; (l_128 == 29); l_128 += 8)
                { 
                    int32_t l_145 = (-1);
                    if (__builtin_popcountll(p_110))
                    { 
                        uint32_t l_137 = 0x3B3A3146;
                        union U1 l_140 = {0};
                        int32_t l_144 = 4;
                        p_107 = p_108;
                        l_130 = (((l_144 = (((uint32_t)(l_137 |= p_111) + (uint32_t)(((uint32_t)((p_110 , l_140) , (l_141 && l_142)) % (uint32_t)p_110) < (!p_107))) == 0xFE1997BD)) | (l_145 < p_110)) | l_146);
                    }
                    else
                    { 
                        p_107 ^= (((uint16_t)(l_130 , ((uint16_t)(!l_146) % (uint16_t)0x0C84)) >> (uint16_t)11) ^ 1U);
                    }
                    l_178 |= (l_122 < (l_177 = (((int16_t)(!l_145) * (int16_t)(((uint16_t)(!((int16_t)(p_111 = (((~((uint16_t)l_163 >> (uint16_t)((uint16_t)l_129 - (uint16_t)(__builtin_clzl(((uint32_t)((int32_t)p_107 % (int32_t)((uint16_t)(__builtin_popcount((((-(uint32_t)((uint16_t)l_145 >> (uint16_t)p_108)) & 0) & (((((l_175 |= (((l_146 , 0x030D) ^ p_111) && (-3))) >= p_111) >= l_163) <= 1) <= 1U))) != p_111) * (uint16_t)l_122)) % (uint32_t)p_107)) == l_130)))) , p_107) && 5)) >> (int16_t)9)) * (uint16_t)l_176) != 9U)) | 65535U)));
                    l_179 &= (l_130 = p_109);
                }
                l_128 = ((5U ^ (0xB028 | p_108)) == 0xA40B);
                return l_177;
            }
            for (p_111 = 19; (p_111 < 4); p_111 -= 2)
            { 
                uint16_t l_188 = 0x4D15;
                int32_t l_202 = (-1);
                for (l_146 = (-16); (l_146 != 9); l_146 += 1)
                { 
                    uint32_t l_208 = 4294967290U;
                    int32_t l_209 = 0xF2F2AFFB;
                    int32_t l_231 = 0x9F96D3B4;
                    for (l_130 = 25; (l_130 == (-19)); l_130 -= 1)
                    { 
                        uint32_t l_186 = 4294967287U;
                        l_187 = l_186;
                        l_188 = l_129;
                    }
                    if (((l_188 < 0x9A2289B7) & ((uint32_t)(l_210 &= ((int16_t)((uint16_t)(l_195 , p_109) << (uint16_t)((((uint32_t)((int16_t)((((((l_130 |= (((int16_t)0x2BFB >> (int16_t)1) > l_187)) & (((l_202 = 0x3D763EE6) != (l_177 = ((l_208 = ((((int16_t)(l_188 && ((int32_t)(l_207 = (p_107 = (p_111 && l_142))) + (int32_t)4)) % (int16_t)l_188) < 0) != p_110)) != l_209))) <= l_179)) , 0x0DBAEEB6) > l_209) && 0xCE89) != p_110) << (int16_t)3) % (uint32_t)0x5B7F6ABC) | 0U) && (-1))) >> (int16_t)7)) - (uint32_t)p_108)))
                    { 
                        uint16_t l_230 = 65526U;
                        l_179 = ((p_108 && ((uint16_t)(((uint32_t)(((uint16_t)(l_177 |= ((uint16_t)((int16_t)l_142 >> (int16_t)1) % (uint16_t)((int16_t)p_110 >> (int16_t)10))) - (uint16_t)(l_223 , 65527U)) , (__builtin_ffsll(((l_231 ^= ((uint16_t)((p_108 & (((((uint16_t)l_209 << (uint16_t)((int16_t)l_223.f1 << (int16_t)((l_202 = l_230) ^ 0x657C))) < p_108) , l_230) ^ p_107)) || p_109) >> (uint16_t)12)) < p_109)) <= l_230)) + (uint32_t)l_142) | 0x45DDD747) << (uint16_t)l_129)) ^ (-3));
                    }
                    else
                    { 
                        l_207 |= (l_202 = (p_107 = l_223.f0));
                    }
                    if ((p_109 , l_177))
                    { 
                        int32_t l_232 = 0;
                        l_232 = l_130;
                    }
                    else
                    { 
                        l_209 = (!(0xDCAD >= (l_130 | p_108)));
                        return p_110;
                    }
                    l_209 |= l_122;
                }
            }
        }
    }
    else
    { 
        p_107 = 8;
        p_107 &= (0x6C01 < (((uint16_t)((uint16_t)1U << (uint16_t)0) % (uint16_t)((int16_t)((int16_t)l_207 >> (int16_t)11) << (int16_t)0)) , 0x6632));
    }
    if (p_111)
    { 
        int16_t l_255 = 1;
        int32_t l_262 = 1;
        int32_t l_273 = (-1);
        uint32_t l_319 = 0U;
        int32_t l_360 = 0x1F29E83E;
        uint32_t l_369 = 8U;
        uint16_t l_398 = 0U;
        union U1 l_423 = {0x8CB4};
        union U2 l_428 = {65531U};
        int32_t l_479 = 0x9D9DC934;
        int32_t l_533 = 0;
        uint32_t l_562 = 0xD1B74C6E;
        union U0 l_582 = {0xCA11306B};
        uint32_t l_603 = 0x132D0649;
        uint16_t l_669 = 0x7FCE;
        for (l_207 = 28; (l_207 < 18); l_207 -= 5)
        { 
            uint32_t l_252 = 0x345BD6E3;
            int32_t l_348 = 0xDC557DA0;
            int32_t l_359 = (-1);
            l_255 = (l_244 , ((int16_t)(__builtin_popcountll(l_247) != ((uint32_t)0U - (uint32_t)(((int32_t)p_108 - (int32_t)p_108) > l_252))) << (int16_t)((((uint32_t)__builtin_parityll(p_107) - (uint32_t)1) != l_252) > p_107)));
            for (l_255 = 0; (l_255 <= 11); l_255 += 1)
            { 
                uint16_t l_270 = 0x7C24;
                uint32_t l_280 = 0x3F941D61;
                int32_t l_291 = (-5);
                p_107 = p_108;
                for (p_107 = 10; (p_107 >= 29); p_107 += 3)
                { 
                    union U2 l_260 = {0U};
                    union U0 l_265 = {2U};
                    int32_t l_290 = 0xCF844ED8;
                    int32_t l_316 = 0x3E879FE9;
                    int16_t l_323 = 1;
                    l_273 = (l_260 , (l_261 , ((l_262 = p_110) , ((int16_t)(l_130 ^= (((l_265 , ((((uint32_t)((uint32_t)p_108 + (uint32_t)l_270) % (uint32_t)((int16_t)__builtin_ctzl(p_110) << (int16_t)6)) > (-6)) > l_187)) < 1U) || p_111)) << (int16_t)12))));
                    if (l_262)
                    { 
                        uint16_t l_292 = 0x3FED;
                        int32_t l_293 = 0x33103EE4;
                        l_273 = ((uint32_t)0x30A3237C + (uint32_t)((1 > ((int16_t)l_260.f1 * (int16_t)((((uint16_t)l_280 * (uint16_t)p_111) <= ((int32_t)(l_293 = ((uint16_t)p_108 - (uint16_t)((((l_292 &= (l_291 = (l_290 = ((-(uint16_t)(((((uint16_t)(__builtin_parityl(((((int16_t)p_108 << (int16_t)8) >= l_270) > (l_130 |= l_255))) , p_108) % (uint16_t)p_111) != (-1)) <= l_195.f1) >= (-3))) , 4294967290U)))) != l_262) && p_110) , 65535U))) - (int32_t)p_109)) >= (-7)))) != p_110));
                        l_316 = ((int16_t)((-(int32_t)((int16_t)((l_262 |= ((l_273 = ((l_252 , (-1)) <= (p_110 <= l_293))) != ((int32_t)((uint16_t)((l_290 |= l_252) , ((l_290 &= ((uint16_t)p_111 % (uint16_t)(p_107 ^ ((((uint16_t)((-(uint32_t)((int16_t)0x0DFA >> (int16_t)6)) >= (((uint16_t)(((int16_t)l_265.f4 * (int16_t)p_108) > 0x520F9016) % (uint16_t)p_107) <= 0xDB52015B)) << (uint16_t)4) > l_291) != l_291)))) < 0xAAB0)) + (uint16_t)1) - (int32_t)l_247))) >= p_108) >> (int16_t)15)) == l_265.f4) - (int16_t)p_111);
                        if (l_207)
                            break;
                    }
                    else
                    { 
                        int32_t l_322 = 0x8609A675;
                        int32_t l_337 = (-5);
                        l_262 = (((int16_t)l_319 * (int16_t)(((int16_t)(l_322 == ((l_337 |= ((l_255 & l_323) , ((l_130 = ((uint16_t)(l_273 & ((int16_t)((((int16_t)((int16_t)p_110 - (int16_t)(l_290 |= ((4294967295U == (((int16_t)p_109 << (int16_t)5) , ((uint32_t)p_109 % (uint32_t)(-1)))) != l_319))) >> (int16_t)l_336) , 0x21E8) | 1) * (int16_t)9U)) % (uint16_t)(-2))) == l_207))) || 0x78D22342)) % (int16_t)l_262) , l_319)) <= l_252);
                        l_262 = ((uint32_t)(l_130 &= p_107) - (uint32_t)0x7953B14A);
                        l_337 = ((p_110 < ((l_273 = ((uint16_t)(l_187 = (l_280 ^ (p_109 & 4294967286U))) % (uint16_t)((int16_t)(-1) >> (int16_t)12))) > p_109)) != ((uint16_t)((0x484E && ((p_108 || (p_111 > p_108)) , l_255)) <= 4) * (uint16_t)0x9677));
                        l_322 = l_265.f0;
                    }
                }
            }
            l_130 = (l_360 ^= (((int16_t)(l_348 = l_122) >> (int16_t)((p_109 || l_252) != (~((uint16_t)(1U < (((uint16_t)((int16_t)((l_273 |= __builtin_parityll(l_319)) , ((l_356 , (l_356.f0 == (l_359 = ((uint16_t)((l_187 |= ((p_108 & 1) || p_111)) >= l_319) << (uint16_t)7)))) >= p_111)) >> (int16_t)p_111) % (uint16_t)l_262) != (-1))) * (uint16_t)1)))) || p_111));
            for (l_319 = (-29); (l_319 > 3); l_319 += 1)
            { 
                int16_t l_363 = 0x6704;
                p_107 ^= l_356.f4;
                l_363 |= (l_130 <= l_359);
                p_107 = (((uint16_t)p_109 << (uint16_t)(-(uint32_t)l_252)) , l_348);
            }
        }
        if (((l_273 = ((((0xA812 != (((p_109 == 0) || (l_360 &= ((uint32_t)(p_109 >= p_111) + (uint32_t)l_369))) , (((int32_t)(l_244.f3 && p_110) - (int32_t)0xEF7126A5) == p_109))) ^ p_110) == 2U) || l_356.f4)) != l_356.f2))
        { 
            union U2 l_372 = {0x24C9};
            p_107 = (l_372 , (l_369 && (65529U > 0x1DDC)));
            l_273 ^= (((l_356.f1 , ((int16_t)(((l_356 , ((int16_t)((((l_262 = (-(uint16_t)((uint16_t)5U * (uint16_t)((uint16_t)(~__builtin_popcountll(p_107)) >> (uint16_t)((((uint32_t)((int16_t)(65535U > ((p_108 , p_109) < (p_109 == l_387))) >> (int16_t)2) + (uint32_t)1U) ^ 0xA78B) < l_372.f1))))) , p_108) , 0x178618A0) || l_244.f3) >> (int16_t)13)) && l_255) && 65534U) * (int16_t)0xFDA5)) ^ p_110) || l_261);
            p_107 = p_107;
            l_262 |= l_319;
        }
        else
        { 
            int32_t l_412 = 0xBE8BD684;
            int32_t l_417 = 1;
            int32_t l_418 = 0;
            uint32_t l_422 = 1U;
            union U2 l_457 = {65531U};
            union U0 l_475 = {0xB0A81330};
            int16_t l_481 = 6;
            uint32_t l_503 = 0x9BC3C447;
            uint32_t l_549 = 4294967295U;
            union U1 l_632 = {-1};
            union U1 l_691 = {0xA60C};
            int32_t l_737 = 0x2B634258;
            for (l_356.f2 = (-6); (l_356.f2 <= 16); l_356.f2 += 1)
            { 
                int32_t l_409 = 0;
                int32_t l_414 = 9;
                p_107 = (((((uint16_t)(0x7FF5A794 > ((int16_t)(p_111 = p_110) - (int16_t)((uint16_t)((int32_t)(l_398 != p_107) + (int32_t)((int16_t)((int32_t)((uint16_t)8U * (uint16_t)(((int16_t)(p_107 || (l_387 |= ((uint16_t)l_409 * (uint16_t)((uint16_t)(l_255 , l_207) * (uint16_t)1U)))) >> (int16_t)15) < p_109)) % (int32_t)l_319) * (int16_t)l_262)) - (uint16_t)l_409))) << (uint16_t)5) != l_412) & p_110) , l_413);
                l_414 = l_387;
            }
            if ((l_356.f2 && ((int16_t)((l_417 ^= (l_360 = (l_360 <= 0xD0FF))) > 2) >> (int16_t)11)))
            { 
                int32_t l_421 = (-4);
                int16_t l_429 = 0x51BE;
                int16_t l_446 = 0x7131;
                union U2 l_452 = {0x5E89};
                int32_t l_458 = 0x5D0F93AB;
                l_418 = (l_417 = p_109);
                if (((((uint16_t)(((l_421 > l_422) ^ l_422) < p_109) * (uint16_t)(l_423 , ((l_417 = ((l_429 = ((uint16_t)(((int16_t)((l_417 && l_336) , p_107) % (int16_t)(l_428 , l_244.f0)) ^ 1U) * (uint16_t)1U)) >= l_398)) && p_108))) && 3) , 8))
                { 
                    p_107 = ((int16_t)__builtin_clz(__builtin_clzll(((uint32_t)p_109 + (uint32_t)((uint32_t)(((uint32_t)l_421 % (uint32_t)((int16_t)(((1 && (((((l_122 > ((((uint16_t)p_108 >> (uint16_t)(l_428 , (l_244.f3 <= p_110))) & (l_207 < 0xF542)) && l_387)) , p_110) < l_429) | 0x05E6B33B) , l_429)) < p_109) , 4) * (int16_t)p_107)) > 1U) - (uint32_t)p_109)))) % (int16_t)(-3));
                }
                else
                { 
                    int16_t l_460 = 1;
                    uint16_t l_480 = 65535U;
                    l_360 = l_195.f1;
                    l_387 ^= 0x719A44CD;
                    for (p_108 = 0; (p_108 != 15); p_108 += 5)
                    { 
                        int16_t l_459 = 0x589D;
                        l_418 |= (((uint16_t)l_446 >> (uint16_t)13) >= (l_460 = ((l_262 = p_107) ^ ((~(0xFAAAE211 ^ ((1U ^ p_107) == p_108))) != (p_110 & (((((((uint16_t)(((int32_t)(l_452 , ((((l_458 = ((((int16_t)(l_130 |= ((((int16_t)l_273 % (int16_t)0x3088) || 4294967288U) & p_108)) >> (int16_t)0) , l_457) , 0x4CBD)) , p_111) <= p_109) & p_109)) % (int32_t)l_369) <= l_459) >> (uint16_t)1) ^ 0x3F528683) <= l_261) < l_459) & p_108) | p_107))))));
                        return p_108;
                    }
                    if (p_108)
                    { 
                        union U1 l_476 = {4};
                        l_481 = ((int16_t)(p_107 || (((int16_t)(p_111 < ((int16_t)__builtin_ia32_crc32qi(((-(uint32_t)(-(int16_t)((p_107 = ((0x4726A68C || (((int16_t)p_108 - (int16_t)0xE8A5) != p_107)) & ((int16_t)((((uint16_t)(l_475 , (l_476 , ((uint16_t)l_479 - (uint16_t)l_480))) << (uint16_t)4) && l_422) , 1) * (int16_t)0x25E5))) & p_108))) , 0x130E4FD3), l_369) % (int16_t)p_109)) << (int16_t)l_480) , 0)) >> (int16_t)1);
                        p_107 = (l_418 = p_111);
                    }
                    else
                    { 
                        uint16_t l_482 = 9U;
                        l_482 = p_110;
                        return p_110;
                    }
                }
            }
            else
            { 
                int32_t l_491 = 0x4ADB129C;
                uint32_t l_508 = 9U;
                int32_t l_514 = 0x48201737;
                int32_t l_528 = 0;
                union U2 l_552 = {0x6264};
                union U0 l_591 = {0x141DDEFC};
                if (p_107)
                { 
                    uint32_t l_501 = 0x3FD72EFC;
                    int32_t l_506 = 3;
                    if ((((uint32_t)((uint32_t)(((int16_t)((p_107 = ((int32_t)l_475.f0 - (int32_t)(l_356.f0 , (l_491 == ((int16_t)((int16_t)l_496 - (int16_t)l_491) * (int16_t)((int32_t)(((uint16_t)(p_109 = ((__builtin_parityll(((l_491 & l_398) & l_255)) & l_491) || p_108)) << (uint16_t)13) < l_501) - (int32_t)1)))))) | p_110) * (int16_t)0xCCC2) != 0xFE8A) - (uint32_t)1U) - (uint32_t)p_111) == l_262))
                    { 
                        uint32_t l_502 = 4294967295U;
                        int32_t l_507 = (-7);
                        l_491 = (l_356 , (p_111 | (l_502 > ((((((l_503 ^ (l_247 < (l_506 = (((uint16_t)__builtin_clz(p_108) >> (uint16_t)9) || l_457.f0)))) && (l_506 = p_111)) || p_109) & l_261) < l_507) ^ p_111))));
                        l_508 = l_262;
                    }
                    else
                    { 
                        l_491 = (p_107 = l_506);
                        l_506 &= ((p_110 != (__builtin_clz((~(((uint16_t)((((uint16_t)(l_195 , p_107) * (uint16_t)l_514) ^ 0xA5CB) > p_110) >> (uint16_t)((uint16_t)((uint16_t)p_109 * (uint16_t)4) * (uint16_t)l_519)) & p_109))) | 1)) & 1U);
                        l_528 = (((((uint16_t)(1 < l_503) % (uint16_t)(p_109 = l_508)) , (p_111 = (l_479 = (((uint16_t)0x667C << (uint16_t)15) <= p_110)))) | l_356.f2) && (((uint16_t)((int16_t)l_195.f1 * (int16_t)((((p_107 >= (p_107 | 1)) | 0x1241078D) , l_475.f0) < p_109)) * (uint16_t)p_109) | l_514));
                    }
                    l_533 = (((l_418 &= ((uint32_t)((-1) != p_111) - (uint32_t)(l_387 |= p_107))) <= (0xDF640F76 != l_423.f0)) || (l_506 == (l_491 = (0x22FB90FA != (((int16_t)((p_108 != ((p_107 & p_110) && p_107)) & l_506) << (int16_t)l_398) != 2U)))));
                    l_187 = (l_491 = (((l_418 && ((!l_533) == (p_111 = l_412))) & ((p_107 &= l_195.f0) != (l_503 < ((int16_t)0x0628 * (int16_t)l_528)))) , p_109));
                    l_506 = ((!p_111) && ((int16_t)p_110 + (int16_t)(l_418 = (p_107 || ((int16_t)p_110 * (int16_t)(((((p_107 < (!0x10E25FBF)) <= (p_110 | ((int32_t)(-5) % (int32_t)p_111))) < 0xC18B) | 0xA1CAB745) & p_110))))));
                }
                else
                { 
                    p_107 = 0xD817BE32;
                    p_107 = l_255;
                }
                l_519 &= (p_107 ^= (l_549 = (p_111 > 8)));
                p_107 = l_387;
                if (((uint16_t)((0x0793 ^ (l_552 , (p_111 , (l_207 = p_111)))) <= p_110) << (uint16_t)(p_111 & p_111)))
                { 
                    uint32_t l_553 = 4U;
                    l_207 = (((p_109 == 0x8D474819) != (l_553 != (-9))) ^ (l_428.f0 & ((int16_t)l_496 << (int16_t)(l_244 , ((uint16_t)((uint16_t)__builtin_parityl(l_514) * (uint16_t)l_360) - (uint16_t)l_514)))));
                }
                else
                { 
                    uint32_t l_573 = 1U;
                    union U2 l_589 = {0x57E2};
                    union U0 l_590 = {0xDEC06C2D};
                    p_107 = (((uint16_t)l_562 * (uint16_t)(p_111 = ((uint16_t)(((((uint16_t)((p_107 == ((uint32_t)((uint16_t)p_111 >> (uint16_t)(l_491 >= ((l_503 != p_110) > p_108))) % (uint32_t)l_413)) && 0x70E8DBB1) << (uint16_t)p_109) < p_107) ^ l_562) <= l_130) - (uint16_t)0))) , 0xBF59170C);
                    l_418 = (((uint16_t)(l_573 <= (((p_111 ^= l_479) <= (l_195 , l_573)) , (p_108 >= (p_107 |= (l_273 = (p_108 | ((uint16_t)((uint32_t)(l_207 = (0xF623 || (l_244 , (0 | 1U)))) % (uint32_t)0x965A8C63) >> (uint16_t)1))))))) % (uint16_t)p_110) && p_109);
                    l_130 = ((p_107 &= ((((((int16_t)((int16_t)(l_582 , p_108) * (int16_t)(((int16_t)((int16_t)(((uint32_t)(((l_457 = l_589) , l_475.f1) < ((((l_491 , (l_590 , l_422)) > p_108) , l_591) , 0x80F6)) + (uint32_t)0x1436571B) != 0xCF49) * (int16_t)0x651F) >> (int16_t)p_110) ^ l_244.f3)) * (int16_t)p_109) != 0x01B501A0) < p_111) && l_319) != 4)) , l_528);
                    p_107 = 0x64FD26B8;
                }
            }
            if ((l_207 & l_479))
            { 
                int32_t l_592 = 0x54569E38;
                p_107 &= l_187;
                l_592 = l_207;
                p_107 ^= p_110;
            }
            else
            { 
                union U1 l_601 = {1};
                int32_t l_654 = 0xFACD5296;
                for (l_319 = 0; (l_319 > 30); l_319 += 6)
                { 
                    uint32_t l_602 = 5U;
                    int32_t l_620 = 0x1FDB9E56;
                    uint16_t l_631 = 3U;
                    union U2 l_633 = {1U};
                    int32_t l_665 = (-8);
                    union U1 l_668 = {-9};
                    p_107 = (p_111 & ((((uint16_t)65533U >> (uint16_t)5) < (l_428 , __builtin_clz(l_582.f3))) <= (((65526U && (((int16_t)(-7) >> (int16_t)14) & ((int16_t)(l_601 , l_244.f0) % (int16_t)p_110))) == l_602) != l_603)));
                    for (p_109 = 12; (p_109 <= 16); p_109 += 1)
                    { 
                        uint32_t l_610 = 1U;
                        union U1 l_636 = {1};
                        l_620 = (((((uint16_t)(l_418 = (p_108 || ((int16_t)(-1) + (int16_t)(((l_610 , (~(((int16_t)(l_549 && ((((int16_t)(l_610 || (((int16_t)((uint32_t)(l_417 ^= l_610) + (uint32_t)(p_110 >= (p_111 >= p_111))) >> (int16_t)9) >= p_107)) >> (int16_t)12) , (-3)) > p_111)) + (int16_t)p_107) ^ p_110))) && l_369) && 0x38B8)))) >> (uint16_t)10) < l_602) >= p_111) > p_108);
                        p_107 = ((l_601.f0 && ((((1 || 0x160F74AE) <= (p_109 >= l_610)) | (l_360 &= ((int16_t)(p_111 = l_533) >> (int16_t)3))) || (((int16_t)0xF696 >> (int16_t)(((int16_t)(((int32_t)p_107 + (int32_t)l_601.f0) ^ l_610) << (int16_t)p_111) , p_110)) && l_319))) >= l_631);
                        l_387 = (((p_110 && p_111) , l_632) , ((l_633 , ((uint16_t)l_633.f0 >> (uint16_t)(((l_636 , p_107) >= p_109) | (p_107 , l_603)))) != p_110));
                        p_107 = (l_475 , (((int16_t)((int16_t)((uint16_t)p_110 + (uint16_t)l_428.f0) << (int16_t)((int16_t)0xFE5A % (int16_t)(((uint16_t)(l_610 != l_533) * (uint16_t)l_636.f3) , (-(uint32_t)p_109)))) * (int16_t)l_633.f1) , l_549));
                    }
                    for (l_336 = 9; (l_336 < 23); l_336 += 1)
                    { 
                        uint32_t l_658 = 0U;
                        p_107 = (p_110 > (p_111 , l_356.f0));
                        p_107 = ((uint16_t)p_110 >> (uint16_t)(((uint16_t)1U * (uint16_t)0x1EC5) > l_654));
                        l_620 &= (-(uint32_t)l_428.f0);
                        p_107 = ((int32_t)p_111 - (int32_t)(4294967290U | (((l_356.f1 <= p_111) == l_658) >= 0xD9BEBD05)));
                    }
                    p_107 = (((uint16_t)((uint16_t)(8 <= ((((l_654 |= (-1)) || ((((uint16_t)p_108 * (uint16_t)1) >= 0x1D61283F) && p_110)) || 0xA211) , l_665)) >> (uint16_t)15) << (uint16_t)(((int32_t)(l_668 , l_601.f3) + (int32_t)p_107) <= l_633.f1)) | l_669);
                }
                l_417 = p_111;
                l_360 = ((l_273 ^= (((p_109 <= ((uint16_t)((uint32_t)p_110 - (uint32_t)((uint16_t)p_110 * (uint16_t)((uint16_t)(l_654 = (-(int32_t)p_110)) << (uint16_t)1))) * (uint16_t)0x8924)) != (l_428 , (__builtin_ctzl(p_107) ^ (l_418 = (!(l_207 = (p_107 <= l_601.f3))))))) | p_110)) >= l_549);
            }
            if (((l_519 = (-(int16_t)l_519)) , ((l_130 = (0x4C8EF0D5 & (-2))) == l_562)))
            { 
                return p_111;
            }
            else
            { 
                int32_t l_683 = 1;
                union U0 l_732 = {4294967288U};
                if (((int16_t)p_110 + (int16_t)(l_428 , 9)))
                { 
                    uint32_t l_686 = 0xD355F7EB;
                    union U0 l_708 = {0x00E51292};
                    int32_t l_726 = 0x64AC66E3;
                    l_683 = (p_107 = (l_412 != (((p_107 ^ 0x0548) ^ p_108) | l_356.f4)));
                    if ((l_417 = (p_107 = l_423.f3)))
                    { 
                        int32_t l_693 = 0x07A1075A;
                        int32_t l_694 = 0x9ACDEF97;
                        int32_t l_695 = 0;
                        l_695 = ((((int16_t)__builtin_parityl((l_686 = (l_255 > (l_417 &= p_109)))) * (int16_t)l_247) ^ (l_694 &= (((int16_t)l_273 << (int16_t)((int32_t)(-10) + (int32_t)((l_691 , ((((l_533 | (l_693 = (l_418 &= ((!((((l_207 == p_107) , 0x6CB5370C) , p_108) < 7)) & 1)))) <= 0x1C5E6B1A) != 65535U) == l_422)) != 0))) | p_110))) > p_111);
                        p_107 = (l_479 = ((uint16_t)((l_683 && l_457.f1) , l_683) >> (uint16_t)5));
                        l_417 = ((p_110 < p_110) == (((~((l_356.f3 < __builtin_clzl(l_686)) == l_683)) == (l_262 &= (((uint32_t)__builtin_popcount((p_110 != ((p_107 = ((((uint32_t)((((3U == (((((int16_t)p_111 << (int16_t)2) , 4294967286U) , 0xE18590FC) ^ l_319)) && l_669) >= p_110) < l_122) + (uint32_t)p_111) <= l_686) == 65532U)) <= 0x1F71BF7D))) + (uint32_t)l_412) >= l_683))) , 65530U));
                        p_107 |= l_683;
                    }
                    else
                    { 
                        uint16_t l_705 = 3U;
                        l_533 = l_705;
                    }
                    p_107 = ((int16_t)(((((l_683 , (0x8299 > p_110)) < (l_708 , p_111)) == __builtin_popcountl(l_683)) || (((p_111 = (-(uint32_t)l_519)) >= ((uint32_t)((int16_t)l_562 * (int16_t)(-5)) % (uint32_t)0x9624517B)) ^ 0x27D43950)) || p_108) << (int16_t)9);
                    l_360 = (((0xAD6EFB7E > p_111) & ((uint32_t)((int32_t)((int16_t)(l_475 , ((__builtin_ctzll(((((p_111 && ((uint16_t)4U * (uint16_t)((uint16_t)l_273 * (uint16_t)p_109))) >= (((int32_t)(p_110 ^ ((p_110 | l_708.f3) , p_107)) + (int32_t)l_708.f3) , l_428.f0)) || p_107) != l_423.f3)) , l_562) & p_107)) + (int16_t)l_519) - (int32_t)l_726) + (uint32_t)p_107)) != 1U);
                }
                else
                { 
                    uint32_t l_727 = 0xB8C0274F;
                    l_727 = (p_107 = 0);
                }
                p_107 = (p_109 >= ((p_108 != l_356.f2) < (l_519 == 0xD8D7)));
                l_262 = (l_428 , ((l_533 = (((((int32_t)(p_107 | (((int32_t)((l_582 , l_475) , (l_732 , (((uint16_t)(p_108 >= p_109) - (uint16_t)((int16_t)((l_273 || l_273) | p_109) << (int16_t)8)) , p_107))) % (int32_t)0xCCFE0451) >= (-1))) - (int32_t)0U) != p_110) , 0x4666EBB9) >= l_737)) == l_418));
            }
        }
    }
    else
    { 
        uint32_t l_738 = 1U;
        p_107 = (((l_738 != 0xEDA8) >= ((-1) <= ((int16_t)(-10) >> (int16_t)11))) && (((uint16_t)l_336 >> (uint16_t)6) > l_738));
    }
    l_387 ^= ((int16_t)l_413 - (int16_t)(p_107 , p_108));
    l_130 = ((uint16_t)(((uint16_t)((l_387 > l_356.f0) >= l_356.f2) * (uint16_t)p_110) != ((int16_t)(((((l_356 , l_336) , __builtin_parityll((0x2485 >= l_356.f1))) < l_356.f2) | (-4)) || l_751) % (int16_t)p_107)) * (uint16_t)l_130);
    return p_111;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



