


#define NO_LONGLONG



static long __undefined;






static int16_t  func_32(void);
static uint16_t  func_42(int32_t  p_43, int32_t  p_44, int16_t  p_45, int32_t  p_46, uint32_t  p_47);
inline static int16_t  func_68(uint32_t  p_69, uint32_t  p_70);
inline static uint16_t  func_82(int32_t  p_83, uint32_t  p_84);
static int16_t  func_89(uint16_t  p_90, int16_t  p_91, uint32_t  p_92, uint32_t  p_93);
static uint32_t  func_94(const int16_t  p_95, int32_t  p_96);
static int32_t  func_105(int32_t  p_106, uint32_t  p_107, int16_t  p_108, int16_t  p_109);
inline static uint32_t  func_110(uint32_t  p_111, uint16_t  p_112);
inline static int16_t  func_115(const uint32_t  p_116);
static uint16_t  func_133(uint16_t  p_134, uint32_t  p_135);





static int16_t  func_32(void)
{ 
    uint16_t l_33[5][5][4] = {{{0x6BDA,0x38D6,0x0410,0x0410},{0x5ADB,0x5ADB,0xC1C5,0xECBF},{1U,5U,0x9AB8,0xA619},{0x9AB8,0xA619,0x6BDA,0x9AB8},{0x5ADB,0xA619,0U,0xA619}},{{0xA619,5U,0x0410,0xECBF},{1U,0x5ADB,0x6BDA,0x0410},{1U,0x38D6,2U,0xA619},{1U,0x6BDA,0x6BDA,1U},{1U,0xA619,0x0410,0x6BDA}},{{0xA619,0x38D6,0U,0xECBF},{0x5ADB,1U,2U,5U},{0U,1U,0U,2U},{0x0410,0x9AB8,1U,0x0410},{0x6BDA,2U,1U,0x9AB8}},{{2U,1U,1U,1U},{0x6BDA,0x6BDA,1U,5U},{0x0410,65535U,0U,0x9AB8},{0U,0x9AB8,2U,0U},{0x6BDA,0x9AB8,0x38D6,0x9AB8}},{{0x9AB8,65535U,1U,5U},{0xC1C5,0x6BDA,2U,1U},{0x0410,1U,0xECBF,0x9AB8},{0x0410,2U,2U,0x0410},{0xC1C5,0x9AB8,1U,2U}}};
    int32_t l_34 = 0xB19D88C8;
    const uint16_t l_1252 = 0x0FC9;
    uint32_t l_1253 = 4294967295U;
    int32_t l_1294 = 0x54D1337A;
    int i, j, k;
    l_34 = l_33[2][3][0];
    l_34 = __builtin_popcountl(l_34);
    for (l_34 = 0; (l_34 != (-10)); l_34 = safe_sub_func_uint16_t_u_u(l_34, 5))
    { 
        int16_t l_37[6];
        int i;
        for (i = 0; i < 6; i++)
            l_37[i] = 0x8B01;
        l_1294 = (l_37[3] == ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(func_42((safe_lshift_func_uint16_t_u_u(65529U, 1)), l_37[3], ((safe_rshift_func_uint16_t_u_s((~(((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(l_37[2], 0)), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((1U | l_34) < ((safe_mod_func_uint16_t_u_u((!func_68(l_37[3], l_33[1][0][3])), l_33[1][4][2])) > 0xFEE2B054)), l_37[3])) <= l_37[5]), 4)))) & l_1252), 1)), l_1252)) != l_34) & 0x811B)), 2)) , 0xADF9), l_1253, l_37[2]), 13)), 2)) , 0xCE75));
        return l_37[3];
    }
    return l_1294;
}




static uint16_t  func_42(int32_t  p_43, int32_t  p_44, int16_t  p_45, int32_t  p_46, uint32_t  p_47)
{ 
    const uint32_t l_1258 = 4294967295U;
    uint32_t l_1278[8][8] = {{0x31322521,5U,0x8CD22D7D,0x8CD22D7D,5U,0x31322521,9U,0x4921986B},{0x31322521,1U,0x6EA0DCF5,5U,9U,5U,0x6EA0DCF5,1U},{4294967290U,0x6EA0DCF5,0x1F141885,5U,0x4921986B,4294967295U,4294967295U,0x4921986B},{0x8CD22D7D,0x4921986B,0x4921986B,0x8CD22D7D,4294967290U,1U,4294967295U,0x31322521},{0x6EA0DCF5,0x8CD22D7D,0x1F141885,4294967295U,0x1F141885,0x8CD22D7D,0x6EA0DCF5,9U},{0x1F141885,0x8CD22D7D,0x6EA0DCF5,9U,1U,1U,9U,0x6EA0DCF5},{0x4921986B,0x4921986B,0x8CD22D7D,4294967290U,1U,4294967295U,0x31322521,4294967295U},{0x1F141885,0x6EA0DCF5,4294967290U,0x6EA0DCF5,0x1F141885,5U,0x4921986B,4294967295U}};
    int32_t l_1279[10];
    int i, j;
    for (i = 0; i < 10; i++)
        l_1279[i] = 0x503E121E;
    l_1279[4] = (p_44 & (((((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_1258, (p_44 , (safe_div_func_int16_t_s_s((((((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0x4935, (((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_1258, (((safe_mod_func_int32_t_s_s((p_43 , ((safe_lshift_func_int16_t_s_u(l_1258, 9)) ^ (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s((-1), 1)))), 0U)) , l_1258) , l_1258))), l_1258)) || p_44) & l_1258))) | 0U), l_1258)) , p_45) , 0xBDF9))), l_1258)) , 65528U) >= 0x5768) > l_1278[3][6]) || p_44), 4U))))), (-1))) >= p_47) , 0x6696C0CE) , l_1278[3][6]) && p_43));
    l_1279[4] = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((p_46 , __builtin_ia32_crc32qi((safe_div_func_int32_t_s_s(p_47, (p_43 && 0x9259866A))), p_43)), (((safe_mod_func_uint16_t_u_u(((l_1278[3][6] >= p_46) , (safe_mod_func_uint16_t_u_u((__builtin_popcountl(__builtin_parityll(((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_47, 12)), l_1279[4])) && p_46))) != 0xE1C6FBC6), p_46))), 65535U)) , l_1278[6][0]) > l_1279[0]))), 8U));
    return p_43;
}




