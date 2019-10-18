


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   unsigned f1 : 26;
   unsigned f2 : 5;
   signed f3 : 10;
   unsigned f4 : 25;
   signed f5 : 22;
   unsigned f6 : 20;
   signed f7 : 2;
   uint32_t  f8;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint32_t  f3;
};

union U2 {
   uint16_t  f0;
   int32_t  f1;
   int32_t  f2;
   int16_t  f3;
};

union U3 {
   int32_t  f0;
   int16_t  f1;
   int16_t  f2;
};





static int32_t  func_32(void);
static int32_t  func_36(uint32_t  p_37, int32_t  p_38, uint32_t  p_39);
static union U3  func_40(union U2  p_41, int32_t  p_42, uint16_t  p_43, int32_t  p_44);
inline static union U2  func_45(union U2  p_46, uint32_t  p_47, int16_t  p_48, union U3  p_49);
inline static union U2  func_50(int16_t  p_51, union U2  p_52, int32_t  p_53);
inline static int16_t  func_54(union U2  p_55, uint16_t  p_56, union U3  p_57, union U3  p_58, struct S0  p_59);
static union U2  func_60(union U3  p_61, union U2  p_62, struct S0  p_63, union U2  p_64);
static struct S0  func_67(int16_t  p_68, uint32_t  p_69, int32_t  p_70, union U2  p_71);
inline static uint32_t  func_80(struct S0  p_81);
static struct S0  func_82(int32_t  p_83);





