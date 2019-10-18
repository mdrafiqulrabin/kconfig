



static long __undefined;


union U0 {
   uint64_t  f0;
};

union U1 {
   uint64_t  f0;
   int64_t  f1;
};

union U2 {
   uint16_t  f0;
   uint16_t  f1;
   int64_t  f2;
   int32_t  f3;
};





static int32_t  func_31(void);
static int32_t  func_38(uint16_t  p_39, int16_t  p_40, uint16_t  p_41, int64_t  p_42);
static uint64_t  func_46(union U2  p_47, union U1  p_48, int32_t  p_49);
static union U2  func_50(union U2  p_51, union U0  p_52, uint32_t  p_53, uint32_t  p_54);
static union U2  func_55(uint32_t  p_56);
static uint32_t  func_57(uint32_t  p_58, uint16_t  p_59, int32_t  p_60);
static uint64_t  func_61(union U0  p_62, int64_t  p_63, union U2  p_64);
static union U0  func_65(int32_t  p_66);
static uint32_t  func_75(uint64_t  p_76, int8_t  p_77, int64_t  p_78, uint32_t  p_79);
static int64_t  func_90(uint32_t  p_91, uint16_t  p_92);





static int32_t  func_31(void)
{ 
    int32_t l_32 = 0x434392F2L;
    union U2 l_467 = {1UL};
    int16_t l_471 = 0x108BL;
    union U2 l_474 = {65535UL};
    int32_t l_1216 = 0L;
    int32_t l_1245 = 0x9CD87693L;
    int8_t l_1247 = 0x6FL;
    union U0 l_1307 = {0xC54EDEE7048E385BLL};
    int32_t l_1356 = 0xED164A3EL;
    int8_t l_1426 = 1L;
    uint32_t l_1465 = 0x71AA25F8L;
    int32_t l_1526 = 1L;
    int64_t l_1529 = (-1L);
    uint32_t l_1535 = 18446744073709551615UL;
lbl_1310:
    if ((0xC8D46758L != l_32))
    { 
        uint32_t l_45 = 4294967295UL;
        int32_t l_1191 = 0x7B30E89CL;
        uint32_t l_1199 = 0xECD7E30BL;
        for (l_32 = 0; (l_32 > (-18)); l_32 -= 5)
        { 
            int32_t l_35 = (-9L);
            union U1 l_1037 = {1UL};
            int8_t l_1039 = 1L;
            uint16_t l_1187 = 0x5D61L;
            int32_t l_1194 = 1L;
            for (l_35 = 18; (l_35 >= (-12)); l_35--)
            { 
                int32_t l_466 = 0xC4DDF6A9L;
                union U0 l_472 = {0x58029260F8D8FAEBLL};
                int32_t l_473 = (-6L);
                int32_t l_475 = 0x3791266AL;
                uint64_t l_1038 = 0UL;
                int32_t l_1201 = 9L;
                if (func_38(((int16_t)(4294967295UL ^ l_45) - (int16_t)(func_46(func_50(func_55((func_57((l_475 = ((func_61(func_65(l_35), l_466, l_467) || l_471) || func_61(l_472, l_473, l_474))), l_35, l_35) == 0UL)), l_472, l_35, l_32), l_1037, l_1038) != l_1039)), l_35, l_467.f0, l_1039))
                { 
                    int16_t l_1189 = 9L;
                    l_475 = 0xC58E34A2L;
                    if ((__builtin_bswap64(((uint16_t)(-(int16_t)0xCD07L) << (uint16_t)15)) && l_1187))
                    { 
                        int32_t l_1188 = 1L;
                        l_1189 = l_1188;
                        l_467.f3 = l_475;
                        
                                            }
                    else
                    { 
                        int8_t l_1190 = 0x4DL;
                        if (l_1190)
                            break;
                    }
                    l_1191 = l_45;
                    l_1194 = ((uint32_t)0xBBBDC6A1L / (uint32_t)func_75(l_1038, l_45, l_472.f0, l_474.f0));
                }
                else
                { 
                    int64_t l_1200 = 0L;
                    int32_t l_1209 = 3L;
                    uint32_t l_1217 = 0x9A110A99L;
                    l_1199 = (((int64_t)(l_474.f3 = ((uint16_t)__builtin_ffsll(l_474.f0) << (uint16_t)1)) - (int64_t)l_1191) && l_466);
                    
                                        if ((l_1201 = l_1200))
                    { 
                        int32_t l_1202 = 0x6ECB1692L;
                        l_1202 = __builtin_parityll(l_467.f0);
                    }
                    else
                    { 
                        int64_t l_1210 = 0L;
                        int32_t l_1215 = 0L;
                        l_1191 = ((((uint16_t)((int16_t)l_45 / (int16_t)((uint16_t)l_1191 % (uint16_t)l_1037.f0)) >> (uint16_t)4) && __builtin_ffsll(l_1194)) == ((l_1210 = (((l_1209 = l_472.f0) <= 1L) || l_1039)) & (l_474.f3 = (((int16_t)(((uint16_t)((0x6FE6L == l_467.f0) == l_1215) << (uint16_t)l_1194) < 6L) << (int16_t)l_1201) & l_1216))));
                        l_1209 = ((l_474.f3 = l_1217) == (0x612AL == (l_1194 = 0x7AA4L)));
                    }
                }
                if (l_1037.f0)
                    break;
                l_1191 = (~__builtin_ia32_crc32qi(l_467.f0, ((uint16_t)(((~(__builtin_ia32_crc32qi((l_1194 && ((l_1199 & l_45) == (((l_1216 ^ l_1216) <= l_45) > (1L >= ((int16_t)(l_474.f3 = ((((int32_t)(l_1038 || l_475) / (int32_t)1UL) ^ 18446744073709551615UL) == l_1191)) << (int16_t)l_1037.f1))))), l_1039) ^ l_1037.f0)) | 18446744073709551615UL) | l_1216) >> (uint16_t)5)));
            }
            l_35 = 0x597CD5ACL;
        }
    }
    else
    { 
        int32_t l_1235 = (-1L);
        int8_t l_1246 = 0L;
        int32_t l_1252 = 0xD278A628L;
        int32_t l_1288 = 0x546B5C52L;
        for (l_467.f1 = 0; (l_467.f1 > 7); l_467.f1 += 3)
        { 
            int32_t l_1243 = 0xF1C7E8C5L;
            uint32_t l_1244 = 0x03BCAEB3L;
            uint64_t l_1248 = 0xAFD72D6BB3C94196LL;
            int32_t l_1289 = 0xAF52AE6FL;
            uint16_t l_1303 = 1UL;
            l_474.f3 = __builtin_clzl((((int32_t)((l_474.f1 == (l_1245 = (-(int16_t)(func_38(l_1235, (!((int64_t)((int16_t)(l_1235 && l_467.f1) << (int16_t)(((__builtin_ia32_crc32qi(((((((int16_t)(0x8E82L || l_1235) >> (int16_t)0) != (l_1243 && l_1235)) <= (l_32 = (-6L))) && l_1244) || 0x32844CD2D76A8B8BLL), l_1245) < l_471) ^ 9L) || 1L)) / (int64_t)l_1243)), l_1246, l_1247) != l_1246)))) > l_1247) + (int32_t)1UL) && 0xC7773AEF4AB94314LL));
            
                        if (__builtin_parityll(l_467.f1))
            { 
                return l_1248;
            }
            else
            { 
                int16_t l_1255 = 0x3079L;
                uint64_t l_1275 = 0x82B214DF7CD7F289LL;
                int32_t l_1280 = 0xF165C1C5L;
                int32_t l_1287 = 0xBFAE4093L;
                for (l_1246 = 0; (l_1246 < (-22)); l_1246 -= 3)
                { 
                    uint32_t l_1260 = 1UL;
                    l_1252 = (1L != (l_474.f0 >= (~l_32)));
                    l_1243 = ((int16_t)((((l_1252 = __builtin_bswap64(l_1255)) && func_38(((l_474.f3 = ((((uint16_t)(((int16_t)l_1260 - (int16_t)((uint16_t)l_1235 << (uint16_t)1)) | (((uint32_t)func_38((((int64_t)((int64_t)l_1260 - (int64_t)(((uint64_t)((uint16_t)0x1155L >> (uint16_t)l_1243) % (uint64_t)0x574E686EBB34E501LL) <= ((((int32_t)l_1255 - (int32_t)l_1255) ^ l_1235) | l_1260))) % (int64_t)l_32) | l_1260), l_1235, l_474.f3, l_1248) % (uint32_t)l_1255) != 18446744073709551607UL)) << (uint16_t)l_1243) == l_1260) | 4294967287UL)) <= l_1252), l_32, l_1275, l_1260)) == l_1246) | 0xF78601CDL) << (int16_t)l_1247);
                }
                for (l_1275 = 0; (l_1275 <= 13); l_1275 += 7)
                { 
                    uint32_t l_1286 = 4294967292UL;
                    for (l_1248 = 0; (l_1248 == 55); ++l_1248)
                    { 
                        int32_t l_1281 = (-3L);
                        l_1245 = (l_1280 = 1L);
                        l_474.f3 = __builtin_parity(l_1281);
                        l_1287 = (((int64_t)(l_1281 > 0L) - (int64_t)l_1286) >= (65526UL != 0x859EL));
                        l_474.f3 = (l_1288 = (l_1243 | (l_1280 > l_1275)));
                    }
                    l_1289 = (l_1243 = l_1244);
                    for (l_1286 = 0; (l_1286 == 54); l_1286 += 4)
                    { 
                        uint16_t l_1292 = 0x7FDBL;
                        int32_t l_1302 = (-6L);
                        l_474.f3 = func_75((__builtin_ctzll(l_1292) == ((int64_t)((l_1287 = ((uint32_t)(!(l_1243 = (l_1235 ^ ((uint32_t)(l_1244 | ((uint16_t)l_1252 << (uint16_t)0)) % (uint32_t)(l_1289 = (func_38(l_1255, l_1287, l_474.f1, l_1244) && l_1246)))))) + (uint32_t)l_1252)) != l_1288) - (int64_t)l_1286)), l_1302, l_1286, l_1302);
                        l_1302 = l_1248;
                        if (l_1287)
                            continue;
                    }
                }
                l_1303 = __builtin_popcount((l_1252 = 0UL));
            }
            if (l_467.f1)
                break;
        }
        
            }
    if (l_1247)
    { 
        uint64_t l_1306 = 18446744073709551608UL;
        int32_t l_1308 = 0xF5E4A446L;
        l_1308 = ((int64_t)(l_1306 <= ((__builtin_clzl(((l_467.f0 < l_1306) | func_57((l_32 = l_1306), l_471, l_1306))) <= func_61((l_1307 = func_65(l_1306)), l_1306, l_474)) <= l_1245)) % (int64_t)l_1306);
    }
    else
    { 
        int8_t l_1311 = (-10L);
        int32_t l_1318 = (-1L);
        int32_t l_1334 = (-1L);
        int32_t l_1335 = 0x0CB52456L;
        uint32_t l_1378 = 0x3C0224E8L;
        uint64_t l_1395 = 0xD0BCFFF9159908A8LL;
        union U2 l_1435 = {0x2526L};
        int32_t l_1449 = (-5L);
        uint32_t l_1467 = 0UL;
        int32_t l_1475 = 0xDECF9982L;
lbl_1487:
        l_474.f3 = (-(int32_t)__builtin_ctz(l_471));
        
                if (l_474.f1)
            goto lbl_1310;
        if (((func_90(l_1247, __builtin_ffsl((l_32 = l_1311))) >= ((int64_t)(((int32_t)((((l_474.f3 = (__builtin_ia32_crc32qi(l_1311, l_1311) < ((int16_t)0L / (int16_t)l_1311))) | l_471) == 0x3ED5L) & l_1318) + (int32_t)l_1311) >= l_1216) / (int64_t)l_1311)) == l_1245))
        { 
            int32_t l_1327 = 0x4EEADF0DL;
            union U2 l_1333 = {65534UL};
            l_1335 = ((int16_t)((int16_t)(l_474.f0 && (((int16_t)((uint32_t)l_1327 + (uint32_t)l_1318) >> (int16_t)(l_32 = l_1318)) < 0x681118BEL)) >> (int16_t)(l_1334 = (((uint16_t)((uint16_t)l_1327 << (uint16_t)(func_61(func_65(((l_1327 == l_1327) | (+l_471))), l_1327, l_1333) ^ l_1318)) << (uint16_t)8) | 0x66FAD628B806A29BLL))) >> (int16_t)5);
        }
        else
        { 
            uint16_t l_1336 = 0xEFD1L;
            int32_t l_1339 = 1L;
            int8_t l_1355 = 0x24L;
            uint32_t l_1389 = 0x8D414CA8L;
            int32_t l_1396 = 0x8FDE4F00L;
            union U1 l_1405 = {0x994C99DBA451E57CLL};
            uint32_t l_1456 = 0UL;
            uint32_t l_1492 = 0UL;
            uint32_t l_1500 = 1UL;
            if (((l_1356 = ((l_1336 & (l_32 = ((int16_t)((l_1335 = ((l_474.f3 = 65535UL) != ((l_1339 = 0x53A7L) > (0UL <= ((l_467.f3 = ((l_1245 = ((uint16_t)(((uint32_t)((uint64_t)l_467.f1 - (uint64_t)9L) - (uint32_t)(0x204AL >= (l_1335 & ((int16_t)(+((int16_t)(l_1334 = ((uint16_t)l_471 >> (uint16_t)l_1336)) << (int16_t)l_1336)) >> (int16_t)l_1318)))) < l_1336) % (uint16_t)l_1336)) | l_1335)) < 1UL))))) | l_1355) << (int16_t)3))) | 0x368CBC6C48D0945ELL)) != 1L))
            { 
                uint32_t l_1362 = 0x3EC8F13BL;
                int32_t l_1377 = 0x9380E99CL;
                union U0 l_1406 = {5UL};
                int32_t l_1427 = 0x68AA26BDL;
                uint32_t l_1452 = 0x40964E91L;
                int32_t l_1474 = (-3L);
                if (l_474.f0)
                { 
                    int32_t l_1374 = 0x3F4D7E24L;
                    int32_t l_1394 = 0x9D5E3FDCL;
                    union U2 l_1404 = {5UL};
                    for (l_467.f3 = 0; (l_467.f3 < (-27)); l_467.f3 -= 9)
                    { 
                        int32_t l_1369 = 0xC6758475L;
                        l_1378 = ((int32_t)(l_1362 = (l_32 = (!l_1307.f0))) / (int32_t)((uint64_t)0xE14C229C6A70B130LL / (uint64_t)(l_474.f0 && ((((int32_t)0x30AD484BL / (int32_t)0xFD6C4EDBL) == ((int16_t)l_1369 >> (int16_t)((int16_t)((uint32_t)(l_1374 > (((l_1374 ^ ((uint64_t)l_1377 % (uint64_t)l_467.f0)) & l_474.f3) == l_1336)) / (uint32_t)l_1311) >> (int16_t)l_1377))) <= 0x3BFB466258AE317CLL))));
                        l_1396 = (((((l_1374 > ((uint16_t)((int64_t)((uint16_t)(8L < (l_1335 = (((uint64_t)(l_1339 = func_75((l_1377 = ((int64_t)2L - (int64_t)(((0xA9B0799EL < l_1362) | (l_1389 > 18446744073709551610UL)) | l_1374))), ((uint32_t)(((uint64_t)(l_1394 = l_1369) - (uint64_t)l_1374) <= l_1216) + (uint32_t)0x1BBDC7BCL), l_1369, l_1374)) - (uint64_t)l_1395) != l_1362))) << (uint16_t)l_1362) / (int64_t)l_1374) >> (uint16_t)l_1362)) >= l_1374) ^ l_474.f3) <= l_1374) || 1L);
                        l_1394 = (((uint16_t)1UL << (uint16_t)(l_1377 = (0xA228L ^ (l_474.f3 = l_1369)))) ^ ((+l_1395) & ((int64_t)(1UL || ((l_1356 = 0UL) >= l_1394)) - (int64_t)((int16_t)func_46(l_1404, l_1405, l_1405.f0) << (int16_t)11))));
                    }
                }
                else
                { 
                    uint16_t l_1420 = 5UL;
                    l_1396 = (l_32 = func_61(l_1406, l_1247, func_55(l_1336)));
                    for (l_32 = 0; (l_32 >= 3); l_32 += 9)
                    { 
                        int16_t l_1409 = 9L;
                        l_1377 = (l_1395 == l_1409);
                    }
                    for (l_474.f3 = 11; (l_474.f3 > (-3)); l_474.f3--)
                    { 
                        int64_t l_1412 = (-4L);
                        return l_1412;
                    }
                    l_1377 = (((l_467.f3 = ((uint32_t)__builtin_parity((((uint16_t)(l_467.f1 ^ __builtin_ctzl(l_1355)) >> (uint16_t)((((uint16_t)l_1336 << (uint16_t)(((-(int32_t)(l_1335 = (l_1339 = l_1420))) || ((((-(uint32_t)(0xC65465ADL >= ((int16_t)l_471 + (int16_t)((l_1335 = (l_1336 < ((uint16_t)func_90(l_1420, l_1426) + (uint16_t)0xE5A3L))) >= l_1427)))) && (-7L)) & l_1355) <= l_1420)) <= l_1420)) <= l_1307.f0) && l_1420)) >= 0x9D193877L)) / (uint32_t)l_1420)) < l_1356) || l_1356);
                }
                if (l_1406.f0)
                { 
                    int8_t l_1446 = 0x30L;
                    uint16_t l_1460 = 9UL;
                    uint16_t l_1483 = 0UL;
                    uint64_t l_1484 = 0x2D8B318B6F4A5B33LL;
                    for (l_1336 = 4; (l_1336 < 56); l_1336 += 4)
                    { 
                        int8_t l_1430 = 0x46L;
                        if (l_1389)
                            break;
                        l_1377 = l_1362;
                        l_1335 = (l_1430 = (l_1395 < l_1335));
                        l_32 = ((int64_t)((int16_t)func_46(l_1435, l_1405, (l_1377 = (((((uint32_t)4294967295UL - (uint32_t)(__builtin_ffsl(l_1377) & (((int64_t)((int32_t)((int16_t)9L << (int16_t)(18446744073709551608UL && (((uint16_t)l_1446 << (uint16_t)l_1430) & 0x7C5BCFED3C4A02D9LL))) % (int32_t)l_1216) - (int64_t)l_1427) & l_1430))) & 6L) >= l_1446) != l_1430))) - (int16_t)l_1405.f1) + (int64_t)18446744073709551615UL);
                    }
                    for (l_1362 = 0; (l_1362 == 43); ++l_1362)
                    { 
                        uint16_t l_1453 = 0UL;
                        int32_t l_1457 = 3L;
                        int32_t l_1466 = 1L;
                        l_1335 = 0L;
                        l_1396 = l_1449;
                        l_1466 = ((6UL <= l_1446) ^ ((int32_t)((l_1453 = __builtin_ctz(l_1452)) != (l_1446 < ((l_1457 = ((uint16_t)__builtin_ctzl(l_1456) << (uint16_t)8)) && ((uint64_t)l_1460 * (uint64_t)((((int16_t)((l_1457 = func_75(((uint64_t)0xB6471AA937B3698BLL - (uint64_t)l_1356), l_1465, l_1355, l_1460)) ^ (-6L)) >> (int16_t)l_1446) == l_1466) < l_1466))))) / (int32_t)l_1467));
                        l_1377 = (l_1456 || ((int32_t)((int32_t)((int32_t)func_75(l_1460, (l_1474 = 1L), (((l_1452 || func_90(((l_1475 | ((+0L) == ((int64_t)l_1460 % (int64_t)((int16_t)((int16_t)(((l_1456 > (l_1457 && l_1460)) == l_1336) != l_1435.f0) >> (int16_t)12) >> (int16_t)7)))) != l_1483), l_1460)) != l_1446) || l_1435.f0), l_471) + (int32_t)l_1484) - (int32_t)1UL) / (int32_t)l_1339));
                    }
                    return l_1446;
                }
                else
                { 
                    for (l_1318 = (-8); (l_1318 == (-25)); l_1318--)
                    { 
                        if (l_1335)
                            goto lbl_1487;
                    }
                }
                for (l_1307.f0 = 27; (l_1307.f0 <= 6); l_1307.f0--)
                { 
                    l_1435.f3 = ((uint16_t)0xF2F0L << (uint16_t)l_1492);
                    
                                        l_1356 = 0xE234BF2AL;
                    l_467.f3 = ((uint32_t)l_1396 + (uint32_t)l_1339);
                }
            }
            else
            { 
                uint32_t l_1499 = 0xB847CF56L;
                int32_t l_1501 = (-1L);
                l_1396 = l_32;
                l_1501 = (l_1500 = (__builtin_ffsl(l_1405.f1) | ((int64_t)((uint16_t)l_1339 / (uint16_t)l_1355) + (int64_t)l_1499)));
                return l_1307.f0;
            }
            
                        l_1339 = ((((uint32_t)l_1389 % (uint32_t)l_1426) == (l_1396 = l_1435.f1)) || l_1475);
            l_1334 = 1L;
            if ((l_1396 = (l_1378 & l_1355)))
            { 
                uint32_t l_1504 = 9UL;
                l_1335 = l_1475;
                return l_1504;
            }
            else
            { 
                int8_t l_1505 = 0xC6L;
                int32_t l_1506 = 0xF0D0A690L;
                l_1506 = l_1505;
            }
        }
        l_1245 = (l_1335 = 0x41A23993L);
    }
    if ((0x5CD4L & (-(int64_t)(((uint16_t)((uint16_t)l_1426 >> (uint16_t)l_1247) << (uint16_t)(l_1247 && l_1245)) < (l_1356 = (((int32_t)l_1356 - (int32_t)l_467.f0) <= (l_1426 >= ((int16_t)((l_32 >= 0x3195EC81755F61BFLL) != l_1465) >> (int16_t)l_471))))))))
    { 
        int32_t l_1520 = 0L;
        int32_t l_1525 = 0x531E9495L;
        union U2 l_1527 = {0x4973L};
        int32_t l_1528 = 0x1C706591L;
        l_467.f3 = ((uint16_t)((int64_t)((l_1520 ^ ((int16_t)(l_1426 & 0xF2E3L) >> (int16_t)1)) & (-1L)) - (int64_t)(l_474.f3 = (l_1356 = (l_1520 || ((l_1526 = ((l_467.f1 > __builtin_ctzll((l_1527.f3 = (l_1529 = (l_1520 != (l_1528 = func_90(func_61(func_65((l_1525 = ((uint64_t)(l_1520 != l_1520) % (uint64_t)l_474.f0))), l_1526, l_1527), l_1527.f1))))))) == 1UL)) && l_474.f0))))) >> (uint16_t)11);
        
                    }
    else
    { 
        int32_t l_1534 = 0x6168817EL;
        int32_t l_1540 = 0xD0A47D55L;
        l_1245 = (l_1526 = ((int16_t)(l_1356 = ((uint32_t)l_1534 + (uint32_t)(l_1535 && (((int16_t)0L << (int16_t)l_471) > ((int16_t)__builtin_parityl((l_1534 && (l_1540 = l_1356))) << (int16_t)12))))) << (int16_t)0));
    }
    return l_474.f1;
}