inline static int16_t  func_68(uint32_t  p_69, uint32_t  p_70)
{ 
    int32_t l_73 = 0x1EBB67A0;
    uint16_t l_81 = 4U;
    int32_t l_85 = 0xED6215A4;
    uint16_t l_1109 = 0x35A1;
    int32_t l_1110 = 4;
    const int16_t l_1129[3][1][7] = {{{0xFE90,0x8974,(-7),0xFE90,0,0,0xFE90}},{{(-7),0,(-7),0,0,0x8974,0x8974}},{{0,0xFE90,0x0E43,0xFE90,0,0x0E43,0x1488}}};
    int32_t l_1218 = 0xCDFC6D82;
    int32_t l_1219[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1219[i] = 0;
    l_1110 = (safe_mod_func_int16_t_s_s((l_73 || 0x6CB5), (safe_add_func_int32_t_s_s((!l_73), ((((safe_div_func_int32_t_s_s(((((p_70 | __builtin_popcountll(p_70)) > (safe_div_func_int16_t_s_s(l_81, (-1)))) ^ func_82(__builtin_popcount(l_85), l_81)) == l_81), l_85)) && p_70) , l_1109) != p_69)))));
    for (l_1110 = 0; (l_1110 >= 23); l_1110 = safe_add_func_uint16_t_u_u(l_1110, 4))
    { 
        int32_t l_1115 = 0x2F42E1F2;
        int16_t l_1122 = (-8);
        uint32_t l_1136 = 1U;
        int32_t l_1143[7] = {(-2),0,0,(-2),0,0,(-2)};
        int16_t l_1194 = 0xFE1E;
        int32_t l_1207 = 0;
        int i;
        l_1122 = __builtin_popcountl(func_82(func_82(((safe_mod_func_uint16_t_u_u(p_69, ((p_70 ^ l_1115) , l_1115))) , ((0x3DC2 || ((p_70 , (safe_mod_func_uint32_t_u_u((((p_69 < (((safe_mul_func_uint16_t_u_u(__builtin_parity((safe_mod_func_uint16_t_u_u((p_69 && ((l_1115 ^ p_70) ^ l_1110)), l_1115))), p_69)) > l_85) <= 0xAB15)) < l_1115) < l_73), l_81))) , l_73)) && 9)), p_69), p_69));
        if ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_69, (((((safe_rshift_func_int16_t_s_u(l_73, 1)) && func_115(l_1129[0][0][5])) , (safe_mul_func_uint16_t_u_u((func_94(l_1122, ((!(p_70 , ((safe_lshift_func_int16_t_s_s((((~l_1136) == (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((p_69 == 0) , l_1136), 0x3EC8)), 0U))) >= 0xF4BC8436), 14)) == l_1122))) & 5U)) >= (-1)), p_70))) || (-1)) == l_1109))), l_1129[0][0][5])))
        { 
            const uint32_t l_1158 = 4294967295U;
            const uint32_t l_1159[10] = {1U,7U,7U,1U,0xD973B108,1U,7U,7U,1U,0xD973B108};
            int32_t l_1195 = 0xE87B34C6;
            int i;
            for (l_85 = (-4); (l_85 == (-28)); l_85 = safe_sub_func_int16_t_s_s(l_85, 5))
            { 
                l_1115 = p_69;
            }
            for (p_69 = 0; (p_69 <= 6); p_69 += 1)
            { 
                int i;
                l_1115 = (((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(l_1143[p_69], (safe_rshift_func_int16_t_s_s(0xBD3D, (safe_mod_func_int16_t_s_s((func_82(p_70, (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_73 != l_1158), 0xB1EF)), (l_1159[2] && 0x7A9579F1)))) ^ l_1159[2]), l_1143[3])))))) , l_85), 65532U)), p_69)) <= l_85) && l_1159[1]);
                l_1115 = (p_70 , func_89(l_73, (safe_lshift_func_uint16_t_u_u(__builtin_clz(((safe_div_func_int16_t_s_s((p_70 < ((((((l_1136 & (safe_lshift_func_uint16_t_u_u(l_1115, (((6 != (func_110((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((p_70 || (safe_rshift_func_uint16_t_u_s((((p_70 , p_70) != l_1143[6]) , l_1143[p_69]), 14))), l_1115)), l_1159[3])), l_1143[p_69]) | l_1159[2])) || 0U) | p_70)))) && 0x4533887C) , l_1129[2][0][0]) < 0xCBC5) , 0xA9AE3AE5) >= 0xE79E773C)), 0xE3EB)) <= l_1129[1][0][5])), l_1143[p_69])), p_70, l_85));
                if ((p_70 , (((l_1143[p_69] || (safe_add_func_uint16_t_u_u(l_1159[2], (p_70 ^ l_1115)))) != p_69) , (p_69 , (safe_rshift_func_int16_t_s_u(((l_85 && (safe_div_func_int32_t_s_s((0x72DA != p_69), p_70))) , 0xC28A), 8))))))
                { 
                    uint16_t l_1192[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1192[i] = 65535U;
                    l_1115 = (safe_mul_func_uint16_t_u_u(p_70, (safe_lshift_func_int16_t_s_u((p_70 & (safe_add_func_uint16_t_u_u(((l_1129[1][0][2] , ((p_69 , ((safe_rshift_func_uint16_t_u_u(p_69, 1)) != (l_1143[p_69] != (safe_add_func_uint32_t_u_u(1U, ((p_69 ^ __builtin_ctzl(l_1115)) <= l_1192[4])))))) ^ 4294967293U)) & p_69), p_69))), p_70))));
                    if (l_1129[2][0][4])
                        continue;
                }
                else
                { 
                    uint16_t l_1193[8][6][5] = {{{1U,8U,1U,0x054A,65535U},{4U,4U,0xDD5A,8U,0xA404},{0x054A,65535U,0x054A,8U,65535U},{0x68DF,8U,0x63ED,65531U,0xECCE},{65535U,4U,65531U,65531U,4U},{0xDD5A,0x2CC0,0x63ED,0x6B53,0x1577}},{{65535U,3U,0x054A,0U,9U},{0x63ED,1U,0xB43F,4U,0xCED1},{1U,4U,9U,8U,65535U},{0xB43F,0x1C98,0x68DF,65528U,0x68DF},{0U,0U,65535U,8U,9U},{0xECCE,0x2CC0,0xCED1,4U,0xB43F}},{{65531U,65535U,65532U,65535U,65531U},{0U,0x2CC0,0x9FF8,8U,0x835F},{8U,0U,65532U,4U,4U},{0xA404,0x1C98,0xA404,0x2CC0,0x835F},{0x054A,4U,0U,3U,65531U},{0x835F,1U,0xDD5A,0x4F9F,0xB43F}},{{65532U,1U,0U,65531U,9U},{4U,9U,0xA404,1U,0x68DF},{65535U,65532U,65532U,65535U,65535U},{4U,0x4F9F,0x9FF8,65531U,0xCED1},{65532U,1U,65532U,0U,65532U},{0x835F,65528U,0xCED1,65531U,0x9FF8}},{{0x054A,3U,65535U,65535U,65532U},{0xA404,1U,0x68DF,1U,0xA404},{8U,3U,9U,65531U,0U},{0U,65528U,0xB43F,0x4F9F,0xDD5A},{65531U,1U,65531U,3U,0U},{0xECCE,0x4F9F,0x835F,0x2CC0,0xA404}},{{0U,65532U,4U,4U,65532U},{0xB43F,9U,0x835F,8U,0x9FF8},{1U,1U,65531U,65535U,65532U},{0x63ED,1U,0xB43F,4U,0xCED1},{1U,4U,9U,8U,65535U},{0xB43F,0x1C98,0x68DF,65528U,0x68DF}},{{0U,0U,65535U,8U,9U},{0xECCE,0x2CC0,0xCED1,4U,0xB43F},{65531U,65535U,65532U,65535U,65531U},{0U,0x2CC0,0x9FF8,8U,0x835F},{8U,0U,65532U,4U,4U},{0xA404,0x1C98,0xA404,0x2CC0,0x835F}},{{0x054A,4U,0U,3U,65531U},{0x835F,1U,0xDD5A,0x4F9F,0xB43F},{65532U,1U,0U,65531U,9U},{0U,0x9418,0xDD5A,0x1C98,0xECCE},{0U,65535U,65535U,0U,1U},{0U,1U,0x68DF,0x2CC0,4U}}};
                    int32_t l_1196 = 0x58CA41C7;
                    int i, j, k;
                    l_1115 = p_69;
                    if (p_70)
                        break;
                    for (l_1122 = 0; (l_1122 <= 6); l_1122 += 1)
                    { 
                        int i;
                        l_1193[6][3][4] = __builtin_ia32_crc32qi((l_1143[l_1122] <= l_1143[p_69]), l_1143[4]);
                        l_1195 = l_1194;
                        l_1115 = __builtin_ffs(p_70);
                    }
                    l_1196 = l_1136;
                }
                l_1195 = 1;
            }
        }
        else
        { 
            for (l_1115 = 0; (l_1115 > 8); l_1115 = safe_add_func_uint16_t_u_u(l_1115, 1))
            { 
                l_1207 = (safe_sub_func_uint16_t_u_u(__builtin_ctz((p_70 , (safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(__builtin_ffsll(((((0xE896 < func_89(((func_89((0xEB8B | 65533U), p_69, __builtin_popcount(p_70), p_69) == p_70) , l_1129[0][0][3]), p_70, p_69, p_69)) , 1) != p_70) <= p_70)), (-2))), p_70)), 9)))), p_69));
                return p_69;
            }
            for (l_1207 = (-10); (l_1207 <= 14); l_1207 = safe_add_func_uint32_t_u_u(l_1207, 2))
            { 
                uint32_t l_1210 = 0x6E30C1B2;
                l_1210 = p_69;
                l_1115 = 0xB5DD5375;
                return l_1136;
            }
        }
        l_1115 = ((safe_sub_func_uint32_t_u_u((p_70 != (((safe_add_func_int16_t_s_s(5, ((((l_1115 >= l_1122) ^ (l_1110 | (l_81 || 0x1572))) == (!(safe_add_func_uint32_t_u_u(func_82(p_69, __builtin_ctz(p_70)), p_70)))) != p_69))) >= l_1115) & 4294967295U)), p_70)) , 0xE507B6C0);
        l_1218 = ((-1) ^ 0xCD28D35C);
    }
    for (l_1109 = 0; (l_1109 <= 4); l_1109 += 1)
    { 
        int32_t l_1224[8] = {5,5,5,5,5,5,5,5};
        int i;
        l_1224[5] = (safe_mod_func_int16_t_s_s(l_1219[l_1109], (safe_lshift_func_int16_t_s_s(p_69, 2))));
        if (l_1109)
            break;
        for (l_85 = 4; (l_85 >= 0); l_85 -= 1)
        { 
            uint32_t l_1225 = 0x18003E2A;
            int32_t l_1243 = 0x08C9396D;
            if (((l_1225 | (safe_mul_func_int16_t_s_s(l_1219[l_1109], __builtin_clz((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(func_110(l_1224[5], l_1225), (safe_mul_func_int16_t_s_s((!__builtin_bswap64(((__builtin_ffsll(p_69) || func_89(((l_1219[1] | (safe_sub_func_uint32_t_u_u(0xABEF4DD8, p_69))) || l_85), p_69, p_70, l_1219[0])) == l_1224[2]))), p_69)))), l_1224[1])))))) >= p_69))
            { 
                int16_t l_1239 = 0xC0D3;
                l_1224[4] = 0x7988E45F;
                l_1218 = (safe_mod_func_uint32_t_u_u((l_1239 , ((!((l_1239 , ((1 ^ l_1239) != 0xBD76844B)) >= (((p_69 && p_69) <= (safe_sub_func_uint16_t_u_u((__builtin_popcountll(l_1225) & 0x29B0), l_85))) | l_1218))) , l_1109)), 4294967291U));
            }
            else
            { 
                uint16_t l_1244 = 0x125A;
                l_1243 = 1;
                l_1244 = l_1219[l_1109];
            }
            l_1218 = (((__builtin_ffsll(((p_69 , (((~p_70) >= p_70) , (l_81 ^ (safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(p_69)), l_1224[5]))))) <= p_69)) >= (1U == 7U)) || l_1224[5]) , p_70);
            if (func_82(func_94((l_73 , p_69), (p_69 , __builtin_clzl(p_70))), p_70))
            { 
                if (p_69)
                    break;
            }
            else
            { 
                uint16_t l_1251 = 1U;
                l_1243 = (func_89(func_82(p_69, func_133(p_69, p_70)), l_1243, (((l_1110 || 0x0BCE) , ((p_70 && l_1129[0][0][5]) < p_70)) & l_81), l_1251) , l_85);
                return p_69;
            }
        }
    }
    return p_69;
}




inline static uint16_t  func_82(int32_t  p_83, uint32_t  p_84)
{ 
    int16_t l_87 = 0x021B;
    int32_t l_88 = 1;
    l_88 = (((!l_87) , p_83) & p_84);
    l_88 = (l_88 , 0);
    l_88 = (func_89(l_88, (func_94(p_83, p_83) == (((safe_lshift_func_uint16_t_u_u(p_83, 0)) , (l_88 , (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0x8818, p_84)), (safe_sub_func_uint16_t_u_u((0x706AB729 == 0x7C91EAE5), l_87)))))) || p_84)), p_83, p_84) ^ p_84);
    l_88 = (safe_lshift_func_int16_t_s_u(p_84, (safe_div_func_uint32_t_u_u(l_87, (-1)))));
    return p_83;
}