static int32_t  func_32(void)
{ 
    uint32_t l_33 = 1U;
    uint32_t l_34 = 0U;
    int32_t l_35 = 1;
    union U2 l_66 = {0x0187};
    int32_t l_433 = 0xF35EB71D;
    union U3 l_508 = {-1};
    int32_t l_523 = (-1);
    int32_t l_524 = 0xC3B6F16C;
    uint16_t l_551 = 65530U;
    struct S0 l_552 = {0x31D18E0C,6221,4,9,5011,-0,558,0,0xABEF210A};
    uint32_t l_598 = 0x9C2377AC;
    int32_t l_642 = (-6);
    uint16_t l_687 = 0U;
    int32_t l_797 = 1;
    int16_t l_815 = 1;
    uint32_t l_869 = 0x97343EDB;
    union U1 l_900 = {0x399F2C20};
    int32_t l_931 = (-3);
    uint32_t l_1070 = 4294967287U;
    l_34 = l_33;
    if ((l_35 = l_33))
    { 
        union U3 l_65 = {7};
        union U2 l_323 = {1U};
        struct S0 l_394 = {-1,1959,4,-8,3441,934,542,-0,9U};
        uint32_t l_525 = 0x5DA57E8C;
        struct S0 l_568 = {0xA02277A0,3925,0,-5,3096,-1018,66,-1,0xB7DF6245};
        uint32_t l_577 = 7U;
        union U1 l_605 = {0x20BC572A};
        int32_t l_662 = (-6);
        if (l_35)
        { 
            int32_t l_207 = 0;
            struct S0 l_322 = {0x52FFEF78,4977,2,-12,2258,-117,713,-0,0U};
            union U3 l_393 = {0xDDC65759};
            uint32_t l_567 = 7U;
            struct S0 l_597 = {0x1DCAB14C,6254,2,7,1720,862,246,0,2U};
            union U2 l_627 = {65529U};
            uint16_t l_646 = 65527U;
            int16_t l_655 = 0x6ADF;
            int16_t l_724 = 0x02DD;
            if (func_36(((l_508 = func_40(func_45(func_50(func_54(func_60(l_65, l_66, (func_67(l_65.f1, l_66.f3, ((uint16_t)((((uint32_t)((((__builtin_ia32_crc32qi(((int32_t)((uint16_t)((l_33 & (func_80(func_82(l_34)) != l_65.f2)) >= (-7)) << (uint16_t)l_207) - (int32_t)l_66.f0), l_65.f1) >= 0xF52C73AE) | (-1)) || 0x7DE8) ^ l_35) + (uint32_t)l_207) && l_35) <= l_207) >> (uint16_t)l_207), l_66) , l_322), l_323), l_322.f6, l_393, l_393, l_394), l_323, l_323.f3), l_433, l_66.f0, l_65), l_323.f3, l_394.f2, l_65.f2)) , 0x5C3A70C3), l_322.f8, l_394.f2))
            { 
                uint16_t l_521 = 0x8F2B;
                int32_t l_522 = 0x1309D1BD;
                uint16_t l_534 = 0U;
                int16_t l_546 = (-5);
                union U3 l_564 = {0xE1880AA3};
                struct S0 l_566 = {0x3EFD96E6,8061,3,15,4363,110,279,-0,0x8D5DF423};
                l_394.f5 |= l_33;
                if ((l_323.f1 = ((((l_433 |= (l_394 , ((int16_t)((-(int32_t)l_394.f0) != ((uint16_t)l_508.f1 << (uint16_t)l_34)) * (int16_t)__builtin_ffsll((__builtin_clzll(l_35) >= ((l_523 = (((int16_t)(l_322.f3 = l_521) * (int16_t)((((l_522 = ((l_394.f0 <= (((l_322.f5 = l_207) | l_521) >= l_322.f2)) < l_393.f1)) ^ l_393.f1) != (-2)) , l_66.f0)) && l_522)) && l_524)))))) || l_322.f0) < l_322.f6) ^ l_525)))
                { 
                    int16_t l_545 = (-1);
                    int32_t l_547 = 0x108B8120;
                    int32_t l_548 = 0x74C4260F;
                    int32_t l_549 = 0x8962453D;
                    int32_t l_550 = 0;
                    struct S0 l_557 = {0xB6C02648,1828,1,11,2636,-1517,162,-0,7U};
                    union U3 l_565 = {0x8068A80D};
                    l_552 = func_82((l_322.f5 = ((uint32_t)func_36(((uint32_t)((int16_t)0xA977 % (int16_t)(l_522 ^= (((int16_t)(l_550 &= ((((65535U | l_534) & (__builtin_bswap64(((uint32_t)l_524 + (uint32_t)(func_82((0x62A6 >= ((l_549 = ((int16_t)(((l_548 |= (((uint32_t)((uint16_t)(l_547 = ((-1) & ((0 < l_322.f3) , func_36(((uint16_t)(l_545 & l_394.f2) << (uint16_t)14), l_322.f0, l_546)))) << (uint16_t)l_508.f0) + (uint32_t)l_534) && 0)) < (-1)) == 0xA7EC0E92) % (int16_t)l_322.f2)) , l_322.f5))) , (-1)))) < l_508.f0)) > l_545) || 0x6402D9BB)) * (int16_t)l_551) != l_393.f0))) + (uint32_t)1), l_65.f2, l_545) % (uint32_t)l_525)));
                    l_547 ^= ((int16_t)((((((int16_t)__builtin_popcountl(l_534) << (int16_t)8) < __builtin_popcountl(l_508.f1)) , (func_80(l_557) && ((((int16_t)func_54(func_50(l_508.f2, l_323, (((uint16_t)((int32_t)l_65.f1 + (int32_t)l_548) % (uint16_t)0xCD8A) != l_546)), l_66.f0, l_564, l_565, l_566) << (int16_t)6) >= 65534U) == l_566.f0))) , l_322.f1) | l_567) << (int16_t)l_35);
                    l_566.f7 ^= l_323.f1;
                    l_322.f7 = l_323.f1;
                }
                else
                { 
                    l_322 = l_552;
                }
                l_568 = (l_394 = l_566);
            }
            else
            { 
                int16_t l_578 = 5;
                struct S0 l_579 = {-1,6163,3,27,1208,926,59,1,0xAD73292D};
                union U3 l_580 = {0x80C4BB04};
                int32_t l_581 = 0;
                int16_t l_594 = (-4);
                union U2 l_599 = {5U};
                l_323.f1 = ((uint16_t)((l_323.f0 >= (((((int16_t)(l_581 &= (((uint16_t)65531U + (uint16_t)(l_323.f3 && l_322.f1)) < (((uint16_t)(l_577 == l_508.f2) >> (uint16_t)l_578) <= ((-1) < ((l_579 , l_580) , 0xB95A))))) * (int16_t)l_65.f0) == 0xB776CAAF) ^ 7U) > l_552.f8)) && 65535U) >> (uint16_t)l_552.f7);
                l_568.f7 = ((int16_t)((((((int32_t)(l_322.f3 = l_65.f1) % (int32_t)l_394.f7) <= ((((uint32_t)(((int16_t)(l_322.f1 & (l_579.f8 >= l_579.f1)) - (int16_t)((int16_t)((l_594 |= l_568.f7) | ((int16_t)(l_322.f5 == ((l_568 , l_597) , l_597.f5)) >> (int16_t)14)) << (int16_t)14)) || l_579.f3) + (uint32_t)l_597.f6) , 8U) , 1)) & l_33) || l_552.f5) > 2) * (int16_t)l_552.f4);
                l_579 = (l_552 = func_67(l_597.f0, (l_322.f7 = l_65.f1), l_598, l_599));
                l_568 = (l_322 = func_67(l_394.f8, (((int16_t)l_394.f6 + (int16_t)(-(uint16_t)65535U)) ^ (((uint16_t)__builtin_ffsl(l_597.f8) * (uint16_t)((l_605 , (l_34 || ((int32_t)0x0A6F3A9C + (int32_t)((0 < l_34) != l_508.f2)))) != l_568.f7)) <= l_597.f5)), l_552.f6, l_323));
            }
            if (l_394.f1)
            { 
                uint32_t l_618 = 0x261065C3;
                int32_t l_619 = 3;
                int32_t l_643 = 0xED3D7042;
                for (l_552.f0 = (-4); (l_552.f0 < 26); l_552.f0 += 1)
                { 
                    int32_t l_613 = 0x5E015FB7;
                    if ((l_552.f4 == ((int32_t)l_433 % (int32_t)l_552.f0)))
                    { 
                        uint32_t l_614 = 4294967290U;
                        l_394.f7 = ((0xC8C6 & (func_36(l_568.f1, ((!(((0x891D96FA | l_613) && (__builtin_bswap64((l_614 = 0xA41F7A13F41D85E1LL)) ^ (l_619 = (-(int32_t)((uint16_t)l_618 - (uint16_t)(4294967288U == l_34)))))) == l_618)) || 0x3B24), l_613) ^ l_322.f0)) & l_613);
                        return l_552.f8;
                    }
                    else
                    { 
                        int32_t l_626 = 1;
                        union U2 l_630 = {65535U};
                        union U3 l_631 = {1};
                        int32_t l_632 = 1;
                        l_613 = (l_34 || (-(uint32_t)(l_552.f8 , l_552.f7)));
                        l_322.f7 ^= (((uint32_t)l_394.f7 % (uint32_t)4294967286U) == (l_394.f5 >= (-(uint16_t)(l_613 >= ((int32_t)__builtin_parityll(l_322.f6) + (int32_t)(0xAE4D30AA & (l_626 == 0x28BD)))))));
                        l_619 = ((l_552.f3 && ((func_54(func_45(l_627, l_613, ((int32_t)((l_613 || __builtin_clzl(l_508.f0)) != l_619) + (int32_t)6U), l_631), l_632, l_393, l_65, l_552) < l_619) ^ 0x0341)) && l_619);
                        return l_34;
                    }
                }
                if (((l_66.f0 && ((l_618 >= ((l_568.f6 & ((uint16_t)(l_597.f3 = ((0x6B21 & l_393.f1) , ((((int32_t)func_80((((l_618 & func_36((l_619 = l_619), (l_394.f5 &= (((-(uint32_t)(l_508.f2 ^ (l_643 = ((((((int32_t)__builtin_ctzl((((uint16_t)l_642 >> (uint16_t)l_642) > l_597.f1)) + (int32_t)l_552.f4) , l_618) & 0) | l_323.f0) >= l_618)))) ^ l_597.f0) || l_551)), l_322.f6)) , l_393) , l_597)) % (int32_t)l_322.f5) >= l_322.f1) ^ l_568.f4))) >> (uint16_t)l_393.f2)) <= 0x373DC789)) >= l_618)) | 0U))
                { 
                    uint16_t l_647 = 0x4A55;
                    if (func_36(l_394.f0, ((uint16_t)__builtin_ffsll(l_66.f0) << (uint16_t)11), l_646))
                    { 
                        return l_647;
                    }
                    else
                    { 
                        int32_t l_652 = 0x0361A2B5;
                        int32_t l_653 = 0xE07FFA91;
                        l_653 &= ((int16_t)((uint16_t)l_508.f1 + (uint16_t)l_652) % (int16_t)func_36(l_35, (l_643 |= func_80(func_82(l_433))), l_35));
                        return l_552.f5;
                    }
                }
                else
                { 
                    struct S0 l_654 = {0x37DD741E,3601,0,9,3770,-106,7,1,0xEFB64308};
                    int16_t l_659 = 0x5309;
                    l_643 &= (l_619 |= (-4));
                    l_654 = (l_619 , l_654);
                    l_627.f1 = (((((l_524 &= (l_627.f0 | l_655)) > (l_65 , ((uint16_t)func_36(l_654.f7, (l_654.f3 & (((((__builtin_popcount(l_643) != 0x7FC0) >= (((!l_618) > l_643) , l_207)) & l_659) || 0xFED99A84) <= l_654.f5)), l_619) * (uint16_t)l_552.f1))) >= l_619) , 0xCB5F8A5F) && l_618);
                }
                l_552.f3 = (l_552.f5 = ((((int16_t)(l_662 > l_618) * (int16_t)0x81E5) | 0x0097) & (l_322.f4 == l_568.f4)));
                l_568.f7 |= ((int32_t)((int16_t)((int16_t)l_597.f8 - (int16_t)l_552.f6) % (int16_t)l_618) + (int32_t)((int16_t)(((~(!0x97243C7C)) != l_618) == (l_597.f7 = (((0x32D3 >= ((uint32_t)((l_643 = l_618) , (0x46903009 != (0xBC93694F == l_322.f7))) - (uint32_t)4294967286U)) || l_207) || l_433))) >> (int16_t)14));
            }
            else
            { 
                int32_t l_675 = 0;
                uint32_t l_691 = 1U;
                l_675 ^= l_552.f8;
                l_523 = ((((int16_t)l_568.f8 - (int16_t)l_394.f4) < l_675) & (l_675 || (((-(int32_t)(l_323.f2 &= (((l_66.f1 = l_552.f3) ^ (((int16_t)l_568.f8 % (int16_t)__builtin_ffsl(((int16_t)((((uint32_t)((((l_675 && func_36(l_525, (l_597.f5 ^= ((l_568.f3 &= l_34) >= l_568.f4)), l_322.f0)) == l_687) && l_322.f6) | l_394.f6) % (uint32_t)7) , l_627.f0) && l_393.f2) >> (int16_t)l_552.f5))) == l_523)) < l_508.f2))) == l_568.f5) > 0xD069)));
                for (l_642 = 16; (l_642 == 29); l_642 += 1)
                { 
                    uint32_t l_690 = 5U;
                    int32_t l_728 = 0;
                    union U2 l_729 = {5U};
                    struct S0 l_734 = {1,6851,0,27,1015,-153,621,0,8U};
                    if (l_322.f6)
                    { 
                        l_691 = l_690;
                    }
                    else
                    { 
                        uint32_t l_709 = 0xED34C6A6;
                        union U2 l_727 = {65535U};
                        l_728 = ((int16_t)(((int16_t)l_322.f5 << (int16_t)((uint16_t)(func_50(((((uint16_t)(((uint16_t)l_322.f6 << (uint16_t)((uint16_t)((int16_t)((uint32_t)(((-(uint32_t)(l_662 &= l_709)) <= (((int16_t)0x0664 * (int16_t)((4294967290U <= ((l_597.f5 &= (l_690 || ((uint16_t)((((int16_t)0xD23D - (int16_t)(((int16_t)((int16_t)((((uint32_t)(((l_66.f2 = ((uint16_t)l_724 + (uint16_t)(((int32_t)__builtin_ctzl((((0x20582EE5 && 0xA80A4FCC) == l_597.f0) , l_690)) + (int32_t)l_597.f8) , 0xEAC4))) == l_646) < 0x8F6FF0BD) + (uint32_t)l_690) && l_568.f1) ^ l_525) + (int16_t)l_433) + (int16_t)l_675) | l_675)) || l_675) , 0U) + (uint16_t)l_691))) , l_690)) == 0xEF35)) > 0x4DF8)) || l_690) + (uint32_t)l_322.f3) << (int16_t)8) + (uint16_t)l_691)) < l_605.f0) >> (uint16_t)15) < 0) < l_709), l_727, l_675) , l_322.f7) << (uint16_t)13)) , l_690) << (int16_t)10);
                        if (l_690)
                            continue;
                        if (l_727.f3)
                            continue;
                    }
                    l_552.f5 |= (((func_54(l_729, l_322.f7, l_65, func_40((((int32_t)l_675 - (int32_t)(l_322.f8 , l_691)) , l_323), l_729.f3, __builtin_ffs((l_552.f7 &= ((uint16_t)(func_36(((l_691 > l_691) && 0xB4DE), l_646, l_675) , l_691) << (uint16_t)2))), l_394.f1), l_734) == 65535U) || 0xF8DC) == l_597.f4);
                    l_729.f2 = l_551;
                }
            }
        }
        else
        { 
            uint32_t l_735 = 0x23D3CF9F;
            return l_735;
        }
    }
    else
    { 
        uint32_t l_736 = 4294967288U;
        int32_t l_756 = 0x90E6CFBD;
        struct S0 l_765 = {0xDE8CEC63,7057,4,27,4920,403,596,-0,0x5EAC61DD};
        uint32_t l_805 = 0x90186C59;
        union U2 l_865 = {0xF671};
        union U3 l_866 = {0x7CF3EE9E};
        union U2 l_872 = {0xB6C6};
        union U2 l_873 = {1U};
        uint32_t l_892 = 0x997EEC94;
        uint16_t l_929 = 1U;
        uint32_t l_932 = 0U;
        int16_t l_942 = (-1);
        uint32_t l_946 = 4294967291U;
        union U1 l_953 = {-1};
        uint32_t l_996 = 4294967289U;
        int32_t l_1032 = (-1);
        uint16_t l_1051 = 0U;
        if (l_736)
        { 
            int32_t l_737 = 0x149A445E;
            int32_t l_745 = 0xB8C9FB05;
            if (((l_737 <= l_552.f0) , l_34))
            { 
                int16_t l_738 = 2;
                return l_738;
            }
            else
            { 
                l_745 = (((int32_t)0x98A42359 + (int32_t)((int16_t)(l_66.f2 = l_736) >> (int16_t)11)) , ((uint16_t)(l_508.f2 >= l_737) * (uint16_t)l_736));
                return l_552.f4;
            }
        }
        else
        { 
            int16_t l_748 = 0x40FB;
            int32_t l_749 = 0x95B93647;
            struct S0 l_750 = {0xB7722E63,5091,4,26,4155,1362,158,-1,0xB8F9AA5D};
            union U3 l_847 = {0x81DCFB80};
            l_749 = ((int32_t)l_736 + (int32_t)l_748);
            l_750 = l_552;
            for (l_35 = 26; (l_35 > (-25)); l_35 -= 7)
            { 
                uint32_t l_753 = 8U;
                int32_t l_754 = (-1);
                int32_t l_755 = 0x20193C50;
                union U2 l_766 = {9U};
                int32_t l_784 = 0;
                struct S0 l_799 = {0xFF69514C,4926,3,23,2189,176,504,-1,1U};
                uint16_t l_803 = 0xD588;
                l_756 = ((l_736 >= 4294967293U) != ((l_755 = ((l_35 <= __builtin_popcountll(l_753)) & ((l_750.f2 ^ (0x2B69 <= (((((((l_754 |= __builtin_clz(l_750.f4)) && l_736) , l_552.f7) && l_552.f0) <= l_66.f3) || l_750.f4) & (-6)))) >= l_736))) , 0xCAEA));
                if ((func_67((func_36((((int32_t)l_750.f3 % (int32_t)(l_750.f7 = 8U)) & l_753), ((((((uint32_t)0U % (uint32_t)0xE817FDEC) , (l_749 = 0)) | (((int16_t)(((uint16_t)(func_80((l_765 = l_552)) && 0x74669890) - (uint16_t)l_754) < l_753) - (int16_t)1U) >= l_750.f6)) == l_756) < l_524), l_755) <= 0x6088), l_754, l_552.f3, l_766) , (-10)))
                { 
                    struct S0 l_773 = {0,6390,1,29,3661,630,525,0,0x04309EB6};
                    struct S0 l_776 = {-10,2900,1,-1,235,-239,947,-1,0U};
                    uint32_t l_777 = 0x7344CD89;
                    for (l_66.f0 = 23; (l_66.f0 != 38); l_66.f0 += 3)
                    { 
                        int16_t l_774 = 0x74BB;
                        struct S0 l_775 = {0x1B75DD86,5158,1,-14,391,474,973,1,4294967295U};
                        union U3 l_778 = {0};
                        l_765.f7 &= (func_40(func_45(l_766, ((((int16_t)l_508.f2 % (int16_t)l_750.f1) || (((uint16_t)__builtin_clzll(((((0xF8DF & 0x6A03) & func_80((func_80(l_773) , ((((l_773.f5 = (l_774 = l_753)) , l_736) , l_775) , l_776)))) & l_552.f1) & l_773.f0)) >> (uint16_t)5) < l_777)) > 0xB2C1844E), l_765.f6, l_778), l_777, l_66.f3, l_775.f3) , 0x17A7B131);
                        l_552.f5 = l_750.f8;
                    }
                    l_552 = l_552;
                }
                else
                { 
                    int16_t l_783 = 0;
                    int32_t l_796 = (-9);
                    int16_t l_804 = 0x4EF3;
                    l_750.f7 = ((int16_t)l_598 % (int16_t)(l_766 , (((uint16_t)(__builtin_ia32_crc32qi(((l_749 |= (l_765.f5 = (l_783 == ((l_784 = l_765.f8) > ((6U == ((l_523 <= l_783) ^ (((!0x4046888D) <= ((uint32_t)l_750.f8 + (uint32_t)l_755)) >= 1))) ^ 0))))) ^ l_750.f8), l_783) | 0U) * (uint16_t)l_753) , l_783)));
                    if (((int16_t)((((int16_t)(l_797 = ((uint32_t)l_783 + (uint32_t)(0xA3A6BD7D == (l_750.f3 &= ((int16_t)(l_796 = l_753) >> (int16_t)5))))) * (int16_t)((-(int32_t)__builtin_bswap64((l_799 , l_765.f7))) < 1U)) | (-(int32_t)(-5))) | (l_804 = ((int16_t)(l_803 = l_799.f3) - (int16_t)l_750.f6))) % (int16_t)l_783))
                    { 
                        uint16_t l_806 = 65535U;
                        l_805 |= l_756;
                        l_523 |= (l_796 ^= __builtin_ctzll(l_806));
                        l_749 &= 8;
                    }
                    else
                    { 
                        int16_t l_811 = 3;
                        int32_t l_812 = 0xC0D39086;
                        l_812 ^= (l_811 = ((int16_t)l_765.f8 * (int16_t)((uint16_t)l_750.f3 * (uint16_t)l_783)));
                        return l_34;
                    }
                    return l_765.f2;
                }
                return l_799.f4;
            }
            for (l_433 = 0; (l_433 >= (-2)); l_433 -= 7)
            { 
                int32_t l_816 = (-1);
                int32_t l_817 = 0x428997BF;
                int32_t l_828 = 0;
                int32_t l_829 = (-1);
                struct S0 l_856 = {-6,4896,1,19,5769,-807,446,1,0xA91CA569};
                l_829 = ((func_36(l_552.f7, l_815, l_816) > (l_817 = l_815)) | (((uint32_t)4294967293U + (uint32_t)(((int16_t)((7 | ((((uint32_t)((((int16_t)func_36((((int32_t)(((l_828 = l_736) ^ (l_750.f5 & l_736)) | 0xDC26) + (int32_t)l_797) == 0x5A41B072), l_552.f3, l_66.f0) + (int16_t)l_642) >= l_750.f7) , l_552.f7) % (uint32_t)l_66.f0) | l_552.f8) == 0x1834)) > l_816) << (int16_t)13) ^ 0U)) && l_765.f1));
                l_856 = func_82(((uint32_t)((((uint16_t)(l_805 , (((uint16_t)(1 & ((uint32_t)(((int16_t)(l_817 = ((int16_t)0x779B * (int16_t)l_552.f8)) % (int16_t)l_736) ^ (((uint32_t)((-(uint16_t)((((int16_t)(l_847 , ((uint16_t)((int16_t)((int16_t)((l_765.f5 = l_815) | ((uint16_t)(l_508.f0 || l_765.f6) + (uint16_t)l_815)) << (int16_t)l_828) - (int16_t)l_756) % (uint16_t)l_748)) - (int16_t)l_552.f1) ^ l_66.f0) != l_765.f3)) == l_35) % (uint32_t)l_66.f0) & l_828)) % (uint32_t)l_765.f2)) * (uint16_t)l_756) > l_750.f4)) * (uint16_t)l_829) >= 0x0ED4) != l_750.f7) - (uint32_t)0xF6F5444E));
                return l_750.f0;
            }
        }
        for (l_66.f2 = 0; (l_66.f2 <= 13); l_66.f2 += 1)
        { 
            uint32_t l_870 = 4294967294U;
            union U3 l_871 = {-2};
            int32_t l_880 = 1;
            int32_t l_890 = 0xB197C5FB;
            int32_t l_895 = 1;
            struct S0 l_905 = {0,5498,3,-23,1870,-5,647,-1,0x391E6DAE};
            int32_t l_933 = 0xC94A75C0;
            uint32_t l_945 = 0U;
            l_872.f1 = (l_66.f0 <= ((l_433 = ((uint32_t)((int16_t)l_736 >> (int16_t)((int16_t)((func_45(func_60((l_508 = (l_866 = l_871)), l_872, l_552, l_873), l_66.f3, l_552.f7, l_871) , l_871.f0) == l_871.f0) * (int16_t)l_765.f4)) + (uint32_t)l_552.f1)) >= l_871.f2));
            if ((l_871.f0 ^ (((int32_t)0x23B77F3A % (int32_t)0x293A0857) > (l_765.f5 < (l_880 &= (((int16_t)(l_873.f1 = (0x2A98 == l_815)) % (int16_t)65531U) == ((int16_t)l_871.f2 >> (int16_t)((l_872.f1 | l_765.f5) , l_552.f5))))))))
            { 
                int32_t l_885 = 0x9C3CAD7D;
                int32_t l_891 = 0;
                union U2 l_901 = {65527U};
                union U3 l_903 = {0x641F2E37};
                union U2 l_904 = {9U};
                l_872.f2 = ((int16_t)((uint32_t)l_885 + (uint32_t)(0 && (l_552.f7 |= l_885))) * (int16_t)(((uint32_t)(l_892 &= ((l_885 ^ (((uint16_t)__builtin_ffs((l_765.f7 = (l_756 = (((l_765.f3 = 1) ^ 0x3489) == (((l_797 &= (l_891 ^= l_890)) > l_885) <= l_885))))) * (uint16_t)0) , l_866.f0)) > l_880)) + (uint32_t)l_872.f3) ^ l_642));
                l_865.f1 = ((int16_t)__builtin_bswap64(l_34) << (int16_t)9);
                if (l_895)
                    continue;
                l_895 &= ((((int16_t)((l_885 &= (l_880 = l_871.f1)) || (((uint16_t)((((func_54((l_900 , (l_901 = ((l_890 = (l_765.f0 , (l_524 , (l_66.f2 || l_871.f2)))) , l_901))), (l_880 = (~((l_903 , l_904) , l_880))), l_866, l_903, l_905) & 0) || 7) < 65535U) <= l_805) - (uint16_t)l_765.f7) & l_765.f1)) >> (int16_t)l_900.f0) <= l_870) | l_524);
            }
            else
            { 
                l_872.f2 ^= 0xAE28B91C;
                return l_905.f8;
            }
            if ((l_871.f2 && l_552.f1))
            { 
                uint16_t l_906 = 65527U;
                int32_t l_922 = 1;
                uint32_t l_923 = 0xF276D3C2;
                int32_t l_928 = 0x361D7749;
                int32_t l_930 = (-3);
                l_552.f5 = 0x6F710497;
                l_552.f3 = (l_905.f0 & (l_906 < func_36((((l_890 = (-1)) | 0xA7F6553D) == (((uint16_t)((int32_t)((uint16_t)__builtin_ffs(((uint32_t)(!((uint16_t)__builtin_popcountl(l_906) >> (uint16_t)func_36(((int16_t)(0x682E <= l_906) << (int16_t)(l_552.f7 = ((uint16_t)(((l_871.f2 <= (-3)) , l_922) > (-9)) << (uint16_t)7))), l_900.f2, l_873.f1))) % (uint32_t)l_756)) >> (uint16_t)2) % (int32_t)l_797) << (uint16_t)l_923) && 0xC32F)), l_923, l_872.f0)));
                l_933 = (((((0x2010 > (((uint32_t)l_923 - (uint32_t)(l_895 |= (l_930 ^= __builtin_ia32_crc32qi(l_865.f2, ((l_35 >= ((int16_t)(l_880 ^= (((l_928 &= __builtin_ia32_crc32qi(l_922, l_906)) >= l_929) != l_905.f6)) >> (int16_t)l_929)) , 255U))))) || 9)) & l_931) && 0xF83C3F59) < l_932) , l_552.f5);
            }
            else
            { 
                uint32_t l_937 = 0x7B935F9B;
                int32_t l_947 = 0x159AF5A6;
                for (l_508.f0 = (-13); (l_508.f0 == (-5)); l_508.f0 += 2)
                { 
                    struct S0 l_936 = {-4,2052,1,17,5024,-922,691,1,0x64CE7C81};
                    l_936 = l_905;
                    l_936.f5 |= (l_937 | ((int16_t)0xF312 << (int16_t)((((int16_t)(-5) + (int16_t)(func_80(func_82((l_942 |= (l_552 , 0)))) , l_937)) & ((l_947 = ((int16_t)(l_946 = l_945) + (int16_t)l_873.f0)) ^ 0U)) & (-1))));
                }
                return l_947;
            }
            if (l_873.f0)
                break;
        }
        l_873.f2 = ((0x5DEAE839 | (l_34 == func_54((((l_66.f2 |= l_765.f6) & l_872.f3) , l_66), __builtin_popcount(((l_865.f0 > (l_765.f7 = ((l_866.f0 & 0U) || l_865.f3))) & 8)), l_866, l_508, l_552))) == l_931);
        if ((l_797 = ((uint16_t)l_642 >> (uint16_t)7)))
        { 
            uint32_t l_950 = 4294967293U;
            int32_t l_954 = (-1);
            int32_t l_955 = 0x9FCCD606;
            int32_t l_958 = 0x24E422FD;
            l_950 = l_900.f3;
            l_958 = ((((l_955 = ((uint16_t)l_552.f6 * (uint16_t)(l_954 ^= ((l_953 , 3) <= (-1))))) <= l_950) < ((int16_t)l_765.f8 * (int16_t)l_756)) & l_866.f2);
        }
        else
        { 
            uint32_t l_959 = 0x7AC3B0E2;
            int32_t l_969 = 0xC68B1EA9;
            union U2 l_974 = {65528U};
            union U3 l_975 = {-1};
            struct S0 l_999 = {0x9F35BEC1,4993,1,-12,2542,544,922,-1,4294967291U};
            int32_t l_1012 = 1;
            union U3 l_1022 = {0xB276A1BB};
            int16_t l_1023 = 0x60CD;
            uint32_t l_1037 = 1U;
            if (l_959)
            { 
                struct S0 l_960 = {-1,2406,4,7,4041,1741,611,-0,0x4808F680};
                uint32_t l_964 = 0x642BD51B;
                l_960 = l_552;
                l_873.f2 = (l_969 = ((uint16_t)(~l_964) * (uint16_t)((uint32_t)l_953.f1 % (uint32_t)((uint16_t)l_959 - (uint16_t)(-2)))));
                l_765 = l_552;
            }
            else
            { 
                int32_t l_978 = 1;
                int32_t l_979 = 0xB561770B;
                int32_t l_990 = 0x7E491B8F;
                struct S0 l_991 = {-2,4597,2,-9,66,950,46,0,0x18D74DE0};
                l_523 ^= (((int16_t)((int16_t)((func_54(l_974, (func_82((l_975 , 5)) , (l_990 = ((((uint32_t)l_869 + (uint32_t)(((l_979 = l_978) <= ((uint32_t)((int16_t)(((uint16_t)__builtin_popcountl(((uint16_t)((int16_t)l_959 - (int16_t)(((l_524 = ((1U == (0U == l_978)) , l_975.f1)) <= l_978) == 4294967287U)) % (uint16_t)l_942)) * (uint16_t)0xCAE2) && 0xE17E) << (int16_t)2) % (uint32_t)l_975.f1)) & l_33)) == 0x83E2F0E4) && l_978))), l_866, l_975, l_991) > 6U) >= l_991.f7) >> (int16_t)l_687) % (int16_t)65535U) ^ l_872.f3);
                l_974.f1 = 0x81CE7A0C;
                if (l_974.f3)
                { 
                    int32_t l_992 = (-3);
                    l_765 = func_82(l_992);
                }
                else
                { 
                    uint32_t l_995 = 1U;
                    struct S0 l_1005 = {0xCDEA308B,6589,4,-1,1061,1279,607,0,4294967294U};
                    l_765.f5 = (((-1) | (((int32_t)(l_433 &= func_36(l_642, ((l_931 | l_598) ^ 0x26A6), l_765.f7)) + (int32_t)(((__builtin_popcountll(l_995) , 0xCD76) <= l_996) || l_995)) , l_991.f6)) < l_969);
                    l_433 = (l_995 >= l_34);
                    for (l_953.f3 = 0; (l_953.f3 != 20); l_953.f3 += 5)
                    { 
                        uint32_t l_1000 = 1U;
                        uint32_t l_1001 = 0xE8ED50DC;
                        l_999 = l_991;
                        l_1001 = (l_552.f7 = l_1000);
                        l_979 = ((int32_t)((-(uint16_t)(l_1005 , (func_40(l_66, l_552.f5, (4294967295U | (((uint32_t)((uint32_t)((uint16_t)(l_873.f2 &= (l_999.f7 >= l_975.f1)) - (uint16_t)(((l_975 , l_872.f3) >= (l_900 , 6)) && l_1012)) - (uint32_t)l_866.f2) - (uint32_t)l_765.f3) , 0x46756367)), l_1005.f3) , l_900.f0))) && l_1001) + (int32_t)l_946);
                        return l_1005.f1;
                    }
                    l_765 = (l_991 = l_1005);
                }
            }
            for (l_892 = (-18); (l_892 != 54); l_892 += 8)
            { 
                union U2 l_1021 = {65535U};
                union U3 l_1055 = {7};
                struct S0 l_1057 = {-1,709,0,4,5098,1178,904,1,0x254614A3};
                l_999.f5 = ((uint32_t)((int16_t)__builtin_clzll(((uint16_t)(l_865.f2 = ((func_54((l_508 , l_1021), l_873.f0, l_866, l_1022, l_765) || l_873.f2) , l_1023)) % (uint16_t)l_999.f8)) >> (int16_t)7) - (uint32_t)l_1021.f3);
            }
            l_969 = l_1070;
        }
    }
    return l_598;
}