static int32_t  func_38(uint16_t  p_39, int16_t  p_40, uint16_t  p_41, int64_t  p_42)
{ 
    int64_t l_1045 = 0x08515296998647DELL;
    int32_t l_1065 = (-1L);
    int32_t l_1095 = 0L;
    uint64_t l_1096 = 0x80547E5001E7F570LL;
    union U2 l_1104 = {7UL};
    int8_t l_1131 = 0xA9L;
    union U0 l_1139 = {18446744073709551611UL};
    uint32_t l_1160 = 0x9D0B2300L;
    int32_t l_1183 = 0L;
    for (p_39 = 0; (p_39 >= 34); p_39 += 6)
    { 
        uint32_t l_1052 = 0xB1F2067FL;
        int32_t l_1053 = 0L;
        int32_t l_1056 = (-9L);
        uint32_t l_1080 = 1UL;
        int32_t l_1081 = 0x30082BDFL;
        union U2 l_1103 = {0x9C59L};
        int32_t l_1106 = 1L;
        uint64_t l_1114 = 1UL;
        l_1053 = ((((int16_t)((-(int16_t)func_75(p_40, l_1045, p_40, func_90((((int64_t)((int16_t)((uint16_t)l_1052 - (uint16_t)(p_42 >= (0x051C5279A3E465E7LL && __builtin_ctzll(l_1045)))) >> (int16_t)5) - (int64_t)(p_40 >= 0x2CA6F0DEB827C8EBLL)) || p_41), l_1045))) > p_40) + (int16_t)(-2L)) != 7UL) <= 1L);
        l_1065 = ((uint32_t)(__builtin_ia32_crc32qi((l_1056 = p_42), (l_1052 && 65535UL)) < __builtin_ctzl(l_1053)) - (uint32_t)(((uint16_t)((uint16_t)((int16_t)(((uint16_t)(p_42 ^ 4294967295UL) << (uint16_t)9) < ((l_1053 & p_42) & l_1045)) + (int16_t)p_41) / (uint16_t)l_1045) << (uint16_t)9) ^ p_41));
        if (((3L < (l_1053 = 0xD3521788L)) < ((l_1081 = ((__builtin_ffsll((0x00C8L >= l_1045)) && (((uint64_t)((int64_t)p_41 - (int64_t)((int64_t)((uint64_t)((uint64_t)((int64_t)((int16_t)(l_1080 || (1UL || 1L)) >> (int16_t)l_1056) + (int64_t)l_1065) - (uint64_t)0x11349E2B0070D3A5LL) + (uint64_t)p_39) / (int64_t)0xF0C4F5B1FB2E5556LL)) + (uint64_t)l_1080) > p_42)) != (-6L))) ^ l_1045)))
        { 
            uint16_t l_1094 = 0x5022L;
            l_1096 = ((uint32_t)l_1045 - (uint32_t)(0xC51765A7L < func_57(((int64_t)(p_41 >= ((int16_t)((((uint16_t)l_1053 >> (uint16_t)((int16_t)(p_41 >= __builtin_ctzll((l_1095 = (p_39 && (((((((int16_t)((l_1065 = (l_1094 = l_1065)) >= __builtin_popcountll(p_42)) + (int16_t)l_1045) > 0L) && l_1094) < l_1080) | 0x518004B5L) && 0xD584F524L))))) / (int16_t)l_1045)) | l_1081) >= l_1045) % (int16_t)p_41)) / (int64_t)18446744073709551612UL), p_40, l_1080)));
            l_1065 = (l_1095 = 0x06C9A9F0L);
            l_1081 = 0x5BEB98E6L;
            if (l_1094)
                break;
        }
        else
        { 
            int64_t l_1102 = (-9L);
            int32_t l_1107 = 0x73D4B6C4L;
            int32_t l_1113 = 1L;
            int64_t l_1130 = (-1L);
            union U2 l_1140 = {0x82D5L};
            int32_t l_1155 = 1L;
            union U0 l_1161 = {0x9A6BDC499ACE2B41LL};
            if (((int16_t)(((l_1052 > p_40) ^ (((((int16_t)(func_61(func_65((+p_39)), l_1102, l_1103) && __builtin_clzl(l_1081)) / (int16_t)p_41) & l_1103.f0) | p_41) < l_1103.f1)) && p_39) << (int16_t)l_1102))
            { 
                union U0 l_1105 = {6UL};
                int32_t l_1112 = 9L;
                union U1 l_1115 = {0x1F0C889E610815A0LL};
                l_1103.f3 = (func_46(func_50(l_1104, l_1105, ((l_1106 > (func_57((l_1113 = (p_41 == ((l_1053 = (l_1107 = 65528UL)) || ((uint16_t)((uint16_t)(l_1112 = (l_1107 == 8UL)) / (uint16_t)l_1081) - (uint16_t)(((__builtin_ffsll(l_1105.f0) < 65527UL) != p_40) <= 0UL))))), p_39, p_41) || l_1114)) || l_1065), p_39), l_1115, l_1105.f0) != 0x6DA2L);
                
                            }
            else
            { 
                int8_t l_1125 = (-7L);
                int32_t l_1142 = (-7L);
                uint32_t l_1152 = 0xBC127260L;
                l_1107 = (((uint16_t)((uint32_t)(p_40 < l_1107) / (uint32_t)((int16_t)(-1L) % (int16_t)l_1056)) % (uint16_t)((~((int16_t)l_1125 << (int16_t)((uint16_t)((p_41 = (l_1081 = (((int32_t)(l_1113 = l_1106) + (int32_t)l_1096) | ((1L || l_1130) || p_42)))) || l_1131) >> (uint16_t)p_39))) ^ p_40)) != 0x4745260FL);
                if ((!p_42))
                { 
                    uint64_t l_1141 = 1UL;
                    int32_t l_1150 = 0L;
                    union U1 l_1151 = {0xDDB5F81D65A9AD75LL};
                    for (l_1081 = 0; (l_1081 < 12); ++l_1081)
                    { 
                        int32_t l_1148 = 0L;
                        uint32_t l_1149 = 0xEBDBB3DAL;
                        int32_t l_1153 = 0x454DB5F7L;
                        l_1113 = 0x79B8BD1BL;
                        l_1153 = (0L & func_46(func_55((l_1150 = (((uint16_t)((p_40 && ((uint16_t)((l_1141 = func_61(l_1139, p_39, l_1140)) != (l_1142 = 0x5D932030L)) + (uint16_t)(!((p_39 != ((int16_t)(((int32_t)l_1053 / (int32_t)0x9C62A623L) != l_1148) >> (int16_t)l_1149)) != 0x7AED4DB1020DFAB8LL)))) > (-1L)) >> (uint16_t)l_1103.f1) && p_39))), l_1151, l_1152));
                    }
                    l_1142 = (4294967287UL && (-7L));
                }
                else
                { 
                    int32_t l_1154 = 0L;
                    if (l_1154)
                        break;
                    l_1095 = (l_1103.f3 = (l_1104.f3 = l_1155));
                    
                                                        }
                if (l_1081)
                    continue;
            }
            l_1053 = ((l_1081 = (0x8F7B1BD7AF7CEF35LL | l_1081)) < (0x527BB633L || ((((int64_t)p_41 % (int64_t)p_41) && ((func_61(l_1139, (l_1160 = (-2L)), l_1103) == p_42) != 1UL)) && l_1106)));
            if (l_1104.f0)
                break;
            l_1053 = func_61(l_1161, p_39, l_1103);
        }
        l_1081 = l_1106;
    }
    l_1095 = (l_1104.f0 > func_57(l_1160, ((~((int16_t)(p_39 >= (l_1095 > (l_1065 = (1UL || (0x4D01FC0CL <= (p_39 != p_39)))))) << (int16_t)((int32_t)((uint16_t)(p_41 = ((int32_t)((((p_41 < l_1095) || 0x2FA4L) || 7L) <= p_42) + (int32_t)0xE58AE89EL)) << (uint16_t)0) + (int32_t)l_1139.f0))) | l_1096), p_40));
    l_1065 = (-1L);
    l_1183 = ((__builtin_ctzll(p_39) != 0x6C581255AA4B6861LL) & (l_1065 = ((((((int16_t)((l_1104.f3 = ((uint32_t)(((int32_t)((uint64_t)(18446744073709551613UL == l_1065) - (uint64_t)(((l_1095 = func_90(((int16_t)(p_39 | (p_41 = (p_41 <= l_1104.f0))) >> (int16_t)(0xF571BCCDL | 0x8DBBF7A6L)), l_1139.f0)) & 0xD95AL) == p_39)) / (int32_t)0x79E235E4L) || l_1131) + (uint32_t)p_39)) | p_39) + (int16_t)0x9A73L) ^ p_39) < p_39) && 8L) > l_1183)));
    
        return p_40;
}