static int16_t  func_89(uint16_t  p_90, int16_t  p_91, uint32_t  p_92, uint32_t  p_93)
{ 
    uint16_t l_889 = 0xF263;
    int32_t l_964[7] = {(-1),8,(-1),(-1),8,(-1),(-1)};
    int32_t l_1000 = 0xB4738A57;
    int i;
    for (p_93 = 20; (p_93 <= 55); p_93 = safe_add_func_int16_t_s_s(p_93, 7))
    { 
        uint16_t l_882 = 0U;
        const uint16_t l_888 = 0xD557;
        int32_t l_977 = 0x1F04E037;
        int32_t l_1065 = 0x83A59A54;
        int32_t l_1081 = 8;
        if ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(4294967288U, (safe_unary_minus_func_uint32_t_u(p_90)))), 11)))
        { 
            int32_t l_890 = 0;
            int32_t l_900 = (-3);
            for (p_90 = 0; (p_90 == 51); p_90++)
            { 
                uint16_t l_883 = 65534U;
                int32_t l_918 = (-10);
                uint32_t l_947 = 0x6375BD8E;
                for (p_91 = 0; (p_91 != 9); p_91 = safe_add_func_uint16_t_u_u(p_91, 9))
                { 
                    int32_t l_881[7][9] = {{0x4D82135F,0x5E652F2E,0x5E652F2E,0x4D82135F,0xF6A009BE,0x4D82135F,0x5E652F2E,0x5E652F2E,0x4D82135F},{0xB24E24CB,0x5E652F2E,0xB461E22C,0x5E652F2E,0xB24E24CB,0xB24E24CB,0x5E652F2E,0xB461E22C,0x5E652F2E},{0x5E652F2E,0xF6A009BE,0xB461E22C,0xB461E22C,0xF6A009BE,0x5E652F2E,0xF6A009BE,0xB461E22C,0xB461E22C},{0xB24E24CB,0xB24E24CB,0x5E652F2E,0xB461E22C,0x5E652F2E,0xB24E24CB,0xB24E24CB,0x5E652F2E,0xB461E22C},{0x4D82135F,0xF6A009BE,0x4D82135F,0x5E652F2E,0x5E652F2E,0x4D82135F,0xF6A009BE,0x4D82135F,0x5E652F2E},{0x4D82135F,0x5E652F2E,0x5E652F2E,0x4D82135F,0xF6A009BE,0x4D82135F,0x5E652F2E,0x5E652F2E,0x4D82135F},{0xB24E24CB,0x5E652F2E,0xB461E22C,0x5E652F2E,0xB24E24CB,0xB24E24CB,0x5E652F2E,0xB461E22C,0x5E652F2E}};
                    int32_t l_899 = (-1);
                    int i, j;
                    l_890 = (p_91 == ((safe_add_func_int32_t_s_s(l_881[5][7], (l_882 > (l_883 | (((safe_mul_func_int16_t_s_s(l_881[5][5], __builtin_ffs(p_90))) & __builtin_clzl((safe_lshift_func_uint16_t_u_s(p_92, (((l_888 == l_888) == p_92) && l_881[5][7]))))) , 0x007E7996))))) <= l_889));
                    if (l_890)
                        break;
                    l_899 = (((__builtin_ctzl(p_91) & ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_888 ^ l_883), func_133(l_881[5][7], (p_92 < ((((func_133(func_105((safe_mul_func_uint16_t_u_u(l_883, l_890)), (safe_add_func_int16_t_s_s(l_889, 0x7DC8)), l_881[5][7], p_90), p_92) , p_93) <= l_890) , 4294967290U) < 8))))), (-5))) < 5)) && l_881[5][7]) & 0xB179F14B);
                    for (p_92 = 0; (p_92 <= 6); p_92 += 1)
                    { 
                        int32_t l_917 = 1;
                        int i, j;
                        l_900 = l_881[p_92][p_92];
                        l_917 = (safe_sub_func_int32_t_s_s(func_115((safe_sub_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(0x80AB, (l_889 | ((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_889, (safe_mul_func_uint16_t_u_u(p_90, (p_93 != ((safe_sub_func_int32_t_s_s(p_90, (p_91 , 1))) && (((p_93 ^ l_881[p_92][p_92]) , l_881[p_92][p_92]) < p_93))))))), l_881[5][7])) < l_881[p_92][p_92]) || 4294967295U) == l_881[p_92][p_92])))) , p_92), 0U)) & l_881[p_92][p_92]) , p_90), l_889))), 0xA5D575C4));
                        l_918 = 0xF7035BBE;
                    }
                }
                if (l_883)
                { 
                    uint16_t l_921[4][1] = {{0x732D},{0xB797},{0x732D},{0xB797}};
                    int32_t l_923 = 0x79F19AA6;
                    int32_t l_948[6] = {(-2),(-2),(-2),(-2),(-2),(-2)};
                    int i, j;
                    if (p_90)
                        break;
                    for (l_890 = 0; (l_890 < (-10)); l_890 = safe_sub_func_int16_t_s_s(l_890, 1))
                    { 
                        const uint32_t l_922 = 0x40FEFAF2;
                        int32_t l_934 = 0x5756131D;
                        l_921[0][0] = l_900;
                        l_923 = (l_922 & l_922);
                        l_934 = (safe_sub_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(1U, (l_918 , (l_900 > (p_93 ^ (safe_lshift_func_uint16_t_u_s((l_900 > (safe_div_func_uint32_t_u_u(p_92, (safe_div_func_int16_t_s_s(((l_888 , ((((p_92 ^ l_918) , 65530U) >= l_883) >= 0)) , l_922), 7))))), p_91))))))) , p_91) >= l_883), (-1)));
                    }
                    for (l_923 = 0; (l_923 >= (-18)); l_923 = safe_sub_func_uint32_t_u_u(l_923, 9))
                    { 
                        l_900 = (safe_add_func_uint16_t_u_u(0x1426, p_91));
                        if (p_92)
                            continue;
                        l_948[0] = (safe_lshift_func_uint16_t_u_u(((p_92 || p_91) | ((l_889 | ((safe_lshift_func_uint16_t_u_s(p_93, 15)) == (safe_div_func_int32_t_s_s(l_889, (l_890 || ((-1) < 1)))))) & (safe_add_func_uint16_t_u_u(func_94(l_889, l_900), p_90)))), l_947));
                        return l_923;
                    }
                }
                else
                { 
                    uint16_t l_953[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_953[i] = 1U;
                    for (l_883 = 0; (l_883 > 49); l_883++)
                    { 
                        l_953[0] = ((safe_sub_func_int16_t_s_s(0x72A7, __builtin_parity(p_92))) != p_92);
                        return p_90;
                    }
                }
            }
            l_964[3] = ((safe_sub_func_uint16_t_u_u(p_92, (4294967295U | __builtin_clz((((p_92 >= ((((safe_rshift_func_int16_t_s_u(0, 1)) || ((safe_mul_func_uint16_t_u_u((p_92 , ((safe_div_func_int32_t_s_s(((l_889 <= __builtin_clzl(l_888)) >= p_93), l_882)) <= p_90)), 0xADED)) < (-10))) < p_92) < p_90)) & l_900) | p_92))))) >= 0);
        }
        else
        { 
            int16_t l_971 = (-1);
            int32_t l_1006 = 0x6445514D;
            l_977 = (safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_92 && (((((p_91 == l_971) != (func_115((safe_mul_func_int16_t_s_s((!(p_91 > (l_882 , p_93))), p_92))) != (safe_mod_func_uint32_t_u_u(p_90, l_964[3])))) > p_90) || 0U) ^ p_91)), l_888)) == l_971), 0x2DAA));
            if (l_882)
                break;
            if ((__builtin_ctzll((p_92 , (((l_889 , (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((l_964[4] >= p_90), ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((p_92 && (p_92 , (((l_964[3] ^ (safe_sub_func_uint32_t_u_u(l_1000, (0xB9A7 || 1U)))) != l_1000) != l_964[5]))), l_971)), p_91)) , l_971))), l_971)) , l_971) > l_971) | p_90), 0x7761BBE6)) || p_90), 8)), 14)) ^ l_971) , p_92) ^ 5), 0)), 4)) < 5U), l_882))) != p_91) && p_91))) > l_888))
            { 
                int32_t l_1003 = (-1);
                l_1003 = (safe_sub_func_int16_t_s_s((l_977 <= l_977), l_888));
            }
            else
            { 
                const uint16_t l_1007 = 0xB1C0;
                for (p_92 = 0; (p_92 == 12); p_92 = safe_add_func_int32_t_s_s(p_92, 2))
                { 
                    if (p_91)
                    { 
                        l_1006 = p_93;
                        return p_91;
                    }
                    else
                    { 
                        uint32_t l_1008 = 4294967295U;
                        int32_t l_1027 = 2;
                        int16_t l_1044 = (-4);
                        l_1027 = ((l_1007 ^ l_1008) , func_105(((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_92 ^ l_1007), __builtin_ctz((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_971 & ((((__builtin_ctz(p_91) || l_1007) < __builtin_parityl(p_91)) & l_1000) >= 0)), l_971)) || l_1008), 13)), p_91)) , l_1006) | l_888), p_90)), 0x6FA11985)), p_91))))), 8U)), 11)) , 0x0A9C4256), l_977, l_1000, l_882));
                        l_964[0] = (((safe_sub_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s(p_90, l_882)) != ((safe_sub_func_uint16_t_u_u(p_93, 0x57C9)) , (safe_div_func_uint32_t_u_u((l_1008 , (safe_mul_func_uint16_t_u_u(l_888, (safe_add_func_uint16_t_u_u((p_90 != l_977), (safe_add_func_uint32_t_u_u(func_110((l_1006 , p_92), p_93), p_92))))))), 0x70AF7896)))) <= l_882) == 0x2B685123), l_1006)) , p_91) < 0x5F1F7A3F);
                        l_977 = ((((l_1007 , 0U) | l_888) == ((((safe_sub_func_int16_t_s_s(func_133((((p_91 , 65535U) < (p_93 > l_1044)) , (safe_add_func_uint32_t_u_u(((((safe_unary_minus_func_uint32_t_u(1U)) , (safe_sub_func_int32_t_s_s((p_91 < l_1027), l_1008))) <= l_971) < l_882), 0))), l_977), 0x2C47)) >= 0U) && 1U) , p_91)) , l_889);
                        l_1006 = (safe_add_func_uint16_t_u_u(l_964[3], (safe_rshift_func_uint16_t_u_s((func_94((p_91 ^ __builtin_popcountl(p_92)), p_92) == l_964[3]), (p_92 > (p_93 || l_1007))))));
                    }
                }
                l_1006 = p_93;
            }
            return p_91;
        }
        for (p_91 = 0; (p_91 == (-10)); p_91 = safe_sub_func_uint16_t_u_u(p_91, 8))
        { 
            for (p_92 = (-26); (p_92 != 23); p_92 = safe_add_func_uint16_t_u_u(p_92, 7))
            { 
                if (l_964[3])
                    break;
            }
            for (l_1000 = 0; (l_1000 != (-16)); l_1000 = safe_sub_func_int16_t_s_s(l_1000, 8))
            { 
                int16_t l_1060[8] = {8,8,8,8,8,8,8,8};
                int i;
                l_1060[3] = p_92;
                for (l_882 = 0; (l_882 <= 7); l_882 += 1)
                { 
                    int i;
                    return l_1060[l_882];
                }
            }
        }
        l_977 = (l_888 || 0U);
        for (l_882 = (-21); (l_882 < 21); l_882 = safe_add_func_uint32_t_u_u(l_882, 7))
        { 
            int32_t l_1071 = 0;
            l_977 = (safe_lshift_func_uint16_t_u_u(0x9A2F, l_1065));
            for (p_92 = 0; (p_92 == 49); p_92 = safe_add_func_int16_t_s_s(p_92, 1))
            { 
                int32_t l_1072 = 1;
                if ((safe_rshift_func_uint16_t_u_u(p_92, l_964[3])))
                { 
                    uint32_t l_1070 = 7U;
                    int32_t l_1099 = 0;
                    if (p_90)
                    { 
                        uint32_t l_1080 = 0xC7759513;
                        l_1070 = p_91;
                        l_1071 = p_91;
                        l_1081 = (l_1072 == (safe_add_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s((__builtin_ffs((((safe_sub_func_int32_t_s_s((p_90 <= p_91), ((safe_unary_minus_func_int16_t_s(l_1080)) & l_1070))) == p_91) || l_888)) > l_1080), l_1072)) <= p_90) , l_1081) == 0x38C5CDE3) | l_888), p_92)));
                    }
                    else
                    { 
                        l_1071 = l_888;
                        l_964[4] = 0x01FEE7A4;
                        if (p_91)
                            continue;
                        l_1099 = ((safe_rshift_func_int16_t_s_u(l_964[3], (p_90 >= (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(l_1072, 1)), 6)), l_1072))))) && __builtin_ia32_crc32qi((safe_rshift_func_uint16_t_u_s(p_93, 13)), ((p_91 , (func_110((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((~(((l_1070 != (safe_mul_func_uint16_t_u_u(0xFC18, 0x85AF))) , p_92) | l_889)) , l_889) == 0xED68F71B), 0x8D10)), l_977)), p_92) , l_1072)) , 246U)));
                    }
                    if (l_1072)
                        break;
                }
                else
                { 
                    l_1071 = (l_1071 && (safe_sub_func_uint32_t_u_u(0U, p_91)));
                }
                for (l_889 = (-8); (l_889 != 43); l_889++)
                { 
                    uint32_t l_1104 = 0xF464B28F;
                    l_1104 = p_93;
                    return l_889;
                }
            }
            if (p_92)
                continue;
        }
    }
    l_1000 = l_1000;
    return p_92;
}




