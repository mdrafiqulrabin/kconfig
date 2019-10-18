


#define NO_LONGLONG



static long __undefined;


union U0 {
   const uint16_t  f0;
};


static int16_t g_3 = (-7);
static uint8_t g_41[8][2] = {{0U,0x78},{0U,0U},{0U,0x78},{0U,0U},{0U,0x78},{0U,0U},{0U,0x78},{0U,0U}};
static uint32_t g_46 = 0x64DB2A93;
static int8_t g_47[3] = {0xBA,0xBA,0xBA};
static int8_t g_48[6] = {0xF5,0xF5,0xF5,0xF5,0xF5,0xF5};
static union U0 g_55 = {1U};



inline static union U0  func_27(void);





inline static union U0  func_27(void)
{ 
    uint32_t l_28[8];
    int32_t l_44 = 0x533F2A6A;
    uint16_t l_45 = 0x8140;
    int i;
    for (i = 0; i < 8; i++)
        l_28[i] = 0xFD814383;
    for (g_3 = 0; (g_3 <= 7); g_3 += 1)
    { 
        int i;
        g_48[5] &= __builtin_clzll(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((g_47[1] = (l_28[g_3] == ((((g_46 = (l_28[g_3] < (l_45 = (safe_div_func_uint32_t_u_u(g_3, (safe_sub_func_uint8_t_u_u((l_28[g_3] || (l_28[g_3] < (g_3 && (g_3 == ((g_41[3][1] = 0xA6F6) == (l_44 = (safe_div_func_uint32_t_u_u(l_28[5], g_3)))))))), 0xD7))))))) & g_3) || l_28[g_3]) ^ g_3))) || g_47[1]), 1)), g_3)), g_3)) & g_3), l_28[0])) | g_3));
    }
    l_44 = (safe_add_func_int32_t_s_s(0xA447D051, (safe_mod_func_int16_t_s_s(l_28[6], (safe_lshift_func_uint8_t_u_s(g_41[3][1], 0))))));
    return g_55;
    
    }





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_48[i], "g_48[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