static int32_t  func_36(uint32_t  p_37, int32_t  p_38, uint32_t  p_39)
{ 
    uint16_t l_509 = 0xEBAD;
    int32_t l_510 = 0x3AC565FF;
    l_510 = l_509;
    for (p_38 = 0; (p_38 < 27); p_38 += 1)
    { 
        int16_t l_513 = (-5);
        return l_513;
    }
    return p_37;
}




static union U3  func_40(union U2  p_41, int32_t  p_42, uint16_t  p_43, int32_t  p_44)
{ 
    struct S0 l_462 = {1,4751,0,11,3671,-502,193,0,0x961EB2E0};
    union U3 l_479 = {0};
    union U2 l_481 = {65535U};
    int32_t l_482 = 0;
    int32_t l_483 = 0x55958048;
    uint16_t l_506 = 0x75EE;
    if (((int16_t)(p_41.f3 = (((func_80(l_462) , ((l_483 |= (((0xF1E0D7F7 >= (((uint32_t)((int32_t)((uint32_t)l_462.f0 % (uint32_t)(((((int16_t)(p_42 | ((int16_t)((p_43 < ((uint16_t)(l_482 |= ((((l_462.f3 = ((int16_t)(p_41.f0 || (l_481.f2 = (((uint32_t)((func_60(l_479, func_50((-(uint16_t)l_462.f8), l_481, p_42), l_462, p_41) , l_462.f5) , 0xE0BB5CFA) + (uint32_t)p_41.f3) < l_481.f0))) * (int16_t)65535U)) , l_462.f3) || (-1)) , l_481.f3)) * (uint16_t)p_41.f1)) & l_462.f8) >> (int16_t)11)) * (int16_t)l_479.f1) == l_479.f0) > l_462.f6) , (-1))) % (int32_t)2) % (uint32_t)l_462.f5) & p_41.f2)) > p_41.f2) || (-1))) != l_462.f1)) > p_41.f3) | l_462.f0)) << (int16_t)l_462.f5))
    { 
        union U1 l_484 = {0xAE41FBAB};
        int32_t l_503 = (-6);
        union U2 l_504 = {0xC94E};
        struct S0 l_505 = {0x10385C33,2582,4,-20,677,-1052,538,-1,2U};
        l_505 = func_67(((l_484 , ((int16_t)((int32_t)(0x5A4D && ((int32_t)((uint16_t)(l_481.f1 = ((p_42 ^ ((p_44 , ((int16_t)l_484.f3 >> (int16_t)((((int32_t)0x939F5B87 - (int32_t)(l_462.f5 = ((int16_t)l_462.f4 - (int16_t)((int16_t)(p_41.f3 ^= ((0xB787 <= l_503) , 0x4527)) * (int16_t)l_484.f1)))) > p_42) > p_42))) < p_44)) && l_462.f4)) * (uint16_t)p_44) - (int32_t)p_44)) % (int32_t)p_42) % (int16_t)p_42)) && 0), l_503, l_484.f1, l_504);
        l_462.f7 |= (l_462.f8 >= l_506);
    }
    else
    { 
        union U3 l_507 = {0xDA2B867E};
        return l_507;
    }
    return l_479;
}