static uint32_t  func_94(const int16_t  p_95, int32_t  p_96)
{ 
    int32_t l_101 = 1;
    int32_t l_694 = (-1);
    int32_t l_776 = 4;
    if ((((safe_mul_func_uint16_t_u_u((p_95 , (((safe_lshift_func_uint16_t_u_s((__builtin_ffsll(l_101) == ((~(p_96 , 0x6244A889)) || (l_101 != (safe_sub_func_int32_t_s_s(func_105(l_101, func_110(((safe_lshift_func_int16_t_s_u(func_115(p_95), 4)) , l_101), p_95), l_101, l_101), l_101))))), 14)) <= l_101) > p_96)), 0x6576)) < l_101) ^ p_96))
    { 
        uint32_t l_619 = 1U;
        int32_t l_620 = 0x5982F445;
        for (l_101 = 0; (l_101 < 29); l_101 = safe_add_func_uint32_t_u_u(l_101, 1))
        { 
            uint32_t l_618 = 0x91249883;
            int32_t l_631 = 0x20417738;
            for (p_96 = (-16); (p_96 >= (-11)); p_96 = safe_add_func_int16_t_s_s(p_96, 1))
            { 
                l_618 = p_95;
                l_619 = p_95;
                return p_96;
            }
            l_620 = l_101;
            p_96 = (safe_rshift_func_uint16_t_u_u(l_620, 7));
            for (l_618 = 0; (l_618 >= 15); l_618++)
            { 
                uint32_t l_646 = 1U;
                int32_t l_652 = 0xA86F961E;
                l_631 = (((safe_lshift_func_int16_t_s_u(((((4294967295U != p_95) & ((l_620 | (safe_mul_func_uint16_t_u_u((l_618 , (l_620 < (safe_add_func_int32_t_s_s(p_96, __builtin_ctzll(p_95))))), p_96))) , p_96)) >= 0U) != l_101), l_101)) ^ l_619) , 7);
                for (l_619 = 0; (l_619 != 45); l_619++)
                { 
                    int32_t l_636 = 0xF520941F;
                    for (p_96 = 0; (p_96 != 0); p_96 = safe_add_func_uint16_t_u_u(p_96, 7))
                    { 
                        l_636 = l_631;
                        l_631 = 2;
                        if (l_618)
                            continue;
                    }
                }
                for (l_620 = 0; (l_620 <= 17); l_620 = safe_add_func_uint32_t_u_u(l_620, 1))
                { 
                    int32_t l_647 = 0x7CA22065;
                    l_652 = (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((p_95 <= ((!(safe_mul_func_int16_t_s_s(l_646, (l_646 ^ func_133(l_101, (p_95 != (l_647 && (~((safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((func_133((p_95 <= p_96), p_95) , l_646))) , 65533U) >= l_631), l_619)) == 0x3AF556C2))))))))) > p_95)), l_647)), 7));
                }
            }
        }
    }
    else
    { 
        uint32_t l_655 = 0U;
        uint32_t l_659 = 0xC4AFB487;
        int32_t l_695[2];
        int32_t l_711[2][7][4] = {{{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9}},{{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9}}};
        int32_t l_750[6] = {0xBE900324,(-1),0xBE900324,0xBE900324,(-1),0xBE900324};
        int32_t l_855 = 9;
        const int32_t l_856 = 0x9C52FE0D;
        uint32_t l_859 = 0x9281DF6E;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_695[i] = 0x3FC4138B;
        if (l_101)
        { 
            int32_t l_656 = 0x7978CC02;
            p_96 = ((l_101 || (0x027DDD9D == (l_101 < (l_655 < (l_656 , (__builtin_ffsll(((p_96 <= (p_95 < (safe_div_func_int32_t_s_s(l_656, 1)))) < p_96)) || l_101)))))) >= l_101);
            return p_96;
        }
        else
        { 
            uint32_t l_673 = 3U;
            int32_t l_679 = 0x16524C95;
            const int16_t l_725[10] = {0,0x178C,0x81A4,0x81A4,0x178C,0,0x178C,0x81A4,0x81A4,0x178C};
            int32_t l_752 = 0x965D0FE0;
            uint32_t l_753 = 0xAA21122E;
            int i;
            if (l_659)
            { 
                int32_t l_665 = 0;
                uint32_t l_676[6] = {1U,1U,1U,1U,1U,1U};
                int i;
                l_673 = ((((p_96 , ((((((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(l_665)), 0)) == func_110((p_96 && (!0x6E890508)), (((func_110(p_95, ((safe_mod_func_uint16_t_u_u((func_115(func_110((func_133((safe_rshift_func_uint16_t_u_u(l_101, 14)), l_665) >= p_95), l_101)) , p_95), 0x4F72)) , l_665)) != p_96) , l_659) & l_665))), l_101)) ^ p_96) < l_101) || 4) | p_96) == l_101)) != p_95) | 0x16BC5179) ^ 1);
                for (l_101 = 22; (l_101 != (-14)); l_101 = safe_sub_func_int16_t_s_s(l_101, 6))
                { 
                    for (l_655 = 1; (l_655 <= 5); l_655 += 1)
                    { 
                        int i;
                        p_96 = l_676[l_655];
                        p_96 = (safe_rshift_func_int16_t_s_u(p_95, 14));
                    }
                }
            }
            else
            { 
                int16_t l_706 = (-1);
                int32_t l_720 = 0xC22D6BFA;
lbl_744:
                l_679 = (l_659 , (p_95 == p_96));
                for (p_96 = 0; (p_96 <= 25); p_96 = safe_add_func_uint16_t_u_u(p_96, 2))
                { 
                    int32_t l_693 = 0x3CB82B9C;
                    int32_t l_728 = (-3);
                    for (l_101 = 0; (l_101 < (-17)); l_101 = safe_sub_func_int16_t_s_s(l_101, 4))
                    { 
                        int32_t l_702 = 2;
                        l_694 = (safe_rshift_func_int16_t_s_u(((l_101 || (safe_unary_minus_func_int16_t_s(((safe_mul_func_int16_t_s_s((-8), 0)) != (p_96 , (__builtin_popcount(l_659) <= ((p_95 <= 0U) >= ((((safe_lshift_func_int16_t_s_u((0U ^ 9), 0)) <= 0xF33D) && l_673) != 0U)))))))) | l_693), 8));
                        l_695[0] = p_95;
                        l_679 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_655, 2)), p_96));
                        l_679 = (__builtin_parity(p_96) | ((safe_sub_func_int32_t_s_s(l_702, (safe_mul_func_int16_t_s_s(0xE46F, l_655)))) | 3U));
                    }
                    if ((0xB4690A09 != p_95))
                    { 
                        l_706 = (safe_unary_minus_func_uint16_t_u(p_95));
                    }
                    else
                    { 
                        l_720 = (safe_div_func_uint16_t_u_u(l_706, (safe_lshift_func_uint16_t_u_s(((__builtin_parityl(l_711[0][5][1]) && l_706) & 0x2BB9E966), (safe_add_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(0U, (l_693 == (((safe_mod_func_int32_t_s_s(0xDC391F12, (safe_rshift_func_uint16_t_u_u(l_673, 1)))) >= 0xEAEB6170) ^ p_95)))) == 3) , 0) >= p_96), p_96))))));
                        return l_101;
                    }
                    l_720 = (safe_mod_func_int16_t_s_s(((p_95 , ((safe_add_func_uint32_t_u_u(p_95, (p_95 | (((l_725[8] && (safe_sub_func_uint32_t_u_u(l_728, (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(0x781DED1D, (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x76D9F6BB, (((safe_unary_minus_func_int16_t_s((l_659 && func_115((safe_mod_func_uint16_t_u_u(p_96, p_96)))))) & (-5)) & 1U))), 0x7E4D)))), 6))))) , l_706) | p_95)))) & p_95)) ^ p_96), l_711[0][2][3]));
                    if ((p_95 != func_133((((safe_rshift_func_int16_t_s_u(0xB547, 3)) != ((p_96 , p_95) | (l_693 , (safe_rshift_func_int16_t_s_u(func_110(p_96, p_95), 10))))) || 0xA243), p_95)))
                    { 
                        return l_693;
                    }
                    else
                    { 
                        uint16_t l_751[7] = {0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529};
                        int i;
                        if (l_728)
                            goto lbl_744;
                        l_751[0] = (safe_lshift_func_int16_t_s_u(l_101, ((((p_96 && ((((l_694 >= p_96) > (safe_mod_func_int16_t_s_s((-6), (l_693 , (__builtin_ffsll((!0xCCC335CC)) ^ l_750[2]))))) < p_96) | 1U)) < p_95) < p_95) || l_728)));
                        l_720 = ((0x4D1B6944 < l_752) | (l_753 | (safe_mul_func_uint16_t_u_u(p_96, ((p_95 || (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_693, ((safe_rshift_func_int16_t_s_s(l_753, l_751[4])) | (safe_mul_func_int16_t_s_s((func_110(p_96, l_725[8]) | 0xABEDED94), l_711[0][5][1]))))) ^ p_95), p_96))) > l_728)))));
                    }
                }
            }
            l_694 = 1;
            l_694 = ((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_96, (l_101 && l_750[1]))), ((safe_sub_func_int32_t_s_s(0x8D4914CB, p_95)) , 0xEF39))) >= p_95);
        }
        l_695[0] = (safe_lshift_func_uint16_t_u_u(p_96, 13));
        if (l_655)
        { 
            int32_t l_791 = 0x162CB79F;
            for (l_694 = 8; (l_694 >= 7); l_694 = safe_sub_func_int16_t_s_s(l_694, 1))
            { 
                int32_t l_801 = (-1);
                int32_t l_857 = 0xDD9C1468;
                l_776 = (safe_rshift_func_int16_t_s_u(__builtin_popcountll(p_95), 1));
                for (l_655 = 0; (l_655 <= 1); l_655 += 1)
                { 
                    uint32_t l_849[6] = {1U,1U,1U,1U,1U,1U};
                    int i;
                    p_96 = __builtin_parity(((__builtin_bswap64(((safe_add_func_uint32_t_u_u(0x1D7D8942, (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_750[(l_655 + 3)], l_695[l_655])), (__builtin_ffsll(p_95) , (l_750[(l_655 + 3)] == __builtin_parityl((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_791 , ((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((l_791 , (safe_sub_func_uint32_t_u_u(((~(safe_add_func_int32_t_s_s((func_133((((0xB71A579D ^ l_694) < 4294967295U) < p_96), l_801) & l_801), l_750[2]))) , p_96), 0))), l_801)), p_95)) | l_711[0][5][1])), l_695[1])), p_95))))))), p_96)), 0)))) & p_95)) , 4294967295U) == p_96));
                    p_96 = 0xA6D93960;
                    for (l_659 = 0; (l_659 <= 1); l_659 += 1)
                    { 
                        int i, j, k;
                        l_801 = ((!(func_115(l_711[l_655][l_659][(l_655 + 2)]) & ((-4) > (l_101 , p_95)))) , (safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s(p_95)) , (__builtin_ffs(l_801) || (((safe_lshift_func_uint16_t_u_s((((l_695[l_655] , l_695[l_655]) , 0U) >= 0xD7F1), 0)) <= l_711[l_655][l_659][(l_655 + 2)]) , l_694))), p_95)), p_96)) != l_711[l_655][l_659][(l_655 + 2)]), p_95)) == l_750[(l_655 + 3)]) < l_776), p_95)));
                        if (l_101)
                            goto lbl_858;
                        l_695[l_655] = (((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((((65529U || (safe_sub_func_int32_t_s_s((-10), ((((((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_711[l_655][l_659][(l_655 + 2)], l_101)), p_96)) , (safe_add_func_int16_t_s_s(p_96, p_96))) , (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_95, l_694)), l_655))) , 65527U) , 65532U) >= 0x2078)))) == p_95) | p_96) , 0) != p_95) != l_695[l_655]), p_96)), l_711[l_655][l_659][(l_655 + 2)])) == l_711[l_655][l_659][(l_655 + 2)]) == p_96);
                    }
                    if ((((((safe_add_func_int16_t_s_s(__builtin_ctzl(l_801), p_96)) != p_95) != l_801) ^ (safe_mod_func_uint32_t_u_u(((((~(safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(((l_694 <= (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_711[0][5][1] >= (safe_mod_func_uint32_t_u_u(0x6AF6CAE7, p_96))), p_96)), 0xAD53)), p_95))) , l_655), l_801)) < 1), 11)), p_95))) & l_659) || l_849[1]) , 0x94D337D2), p_95))) , 2))
                    { 
                        const int32_t l_850 = 0;
                        l_695[0] = (func_115(l_850) | p_96);
                        if (p_96)
                            break;
                        p_96 = l_750[(l_655 + 3)];
                    }
                    else
                    { 
                        if (p_95)
                            break;
                        p_96 = ((l_849[1] | ((func_115(p_96) == p_95) == ((__builtin_bswap64(p_96) < ((safe_lshift_func_uint16_t_u_s(l_694, ((0x2377 < (safe_mul_func_uint16_t_u_u(p_96, 0x5596))) >= p_96))) && 0)) , l_101))) , l_855);
                    }
                    for (l_659 = 0; (l_659 <= 1); l_659 += 1)
                    { 
                        p_96 = l_791;
                    }
                }
                if (l_856)
                { 
                    l_791 = func_105(l_857, l_101, p_96, p_96);
                }
                else
                { 
                    return p_95;
                }
            }
        }
        else
        { 
            p_96 = 1;
lbl_858:
            for (l_855 = 1; (l_855 >= 0); l_855 -= 1)
            { 
                int i;
                l_695[l_855] = l_750[l_855];
            }
            l_859 = __builtin_clzl(p_95);
        }
    }
    return l_694;
}




