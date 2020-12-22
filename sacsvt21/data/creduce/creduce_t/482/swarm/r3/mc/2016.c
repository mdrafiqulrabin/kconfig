



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 25;
   unsigned f1 : 10;
   unsigned f2 : 4;
   unsigned : 0;
   unsigned f3 : 15;
   unsigned f4 : 10;
   unsigned : 0;
   signed f5 : 21;
};
#pragma pack(pop)


static uint32_t g_5 = 4294967287UL;
static int16_t g_48 = 0xD9CAL;
static struct S0 g_49 = {2599,15,3,82,9,935};



static uint32_t  func_22(void);
static uint64_t  func_35(int32_t  p_36, int8_t  p_37, uint32_t  p_38, struct S0  p_39);





static uint32_t  func_22(void)
{ 
    int16_t l_34[8][7] = {{8L,0xC3E8L,0xD546L,(-3L),0x6768L,8L,5L},{(-1L),(-3L),8L,0xF068L,5L,0xF068L,8L},{1L,1L,8L,0x333EL,(-4L),(-1L),0xB349L},{(-1L),0xE607L,0xD546L,(-4L),1L,0xE6FCL,(-3L)},{(-9L),0x6768L,0xF068L,0xE607L,(-4L),0xA47CL,0x6768L},{8L,5L,(-9L),(-9L),5L,8L,0x6768L},{0xA47CL,(-4L),0xE607L,0xF068L,(-1L),(-9L),0xA47CL},{0xE607L,8L,(-1L),0x356AL,(-9L),(-4L),(-3L)}};
    int32_t l_44 = (-4L);
    int i, j;
    for (g_5 = 0; (g_5 < 25); g_5 += 4)
    { 
        int64_t l_25 = (-1L);
        int32_t l_45 = (-1L);
        l_25 = 0x2FBB6BC3L;
        g_49.f5 = (g_5 && ((int8_t)__builtin_clzl((((int16_t)g_5 % (int16_t)(((int32_t)((uint64_t)l_34[3][2] % (uint64_t)func_35(((uint8_t)(g_5 < (((g_5 ^ (((((int16_t)((l_45 = (l_44 = 0L)) | __builtin_popcount((((int8_t)g_5 / (int8_t)((__builtin_parity((g_48 = l_34[0][5])) ^ g_5) ^ 0UL)) , l_34[3][2]))) * (int16_t)g_5) > g_5) , g_5) && 0x88L)) > l_25) && g_48)) / (uint8_t)4UL), g_5, g_5, g_49)) % (int32_t)g_49.f2) ^ l_25)) ^ g_49.f5)) << (int8_t)l_34[3][2]));
    }
    g_49.f0 = (l_34[3][2] || g_49.f0);
    return l_44;
}




static uint64_t  func_35(int32_t  p_36, int8_t  p_37, uint32_t  p_38, struct S0  p_39)
{ 
    return g_5;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_22();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    transparent_crc(g_49.f2, "g_49.f2", print_hash_value);
    transparent_crc(g_49.f3, "g_49.f3", print_hash_value);
    transparent_crc(g_49.f4, "g_49.f4", print_hash_value);
    transparent_crc(g_49.f5, "g_49.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



