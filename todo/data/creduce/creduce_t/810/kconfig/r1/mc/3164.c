


#define NO_LONGLONG



static long __undefined;



static uint32_t g_11[9] = {0xC63C4078,0xC63C4078,0xC63C4078,0xC63C4078,0xC63C4078,0xC63C4078,0xC63C4078,0xC63C4078,0xC63C4078};
static int32_t g_40 = 0x649D9592;
static int16_t g_43[10] = {6,6,6,6,6,6,6,6,6,6};



static int16_t  func_31(void);





static int16_t  func_31(void)
{ 
    int32_t l_34[3][7][6] = {{{0x4AF7BDD4,3,0x4FD52280,1,1,1},{3,0x717B38E5,0x2F37FC03,3,0x1B5F7A0D,1},{1,1,0x4FD52280,(-4),1,0xC4EB0A11},{0x1B5F7A0D,(-5),1,0x709E149C,1,(-1)},{1,1,3,0,0,0x1B5F7A0D},{1,1,0x717B38E5,0,0,1},{(-7),0x77FC7DF3,1,0,(-1),0x717B38E5}},{{0,(-7),1,0xA104ACD6,1,1},{0xB8846B51,0xA104ACD6,0x717B38E5,0x77FC7DF3,0xA104ACD6,0x1B5F7A0D},{0x77FC7DF3,0xA104ACD6,0x1B5F7A0D,1,1,1},{(-1),(-7),(-4),(-7),(-1),3},{(-1),0x77FC7DF3,(-5),1,0,0x4AF7BDD4},{0x77FC7DF3,1,0x709E149C,0x77FC7DF3,0,0x4AF7BDD4},{0xB8846B51,0,(-5),0xA104ACD6,1,3}},{{0,0xC214F163,(-4),0,1,1},{(-7),0,0x1B5F7A0D,0,0,0x1B5F7A0D},{1,1,0x717B38E5,0,0,1},{(-7),0x77FC7DF3,1,0,(-1),0x717B38E5},{0,(-7),1,0xA104ACD6,1,1},{0xB8846B51,0xA104ACD6,0x717B38E5,0x77FC7DF3,0xA104ACD6,0x1B5F7A0D},{0x77FC7DF3,0xA104ACD6,0x1B5F7A0D,1,1,1}}};
    int32_t l_39 = 1;
    int32_t l_41 = 0x3395CC9E;
    int32_t l_42 = 0x2FC9AEB9;
    int i, j, k;
    g_43[4] = (safe_mul_func_float_f_f(l_34[1][4][0], (safe_sub_func_float_f_f(((safe_mul_func_float_f_f(((((l_39 = g_11[5]) > g_11[5]) >= (l_41 = (g_40 = g_11[4]))) >= __builtin_ctzl((l_42 = 0x8945CB29))), __builtin_ffsll(g_11[7]))) > g_11[1]), g_11[7]))));
    return g_43[4];
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



