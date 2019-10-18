


#define NO_LONGLONG



static long __undefined;



static int32_t g_3 = 0;
static uint16_t g_34 = 0x8140;
static int32_t g_35 = 0x2A93F045;
static uint32_t g_40 = 7U;
static uint16_t g_44 = 65535U;
static uint16_t g_47[1] = {0x2D86};



static uint16_t  func_27(void);
static float  func_30(int16_t  p_31, uint32_t  p_32);





static uint16_t  func_27(void)
{ 
    float l_33 = 0xC.D33D73p+21;
    int32_t l_45 = 0;
    float l_46 = 0x1.85662Bp+94;
    float l_57 = (-0x6.1p-1);
    l_45 = ((float)(g_44 = func_30(g_3, (g_34 = g_3))) + (float)0x1.5D3CC1p-7);
    g_47[0] = l_46;
    for (g_3 = (-19); (g_3 < (-4)); g_3++)
    { 
        if (g_44)
            break;
    }
    for (g_34 = (-15); (g_34 <= 54); g_34 += 9)
    { 
        l_45 = ((uint32_t)(-(uint16_t)((int16_t)g_3 << (int16_t)7)) % (uint32_t)0xCAEC2B2A);
    }
    return l_45;
}




static float  func_30(int16_t  p_31, uint32_t  p_32)
{ 
    uint32_t l_36 = 0x53649D95;
    int32_t l_39 = (-1);
    int32_t l_43 = 0x4A4E7FB1;
    l_36--;
    g_40++;
    l_43 = (l_39 = (g_34 < 0x9.9D3763p+63));
    return p_31;
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



