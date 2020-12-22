


#define NO_LONGLONG



static long __undefined;



static int16_t g_4 = 0x540D;
static int32_t g_25 = 0xE135E1F6;



static float  func_30(void);





static float  func_30(void)
{ 
    float l_33 = 0x2.1p-1;
    int32_t l_34[6][10][4] = {{{0x85FCB444,1,0xC46221EB,0xF81A770A},{1,0,2,7},{(-5),0x8E56A96D,0x8E56A96D,(-5)},{0x4C12F69A,(-1),0,(-5)},{0xF433C8A0,1,1,0xAC86E89B},{0x62BB2C59,(-1),(-4),0xAC86E89B},{0x9C42FA43,1,0x218670FC,(-5)},{0x1B546539,(-1),(-9),(-5)},{0xBC130268,0x8E56A96D,(-9),7},{(-1),0,(-8),0xF81A770A}},{{5,1,0x78CCA699,(-9)},{0xF5EBEC5E,(-5),(-5),0x37FFEAC8},{0x8E56A96D,0xCBBBC254,0x5D57D38C,0xC46221EB},{(-1),1,0x7F13BCF5,(-1)},{(-1),2,1,0},{0xF5EBEC5E,0x12A83A0F,0,0},{0x62BB2C59,0x7280DDA2,0x6158E9D2,(-8)},{5,0x1B546539,(-5),0},{2,(-1),0x54656E2E,0},{0x5D57D38C,0xF433C8A0,(-8),(-6)}},{{(-2),(-4),3,3},{0,0,0,0x9C42FA43},{0xAC86E89B,0x5C8A52B4,0x525A5285,(-9)},{0xB52DD860,5,0xF5EBEC5E,1},{3,1,1,0xF433C8A0},{(-4),0,0x1B546539,4},{(-8),0,0x4D4E2B79,1},{1,3,(-9),0xC86992F1},{0x85FCB444,2,0x073E70D2,0x8EA47160},{0xC86992F1,(-4),0xC86992F1,0xBC130268}},{{0xBB6AF833,0xF89F2E07,7,0xD8BE776E},{0x12A83A0F,0x62BB2C59,(-1),0xF89F2E07},{6,1,(-1),0x1B546539},{0x12A83A0F,0x81F6C987,7,1},{0xBB6AF833,0xAC86E89B,0xC86992F1,(-8)},{0xC86992F1,(-8),0x073E70D2,7},{0x85FCB444,0,(-9),(-10)},{1,0x9426CEFC,0x4D4E2B79,0x7F13BCF5},{(-8),(-1),0x1B546539,(-9)},{(-4),0xC46221EB,1,0}},{{3,(-1),0xF5EBEC5E,0},{0xB52DD860,0x0783DB47,0x525A5285,0},{0xAC86E89B,0x525A5285,0,0x3A56CF6D},{0,0,3,0x7280DDA2},{(-2),0x2002449E,(-8),0xAC86E89B},{0x5D57D38C,(-1),0x54656E2E,0x218670FC},{2,3,(-5),1},{5,1,0x6158E9D2,1},{0x62BB2C59,(-7),0,0xBB6AF833},{0xF5EBEC5E,(-4),1,0x81002A95}},{{(-1),6,0x7F13BCF5,0xF5EBEC5E},{(-1),0x445A8CCE,0x5D57D38C,1},{0x8E56A96D,(-1),(-5),0x4C12F69A},{0xF81A770A,0x305ABA9A,(-2),(-8)},{(-1),0x8EA47160,0xB52DD860,(-1)},{1,0x4C12F69A,0x0783DB47,0x0783DB47},{0,0,1,0x073E70D2},{(-9),(-2),5,0},{(-6),0xB90CB933,(-8),5},{0,0x37FFEAC8,0x8EA47160,0xCBBBC254}}};
    int i, j, k;
    g_25 = __builtin_parityll((3U & (g_25 | __builtin_clzll(g_25))));
    g_25 = __builtin_popcountll((l_34[4][1][1] = ((uint16_t)65531U >> (uint16_t)l_34[4][1][1])));
    return l_34[5][0][1];
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_30();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