inline static union U2  func_45(union U2  p_46, uint32_t  p_47, int16_t  p_48, union U3  p_49)
{ 
    uint32_t l_436 = 0xF5971CE6;
    union U2 l_437 = {1U};
    struct S0 l_444 = {0x359EE004,2935,1,-16,2734,145,224,1,1U};
    int32_t l_445 = 0x5B89DED0;
    union U3 l_446 = {0x2CE0C44C};
    struct S0 l_447 = {0x9CDA6642,6906,0,22,1874,1736,663,1,6U};
    uint32_t l_448 = 0x855E0243;
    int32_t l_459 = 0x0C5DAC79;
    p_46.f2 = ((uint32_t)(l_447.f5 = (l_436 & func_54(l_437, ((int16_t)((uint16_t)p_48 * (uint16_t)0xBD26) * (int16_t)((int16_t)(l_436 || (l_445 = __builtin_clz(func_80((l_444 = (l_437.f0 , l_444)))))) << (int16_t)l_436)), l_446, p_49, l_447))) + (uint32_t)4294967295U);
    l_437.f2 = ((l_447.f3 ^= (p_46.f0 = l_448)) == ((((int32_t)(((((uint16_t)0xE5E5 * (uint16_t)((((l_444.f5 = ((int16_t)((uint16_t)((int16_t)p_49.f1 >> (int16_t)p_49.f2) >> (uint16_t)0) - (int16_t)(p_48 = (((((l_444.f7 = func_54((func_50(l_446.f1, ((l_459 || p_49.f2) , l_437), l_447.f0) , l_437), l_436, l_446, p_49, l_444)) >= 0x7032) || 0x4DCF) , l_436) >= 0x9EE0FBF5)))) || p_48) > p_47) == p_47)) || p_49.f1) && l_444.f4) , l_447.f8) - (int32_t)l_447.f2) | p_49.f2) != p_47));
    return l_437;
}