static int32_t  func_105(int32_t  p_106, uint32_t  p_107, int16_t  p_108, int16_t  p_109)
{ 
    uint32_t l_613 = 0U;
    return l_613;
}




inline static uint32_t  func_110(uint32_t  p_111, uint16_t  p_112)
{ 
    int32_t l_606 = (-8);
    uint16_t l_612 = 2U;
    l_606 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((p_111 , p_111) & p_111) <= ((l_606 >= p_111) == (safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(1)), (p_111 , 0U))) & l_606), l_612)))), p_112)), 4294967295U));
    return l_606;
}




inline static int16_t  func_115(const uint32_t  p_116)
{ 
    int32_t l_117 = 0x5443EFFA;
    int16_t l_137 = (-1);
    int32_t l_516 = (-1);
    uint16_t l_591[4][9] = {{0x3070,65535U,65535U,0x3070,65535U,65535U,0x3070,65535U,65535U},{0U,65535U,65535U,0U,65535U,65535U,0U,65535U,65535U},{0x3070,65535U,65535U,0x3070,65535U,65535U,0x3070,65535U,65535U},{0U,65535U,65535U,0U,65535U,65535U,0U,65535U,65535U}};
    int i, j;
    for (l_117 = (-19); (l_117 != 10); l_117++)
    { 
        int32_t l_120 = (-10);
        int32_t l_136 = 0;
        int32_t l_530[2][9][4] = {{{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1}},{{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C},{0x29B7091D,0x60C18B8C,0x29B7091D,1},{0x29B7091D,1,0x29B7091D,0x60C18B8C}}};
        int32_t l_549 = 0xC406F77B;
        int32_t l_590 = (-1);
        int i, j, k;
        for (l_120 = (-8); (l_120 == (-27)); l_120 = safe_sub_func_int32_t_s_s(l_120, 1))
        { 
            int32_t l_123 = 1;
            int32_t l_523 = 0xAF71156A;
            for (l_123 = (-6); (l_123 >= (-29)); l_123 = safe_sub_func_uint16_t_u_u(l_123, 8))
            { 
                return l_120;
            }
            if (l_123)
            { 
                uint32_t l_138 = 0x3ABBA7F7;
                if ((safe_sub_func_int16_t_s_s(l_117, (1U < ((((((0xBF910898 < (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((-7))) | func_133((l_136 , ((((l_137 | l_138) <= 0x58AC) == ((safe_add_func_int16_t_s_s(l_120, l_136)) & l_123)) | (-1))), l_136)), 65532U)), l_123))) || 0x91EC) == 0x31F6) , 0x2022F198) && 4294967295U) , 0xAAB0)))))
                { 
                    uint16_t l_499 = 65531U;
                    int32_t l_514 = 0x5EF2E33E;
                    l_514 = (((safe_rshift_func_int16_t_s_u(p_116, 1)) || (safe_add_func_int16_t_s_s(l_499, p_116))) >= func_133((p_116 < ((((safe_lshift_func_int16_t_s_u(l_120, 12)) < (safe_rshift_func_int16_t_s_s(((l_120 > (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((0xB52A002B & (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((((p_116 != (l_120 >= 0)) & 65526U) > 0xFCA0) || 0x3594) ^ p_116), p_116)) , p_116), p_116))), 2)), p_116))) >= p_116), 1))) , 0x6600) , 0xEE61)), l_120));
                    l_123 = (func_133((l_499 >= p_116), ((~1U) <= func_133(l_514, p_116))) >= l_117);
                }
                else
                { 
                    uint16_t l_517 = 0xFB32;
                    l_516 = p_116;
                    l_517 = l_138;
                }
                l_123 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_138, 4)), p_116));
            }
            else
            { 
                uint32_t l_522[9] = {4294967295U,0x9D51BEF5,0x9D51BEF5,4294967295U,0x9D51BEF5,0x9D51BEF5,4294967295U,0x9D51BEF5,0x9D51BEF5};
                uint32_t l_529 = 0xBF2DE3A6;
                int32_t l_562 = 1;
                int32_t l_579 = 0xD989AD27;
                int i;
                for (l_123 = 8; (l_123 >= 0); l_123 -= 1)
                { 
                    uint32_t l_528 = 8U;
                    int32_t l_531 = (-1);
                    for (l_516 = 6; (l_516 >= 1); l_516 -= 1)
                    { 
                        int i;
                        l_523 = (l_522[l_123] != p_116);
                        l_523 = (((((safe_mul_func_uint16_t_u_u(65532U, (((((safe_lshift_func_int16_t_s_u(l_528, l_516)) ^ p_116) <= ((9U & (((p_116 , (p_116 & (l_117 != ((0xCC1448BC != l_137) , l_522[l_123])))) ^ l_522[l_123]) <= p_116)) , p_116)) ^ l_529) | l_136))) | p_116) , 0x8420) | 1U) && l_117);
                    }
                    for (l_136 = 8; (l_136 >= 0); l_136 -= 1)
                    { 
                        uint32_t l_534 = 0U;
                        l_531 = l_530[0][2][2];
                        l_523 = ((l_516 > ((safe_sub_func_uint32_t_u_u(l_534, (safe_mul_func_uint16_t_u_u(l_530[1][8][3], p_116)))) < ((safe_lshift_func_int16_t_s_u(l_534, (((safe_unary_minus_func_uint32_t_u((p_116 >= l_120))) && (safe_div_func_uint32_t_u_u((l_534 <= (safe_lshift_func_int16_t_s_u(p_116, 14))), p_116))) != l_522[3]))) || 0x707F))) && l_123);
                        l_531 = l_534;
                        l_549 = (safe_mul_func_int16_t_s_s((p_116 == (p_116 > (l_523 , 0xD5B4))), (((~(0x578C & (p_116 , p_116))) && (safe_div_func_int32_t_s_s(l_120, (-1)))) , p_116)));
                    }
                    l_562 = (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((-1), (safe_add_func_uint32_t_u_u((p_116 , p_116), p_116)))) ^ l_120), ((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x1490, (__builtin_popcountll((safe_div_func_uint32_t_u_u(l_523, l_137))) != p_116))), 0xE6A1)) && l_137)));
                }
                l_562 = (p_116 != ((safe_mod_func_uint32_t_u_u(l_137, l_562)) ^ (!(safe_mod_func_uint32_t_u_u((p_116 || (safe_rshift_func_uint16_t_u_s(0x5C49, __builtin_ctzll((p_116 != (l_136 | 0xD0FF5244)))))), p_116)))));
                l_523 = (func_133((l_136 > (safe_lshift_func_uint16_t_u_s((!(l_136 < (((safe_sub_func_int16_t_s_s(((p_116 && (safe_div_func_uint16_t_u_u(l_516, l_562))) == ((((p_116 , l_123) || (l_523 == (((safe_div_func_int32_t_s_s((p_116 <= 0x246D), p_116)) , 0xAFCF4280) , l_522[6]))) | (-7)) && p_116)), 0xCD26)) && l_549) && l_117))), l_579))), l_117) && p_116);
            }
            if (l_117)
            { 
                l_123 = (p_116 , p_116);
                l_123 = p_116;
            }
            else
            { 
                const int32_t l_582[8] = {0,0,0,0,0,0,0,0};
                int i;
                for (l_516 = 0; (l_516 == 10); l_516++)
                { 
                    if (l_582[6])
                        break;
                }
                l_549 = l_137;
                for (l_549 = 0; (l_549 <= 1); l_549 += 1)
                { 
                    int i, j, k;
                    if (l_530[l_549][(l_549 + 4)][l_549])
                    { 
                        l_123 = p_116;
                    }
                    else
                    { 
                        l_590 = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_530[l_549][(l_549 + 4)][l_549], l_136)), __builtin_parity(p_116))) < (((((safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_int32_t_s(p_116)) ^ (-4)) , __builtin_parityl(p_116)), (((__builtin_ffsll(l_523) >= 0) , 0x5FBF) < l_549))) ^ p_116) | 1U) && 1) == p_116));
                        return l_530[l_549][(l_549 + 4)][l_549];
                    }
                }
                if (l_582[6])
                    break;
            }
        }
    }
    for (l_137 = 0; l_137 < 4; l_137 += 1)
    {
        for (l_516 = 0; l_516 < 9; l_516 += 1)
        {
            l_591[l_137][l_516] = 0x2386;
        }
    }
    l_117 = (!(p_116 <= (safe_rshift_func_int16_t_s_s((l_516 > ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_116)), p_116)) != l_137)), 3))));
    return p_116;
}