static uint64_t  func_46(union U2  p_47, union U1  p_48, int32_t  p_49)
{ 
    p_49 = p_47.f0;
    return p_47.f1;
}




static union U2  func_50(union U2  p_51, union U0  p_52, uint32_t  p_53, uint32_t  p_54)
{ 
    uint32_t l_1016 = 1UL;
    int32_t l_1018 = 0xFD808C3DL;
    int32_t l_1034 = 0xA281CA08L;
    int32_t l_1035 = 0x8A3137A5L;
    union U2 l_1036 = {0x094FL};
    if (p_54)
    { 
        uint32_t l_1017 = 0x4643C8DEL;
        p_51.f3 = (p_53 < p_53);
        
                l_1017 = func_61(p_52, l_1016, func_55(p_51.f3));
    }
    else
    { 
        p_51.f3 = p_52.f0;
        
                if (p_52.f0)
            goto lbl_1019;
    }
    
    lbl_1019:
    l_1018 = p_51.f3;
    l_1035 = (((int32_t)((uint16_t)(l_1018 = l_1016) << (uint16_t)1) - (int32_t)((int32_t)(((uint16_t)l_1016 << (uint16_t)l_1016) > p_54) % (int32_t)p_51.f1)) & ((l_1034 = (((0x0A7EFBED0EC20C56LL != ((int16_t)(0UL <= ((uint64_t)18446744073709551614UL + (uint64_t)__builtin_clzl(((((int32_t)(l_1016 & l_1016) + (int32_t)p_54) && p_53) >= p_51.f3)))) - (int16_t)l_1016)) || p_51.f3) < 0xC89AB127L)) > 0xFB0F9A2FL));
    return l_1036;
    
    }