inline static union U2  func_50(int16_t  p_51, union U2  p_52, int32_t  p_53)
{ 
    int32_t l_412 = 0x1A237E60;
    int32_t l_413 = 0x1C53AE2F;
    union U3 l_416 = {0xE3DE9200};
    int32_t l_419 = (-2);
    int32_t l_424 = (-3);
    uint16_t l_427 = 65535U;
    int32_t l_432 = 0xEC57E579;
    l_413 |= l_412;
    l_432 = (p_53 = ((int16_t)((l_413 = (((l_412 & (((l_416 , ((uint32_t)(l_413 <= (l_419 = 0U)) + (uint32_t)((uint16_t)((uint16_t)(l_424 ^= l_413) << (uint16_t)((((int16_t)(__builtin_ffs(l_427) || ((uint16_t)(p_52.f0 >= ((uint32_t)p_51 - (uint32_t)0xFA2E92F0)) << (uint16_t)9)) << (int16_t)6) ^ l_413) && p_52.f0)) % (uint16_t)l_427))) || p_53) , l_424)) == 0xE735) != p_52.f0)) == p_52.f0) << (int16_t)l_416.f0));
    return p_52;
}




inline static int16_t  func_54(union U2  p_55, uint16_t  p_56, union U3  p_57, union U3  p_58, struct S0  p_59)
{ 
    int16_t l_395 = 0x6048;
    int32_t l_396 = 0xE4D8781C;
    struct S0 l_403 = {0x7515C299,3567,4,-10,200,102,950,-0,0xD1387B76};
    if ((l_396 &= l_395))
    { 
        int32_t l_399 = 0;
        struct S0 l_405 = {1,5779,0,-29,1115,-426,486,0,0x0CBBEA3A};
        union U2 l_410 = {1U};
        for (p_55.f2 = 0; (p_55.f2 <= (-27)); p_55.f2 -= 3)
        { 
            int32_t l_404 = 1;
            int32_t l_411 = 0xB2E62D11;
            p_59 = func_67(l_399, p_58.f0, p_58.f2, p_55);
            l_404 = (func_80((func_82(((uint16_t)(p_56 = (l_399 = (p_55.f3 <= (func_80(func_82((0xE45F & (-(uint16_t)l_396)))) , 0x9A1D392C)))) - (uint16_t)0x409C)) , (p_59 = ((l_399 && p_57.f2) , l_403)))) > 7);
            p_59 = l_405;
            p_59.f3 = (l_403.f3 = (l_411 = func_80(func_67(p_55.f3, __builtin_popcountl(l_404), ((((uint16_t)(l_403.f5 , (l_404 < (-1))) - (uint16_t)p_59.f0) == ((0xE13E9DB4 || (((p_59.f6 = ((int32_t)l_404 + (int32_t)p_55.f0)) , l_405.f2) <= l_404)) == (-1))) & l_405.f8), l_410))));
        }
    }
    else
    { 
        p_59 = l_403;
    }
    return p_59.f6;
}




