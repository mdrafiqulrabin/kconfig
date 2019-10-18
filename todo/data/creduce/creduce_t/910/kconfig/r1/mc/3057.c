



static long __undefined;



static int32_t g_4 = 0x398070ADL;
static int64_t g_8 = 0xB666A756A3367F5ELL;
static uint16_t g_31 = 0xDFC9L;



static uint32_t  func_28(void);





static uint32_t  func_28(void)
{ 
    float l_29 = (-0x10.Fp+1);
    float *l_30[4][8][4] = {{{&l_29,(void*)0,&l_29,&l_29},{(void*)0,(void*)0,&l_29,&l_29},{(void*)0,(void*)0,&l_29,&l_29},{&l_29,&l_29,&l_29,(void*)0},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,(void*)0},{&l_29,&l_29,&l_29,&l_29},{(void*)0,&l_29,&l_29,&l_29}},{{&l_29,&l_29,&l_29,(void*)0},{&l_29,&l_29,&l_29,(void*)0},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,(void*)0,&l_29},{&l_29,&l_29,&l_29,&l_29},{(void*)0,&l_29,&l_29,&l_29},{(void*)0,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29}},{{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{(void*)0,(void*)0,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,(void*)0,&l_29},{&l_29,&l_29,&l_29,&l_29}},{{&l_29,&l_29,(void*)0,&l_29},{&l_29,&l_29,&l_29,&l_29},{(void*)0,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{&l_29,&l_29,&l_29,&l_29},{&l_29,(void*)0,&l_29,&l_29},{&l_29,&l_29,&l_29,(void*)0}}};
    int32_t l_32 = 0xA5308633L;
    int i, j, k;
    g_31 = l_29;
    return l_32;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