static union U2  func_55(uint32_t  p_56)
{ 
    int32_t l_964 = (-4L);
    int32_t l_977 = 8L;
    uint16_t l_987 = 0x0EBEL;
    int32_t l_1014 = 0x3CE74F90L;
    union U2 l_1015 = {0x38E1L};
    for (p_56 = 0; (p_56 >= 31); p_56 += 1)
    { 
        int16_t l_958 = 3L;
        int32_t l_959 = 7L;
        int32_t l_963 = 0x4DC3A428L;
        l_959 = l_958;
        l_959 = 1L;
        if (l_959)
        { 
            uint16_t l_962 = 0x0A21L;
            union U2 l_965 = {9UL};
            for (l_959 = 0; (l_959 <= (-25)); l_959--)
            { 
                l_964 = (l_963 = l_962);
                return l_965;
                
                            }
        }
        else
        { 
            uint16_t l_976 = 0x4027L;
            int32_t l_985 = 0xF09924CDL;
            int8_t l_986 = 1L;
            int32_t l_988 = 0x3A3F6216L;
            l_963 = ((p_56 <= 0xD96C658E8D2FD6A6LL) == (((int64_t)((int64_t)((uint16_t)((uint16_t)((uint16_t)l_976 >> (uint16_t)13) % (uint16_t)0x97F3L) % (uint16_t)l_964) - (int64_t)(l_977 = 0xCDAE4D4DD3B8CCC4LL)) / (int64_t)0xEE0B0749A53FDA43LL) != ((l_976 != p_56) | l_964)));
            l_988 = func_90((l_977 = 1UL), ((int16_t)p_56 - (int16_t)((int16_t)(l_964 = p_56) - (int16_t)(((uint16_t)(l_959 = (-(uint16_t)(1UL <= (0x09949C28L && (((l_963 >= p_56) < ((l_985 = p_56) | l_986)) || l_987))))) >> (uint16_t)p_56) & p_56))));
            l_985 = (l_988 = l_988);
            l_985 = (((int16_t)(p_56 || (l_988 = (p_56 >= p_56))) << (int16_t)3) || (((uint16_t)l_963 << (uint16_t)((int16_t)l_958 % (int16_t)(((int64_t)((((l_963 <= __builtin_clzll((l_959 = (l_977 = p_56)))) & (l_964 = p_56)) & p_56) ^ p_56) / (int64_t)p_56) & p_56))) <= 0xC265BD939F34D583LL));
        }
        l_977 = ((l_964 = (l_977 != ((int32_t)((int16_t)((uint64_t)(p_56 | (-(uint16_t)65535UL)) % (uint64_t)(((int16_t)(l_964 > __builtin_parity((l_958 ^ 0x7980L))) >> (int16_t)l_977) & ((uint64_t)(((int32_t)l_977 % (int32_t)p_56) < l_958) - (uint64_t)p_56))) << (int16_t)l_959) / (int32_t)l_977))) > 0UL);
    }
    l_964 = ((((uint32_t)((l_987 <= p_56) <= (l_977 = l_987)) - (uint32_t)((((uint16_t)65535UL << (uint16_t)8) >= 1L) && p_56)) < (func_75((__builtin_bswap64((l_964 & (l_1014 = 3UL))) & p_56), p_56, l_987, l_987) || l_1014)) || p_56);
    l_977 = l_964;
    return l_1015;
    
    }