static union U2  func_60(union U3  p_61, union U2  p_62, struct S0  p_63, union U2  p_64)
{ 
    struct S0 l_325 = {0,4733,2,-27,1721,-1114,1001,-0,0x397EF2E5};
    struct S0 l_330 = {-1,1507,4,-0,5688,643,880,1,0U};
    int32_t l_331 = (-3);
    struct S0 l_332 = {5,5976,2,-20,3922,-1641,838,-1,0x8B8BF441};
    union U1 l_344 = {0x367FBF12};
    uint32_t l_345 = 0U;
    uint16_t l_346 = 0x05CA;
    int16_t l_389 = 0xCB7C;
    int32_t l_391 = 2;
    union U2 l_392 = {0x4507};
    if (((p_63.f1 = (-(int16_t)func_80(l_325))) != (((uint16_t)0xDACE + (uint16_t)((l_332 = func_82((l_331 &= ((int16_t)(p_62.f3 = (__builtin_popcountll(l_325.f7) != ((l_325.f3 != func_80((l_330 = l_325))) | (((p_61.f0 = (l_325.f7 , l_325.f5)) , 0xFCE8) ^ p_63.f2)))) * (int16_t)l_325.f3)))) , l_325.f1)) != p_63.f6)))
    { 
        int16_t l_333 = 0x78DE;
        int32_t l_334 = (-1);
        l_334 &= l_333;
        l_330 = p_63;
        p_63.f3 = (l_325.f2 & 9);
        l_325.f7 &= (p_64.f0 >= ((int16_t)((func_80(p_63) , (!p_64.f3)) | ((int32_t)(l_325.f2 >= (-5)) - (int32_t)__builtin_ffsll(p_63.f6))) << (int16_t)7));
    }
    else
    { 
        l_332.f7 = __builtin_clzl(p_63.f7);
        p_63.f3 = p_63.f1;
    }
    p_64.f1 = func_80((l_332 = l_332));
    p_63 = func_82(((((((p_63.f4 && (1U | ((int16_t)(l_346 = ((uint16_t)(__builtin_bswap64(l_332.f5) & (__builtin_ctz((p_63.f2 |= (l_344 , 0x111F8ADE))) , (l_345 == (p_64.f1 | p_63.f6)))) >> (uint16_t)l_325.f1)) * (int16_t)l_325.f0))) ^ 65535U) >= p_64.f0) < l_332.f6) , l_332.f4) ^ (-1)));
    if (func_80(func_82(((int16_t)((uint16_t)((int16_t)((int16_t)(((uint16_t)(((int16_t)l_330.f0 * (int16_t)(((int16_t)l_332.f1 << (int16_t)6) | l_330.f6)) & (p_63.f6 = ((int32_t)(p_63.f5 |= l_330.f1) - (int32_t)((((int32_t)((l_330 , (p_61.f0 && ((((((((((int16_t)(__builtin_popcount(((int16_t)(((((uint16_t)((int16_t)((((5U == p_62.f0) > l_330.f5) >= p_61.f0) > l_325.f2) * (int16_t)l_344.f3) - (uint16_t)0U) || 6U) && l_330.f3) | p_63.f2) - (int16_t)1)) <= 0xC181) * (int16_t)p_63.f3) , 0x261D) ^ p_64.f3) , l_330.f4) && 0xD3D90BD9) & 6U) < l_330.f8) == l_325.f8) & p_61.f2))) < l_346) - (int32_t)l_330.f6) ^ l_325.f5) ^ p_64.f2)))) << (uint16_t)l_330.f2) == l_330.f4) >> (int16_t)l_330.f6) >> (int16_t)8) >> (uint16_t)7) * (int16_t)l_325.f7))))
    { 
        l_325.f5 = l_344.f1;
    }
    else
    { 
        int32_t l_375 = 0x74B03E8A;
        int32_t l_390 = 0x678A595C;
        l_390 = ((uint16_t)l_375 - (uint16_t)(((l_325.f7 = ((((int16_t)((uint16_t)0x179C - (uint16_t)(p_63.f5 | ((int16_t)((((uint32_t)(((((int16_t)p_61.f1 << (int16_t)((int16_t)l_325.f2 - (int16_t)p_61.f2)) > (l_375 >= (!(p_64.f1 , p_63.f2)))) , 0xFC969621) < 0x41BF8B16) + (uint32_t)p_62.f3) , 0xE9E73530) && l_375) + (int16_t)p_63.f4))) - (int16_t)0x646E) || l_389) == 0xE7992D64)) & 0U) >= 0x2FE3B4D8));
        p_63.f3 ^= ((p_63.f7 ^= l_330.f2) == l_375);
        p_63 = func_82(__builtin_clzll(l_375));
        p_63.f3 = l_391;
    }
    return l_392;
}




