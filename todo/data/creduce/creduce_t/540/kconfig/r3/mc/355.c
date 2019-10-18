


#define NO_LONGLONG



static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   unsigned f2 : 28;
   int8_t  f3;
   float  f4;
};


static uint16_t g_5 = 0x845D;
static uint8_t g_30[1][6][4] = {{{0x53,0x7A,0x7A,0x53},{0x7A,0x53,0x3B,250U},{0x7A,0x3B,0x7A,8U},{0x53,250U,8U,8U},{0x3B,0x3B,247U,250U},{250U,0x53,247U,0x53}}};
static int16_t g_35 = 1;
static uint8_t g_40 = 1U;



static int32_t  func_27(void);





static int32_t  func_27(void)
{ 
    float l_28[7][4][1] = {{{(-0x7.9p+1)},{0x9.7E3B6Fp+41},{0xA.17AB6Dp+65},{0xB.515466p+80}},{{0xA.17AB6Dp+65},{0x9.7E3B6Fp+41},{(-0x7.9p+1)},{(-0x7.9p+1)}},{{0x9.7E3B6Fp+41},{0xA.17AB6Dp+65},{0xB.515466p+80},{0xA.17AB6Dp+65}},{{0x9.7E3B6Fp+41},{(-0x7.9p+1)},{(-0x7.9p+1)},{0x9.7E3B6Fp+41}},{{0xA.17AB6Dp+65},{0xB.515466p+80},{0xA.17AB6Dp+65},{0x9.7E3B6Fp+41}},{{(-0x7.9p+1)},{(-0x7.9p+1)},{0xB.515466p+80},{0x9.7E3B6Fp+41}},{{0x7.0p-1},{0x9.7E3B6Fp+41},{0xB.515466p+80},{0x5.6F93BDp+37}}};
    int32_t l_29 = 1;
    int8_t l_38 = 0x5D;
    struct S0 l_48 = {0xD4A7C769,9,10703,-1,-0x6.Cp+1};
    int8_t l_49 = 0x7B;
    int i, j, k;
lbl_44:
    l_29 = l_28[2][1][0];
lbl_43:
    g_30[0][4][2] = l_29;
    for (l_29 = 0; (l_29 >= 21); l_29 = safe_add_func_uint8_t_u_u(l_29, 4))
    { 
        float l_36 = 0xF.ABF7C2p-46;
        int32_t l_39 = 0x9F486485;
        for (g_5 = (-8); (g_5 >= 7); g_5 = safe_add_func_int32_t_s_s(g_5, 2))
        { 
            int8_t l_37 = (-1);
            g_40--;
            if (l_29)
                goto lbl_43;
            if (g_40)
                goto lbl_44;
        }
    }
    for (g_40 = 0; (g_40 > 39); g_40 = safe_add_func_int16_t_s_s(g_40, 4))
    { 
        struct S0 l_47 = {0x9C010580,-1,12090,1,0x0.Ap+1};
        if (g_5)
            break;
        l_48 = l_47;
    }
    return l_49;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_30[i][j][k], "g_30[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