static uint32_t  func_57(uint32_t  p_58, uint16_t  p_59, int32_t  p_60)
{ 
    uint32_t l_476 = 0xC32BC1D8L;
    int32_t l_486 = 0xD2B7C5AFL;
    union U0 l_528 = {0x69BEAC9F45F873B4LL};
    int32_t l_585 = 6L;
    uint64_t l_586 = 0xE4016742B50EC507LL;
    union U2 l_662 = {65535UL};
    int32_t l_664 = (-1L);
    int16_t l_680 = 0xFCBCL;
    union U2 l_697 = {4UL};
    int16_t l_843 = 0x975CL;
    uint32_t l_877 = 0x04991DA3L;
    uint16_t l_932 = 0xDA6BL;
    union U2 l_943 = {65534UL};
lbl_796:
    if ((l_476 & l_476))
    { 
        return p_60;
    }
    else
    { 
        int8_t l_479 = 0L;
        int32_t l_492 = 0xA40780A0L;
        int64_t l_509 = 0L;
        int8_t l_565 = 0x3CL;
        union U2 l_583 = {0x8DBBL};
        union U0 l_625 = {0x1D79FBAA5E398C09LL};
        int32_t l_646 = 0L;
        uint32_t l_679 = 0xF888785EL;
        if ((l_476 ^ (((int16_t)l_479 >> (int16_t)((uint16_t)65535UL << (uint16_t)((((uint16_t)p_58 >> (uint16_t)0) <= ((-9L) >= (l_492 = ((l_486 = l_479) > (0UL >= ((uint16_t)((int16_t)0xB837L << (int16_t)(-(uint64_t)(p_58 ^ l_479))) % (uint16_t)l_479)))))) > l_476))) <= p_58)))
        { 
            int32_t l_495 = 0x2CE61AF8L;
            int32_t l_498 = 0L;
            int32_t l_499 = 2L;
            union U2 l_552 = {0x1510L};
            int16_t l_624 = 0L;
            union U0 l_651 = {0xD34FE0ED6515E152LL};
            if (((uint16_t)(p_60 < ((p_59 && func_75(l_486, l_495, p_58, l_486)) || (l_499 = (((uint32_t)l_486 - (uint32_t)l_498) >= p_60)))) + (uint16_t)p_60))
            { 
                int32_t l_508 = 0x083A6AD0L;
                l_492 = (((uint16_t)(((int64_t)l_476 - (int64_t)((uint32_t)((int64_t)func_90((l_499 = p_60), (0UL || func_75(((0xD750BC533F8348D2LL && ((func_90(p_59, (__builtin_parity(l_486) || l_508)) | p_59) | 0xDAB3L)) < 4L), p_58, l_509, p_59))) - (int64_t)p_58) % (uint32_t)p_59)) && (-7L)) >> (uint16_t)l_486) && 0L);
                for (l_499 = (-7); (l_499 >= (-20)); l_499 -= 2)
                { 
                    for (p_60 = 8; (p_60 != (-26)); p_60--)
                    { 
                        uint64_t l_514 = 0UL;
                        l_514 = p_60;
                        if (p_58)
                            continue;
                    }
                    l_508 = ((uint16_t)((uint64_t)((l_479 == (((uint16_t)(!l_476) + (uint16_t)0x95E1L) > 0x765B9DE5L)) | p_60) % (uint64_t)l_508) << (uint16_t)((0x4E54BFEFL || ((7L != ((int32_t)2L % (int32_t)p_58)) & 0x7D1284796CDE82CDLL)) && l_499));
                }
            }
            else
            { 
                int8_t l_545 = 0x13L;
                uint64_t l_551 = 1UL;
                int32_t l_569 = 0xE91D5544L;
                uint64_t l_597 = 0xF101AF5122942BDELL;
                uint16_t l_599 = 0xBE4FL;
                if ((((uint16_t)((uint16_t)(func_61((l_528 = l_528), ((int32_t)((int16_t)((((int16_t)0x5B19L >> (int16_t)1) != ((uint64_t)((int64_t)((int16_t)((int64_t)(((int64_t)l_545 % (int64_t)p_58) & (__builtin_clz(((uint16_t)((int32_t)(-1L) % (int32_t)l_498) >> (uint16_t)p_59)) == (-(int16_t)l_495))) - (int64_t)l_551) >> (int16_t)p_59) % (int64_t)l_499) - (uint64_t)0L)) ^ l_476) >> (int16_t)7) - (int32_t)0x9A82928BL), l_552) || 0x42EDL) << (uint16_t)l_498) << (uint16_t)2) | p_59))
                { 
                    union U0 l_580 = {0x5D2DFEEF6DFB5A8BLL};
                    int64_t l_598 = 7L;
                    if (((uint64_t)((int16_t)p_58 % (int16_t)(l_499 = ((int16_t)(p_60 & ((l_492 = ((uint16_t)0UL << (uint16_t)l_498)) != ((((int16_t)(l_545 >= ((uint64_t)l_565 / (uint64_t)((!(((int64_t)(l_565 && (p_58 ^ (4294967295UL | p_59))) + (int64_t)0x3C94712262022A75LL) | 0L)) ^ l_545))) >> (int16_t)p_60) && 0x5074L) < p_60))) >> (int16_t)l_569))) - (uint64_t)l_552.f1))
                    { 
                        union U0 l_570 = {0x7C694546AA43C885LL};
                        int32_t l_571 = 0x7BF34A8EL;
                        l_571 = func_61(l_570, l_570.f0, l_552);
                        l_552.f3 = ((p_58 >= (((__builtin_clz((l_585 = (l_486 = (((uint64_t)(((!((int16_t)(+((uint64_t)func_61((l_528 = l_580), ((uint16_t)0xF320L >> (uint16_t)14), l_583) % (uint64_t)(l_570.f0 | p_60))) << (int16_t)(l_571 = ((((l_492 = (!(0x39F530DDL || l_571))) & l_486) && p_58) | 1L)))) | p_60) >= l_580.f0) - (uint64_t)l_569) < p_58)))) < 0x1A80L) || p_60) || l_580.f0)) || (-8L));
                        
                                                l_586 = p_60;
                    }
                    else
                    { 
                        l_598 = ((int64_t)(__builtin_ia32_crc32qi(l_551, (((p_58 > ((uint16_t)((uint16_t)(p_59 = ((l_479 ^ (((uint32_t)4294967290UL + (uint32_t)(p_58 < (l_580.f0 >= l_528.f0))) == p_58)) != (((uint64_t)((l_583.f3 = 0xA5EAL) > p_59) + (uint64_t)l_580.f0) != l_585))) / (uint16_t)p_58) >> (uint16_t)p_58)) && 0UL) && 0x1D8773489FC4E215LL)) && p_60) / (int64_t)l_597);
                        
                                            }
                }
                else
                { 
                    uint64_t l_604 = 0x10BF9DD21BD2DCFCLL;
                    int32_t l_611 = 0xA66F6F8BL;
                    int32_t l_623 = (-8L);
                    union U0 l_631 = {0xB924B90C254B5701LL};
                    union U2 l_637 = {0xEE65L};
                    if (p_60)
                    { 
                        return l_599;
                    }
                    else
                    { 
                        uint32_t l_603 = 18446744073709551615UL;
                        int8_t l_605 = 0x46L;
                        l_583.f3 = (l_583.f1 < (p_59 <= (0L >= (func_90(p_58, l_486) & ((-(int64_t)((func_90(((((l_604 = l_603) || func_75(l_605, (~(__builtin_ffsl(__builtin_parity(l_499)) != l_603)), l_605, l_603)) >= 0x9AC3L) || p_58), p_59) || 0xC11E12D3L) & p_59)) && p_59)))));
                        
                                            }
                    
                                        for (l_583.f0 = 0; (l_583.f0 > 33); ++l_583.f0)
                    { 
                        int8_t l_622 = 0x17L;
                        l_623 = ((uint32_t)(((l_611 = l_495) ^ l_569) != l_476) + (uint32_t)(l_552.f3 = ((uint16_t)p_58 / (uint16_t)((int64_t)p_58 * (int64_t)(l_551 <= __builtin_ctzll(((int64_t)__builtin_ctzll(((int64_t)(l_604 >= p_60) + (int64_t)((((uint16_t)func_75(p_60, l_622, l_545, p_58) % (uint16_t)l_552.f1) >= 1UL) > l_604))) - (int64_t)l_599)))))));
                        
                                                l_623 = (l_624 = __builtin_popcountl(p_60));
                    }
                    
                                        if (p_60)
                    { 
                        int32_t l_636 = 0x1427EEA4L;
                        l_492 = (l_569 = func_61(l_625, (((((int64_t)(~((int16_t)(((((__builtin_clzl((func_61(l_631, ((int16_t)p_58 << (int16_t)3), l_552) || 0UL)) & (18446744073709551609UL <= ((int16_t)p_60 << (int16_t)p_60))) <= 0xFE8DCF1EL) ^ p_58) || p_60) != l_604) >> (int16_t)2)) / (int64_t)8UL) == l_636) < l_631.f0) >= l_551), l_637));
                        l_552.f3 = (((int32_t)(__builtin_ffsll(l_625.f0) || l_479) % (int32_t)((uint16_t)65529UL % (uint16_t)p_60)) < (p_58 = ((((uint32_t)func_75(p_58, p_59, (l_585 = (l_636 >= (__builtin_parityll(((uint16_t)l_624 >> (uint16_t)p_59)) && 5L))), l_545) + (uint32_t)p_60) >= l_646) == p_60)));
                        
                                            }
                    else
                    { 
                        return p_60;
                    }
                    
                                    }
                for (l_624 = (-28); (l_624 == 6); l_624 += 6)
                { 
                    for (l_476 = 0; (l_476 > 5); l_476 += 1)
                    { 
                        int64_t l_663 = (-10L);
                        l_585 = (l_486 = p_60);
                        l_663 = func_61(l_651, (4294967295UL <= (0x7E968C33L < ((uint64_t)(((int16_t)l_545 / (int16_t)((uint16_t)(l_597 < ((uint32_t)(p_58 = p_58) + (uint32_t)p_60)) << (uint16_t)(l_585 = p_60))) < ((uint64_t)(p_59 <= 0xFC5AL) - (uint64_t)p_59)) / (uint64_t)(-1L)))), l_662);
                        l_664 = (l_664 | ((((l_663 > (l_662.f3 = (p_60 != l_663))) >= 0x892C08E5F2EC271DLL) && (l_569 = ((uint32_t)((uint64_t)((int16_t)(~(l_499 = 0x5A1103E7L)) << (int16_t)0) % (uint64_t)p_58) - (uint32_t)(!func_90(((int16_t)((uint64_t)(p_60 && __builtin_ctz(((int16_t)((l_646 = (l_597 ^ 0xE8C5AA48L)) <= p_60) >> (int16_t)1))) + (uint64_t)p_58) >> (int16_t)l_552.f0), l_586))))) >= 0L));
                        
                                                l_569 = p_60;
                    }
                    l_569 = p_58;
                }
                l_679 = l_625.f0;
            }
        }
        else
        { 
            uint32_t l_685 = 0x29325D82L;
            int32_t l_686 = 0x3CBB9D7CL;
            l_646 = ((-1L) & l_680);
            for (l_509 = 0; (l_509 < 17); l_509 += 1)
            { 
                l_646 = ((int16_t)p_58 - (int16_t)p_59);
                l_686 = l_685;
                l_646 = 1L;
            }
            l_486 = ((p_58 > 0x84EB88E5L) && 0x3C01L);
            l_492 = l_625.f0;
        }
        l_664 = ((uint16_t)p_59 >> (uint16_t)((l_646 = (((int16_t)l_680 / (int16_t)((uint16_t)(l_583.f3 = (l_585 = l_679)) - (uint16_t)((int16_t)func_61(l_528, p_58, l_662) + (int16_t)((int64_t)p_59 - (int64_t)(func_61(l_625, p_59, l_697) && 0UL))))) < p_60)) == 1L));
        
            }
    if (l_662.f0)
    { 
        int8_t l_710 = 0x7CL;
        int32_t l_715 = 0x22FF2320L;
        uint16_t l_741 = 65535UL;
        int8_t l_786 = (-1L);
        uint64_t l_819 = 18446744073709551611UL;
        int32_t l_828 = 0x96E671F9L;
        union U0 l_829 = {0x10406F6B2221CEB9LL};
        uint16_t l_897 = 65533UL;
        int32_t l_910 = 0x370B90A7L;
        int16_t l_921 = (-1L);
lbl_811:
        if ((((int16_t)(p_58 > (((uint16_t)(l_664 = ((uint32_t)__builtin_parityl(l_662.f1) + (uint32_t)((uint32_t)((int16_t)1L % (int16_t)l_710) - (uint32_t)((int64_t)((uint16_t)(l_715 = l_710) >> (uint16_t)3) % (int64_t)1L)))) >> (uint16_t)((int64_t)(((int32_t)l_710 / (int32_t)(((l_476 || (-1L)) | p_59) && l_710)) == p_58) - (int64_t)l_710)) < l_697.f0)) >> (int16_t)9) || l_710))
        { 
            uint32_t l_725 = 4294967288UL;
            int32_t l_728 = 0x0B3B8743L;
            union U2 l_729 = {0UL};
            if (func_75(p_58, l_680, p_60, l_585))
            { 
                int16_t l_724 = 0x397FL;
                int32_t l_730 = 0x6DFD065AL;
                l_715 = l_680;
                l_730 = (((uint32_t)(p_60 > ((uint64_t)p_59 % (uint64_t)(l_724 = l_710))) - (uint32_t)(l_725 && func_61(func_65(p_60), (l_728 = (0xFB4BL == (((uint16_t)p_59 << (uint16_t)p_59) & 1UL))), l_729))) != l_725);
            }
            else
            { 
                uint32_t l_746 = 0xA5704FA6L;
                int32_t l_747 = (-9L);
                l_747 = ((((((int16_t)p_58 + (int16_t)((l_725 != (0xEC6EC00230EF702FLL && (p_58 == (l_729.f3 = (((int16_t)(l_715 = l_662.f0) << (int16_t)(l_710 | ((uint16_t)((int32_t)((uint32_t)func_90((func_75(l_741, ((int32_t)l_476 + (int32_t)((((int64_t)l_729.f0 + (int64_t)p_60) != l_746) < 0x391F1AF9L)), p_58, l_746) > 0UL), p_60) - (uint32_t)l_710) - (int32_t)p_58) >> (uint16_t)15))) && p_58))))) & l_741)) <= 1L) < p_58) ^ l_680) < p_58);
            }
            if (l_486)
                goto lbl_811;
            if (((__builtin_popcount(l_725) | (l_486 = (((uint64_t)(l_741 ^ ((-(int32_t)((l_741 < 0L) < (((l_729.f3 = (l_729.f0 <= (p_58 = 4UL))) && (l_697.f3 = p_60)) == p_59))) & 65527UL)) / (uint64_t)0xE3F5EADF96A17B42LL) | p_59))) && l_715))
            { 
                return l_725;
            }
            else
            { 
                int32_t l_762 = 0x9D237AB5L;
                l_662.f3 = (-2L);
                
                                for (l_697.f2 = 0; (l_697.f2 < (-27)); l_697.f2 -= 6)
                { 
                    uint16_t l_755 = 0x90A2L;
                    int32_t l_756 = 1L;
                    uint32_t l_765 = 4294967289UL;
                    l_756 = (4294967289UL >= ((((int16_t)l_755 / (int16_t)p_59) == l_729.f1) == p_58));
                    l_715 = (0x6501A42EL >= ((p_58 & ((~((int64_t)l_710 / (int64_t)((uint32_t)(l_728 = (((l_585 = l_756) || (l_762 = l_755)) || (l_762 && ((int64_t)l_765 + (int64_t)(((int16_t)(l_729.f3 = (4294967295UL > l_486)) << (int16_t)p_58) < p_60))))) % (uint32_t)l_715))) && 0xAF9B55FB412FFA43LL)) != 0x1216119AL));
                    if (p_59)
                        break;
                }
                
                            }
            
                                                return p_60;
        }
        else
        { 
            int8_t l_768 = 0xA9L;
            int32_t l_772 = 1L;
            uint32_t l_779 = 0xD4B132E9L;
            l_664 = p_60;
            if (((-1L) >= l_768))
            { 
lbl_788:
                l_715 = (__builtin_popcount(p_60) || (((int16_t)0xA577L << (int16_t)13) ^ 4294967293UL));
            }
            else
            { 
                uint32_t l_776 = 1UL;
                int32_t l_798 = (-1L);
                uint32_t l_810 = 0UL;
                if (l_768)
                { 
                    int16_t l_787 = 0x7819L;
                    l_772 = (~(0xD74DEBC5DFC9776FLL && 0x27F0345F46B5106ALL));
                    l_486 = (((+(p_58 <= (((p_58 != func_90(l_776, ((int16_t)l_779 << (int16_t)((uint16_t)p_58 >> (uint16_t)1)))) | ((uint16_t)(l_776 | ((int16_t)func_90(l_786, (l_787 = (p_59 = l_768))) << (int16_t)10)) >> (uint16_t)9)) <= 0x9CFCE40A3AB3B1ABLL))) < (-10L)) || l_768);
                    if (l_476)
                        goto lbl_788;
                }
                else
                { 
                    int16_t l_795 = 0x0301L;
                    int32_t l_805 = 0x47020AB7L;
                    l_697.f3 = ((((uint64_t)((uint16_t)(((uint16_t)(p_59 = l_795) / (uint16_t)((l_486 = (__builtin_clzll(l_776) | l_795)) | ((p_60 | p_58) ^ ((l_768 < (__builtin_bswap32(p_58) || l_476)) & p_58)))) > l_776) << (uint16_t)9) + (uint64_t)0x4AFBDAF206258566LL) == l_710) & l_715);
                    
                                        if (l_486)
                        goto lbl_796;
                    l_805 = ((l_798 = (-(int32_t)0x7B25B388L)) || func_75(l_779, p_60, ((uint32_t)(((uint64_t)((__builtin_clzl(l_786) && (l_772 = ((l_715 = ((~0xBF7AA0F4L) >= (((l_697.f3 != (-(uint16_t)(l_798 = p_58))) == l_768) && l_779))) != p_60))) < l_776) / (uint64_t)l_795) != l_697.f3) - (uint32_t)p_60), p_58));
                }
                if (l_662.f1)
                    goto lbl_818;
                l_697.f3 = (((((uint16_t)(__builtin_parityll(l_662.f0) <= p_60) >> (uint16_t)(l_697.f1 <= (((int16_t)1L << (int16_t)13) < (l_486 = func_90(p_60, ((l_798 = l_810) != (0UL | l_768))))))) <= p_58) == 0xFF2784C7F4CB1F95LL) >= 9L);
                
                            }
        }
        l_486 = (p_58 > p_58);
        if ((p_60 > p_58))
        { 
lbl_818:
            for (l_697.f2 = 24; (l_697.f2 >= (-2)); l_697.f2 -= 1)
            { 
                uint16_t l_816 = 0xDC1BL;
                int32_t l_817 = 0xEF93D842L;
                l_817 = ((uint16_t)l_816 + (uint16_t)p_59);
                if (p_59)
                    continue;
            }
            
                        return l_819;
        }
        else
        { 
            int8_t l_827 = 8L;
            union U0 l_830 = {0x15A57A006A811123LL};
            union U2 l_831 = {1UL};
            uint16_t l_857 = 0UL;
            int32_t l_898 = 1L;
            for (l_715 = 15; (l_715 <= (-23)); l_715 -= 2)
            { 
                int32_t l_826 = 7L;
                l_828 = ((((((uint16_t)(__builtin_clzl((((0x43F2L | 0x417EL) > (((int16_t)(p_60 && __builtin_ffs(__builtin_ctzl(l_826))) + (int16_t)((l_819 > l_697.f1) || 0xF2282522365A37D1LL)) | l_827)) && l_819)) && p_59) >> (uint16_t)13) >= l_710) && p_60) || 0x7EA3L) || l_697.f1);
                if (p_60)
                    continue;
                if (p_58)
                    continue;
                if (p_58)
                    break;
            }
            if (((p_59 || func_61((l_830 = l_829), l_786, l_831)) >= (!((-2L) ^ ((int64_t)(((int16_t)0x00E8L >> (int16_t)(((int16_t)((int16_t)(l_715 = ((l_662.f3 = ((int64_t)l_829.f0 / (int64_t)l_710)) > l_843)) << (int16_t)p_58) / (int16_t)l_831.f1) <= p_59)) < 0L) / (int64_t)p_58)))))
            { 
                int32_t l_844 = 0xA56B4F1AL;
                l_844 = 0L;
            }
            else
            { 
                int32_t l_849 = 3L;
                if (func_90(p_58, p_60))
                { 
                    return l_662.f3;
                }
                else
                { 
                    int64_t l_852 = 0x5E5AEF4B8CDE01BBLL;
                    int32_t l_856 = 1L;
                    for (l_662.f1 = 0; (l_662.f1 > 54); ++l_662.f1)
                    { 
                        l_856 = ((int16_t)(__builtin_popcountll(l_849) && ((l_680 || ((int64_t)(-3L) / (int64_t)l_852)) && (0xEA0DL | (((uint32_t)(~0xF3747FB9L) + (uint32_t)__builtin_popcount(l_852)) < p_59)))) % (int16_t)p_58);
                        l_831.f3 = (9L == p_58);
                        
                                                if (l_827)
                            goto lbl_858;
                    }
                    
                                        l_697.f3 = l_849;
                    
                    lbl_858:
                    l_856 = __builtin_bswap32((p_58 = (p_58 >= __builtin_clzll((p_60 & l_857)))));
                    l_856 = 4L;
                }
                
                                for (l_697.f1 = 0; (l_697.f1 == 37); l_697.f1 += 1)
                { 
                    int32_t l_876 = 0xBF2A0DDCL;
                    l_831.f3 = 0x09A65DB6L;
                    
                                        l_876 = (func_90(((((-(uint64_t)(l_715 = 0UL)) | (((l_697.f0 ^ (((int64_t)((uint16_t)0x2B41L >> (uint16_t)l_849) + (int64_t)(-6L)) != (((int16_t)(l_849 | func_90(((uint16_t)(((int64_t)((l_831.f3 = 0UL) || (((uint16_t)((uint16_t)l_876 + (uint16_t)l_877) / (uint16_t)65531UL) | p_60)) % (int64_t)0x531716E1BB9C1F8CLL) || l_662.f1) << (uint16_t)7), l_830.f0)) % (int16_t)1UL) ^ p_60))) > 0x6858FE8CL) < l_680)) <= 0xDE67FF81L) > 0L), l_827) < p_59);
                    l_715 = ((uint64_t)(((l_710 || p_60) || (l_828 = (((p_59 >= (((int32_t)p_58 + (int32_t)p_59) || (!((0x553AB6E4L == (((l_715 == 0x95A4L) >= ((int32_t)(((-(uint32_t)((((int16_t)((l_876 = l_876) < p_58) >> (int16_t)p_59) | p_60) || p_60)) < p_59) > 65535UL) % (int32_t)l_849)) > p_58)) | p_60)))) >= p_59) >= l_830.f0))) == 1UL) + (uint64_t)p_58);
                }
                
                                l_697.f3 = __builtin_popcountl((((int16_t)(+__builtin_bswap32(l_857)) - (int16_t)(((uint16_t)((l_831.f3 = ((l_829.f0 <= ((l_710 == 18446744073709551615UL) == (l_664 = 1L))) || 0x9680F34EL)) != p_58) << (uint16_t)13) <= (l_898 = ((uint16_t)(65535UL > 9L) >> (uint16_t)l_897)))) != l_877));
                
                                                l_828 = l_831.f1;
            }
            
                        l_898 = p_60;
        }
        
                for (l_697.f2 = 13; (l_697.f2 < 6); l_697.f2 -= 1)
        { 
            int64_t l_903 = 0x5CCEF8C552CA8887LL;
            union U2 l_913 = {0x0DA1L};
            uint32_t l_922 = 0xCE1A791FL;
            l_715 = ((uint64_t)__builtin_parityl(l_903) + (uint64_t)(l_903 <= ((int64_t)(0x7A57D833FA4A4AD3LL > (((((int32_t)1L - (int32_t)(p_58 > l_897)) == (-6L)) != ((((uint64_t)((p_60 == l_897) >= p_59) - (uint64_t)l_828) != (-1L)) | l_910)) & 0x7DD1D7EDL)) % (int64_t)l_819)));
            l_585 = p_59;
            for (l_662.f2 = 0; (l_662.f2 != (-5)); l_662.f2 -= 1)
            { 
                int32_t l_925 = 0x7EA81E90L;
                if (p_58)
                    break;
                l_913.f3 = func_61(l_528, p_60, l_913);
                
                                for (l_741 = (-9); (l_741 > 9); l_741 += 2)
                { 
                    int32_t l_916 = (-7L);
                    l_916 = (l_828 = p_60);
                    l_715 = ((uint32_t)(p_59 > 1L) / (uint32_t)__builtin_parityl(((uint16_t)l_921 << (uint16_t)((l_828 = l_903) != (((l_922 > ((int16_t)l_925 - (int16_t)((int16_t)l_925 >> (int16_t)(((uint64_t)(l_486 = p_58) + (uint64_t)l_916) != 1L)))) >= p_59) != l_910)))));
                }
                for (l_925 = 0; (l_925 >= (-30)); l_925 -= 1)
                { 
                    l_715 = 1L;
                    return l_932;
                }
            }
            
                    }
        
            }
    else
    { 
        uint32_t l_939 = 18446744073709551606UL;
        int32_t l_955 = 0L;
        l_585 = (((int16_t)(((uint32_t)0xEFC22C6CL + (uint32_t)__builtin_clzll(p_60)) == (-1L)) << (int16_t)8) ^ p_59);
lbl_940:
        for (l_662.f2 = 0; (l_662.f2 > (-4)); l_662.f2 -= 1)
        { 
            if (p_59)
                break;
            if (l_697.f0)
                goto lbl_940;
            l_939 = (l_697.f3 = 0xA22D209FL);
            
                    }
        
                for (l_585 = 29; (l_585 == 14); l_585--)
        { 
            uint32_t l_944 = 0x46317373L;
            l_944 = func_61(l_528, p_59, l_943);
            if (l_586)
                goto lbl_796;
        }
        l_955 = (l_662.f1 >= ((uint32_t)(((((int16_t)((((uint16_t)(p_58 > (l_939 < (l_877 >= p_60))) % (uint16_t)((l_939 > l_939) | (9L != (1L > l_939)))) < 0x75FDL) <= 0xCCEA7E4EL) << (int16_t)l_939) != l_939) == 4294967294UL) <= 0xBFD5FA9FA14F0D45LL) - (uint32_t)0xFF0853A9L));
    }
    
        return l_486;
}