static struct S0  func_67(int16_t  p_68, uint32_t  p_69, int32_t  p_70, union U2  p_71)
{ 
    int32_t l_213 = 0x7C59C4CC;
    int32_t l_218 = (-8);
    union U2 l_236 = {0x327C};
    union U1 l_253 = {-1};
    struct S0 l_262 = {0xE7CB9A90,6333,2,29,1884,564,17,1,1U};
    struct S0 l_269 = {0xC2DBC328,404,4,23,3264,-998,578,-1,0x13937DDB};
    int16_t l_276 = (-1);
    uint32_t l_318 = 4294967291U;
    for (p_69 = 13; (p_69 >= 53); p_69 += 1)
    { 
        uint32_t l_212 = 0x3C314682;
        union U3 l_216 = {-1};
        int32_t l_217 = (-1);
        int32_t l_252 = 0x8498C81B;
        uint16_t l_260 = 0xB859;
        struct S0 l_261 = {5,889,2,23,2398,466,55,-0,4294967295U};
        if (((((uint32_t)p_71.f3 % (uint32_t)l_212) , l_213) >= ((((p_69 && ((uint32_t)p_71.f3 % (uint32_t)l_213)) | ((l_217 = ((l_216 , p_71.f0) & (l_216.f2 && l_216.f1))) && l_218)) && 0) && 0x67A6)))
        { 
            int16_t l_233 = 4;
            int32_t l_237 = 0;
            int32_t l_238 = 6;
            struct S0 l_275 = {1,4048,0,25,3251,-49,367,-0,1U};
            union U1 l_285 = {-3};
            if (((uint16_t)((uint16_t)(((int16_t)p_70 << (int16_t)l_216.f1) > ((int32_t)(p_71.f1 = ((int16_t)((int16_t)__builtin_parity(((l_233 = ((int16_t)p_69 >> (int16_t)15)) != (((int16_t)(0x3201CB5A && ((((((l_236 , func_82((l_236.f2 = (p_70 < p_71.f0)))) , func_82(l_218)) , p_71.f3) >= l_237) == l_213) & p_71.f0)) >> (int16_t)3) | p_71.f0))) << (int16_t)14) << (int16_t)l_238)) + (int32_t)5U)) << (uint16_t)7) << (uint16_t)p_69))
            { 
                uint32_t l_251 = 0x9686125E;
                struct S0 l_270 = {-4,3481,1,-4,2315,-1883,843,-1,0x458B7C67};
                for (p_71.f0 = 0; (p_71.f0 < 28); p_71.f0 += 1)
                { 
                    struct S0 l_241 = {6,3823,4,-31,5621,813,763,-0,0x86A49EC6};
                    return l_241;
                }
                if (((int16_t)__builtin_clzll(p_69) << (int16_t)(((int16_t)(~(((int16_t)(l_217 = ((int16_t)(p_69 & __builtin_ctz(l_237)) << (int16_t)__builtin_popcountll((p_71.f0 && l_216.f1)))) - (int16_t)p_70) || l_251)) % (int16_t)l_238) || l_252)))
                { 
                    union U1 l_254 = {0};
                    int32_t l_259 = 0x596D2B07;
                    if (((((((l_254 = l_253) , (__builtin_ia32_crc32qi(l_254.f3, func_80(func_82(p_68))) | ((int16_t)((__builtin_popcountl(l_216.f0) | (((l_259 |= ((uint16_t)l_238 - (uint16_t)p_71.f3)) , 0x33B0) < 0x2F3A)) , p_68) << (int16_t)l_251))) && l_216.f2) >= p_68) >= l_260) != 0x28AB))
                    { 
                        p_71.f1 = l_252;
                    }
                    else
                    { 
                        l_270 = func_82(__builtin_parityll((((func_80((l_262 = (l_261 = l_261))) != (-9)) > ((((p_70 >= p_69) < 0xE2DC38A9) & __builtin_bswap32(((int16_t)p_71.f3 * (int16_t)(((uint16_t)(((int16_t)(p_69 , ((func_80(l_269) && 1U) && 0x0960BBCD)) >> (int16_t)l_251) , 65535U) >> (uint16_t)13) , p_69)))) , l_212)) , p_71.f3)));
                    }
                }
                else
                { 
                    int16_t l_271 = 0xB0DC;
                    struct S0 l_274 = {0,2708,3,-15,4053,1541,546,-1,0xAEBC0395};
                    p_70 = (65535U ^ ((l_269.f7 = (l_261.f3 = p_68)) == (7U & p_70)));
                    l_271 = (l_269.f5 = ((l_238 |= l_270.f6) ^ 0x2136C564));
                    if ((((uint16_t)(func_80(l_274) , (((p_68 = (p_71.f3 = __builtin_ctz(l_270.f4))) <= (l_236.f0 < l_270.f0)) > l_237)) * (uint16_t)l_261.f8) || func_80(l_275)))
                    { 
                        l_270 = l_270;
                    }
                    else
                    { 
                        struct S0 l_277 = {0x1467F0AB,6121,0,-5,2228,-803,301,-0,0x712D7D5E};
                        if (p_69)
                            break;
                        l_277 = func_82(l_276);
                        if (l_217)
                            continue;
                    }
                    p_70 |= (func_80((l_274 = func_82(l_253.f2))) && p_71.f0);
                }
            }
            else
            { 
                uint32_t l_292 = 0U;
                int32_t l_293 = 0x699FB92A;
                l_293 ^= ((int16_t)(p_71.f0 | ((((int16_t)((uint16_t)(p_71.f1 , l_262.f5) * (uint16_t)(-(int32_t)l_275.f2)) * (int16_t)(l_269.f2 & ((l_285 , ((int16_t)l_261.f4 * (int16_t)p_71.f1)) | (((((uint32_t)((int32_t)(l_253.f2 < 0) - (int32_t)1U) - (uint32_t)4294967295U) < l_292) == (-9)) ^ 1U)))) == l_237) < p_71.f3)) * (int16_t)0x2A5C);
            }
        }
        else
        { 
            struct S0 l_302 = {0x1A50624B,5098,1,-31,4987,516,450,1,4294967287U};
            int32_t l_311 = 0x5BF0DDE0;
            int32_t l_312 = 0;
            l_261 = l_261;
            l_312 &= (l_216 , ((int16_t)func_80(((((uint32_t)(p_68 , ((int16_t)((int16_t)0x779B >> (int16_t)14) % (int16_t)p_68)) % (uint32_t)func_80(l_302)) > ((int16_t)p_68 - (int16_t)((uint16_t)(((uint16_t)l_302.f4 << (uint16_t)__builtin_popcount(((uint16_t)(p_71.f0 = (l_311 = __builtin_parityl((l_269.f6 == p_71.f0)))) << (uint16_t)6))) < l_269.f4) % (uint16_t)l_216.f2))) , l_269)) * (int16_t)p_69));
        }
        for (l_260 = 0; (l_260 == 20); l_260 += 1)
        { 
            union U3 l_315 = {0x8DCC0734};
            struct S0 l_321 = {5,4987,3,-12,3608,-599,840,1,0x46530D64};
            p_70 = ((l_315 , (((uint32_t)(l_216.f2 | (func_80(func_82(l_318)) , p_71.f0)) + (uint32_t)p_69) && (l_269.f5 = (l_218 |= (((int16_t)(l_262.f7 = func_80(l_321)) * (int16_t)p_70) < p_71.f3))))) == l_321.f1);
            if (p_70)
                continue;
        }
    }
    l_262 = l_269;
    return l_269;
}




