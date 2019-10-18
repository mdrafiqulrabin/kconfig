


#define NO_LONGLONG



static long __undefined;



static float g_3 = 0x6.48BBCAp+22;
static int32_t g_4 = 0x99DADA43;
static uint16_t g_46 = 0xF15C;
static volatile float g_50[3][2][1] = {{{0x9.71B36Cp+57},{(-0x1.Dp-1)}},{{(-0x1.Dp-1)},{0x9.71B36Cp+57}},{{(-0x1.Dp-1)},{(-0x1.Dp-1)}}};
static uint32_t g_51 = 4294967295U;
static int16_t g_56 = 0x5188;



static int32_t  func_31(void);
static int16_t  func_40(int32_t  p_41, uint8_t  p_42, uint8_t  p_43, uint16_t  p_44, int32_t  p_45);





static int32_t  func_31(void)
{ 
    uint16_t l_32[3][6][2] = {{{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9}},{{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9}},{{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9},{0xE4A9,0xE4A9}}};
    int32_t l_49 = 0;
    int i, j, k;
    l_32[2][5][1]--;
    g_56 = ((uint16_t)((uint16_t)((~0x71A0) || ((((func_40(g_4, l_32[2][5][1], l_32[0][5][1], (g_46 = g_4), ((l_32[0][5][1] >= __builtin_ffs(((int32_t)(0x627E80A7 || (l_49 |= (__builtin_ffsl(l_32[2][5][1]) <= g_4))) - (int32_t)g_4))) , g_4)) < 0xC653) | (-8)) | g_4) ^ l_32[0][1][1])) - (uint16_t)65535U) << (uint16_t)g_4);
    return l_32[2][5][1];
}




static int16_t  func_40(int32_t  p_41, uint8_t  p_42, uint8_t  p_43, uint16_t  p_44, int32_t  p_45)
{ 
    int32_t l_54[9] = {(-7),(-7),(-7),(-7),(-7),(-7),(-7),(-7),(-7)};
    int32_t l_55 = 0x99FF93F8;
    int i;
    g_51++;
    l_55 ^= l_54[0];
    return l_55;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    transparent_crc_bytes (&g_3, sizeof(g_3), "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc_bytes(&g_50[i][j][k], sizeof(g_50[i][j][k]), "g_50[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