static uint64_t  func_61(union U0  p_62, int64_t  p_63, union U2  p_64)
{ 
    int16_t l_470 = 1L;
    l_470 = ((int64_t)p_62.f0 - (int64_t)p_62.f0);
    p_64.f3 = __builtin_bswap32(p_63);
    
        return l_470;
}




static union U0  func_65(int32_t  p_66)
{ 
    uint32_t l_67 = 8UL;
    int32_t l_68 = 0L;
    int32_t l_82 = 0xC1DEA90CL;
    int32_t l_83 = (-8L);
    int32_t l_84 = 0L;
    int32_t l_85 = (-5L);
    int32_t l_100 = 1L;
    int32_t l_101 = 0L;
    int32_t l_102 = 0x5EA98998L;
    int32_t l_103 = 0x0EB8FC40L;
    int32_t l_464 = 1L;
    union U0 l_465 = {0UL};
    l_68 = (l_67 = 0x12BAD479L);
    l_464 = (((int32_t)((int16_t)((int16_t)(l_68 = p_66) >> (int16_t)__builtin_bswap32((func_75(((uint32_t)(((l_85 = (l_84 = ((l_82 = l_67) | (l_83 = l_67)))) | ((uint64_t)((int64_t)(l_67 >= func_90((l_103 = (((l_102 = (l_101 = ((int16_t)l_67 >> (int16_t)(((l_100 = (((uint16_t)(~l_67) << (uint16_t)p_66) & ((int32_t)p_66 - (int32_t)1UL))) > 0L) || p_66)))) || p_66) & 0x90EB5CFE74D024BFLL)), p_66)) - (int64_t)l_67) % (uint64_t)l_67)) <= l_67) - (uint32_t)0xBC794F0EL), l_67, l_67, p_66) && (-1L)))) >> (int16_t)10) + (int32_t)(-1L)) != (-1L));
    return l_465;
    
    }




