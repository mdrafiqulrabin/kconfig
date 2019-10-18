


#define NO_LONGLONG



static long __undefined;



static uint32_t g_7[6][10] = {{4294967295U,9U,4294967295U,4294967295U,9U,4294967295U,4294967295U,9U,4294967295U,4294967295U},{9U,9U,0xC3C39BA0,9U,9U,0xC3C39BA0,9U,9U,0xC3C39BA0,9U},{9U,4294967295U,4294967295U,9U,4294967295U,4294967295U,9U,4294967295U,4294967295U,9U},{4294967295U,9U,4294967295U,4294967295U,9U,4294967295U,4294967295U,9U,4294967295U,4294967295U},{9U,9U,0xC3C39BA0,9U,9U,0xC3C39BA0,4294967295U,4294967295U,9U,4294967295U},{4294967295U,0xC3C39BA0,0xC3C39BA0,4294967295U,0xC3C39BA0,0xC3C39BA0,4294967295U,0xC3C39BA0,0xC3C39BA0,4294967295U}};
static uint16_t g_33[10][8][3] = {{{65527U,0x416D,0x0525},{0x8CD9,0x7412,65527U},{0x5D01,0x255B,5U},{0U,0x416D,65532U},{0x5D01,0x1B09,0x5FF7},{0x8CD9,0x48BB,5U},{65527U,0xB1EC,0xBB1D},{65527U,0x8C24,0x5D01}},{{0x8CD9,0x255B,0xD2C2},{0x5D01,0xE96B,0x97EC},{0U,0x8C24,0x5FF7},{0x5D01,65532U,0x51D1},{0x8CD9,65535U,0x97EC},{65527U,0x1B09,65527U},{65527U,0x1477,3U},{0x8CD9,0xE96B,0xBB1D}},{{0x5D01,0x7412,0xA7BF},{0U,0x1477,0x51D1},{0x5D01,0xB1EC,65532U},{0x8CD9,0U,0xA7BF},{65527U,65532U,0xD2C2},{65527U,0x416D,0x0525},{0x8CD9,0x7412,65527U},{0x5D01,0x255B,5U}},{{0U,0x416D,65532U},{0x5D01,0x1B09,0x5FF7},{0x8CD9,0x48BB,5U},{65527U,0xB1EC,0xBB1D},{65527U,0x8C24,0x5D01},{0x8CD9,0x255B,0xD2C2},{0x5D01,0xE96B,0x97EC},{0U,0x8C24,0x5FF7}},{{0x5D01,65532U,0x51D1},{0x8CD9,65535U,0x97EC},{65527U,0x1B09,65527U},{65527U,0x1477,3U},{0x8CD9,0xE96B,0xBB1D},{0x5D01,0x7412,0xA7BF},{0U,0x1477,0x51D1},{0x5D01,0xB1EC,65532U}},{{0x8CD9,0U,0xA7BF},{65527U,65532U,0xD2C2},{65527U,0x416D,0x0525},{0x8CD9,0x7412,65527U},{0x5D01,0x255B,5U},{0U,0x416D,65532U},{0x5D01,0x1B09,0x5FF7},{0x8CD9,0x48BB,5U}},{{65527U,0xB1EC,0xBB1D},{65527U,0x8C24,0x5D01},{0x8CD9,0x255B,0xD2C2},{0x5D01,0xE96B,0x97EC},{0U,0x8C24,0x5FF7},{0x5D01,65532U,0x51D1},{0x8CD9,65535U,0x97EC},{65527U,0x1B09,65527U}},{{65527U,0x1477,3U},{0x8CD9,0xE96B,0xBB1D},{0x5D01,0x7412,0xA7BF},{0xDDBB,65527U,0xDBEC},{0x84B5,65529U,0xA4C6},{9U,5U,5U},{0x9EF8,3U,0xB17B},{0x9EF8,0xBB1D,65533U}},{{9U,0x2510,0x9EF8},{0x84B5,0U,0xEB66},{0xDDBB,0xBB1D,0xA4C6},{0x84B5,0x49A5,65535U},{9U,0xA7BF,0xEB66},{0x9EF8,65529U,65532U},{0x9EF8,0xD2C2,0x84B5},{9U,0U,0xB17B}},{{0x84B5,65535U,0x821F},{0xDDBB,0xD2C2,65535U},{0x84B5,3U,0xDBEC},{9U,0x97EC,0x821F},{0x9EF8,0x49A5,0x9EF8},{0x9EF8,65527U,0x14A9},{9U,65535U,65532U},{0x84B5,0x2510,5U}}};
static int32_t g_38 = 0x58D911AC;



static int32_t  func_29(void);





static int32_t  func_29(void)
{ 
    int32_t l_32[8][3] = {{0xFC75DAA0,0x813C27F3,(-9)},{0xBBD18838,0x813C27F3,0xBBD18838},{9,0xFC75DAA0,(-9)},{9,9,0xFC75DAA0},{0xBBD18838,0xFC75DAA0,0xFC75DAA0},{0xFC75DAA0,0x813C27F3,(-9)},{0xBBD18838,0x813C27F3,0xBBD18838},{9,0xFC75DAA0,(-9)}};
    int i, j;
    g_38 |= ((uint16_t)((g_33[0][4][1] |= l_32[5][0]) | ((int16_t)l_32[5][0] >> (int16_t)((uint16_t)0x4499 * (uint16_t)g_7[2][8]))) - (uint16_t)(-1));
    return l_32[5][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_29();
    for (i = 0; i < 6; i = i + 1)
    {
        for (j = 0; j < 10; j = j + 1)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i = i + 1)
    {
        for (j = 0; j < 8; j = j + 1)
        {
            for (k = 0; k < 3; k = k + 1)
            {
                transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