inline static uint32_t  func_80(struct S0  p_81)
{ 
    int16_t l_111 = 0;
    uint16_t l_112 = 0xF097;
    int32_t l_117 = 0x4BBA09B9;
    struct S0 l_198 = {9,1095,2,-24,4579,-144,291,-1,0x95804E8C};
    int16_t l_206 = 0x613D;
    l_112 = l_111;
    p_81.f7 &= (l_111 != (((int16_t)((l_117 ^= ((uint16_t)l_111 >> (uint16_t)l_112)) || p_81.f8) % (int16_t)((uint32_t)(0xEE84 ^ l_112) + (uint32_t)((((p_81.f1 = 9U) <= (l_112 , ((uint16_t)((int16_t)l_111 + (int16_t)65531U) % (uint16_t)p_81.f4))) | l_112) ^ l_112))) <= p_81.f5));
    for (p_81.f8 = (-21); (p_81.f8 > 59); p_81.f8 += 1)
    { 
        uint32_t l_130 = 0xBD6B4620;
        int32_t l_147 = 0x4BB2EE2B;
        uint16_t l_157 = 65535U;
        struct S0 l_196 = {0x8D31AF41,1808,1,6,3091,-1862,870,-1,9U};
        struct S0 l_197 = {0x6176E380,2226,0,-31,4954,511,207,1,0x767B0238};
        for (p_81.f0 = 0; (p_81.f0 >= (-9)); p_81.f0 -= 3)
        { 
            struct S0 l_128 = {0x5CCA7CC9,6818,4,-11,2727,1970,301,0,4294967289U};
            struct S0 l_129 = {0x03B65DD6,2277,1,9,1575,1318,863,-0,0x16363166};
            l_130 = ((l_128 , l_129) , l_129.f8);
            p_81.f5 &= p_81.f4;
        }
        if ((p_81.f7 ^= 0x1FAE61DE))
        { 
            uint32_t l_148 = 0U;
            int32_t l_153 = 0x290BC8DD;
            int32_t l_158 = 0x310A9C07;
            l_117 = p_81.f1;
            if (((uint32_t)(((uint32_t)((int16_t)((9U <= ((int16_t)p_81.f0 % (int16_t)p_81.f0)) ^ ((uint32_t)(((int32_t)(((uint16_t)((int32_t)l_111 % (int32_t)p_81.f1) * (uint16_t)l_130) || l_130) - (int32_t)(l_147 = (0xD91E >= p_81.f1))) != l_148) + (uint32_t)l_130)) >> (int16_t)2) + (uint32_t)l_112) == p_81.f6) - (uint32_t)0xF23DC045))
            { 
                uint32_t l_151 = 0x5BEE32CE;
                int32_t l_152 = (-1);
                l_153 |= __builtin_popcount((((uint32_t)(l_151 = (l_117 |= l_112)) - (uint32_t)p_81.f3) > (l_152 ^= l_148)));
                if (l_153)
                    break;
            }
            else
            { 
                uint16_t l_154 = 65535U;
                struct S0 l_155 = {0xFC3DE152,2085,3,14,5428,-151,263,-0,8U};
                struct S0 l_156 = {0x555567A9,7590,2,-28,3933,-676,488,0,0x3CC42B59};
                if (p_81.f2)
                    break;
                l_147 &= 0x6939AD6F;
                l_156 = ((l_154 == (p_81.f5 &= (p_81.f3 = 0))) , (l_155 = func_82((p_81.f7 &= l_148))));
                p_81.f5 ^= ((__builtin_popcountl(p_81.f6) || (l_158 = (l_153 = l_157))) ^ ((int16_t)((((int16_t)l_148 * (int16_t)(((uint16_t)((int32_t)(p_81.f2 | p_81.f6) % (int32_t)((-(uint16_t)(-(uint32_t)((p_81.f1 <= (p_81.f3 = l_148)) == p_81.f4))) ^ p_81.f1)) >> (uint16_t)p_81.f6) < l_112)) | p_81.f7) ^ l_157) >> (int16_t)13));
            }
        }
        else
        { 
            return l_117;
        }
        if (l_111)
            continue;
        for (l_111 = 18; (l_111 != 8); l_111 -= 1)
        { 
            int16_t l_187 = 0x1CC4;
            if (((uint16_t)65532U >> (uint16_t)(l_117 || __builtin_parity(((int16_t)((((uint32_t)(((uint32_t)l_147 % (uint32_t)l_117) <= ((uint16_t)(l_157 > p_81.f8) >> (uint16_t)6)) - (uint32_t)p_81.f2) > (__builtin_ctz(l_147) != l_147)) || 0x2A71) % (int16_t)l_157)))))
            { 
                uint32_t l_191 = 0x0461CA15;
                for (l_157 = 16; (l_157 <= 58); l_157 += 1)
                { 
                    for (p_81.f0 = 0; (p_81.f0 <= (-24)); p_81.f0 -= 3)
                    { 
                        int16_t l_188 = 0x0AFF;
                        p_81.f3 &= ((((((uint16_t)(l_117 = (__builtin_bswap64((l_187 = 4294967295U)) && p_81.f7)) << (uint16_t)l_188) , ((uint32_t)l_191 % (uint32_t)l_112)) ^ 4294967293U) ^ (((int32_t)(p_81.f1 == p_81.f7) - (int32_t)p_81.f0) & 0x84E9)) , l_117);
                    }
                    p_81.f3 = l_157;
                    p_81.f3 ^= (l_117 &= l_130);
                }
                for (l_187 = 16; (l_187 > (-1)); l_187 -= 4)
                { 
                    l_197 = (l_196 = (l_187 , func_82(l_147)));
                }
                l_196.f3 = p_81.f0;
            }
            else
            { 
                int16_t l_201 = 1;
                l_198 = p_81;
                p_81.f5 &= ((((int16_t)__builtin_ctzll(l_198.f1) << (int16_t)(0x7FF7 || (l_201 , (l_117 = (p_81.f7 | (p_81.f3 == p_81.f2)))))) != p_81.f3) , ((int32_t)l_187 - (int32_t)p_81.f1));
            }
        }
    }
    l_206 &= (l_198.f0 & l_198.f6);
    return p_81.f5;
}




static struct S0  func_82(int32_t  p_83)
{ 
    int32_t l_84 = (-1);
    uint32_t l_91 = 0xBFD7802F;
    uint32_t l_101 = 0xC827221B;
    int32_t l_108 = 0;
    struct S0 l_110 = {-4,6498,4,-5,2743,1915,597,1,4U};
    if (l_84)
    { 
        int16_t l_87 = (-6);
        union U1 l_92 = {-1};
        int32_t l_93 = 0x8FDC3C1A;
        l_84 &= ((uint16_t)((l_87 ^= p_83) > ((uint16_t)(~0U) * (uint16_t)((l_91 < (l_93 = (l_92 , (l_92.f1 <= (p_83 >= p_83))))) && (p_83 || p_83)))) << (uint16_t)5);
    }
    else
    { 
        int16_t l_96 = 5;
        union U3 l_109 = {0x808108B9};
        p_83 = ((((int16_t)(l_84 ^= l_96) << (int16_t)((uint16_t)l_91 % (uint16_t)((uint16_t)((p_83 == l_101) , (l_96 , (((p_83 || ((l_91 != ((((((!(((uint16_t)(((((int16_t)(-(int32_t)((l_108 = (p_83 | 0x870B5DC3)) ^ p_83)) >> (int16_t)5) || p_83) > l_101) , l_101) % (uint16_t)l_101) , p_83)) , p_83) , l_109) , 0x9CEB) != l_96) & 1)) | p_83)) & 4294967289U) == p_83))) >> (uint16_t)p_83))) & l_101) ^ 0x236B);
        l_110 = l_110;
    }
    return l_110;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_32();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