static uint32_t  func_75(uint64_t  p_76, int8_t  p_77, int64_t  p_78, uint32_t  p_79)
{ 
    int16_t l_463 = 0x421EL;
    if (l_463)
    { 
        return l_463;
    }
    else
    { 
        return l_463;
    }
}




static int64_t  func_90(uint32_t  p_91, uint16_t  p_92)
{ 
    int16_t l_107 = 0L;
    int32_t l_110 = 0xB930EEAEL;
    int32_t l_111 = 2L;
    int32_t l_126 = (-1L);
    int32_t l_168 = (-6L);
    int16_t l_232 = 9L;
    uint32_t l_242 = 1UL;
    int64_t l_292 = 0x1A7D0201380ACB09LL;
    int32_t l_293 = 0L;
    uint16_t l_406 = 1UL;
    uint16_t l_408 = 0x7544L;
    for (p_92 = 0; (p_92 != 59); ++p_92)
    { 
        int64_t l_106 = 0L;
        l_106 = p_92;
    }
    l_111 = (l_107 ^ ((__builtin_parity((l_110 = (__builtin_ffsll(l_107) <= (((p_91 ^ l_107) == (4294967295UL && (((int16_t)__builtin_ctzl(l_107) << (int16_t)(l_107 < l_107)) || 0x89503A5AL))) < 0xE9C127C8L)))) >= (-8L)) && 0xA12348280EFF2B3ALL));
    if (((int16_t)((int16_t)((uint32_t)p_91 - (uint32_t)(((uint16_t)((l_107 & l_110) <= l_111) << (uint16_t)((1L >= (((uint16_t)0x213AL % (uint16_t)((l_126 = (((int32_t)(p_92 < ((l_111 < ((int16_t)l_110 << (int16_t)7)) > 65535UL)) / (int32_t)l_111) == l_110)) ^ p_92)) ^ 0UL)) & p_91)) & p_91)) << (int16_t)13) << (int16_t)l_110))
    { 
        return l_110;
    }
    else
    { 
        uint32_t l_130 = 0x5982ED82L;
        int32_t l_141 = 1L;
        int32_t l_144 = 0x24B17E4CL;
        int32_t l_381 = 4L;
        int32_t l_385 = 0x489F6C08L;
        int16_t l_404 = 5L;
        for (l_110 = 0; (l_110 <= (-12)); l_110 -= 3)
        { 
            uint64_t l_129 = 18446744073709551610UL;
            l_126 = l_129;
            return l_130;
        }
        if (((int64_t)(((int32_t)p_91 / (int32_t)4294967295UL) || 0x9027EA7EL) - (int64_t)(l_111 = p_92)))
        { 
            int32_t l_137 = 4L;
            int16_t l_140 = (-3L);
            uint32_t l_158 = 1UL;
            int32_t l_193 = 0xBE6C43ABL;
            l_141 = (p_92 == ((int64_t)(0x1122A84738BD3C80LL > ((l_137 = p_91) ^ ((int32_t)(p_92 == __builtin_ia32_crc32qi((l_140 = p_92), l_130)) % (int32_t)0x3BDBB176L))) + (int64_t)(1UL ^ p_91)));
lbl_298:
            for (l_141 = 0; (l_141 != (-3)); l_141--)
            { 
                int32_t l_147 = 0x4F588417L;
                int32_t l_163 = 0xA8E11CF2L;
                l_144 = ((l_137 = p_91) ^ p_92);
                l_163 = ((((((uint16_t)l_147 >> (uint16_t)(p_92 = (l_144 && ((int16_t)(l_144 = (((int16_t)((((__builtin_ctzl(p_92) > (((int16_t)((uint16_t)l_111 << (uint16_t)2) >> (int16_t)l_158) == ((int64_t)(8UL != 0xC35BL) - (int64_t)((int16_t)(((l_130 || l_107) ^ p_91) <= p_91) + (int16_t)65529UL)))) != l_144) >= p_91) | p_91) >> (int16_t)p_91) && 0xCBA7L)) / (int16_t)65534UL)))) > 0xFE2AL) && p_91) || l_110) & l_147);
                l_168 = ((4UL != 65534UL) != ((int16_t)((0xCC8CL && ((l_163 = (p_92 & ((uint16_t)l_107 >> (uint16_t)(l_144 = 0xF58BL)))) < (65535UL >= p_92))) | l_147) / (int16_t)l_126));
                if (((uint64_t)((int32_t)((p_91 <= p_92) || (((uint64_t)(((p_91 == ((((__builtin_ffs(l_163) <= 0x46D4L) | ((uint16_t)p_91 << (uint16_t)__builtin_ctz(l_141))) || l_107) ^ l_163)) & l_144) & p_91) - (uint64_t)(-4L)) == p_92)) % (int32_t)0x2FE3867AL) - (uint64_t)1UL))
                { 
                    int16_t l_181 = 6L;
                    l_181 = ((uint32_t)(((uint32_t)l_126 / (uint32_t)p_91) <= p_91) / (uint32_t)p_92);
                    return l_110;
                }
                else
                { 
                    int16_t l_182 = (-1L);
                    l_144 = l_182;
                }
            }
            l_168 = ((int16_t)(l_141 <= (((uint32_t)(((l_193 = ((int32_t)0xFA3D1AADL % (int32_t)((uint16_t)(p_92 = ((int64_t)((l_137 = (((p_92 >= (l_144 = l_141)) <= p_91) < l_107)) > ((l_130 && l_158) ^ (l_126 || p_91))) / (int64_t)p_92)) << (uint16_t)1))) && l_137) > 4294967295UL) + (uint32_t)l_130) || p_92)) - (int16_t)l_141);
            for (l_158 = (-28); (l_158 != 9); l_158 += 1)
            { 
                uint32_t l_196 = 4294967287UL;
                uint32_t l_197 = 4UL;
                int32_t l_207 = 0xD3D6DC24L;
                int32_t l_209 = 0xD2019615L;
                int8_t l_253 = 0xC4L;
                int64_t l_259 = 1L;
                l_126 = 0x9D96BD77L;
                if ((((__builtin_popcountl(p_91) | (p_91 & 1L)) > (l_111 = (p_92 == l_111))) | l_196))
                { 
                    int16_t l_206 = 0x57B6L;
                    uint32_t l_208 = 4294967292UL;
                    int32_t l_214 = 0xBA958F48L;
                    int32_t l_215 = 4L;
                    int32_t l_229 = 0xD8845D90L;
                    uint32_t l_252 = 18446744073709551612UL;
                    if ((((l_197 < (l_215 = (((p_91 | ((uint32_t)p_92 + (uint32_t)((!(p_91 || (p_91 != ((!((uint16_t)((l_209 = (((int16_t)(l_207 = l_206) << (int16_t)7) != l_208)) >= ((int64_t)(((l_214 = (((((int32_t)0x56C434C7L % (int32_t)p_91) && p_92) > p_91) <= 65526UL)) | p_92) != p_92) - (int64_t)p_91)) >> (uint16_t)l_208)) != l_206)))) >= l_130))) == p_91) ^ 0xAE19F66018A576EDLL))) || l_206) >= 0xD4B22FE7L))
                    { 
                        uint16_t l_228 = 65531UL;
                        int32_t l_251 = 0x01FBCBA7L;
                        l_144 = (((uint64_t)(l_215 <= l_168) / (uint64_t)((uint16_t)((__builtin_ctzl(l_196) && l_168) ^ (l_229 = ((((uint16_t)((uint32_t)(((int32_t)(l_141 = ((((l_214 = 0L) && l_126) > p_92) && ((int16_t)0x7B45L >> (int16_t)l_196))) + (int32_t)l_193) > 0xFDD9L) + (uint32_t)l_196) << (uint16_t)l_228) <= l_197) != l_197))) % (uint16_t)p_91)) != l_107);
                        l_252 = (((int32_t)(l_251 = (l_232 && (((uint64_t)((uint16_t)((uint64_t)(l_130 < ((+((int64_t)((p_91 <= l_242) == ((uint32_t)l_208 + (uint32_t)p_92)) - (int64_t)((int32_t)(0x206EL != ((int64_t)l_196 - (int64_t)((int16_t)((l_215 == p_92) && l_196) << (int16_t)l_193))) + (int32_t)p_92))) || (-1L))) % (uint64_t)8UL) - (uint16_t)4UL) / (uint64_t)l_206) <= (-4L)))) / (int32_t)l_141) | 0xCB92L);
                        if (l_251)
                            break;
                    }
                    else
                    { 
                        int8_t l_258 = (-1L);
                        int32_t l_272 = 0x0F0B5294L;
                        l_259 = (l_252 & (((65526UL && __builtin_parityll(l_253)) != (((-1L) != 0x2E103523L) < ((int64_t)((int16_t)((l_193 = __builtin_ffsll(l_258)) >= (l_258 && 0xA398CD5CL)) + (int16_t)p_92) - (int64_t)p_92))) || 1L));
                        l_214 = ((uint16_t)(((__builtin_clzl(p_91) == ((uint16_t)l_140 << (uint16_t)1)) ^ l_197) || (l_126 = ((uint16_t)l_196 - (uint16_t)((uint16_t)0x2597L >> (uint16_t)p_92)))) << (uint16_t)p_91);
                        l_215 = (((uint16_t)((int32_t)(l_272 = 0x0A9E4985L) + (int32_t)(l_258 <= ((uint16_t)l_259 / (uint16_t)l_130))) + (uint16_t)l_258) > (0x5AAA9526B4DC75B2LL >= l_214));
                    }
                    for (l_252 = 29; (l_252 == 54); ++l_252)
                    { 
                        l_141 = (p_91 && (p_91 & p_91));
                        l_137 = ((l_214 = l_209) > (p_91 || l_168));
                    }
                    if ((0x149EF3D3L && l_215))
                    { 
                        uint64_t l_290 = 0xB2FC028ED0E52767LL;
                        l_292 = ((l_137 ^ (((int32_t)((((!((uint32_t)(~((-(uint32_t)(((uint32_t)(l_137 >= ((p_91 <= (1UL ^ ((uint64_t)((uint64_t)l_290 / (uint64_t)0x7D22268EDA36ACC4LL) % (uint64_t)(p_92 || (!(l_229 = 0x3E444B370CEAD331LL)))))) > p_91)) - (uint32_t)p_92) | p_91)) == (-6L))) + (uint32_t)1UL)) < l_215) != 65527UL) >= l_214) % (int32_t)l_259) < p_92)) ^ 1UL);
                    }
                    else
                    { 
                        l_168 = (l_253 & p_92);
                        l_137 = 0L;
                    }
                    l_215 = ((p_91 || l_293) || (p_91 >= ((uint32_t)l_253 % (uint32_t)((uint16_t)((-1L) != (18446744073709551615UL <= l_158)) << (uint16_t)2))));
                }
                else
                { 
                    int16_t l_299 = 0x6A25L;
                    int32_t l_312 = 0xBD520F13L;
                    if (l_196)
                        goto lbl_298;
                    if (__builtin_clzll(l_259))
                    { 
                        int64_t l_300 = 0x1EE1E09E583A3E19LL;
                        l_300 = l_299;
                        l_141 = ((int16_t)p_91 - (int16_t)((uint64_t)(((((uint16_t)p_92 << (uint16_t)((((p_92 > (0xA4289DD2A3B7E974LL > (~0x2DDDL))) != (((int64_t)p_92 % (int64_t)(p_91 || (__builtin_popcountll(p_91) == 1UL))) || l_107)) ^ l_253) == l_193)) || p_92) < 0xADEA91A94851BE00LL) < 0L) + (uint64_t)0x3CDD7204A06CDDE3LL));
                        if (p_91)
                            continue;
                        l_110 = ((int16_t)(l_126 = (l_312 = p_92)) << (int16_t)((int64_t)l_197 + (int64_t)p_91));
                    }
                    else
                    { 
                        int32_t l_319 = 0x3E07EB25L;
                        uint64_t l_333 = 0x5546EA2C2CABF743LL;
                        l_110 = (l_140 & (l_319 = (+((p_92 = 0xF3A6L) ^ ((-(int32_t)l_242) != __builtin_ffs(((((uint16_t)p_91 >> (uint16_t)p_91) <= (l_140 ^ l_319)) < (0xE5AEL != (!p_91)))))))));
                        if (l_299)
                            break;
                        if (p_92)
                            break;
                        l_312 = (+(l_333 = (!((+(l_110 = l_209)) >= ((int64_t)(l_207 = (((uint16_t)(l_130 || l_319) >> (uint16_t)13) < (((uint16_t)(l_312 && l_319) >> (uint16_t)5) != ((int16_t)p_92 >> (int16_t)(+l_319))))) - (int64_t)(l_158 == p_92))))));
                    }
                    if (p_91)
                        continue;
                }
                for (l_253 = 0; (l_253 <= (-24)); l_253 -= 9)
                { 
                    int8_t l_347 = 0x76L;
                    for (l_292 = 19; (l_292 < 8); l_292--)
                    { 
                        uint16_t l_348 = 0x6686L;
                        int64_t l_349 = 0xA34BB5C3AA3BE4C5LL;
                        int32_t l_350 = 0x2F56F0C8L;
                        l_347 = ((uint64_t)p_92 % (uint64_t)(~((int16_t)p_91 - (int16_t)(((+p_92) < l_130) & ((int64_t)l_137 / (int64_t)(-(uint32_t)p_92))))));
                        l_348 = p_91;
                        l_207 = (-3L);
                        l_350 = (l_141 = l_349);
                    }
                    l_141 = p_91;
                }
            }
        }
        else
        { 
            uint64_t l_353 = 0UL;
            int32_t l_356 = 0L;
            if ((l_356 = (l_126 = (((uint32_t)(p_92 <= p_92) - (uint32_t)((4UL && (l_353 = p_91)) > ((((int64_t)l_356 + (int64_t)((l_144 = p_92) <= 0L)) != p_91) >= ((int64_t)((int64_t)l_141 - (int64_t)l_356) / (int64_t)p_91)))) < p_91))))
            { 
                int32_t l_374 = 0L;
                int32_t l_377 = 0xAB4E013FL;
                for (l_141 = (-5); (l_141 >= (-4)); l_141 += 1)
                { 
                    l_144 = p_92;
                    l_356 = p_91;
                    if (p_91)
                        break;
                }
                for (l_292 = 0; (l_292 >= 5); ++l_292)
                { 
                    for (l_356 = 0; (l_356 < 3); ++l_356)
                    { 
                        if (l_356)
                            break;
                    }
                    l_356 = p_92;
                    l_141 = p_91;
                }
                for (l_110 = 0; (l_110 != 12); l_110 += 6)
                { 
                    int8_t l_382 = 6L;
                    for (l_356 = 29; (l_356 >= 16); l_356 -= 1)
                    { 
                        return p_91;
                    }
                    l_356 = ((int64_t)(!(l_374 = 4294967290UL)) / (int64_t)((int16_t)(l_377 && ((+__builtin_bswap32(((((p_92 > (((int32_t)((l_381 | (l_382 & __builtin_clz(((int32_t)l_381 - (int32_t)((p_91 < l_144) && 0x83931C9CF4CB1A89LL))))) != 0xF1DE01071D2B124CLL) + (int32_t)1UL) ^ 1L)) & l_382) > 4L) != p_91))) <= l_377)) / (int16_t)p_92));
                }
            }
            else
            { 
                int8_t l_386 = 0xA4L;
                int32_t l_387 = 0x07B6ACC9L;
                if (l_356)
                { 
                    l_381 = l_385;
                    l_387 = l_386;
                }
                else
                { 
                    uint32_t l_405 = 0x20E3F7F6L;
                    int32_t l_428 = 0xA024A148L;
                    if (((((int64_t)0x2F90A0EE0BA4EC74LL / (int64_t)((((uint16_t)((l_406 = ((int16_t)((uint64_t)(p_91 && __builtin_clzll(p_92)) + (uint64_t)(((p_92 & (p_92 < (p_92 > (((uint16_t)p_92 << (uint16_t)((uint16_t)((uint16_t)p_91 % (uint16_t)3L) >> (uint16_t)l_404)) > l_405)))) > 4UL) && p_91)) << (int16_t)1)) > 9L) << (uint16_t)p_92) >= 1L) && l_381)) | 18446744073709551615UL) != 0UL))
                    { 
                        int64_t l_407 = 0xAE0362B40B8C9EB1LL;
                        int32_t l_411 = 0x3515B0F2L;
                        l_407 = p_92;
                        l_408 = p_92;
                        l_387 = (l_292 < ((int16_t)((__builtin_parityl(p_92) <= (p_92 >= ((p_91 >= l_386) <= (l_411 = 1L)))) >= (p_91 < (((int32_t)(l_356 && l_385) % (int32_t)l_386) <= 0xC7FEL))) << (int16_t)9));
                        l_141 = (p_91 || (((uint32_t)0x2E34CCA1L + (uint32_t)((int64_t)((uint32_t)((int16_t)((uint16_t)((((((uint16_t)l_411 << (uint16_t)1) >= ((uint32_t)p_91 % (uint32_t)(l_428 = 0xB7ED02BAL))) < l_405) != 0x5A9FL) && (((p_91 | (((-(int16_t)(p_91 >= 18446744073709551615UL)) < 0L) ^ l_292)) <= 1UL) & l_405)) >> (uint16_t)4) << (int16_t)8) + (uint32_t)0x62CF15C3L) / (int64_t)l_110)) < l_144));
                    }
                    else
                    { 
                        uint16_t l_432 = 0x8877L;
                        l_432 = l_428;
                        l_428 = l_385;
                    }
                    l_126 = l_141;
                    return p_92;
                }
                l_168 = __builtin_ctzll((((uint32_t)(p_91 && p_92) - (uint32_t)((l_386 | l_387) & 2UL)) | ((+p_92) ^ p_91)));
                l_111 = p_91;
            }
        }
        if (l_292)
        { 
            l_144 = 0x6B4E15A3L;
        }
        else
        { 
            uint32_t l_444 = 0x7EA404D1L;
            int32_t l_452 = 0xBF0F9607L;
            for (l_168 = 0; (l_168 < (-11)); l_168--)
            { 
                int32_t l_455 = 0x59261936L;
                for (p_92 = 0; (p_92 >= 3); p_92 += 1)
                { 
                    uint64_t l_453 = 4UL;
                    int32_t l_458 = (-4L);
                    if (((uint16_t)p_92 << (uint16_t)4))
                    { 
                        uint32_t l_454 = 0x6D28A6E8L;
                        l_454 = (((int32_t)(l_444 = p_91) / (int32_t)((!(__builtin_popcountll(p_91) >= l_141)) ^ (l_381 <= __builtin_ctz(p_91)))) ^ (((((int16_t)(((int16_t)(-1L) >> (int16_t)7) != ((uint16_t)p_92 + (uint16_t)l_452)) >> (int16_t)l_453) & p_91) < 4UL) == p_92));
                        return p_91;
                    }
                    else
                    { 
                        if (p_91)
                            break;
                    }
                    l_455 = l_242;
                    l_293 = (p_91 > ((uint16_t)(l_458 = l_455) >> (uint16_t)(__builtin_popcount(p_92) && __builtin_popcountl(l_444))));
                }
                if (l_444)
                { 
                    int16_t l_459 = 0x8EA8L;
                    l_144 = l_406;
                    l_110 = l_455;
                    l_126 = l_459;
                    if (((l_452 = 1L) ^ l_455))
                    { 
                        return p_91;
                    }
                    else
                    { 
                        l_293 = p_91;
                    }
                }
                else
                { 
                    uint16_t l_460 = 1UL;
                    l_460 = p_91;
                }
                for (l_126 = 0; (l_126 > 12); l_126 += 9)
                { 
                    return p_92;
                }
                if (l_452)
                    break;
            }
        }
    }
    return l_292;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