static uint16_t  func_133(uint16_t  p_134, uint32_t  p_135)
{ 
    uint32_t l_144[10][7] = {{0x5362DC17,0xD6F68957,4294967289U,0xD6F68957,0x5362DC17,4294967289U,4294967286U},{4294967286U,1U,4294967295U,4294967286U,4294967295U,1U,4294967286U},{1U,4294967286U,1U,4294967295U,4294967286U,4294967295U,1U},{4294967286U,4294967286U,4294967289U,0x5362DC17,0xD6F68957,4294967289U,0xD6F68957},{0x5362DC17,1U,1U,0x5362DC17,4294967295U,1U,0x5362DC17},{1U,0xD6F68957,4294967295U,4294967295U,0xD6F68957,1U,1U},{0xD6F68957,0x5362DC17,4294967289U,4294967286U,4294967286U,4294967289U,0x5362DC17},{0xD6F68957,1U,1U,0xD6F68957,4294967295U,4294967295U,4294967295U},{4294967295U,1U,4294967295U,4294967295U,1U,4294967289U,4294967289U},{1U,4294967295U,4294967286U,4294967295U,1U,4294967286U,1U}};
    uint32_t l_149 = 4294967295U;
    int32_t l_217 = 0x268B7DAD;
    int i, j;
lbl_490:
    for (p_134 = (-8); (p_134 != 51); p_134++)
    { 
        uint32_t l_143[2];
        int32_t l_150 = 0x0E0566CB;
        const uint16_t l_184 = 0x8D7A;
        int16_t l_246 = (-1);
        int32_t l_364 = 0xE749ECA4;
        int16_t l_381 = (-10);
        uint32_t l_467 = 0x1745E15D;
        int i;
        for (i = 0; i < 2; i++)
            l_143[i] = 4294967295U;
        l_144[2][1] = __builtin_parity(l_143[0]);
        if (p_134)
            goto lbl_490;
        if (p_135)
        { 
            uint16_t l_166 = 0xF33B;
            int32_t l_185[9] = {1,0,0,1,0,0,1,0,0};
            int i;
            for (p_135 = 0; (p_135 == 30); p_135++)
            { 
                int16_t l_157 = 0;
                int16_t l_176 = 5;
                int32_t l_181[9] = {3,0x6050D3AC,0x6050D3AC,3,0x6050D3AC,0x6050D3AC,3,0x6050D3AC,0x6050D3AC};
                int i;
                l_150 = (safe_sub_func_uint16_t_u_u((p_134 >= 4294967295U), l_149));
                l_166 = (safe_mod_func_int16_t_s_s((((-1) <= (p_135 >= (safe_mod_func_uint32_t_u_u((p_135 , __builtin_clz(((((-2) == ((safe_rshift_func_int16_t_s_s((((0x0DE8C290 > l_157) , ((4294967289U < (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_135, (safe_lshift_func_int16_t_s_u((l_157 >= p_134), 14)))), l_157)), 11)) , l_144[7][3]) & 0x786F)) & p_134)) && 0), 4)) , l_144[2][1])) , p_134) && 0x362F))), 0x7413A7E4)))) != p_135), p_135));
                if (p_134)
                    break;
                for (l_157 = 6; (l_157 >= 0); l_157 -= 1)
                { 
                    int i, j;
                    if ((l_144[l_157][l_157] || ((safe_div_func_uint16_t_u_u(0x58D7, l_144[(l_157 + 3)][l_157])) , ((l_157 > (((!((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_176 , (safe_sub_func_uint32_t_u_u(((((0xF9EDA75D && (l_166 > p_134)) | (((((safe_mod_func_int16_t_s_s((p_135 , p_134), l_143[0])) & p_135) || p_134) <= l_176) >= l_144[(l_157 + 3)][l_157])) , p_134) >= l_157), p_134))), l_157)), l_149)), l_150)) & p_134)) >= p_134) > l_150)) <= p_134))))
                    { 
                        return l_143[0];
                    }
                    else
                    { 
                        l_181[4] = ((p_134 || p_135) , l_166);
                    }
                }
            }
            l_150 = l_143[0];
            l_185[5] = (0xB8AC > ((p_135 || (4294967291U | p_134)) != ((safe_rshift_func_uint16_t_u_s(p_135, 11)) , (l_184 , p_134))));
        }
        else
        { 
            uint32_t l_216 = 0x98F75930;
            int32_t l_259[10] = {0,0,0,0,0,0,0,0,0,0};
            uint32_t l_284 = 0xD79FE803;
            const int32_t l_330 = 0xBF46D65B;
            uint32_t l_375 = 0x9276F7A8;
            uint16_t l_439 = 0xDC0B;
            int i;
            for (l_150 = 2; (l_150 <= 6); l_150 += 1)
            { 
                uint16_t l_198 = 2U;
                int32_t l_218 = (-2);
                int i, j;
                if ((safe_mul_func_int16_t_s_s(l_144[l_150][l_150], (safe_lshift_func_uint16_t_u_u(((l_144[2][0] , (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s(p_134, (!__builtin_ctzl((safe_lshift_func_uint16_t_u_u(l_198, 0)))))))) & (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(l_150, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((l_184 == (safe_sub_func_int16_t_s_s(p_134, ((((safe_add_func_uint16_t_u_u(l_216, p_135)) , p_135) || 5U) || l_144[2][1])))), p_135)))), l_144[2][1])) || l_143[1]) == 1U), l_198)), 13)))), 4))), l_144[2][2]))) , p_135), 11)))))
                { 
                    return l_216;
                }
                else
                { 
                    for (p_135 = 1; (p_135 <= 6); p_135 += 1)
                    { 
                        l_217 = (-9);
                        if (p_134)
                            break;
                        if (l_217)
                            continue;
                    }
                }
                for (l_198 = 0; (l_198 <= 1); l_198 += 1)
                { 
                    uint32_t l_221 = 0x81DA4DAD;
                    int16_t l_227 = 0x3F68;
                    int32_t l_247 = 0x26950C90;
                    for (l_217 = 0; (l_217 <= 6); l_217 += 1)
                    { 
                        uint32_t l_222[1][6][3] = {{{8U,4294967290U,4294967290U},{0x3DAB8F45,4294967292U,0x3DAB8F45},{8U,8U,4294967290U},{0xA7944967,4294967292U,0xA7944967},{8U,4294967290U,4294967290U},{0x3DAB8F45,4294967292U,0x3DAB8F45}}};
                        int32_t l_228 = (-3);
                        int i, j, k;
                        l_218 = 0;
                        l_228 = (((safe_sub_func_uint32_t_u_u((l_143[l_198] <= (0x1B8B > l_144[l_150][l_150])), (0xF8DB93C2 < ((l_221 , ((l_222[0][4][2] || p_134) == (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(l_222[0][4][0], (l_143[l_198] , p_134))), l_184)))) != l_227)))) < (-1)) | p_134);
                        l_247 = __builtin_ctzll((((safe_lshift_func_uint16_t_u_s(((((~(safe_add_func_int16_t_s_s((l_198 , (p_135 > (safe_div_func_uint32_t_u_u((((l_222[0][4][0] || __builtin_ia32_crc32qi(l_184, ((l_221 == (((safe_div_func_uint16_t_u_u(((__builtin_ia32_crc32qi((safe_rshift_func_int16_t_s_u(l_228, p_135)), (safe_lshift_func_int16_t_s_u(((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(1U, (((l_246 , l_222[0][4][2]) | p_135) > 0x1525431B))), 0x377B)) < l_218) , l_216) >= p_135), 6))) , l_216) >= p_135), 0x7FBF)) , 0x46F7C305) , (-3))) , p_135))) , 6) & 0xF460), p_134)))), l_228))) >= (-1)) == p_134) , p_134), 5)) < 1) , p_134));
                        l_259[2] = (safe_add_func_int32_t_s_s((p_134 != ((0x67D2B290 == __builtin_bswap64(l_144[l_150][l_150])) & ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s(p_134)) || (safe_div_func_int16_t_s_s(((l_144[2][1] < (p_135 & p_134)) >= (safe_add_func_uint16_t_u_u(p_134, 0xE7E2))), p_134))), l_227)) , (-1)), 0xBE574E03)) , l_216))), l_144[4][4]));
                    }
                    if ((((((safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(p_135, 0x0438E2FD)) , ((__builtin_ffsll(((l_247 <= (safe_sub_func_int32_t_s_s((p_135 > p_134), p_135))) || (p_134 ^ (safe_rshift_func_uint16_t_u_u(l_144[l_150][l_150], p_135))))) >= 0x152B1CF9) < l_259[2])), 0x66AF)) & 0) , l_217) < l_218) , 9))
                    { 
                        uint16_t l_272 = 0x9929;
                        int32_t l_285[9][6] = {{0xA33FF738,0xAB918B3C,0x48FCCA4D,0x48FCCA4D,0xAB918B3C,0xA33FF738},{1,0,0x48FCCA4D,0xA33FF738,0x071F1495,1},{0x1C668768,0,0xA33FF738,0x1C668768,0xAB918B3C,0x1C668768},{0x1C668768,0xAB918B3C,0x1C668768,0xA33FF738,0,0x1C668768},{1,0x071F1495,0xA33FF738,0x48FCCA4D,0,1},{0xA33FF738,0xAB918B3C,0x48FCCA4D,0x48FCCA4D,0xAB918B3C,0xA33FF738},{1,0,0x48FCCA4D,0xA33FF738,0x071F1495,1},{0x1C668768,0,0xA33FF738,0x1C668768,0xAB918B3C,0x1C668768},{0x1C668768,0xAB918B3C,0x1C668768,0xA33FF738,0,0x1C668768}};
                        int i, j;
                        l_285[8][0] = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((l_272 == ((safe_add_func_int32_t_s_s(__builtin_ctz(((safe_div_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s(0U, 11)) >= (safe_mul_func_int16_t_s_s(0x1C7F, (l_144[0][0] , ((!l_259[2]) , p_135))))) | ((((safe_rshift_func_int16_t_s_u((((p_135 > 1U) , 0x43D45A5B) , l_144[2][1]), p_135)) > l_284) & 2U) < (-1))), p_134)) | 0xF5A8)), p_134)) && l_217)), 7)), l_198)) < l_184);
                        l_259[7] = (safe_lshift_func_uint16_t_u_s((0U >= (!(l_217 , (p_135 , (safe_sub_func_uint16_t_u_u(l_198, l_150)))))), (safe_add_func_int16_t_s_s(p_134, (safe_mod_func_int16_t_s_s(l_143[0], (((safe_unary_minus_func_int32_t_s((__builtin_popcountll((p_135 | l_227)) & 5U))) , l_259[9]) , p_134)))))));
                    }
                    else
                    { 
                        uint32_t l_315 = 0x092EE9E6;
                        uint16_t l_316[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_316[i] = 0x03DB;
                        l_259[9] = (safe_div_func_int32_t_s_s(p_134, (safe_lshift_func_uint16_t_u_u(l_216, (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((0 != l_246), (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(p_134, p_134)))))), (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(0, (safe_sub_func_int16_t_s_s(l_315, p_135)))), l_316[5]))))))));
                        return l_316[5];
                    }
                    for (l_217 = 1; (l_217 >= 0); l_217 -= 1)
                    { 
                        int i;
                        l_259[(l_150 + 1)] = ((0x88B3 || ((l_143[l_217] , (l_143[l_217] >= (l_259[(l_217 + 1)] >= l_259[(l_150 + 3)]))) < l_284)) || (safe_lshift_func_uint16_t_u_u((l_144[l_150][l_150] , (!(p_134 != (l_216 > p_135)))), 7)));
                        l_247 = (l_259[(l_150 + 1)] , (4294967295U ^ (-1)));
                    }
                }
            }
            l_150 = (((((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_246, ((l_149 & l_330) < p_134))) > ((safe_lshift_func_uint16_t_u_s(((~((p_135 , (((safe_lshift_func_int16_t_s_u(((((l_259[1] < (safe_lshift_func_int16_t_s_u(l_149, 3))) == (0x7D07 > (((p_135 >= p_134) && 0x4731) ^ l_330))) , 0x52E9BAA9) && p_135), l_144[4][1])) | l_143[0]) && p_134)) >= l_259[5])) > 0x8A7C), 1)) , p_135)), p_135)), l_144[5][0])), l_184)) < l_216) && l_143[0]) >= 0x3CF1) && l_330);
            l_217 = (p_134 , (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_134, 5)), (p_135 , l_330))));
            for (l_150 = 0; (l_150 == 6); l_150++)
            { 
                int32_t l_356 = (-1);
                uint32_t l_363 = 0x44B6C62E;
                int16_t l_394[6] = {1,0,1,1,0,1};
                int i;
                l_364 = (0x4A846E44 && ((!(~(safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(__builtin_ctz(((((safe_mul_func_int16_t_s_s((l_356 | l_356), (((p_134 | l_143[0]) >= (safe_lshift_func_uint16_t_u_s(__builtin_popcount(p_134), l_216))) , ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_246, l_259[2])) , l_143[0]), p_135)) , l_363)))) ^ (-3)) , 5U) , 0x15CCFE2A)), l_217)), p_135)), 0x4B94D1ED)), l_216)))) & (-8)));
                l_259[8] = __builtin_bswap64(((safe_lshift_func_int16_t_s_u(((l_259[2] , ((safe_div_func_uint32_t_u_u((l_184 || ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((l_216 == l_149) && l_364), ((__builtin_bswap32((p_134 , ((safe_sub_func_uint32_t_u_u(l_375, ((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((0x87B8 != p_135), l_363)), 11)))) && 0xD007751A))) , 0xA99F0648))) , l_381) & 0x6F8E1793))), p_134)) , 0x48CC)), p_135)) , l_217)) == l_364), 11)) , p_134));
                for (l_381 = 0; (l_381 == (-28)); l_381 = safe_sub_func_uint32_t_u_u(l_381, 6))
                { 
                    uint16_t l_397 = 65530U;
                    for (l_363 = 0; (l_363 != 46); l_363 = safe_add_func_uint16_t_u_u(l_363, 1))
                    { 
                        uint16_t l_396 = 0x0267;
                        l_396 = (p_134 , ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(1, l_381)) , ((safe_add_func_int32_t_s_s(p_135, l_394[4])) , (~(p_134 && p_135)))) && (p_134 || 0x1B5F)), l_217)), l_150)) > l_284));
                        l_217 = l_397;
                    }
                }
                if (((safe_mul_func_uint16_t_u_u((__builtin_clzll(l_143[0]) != (((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u(p_135, l_394[4])) , (!(safe_sub_func_int32_t_s_s(0, (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((p_135 <= ((~(safe_mod_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u(l_356, l_216)) ^ p_135) || 4294967295U), l_364))) == 0U)), 0)) > l_364) <= l_246), l_330)))))) | l_363), l_184)) , p_134) & 0x2C2ECB7F)), l_363)) , p_134))
                { 
                    uint32_t l_425 = 0x7F1E7F25;
                    const int32_t l_430[2][7][3] = {{{1,(-3),1},{0x90A043C2,(-1),0x90A043C2},{1,(-3),1},{0x90A043C2,(-1),0x90A043C2},{1,(-3),1},{0x90A043C2,(-1),0x90A043C2},{1,(-3),1}},{{0x90A043C2,(-1),0x90A043C2},{1,(-3),1},{0x90A043C2,(-1),0x90A043C2},{1,(-3),1},{0x90A043C2,(-1),0x90A043C2},{1,(-3),1},{0x90A043C2,(-1),0x90A043C2}}};
                    int i, j, k;
                    for (l_363 = 0; (l_363 == 3); l_363 = safe_add_func_uint16_t_u_u(l_363, 1))
                    { 
                        const uint32_t l_426 = 4294967291U;
                        int32_t l_429 = 0x1EF5FA5D;
                        l_217 = ((__builtin_bswap32(p_134) == (((((((safe_mod_func_int32_t_s_s(p_135, (~p_134))) , p_135) , (((safe_mul_func_uint16_t_u_u(7U, ((((safe_lshift_func_int16_t_s_s(p_134, p_135)) >= (l_144[2][1] && l_144[2][5])) , l_425) >= p_135))) ^ l_426) , l_394[1])) > l_144[2][1]) && 0xD4D9) == p_134) < p_134)) != p_135);
                        l_217 = (l_184 != (safe_div_func_int16_t_s_s(((0x43F89A18 > (l_429 , ((l_429 & p_134) & l_425))) == l_430[0][2][1]), l_144[2][3])));
                        l_356 = ((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((__builtin_ia32_crc32qi(p_134, ((((l_426 >= ((safe_mul_func_uint16_t_u_u(p_135, (0U && (p_135 , l_144[9][0])))) || (__builtin_parity(l_429) , (safe_add_func_int32_t_s_s((((p_134 , l_439) || l_150) != l_429), l_439))))) != l_430[1][5][2]) <= 0) || 2U)) != l_217) > l_426), l_284)) & p_134), p_134)) != l_429);
                        l_356 = 0x80BCEAF3;
                    }
                    l_259[4] = l_144[2][1];
                }
                else
                { 
                    int32_t l_483 = 0x9241ECF1;
                    int32_t l_486[7][9][4] = {{{1,7,(-5),1},{0x2CE8A9F1,7,0x88B26008,7},{7,(-7),1,1},{0x9E3838C3,0x2CE8A9F1,(-5),1},{0xDFAAABA1,7,0xBA9A7245,7},{0xDFAAABA1,(-5),(-5),0xDFAAABA1},{0x9E3838C3,7,1,(-5)},{1,0x9E3838C3,7,(-7)},{(-5),4,0xBA9A7245,(-7)}},{{0x88B26008,0x9E3838C3,0x88B26008,0xBA9A7245},{1,1,0xDFAAABA1,1},{(-5),0xBA9A7245,1,1},{0xBA9A7245,0x9E3838C3,1,1},{(-5),(-5),0xDFAAABA1,(-7)},{1,4,0x88B26008,1},{0x88B26008,1,0xBA9A7245,0x88B26008},{(-5),1,7,1},{1,4,1,(-7)}},{{4,(-5),0xBA9A7245,1},{1,0x9E3838C3,1,1},{1,0xBA9A7245,0xBA9A7245,1},{4,1,1,0xBA9A7245},{1,0x9E3838C3,7,(-7)},{(-5),4,0xBA9A7245,(-7)},{0x88B26008,0x9E3838C3,0x88B26008,0xBA9A7245},{1,1,0xDFAAABA1,1},{(-5),0xBA9A7245,1,1}},{{0xBA9A7245,0x9E3838C3,1,1},{(-5),(-5),0xDFAAABA1,(-7)},{1,4,0x88B26008,1},{0x88B26008,1,0xBA9A7245,0x88B26008},{(-5),1,7,1},{1,4,1,(-7)},{4,(-5),0xBA9A7245,1},{1,0x9E3838C3,1,1},{1,0xBA9A7245,0xBA9A7245,1}},{{4,1,1,0xBA9A7245},{1,0x9E3838C3,7,(-7)},{(-5),4,0xBA9A7245,(-7)},{0x88B26008,0x9E3838C3,0x88B26008,0xBA9A7245},{1,1,0xDFAAABA1,1},{(-5),0xBA9A7245,1,1},{0xBA9A7245,0x9E3838C3,1,1},{(-5),(-5),0xDFAAABA1,(-7)},{1,4,0x88B26008,1}},{{0x88B26008,1,0xBA9A7245,0x88B26008},{(-5),1,7,1},{1,4,1,(-7)},{4,(-5),0xBA9A7245,1},{1,0x9E3838C3,1,1},{1,0xBA9A7245,0xBA9A7245,1},{4,1,1,0xBA9A7245},{1,0x9E3838C3,7,(-7)},{(-5),4,0xBA9A7245,(-7)}},{{0x88B26008,0x9E3838C3,7,1},{1,0x88B26008,1,1},{0xBA9A7245,1,0x2CE8A9F1,0x88B26008},{1,4,0x2CE8A9F1,0x2CE8A9F1},{0xBA9A7245,0xBA9A7245,1,4},{1,7,7,0x88B26008},{7,0x88B26008,1,7},{0xBA9A7245,0x88B26008,0x9E3838C3,0x88B26008},{0x88B26008,7,0x2CE8A9F1,4}}};
                    int i, j, k;
                    l_217 = l_149;
                    for (l_364 = 5; (l_364 >= 0); l_364 -= 1)
                    { 
                        int i;
                        l_217 = (__builtin_popcountll(l_394[l_364]) , (safe_lshift_func_uint16_t_u_u(l_394[l_364], (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((!p_134), (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(0x0FB9, 11)) , ((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(0xF3D2, 10)) ^ __builtin_popcount(l_143[0])), ((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(l_284, l_394[l_364])), 11)) , 0x6929))), l_150)) , l_394[4])), l_467)))), 9)), p_135)) , l_259[2]) , p_134), 4)) ^ 0xDBA9), p_135)))));
                        l_259[6] = ((4294967294U | (safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((l_375 && 1), (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((p_134 , (0xE3168454 ^ (p_135 , (p_134 < (p_135 != __builtin_ffsll(l_483)))))) < l_394[l_364]), 0xEF0A)), p_134)))), p_135)))) , l_381) , 0x8A444AF9), p_134)), 1)), p_134))) >= p_135);
                    }
                    for (l_467 = 21; (l_467 <= 15); l_467 = safe_sub_func_uint16_t_u_u(l_467, 1))
                    { 
                        l_486[4][5][1] = l_184;
                        l_486[1][0][1] = (p_135 , (safe_div_func_int16_t_s_s(0x1807, (safe_unary_minus_func_uint32_t_u(p_135)))));
                    }
                }
            }
        }
        if (p_135)
            continue;
    }
    for (l_217 = 6; (l_217 >= 0); l_217 -= 1)
    { 
        int32_t l_493 = 1;
        if (l_149)
            goto lbl_490;
        for (p_135 = 0; (p_135 <= 6); p_135 += 1)
        { 
            int32_t l_494 = 0x58830908;
            int i, j;
            l_494 = (l_144[(l_217 + 3)][l_217] , (l_149 , (l_144[(l_217 + 3)][l_217] || ((safe_lshift_func_int16_t_s_u(l_144[2][1], l_144[2][1])) , (p_135 && __builtin_ia32_crc32qi(((l_493 != p_135) , p_135), l_493))))));
        }
    }
    return p_135;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_32();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



