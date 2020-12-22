


#define NO_LONGLONG



static long __undefined;


union U1 {
   uint32_t  f0;
   float  f1;
   float  f2;
};


static const float g_3 = 0x1.6p-1;
static uint32_t g_6 = 0x9B8BC588;
static uint32_t g_31 = 4294967289U;
static int32_t g_34 = 1;
static int32_t g_48 = (-10);
static int16_t g_57 = 0xAD5B;
static int32_t g_60 = 0;
static int16_t g_61 = 4;
static uint16_t g_63 = 65535U;



static union U1  func_29(void);





static union U1  func_29(void)
{ 
    float l_30 = 0xA.A93826p+81;
    int32_t *l_32 = (void*)0;
    int32_t *l_33 = &g_34;
    int32_t *l_35 = &g_34;
    int32_t *l_36 = &g_34;
    int32_t l_37 = 0xA84CBED5;
    int32_t *l_38 = &l_37;
    int32_t *l_39 = &l_37;
    int32_t *l_40 = &l_37;
    int32_t *l_41 = &l_37;
    int32_t *l_42 = &l_37;
    int32_t *l_43 = &l_37;
    int32_t l_44 = 1;
    int32_t *l_45 = &l_44;
    int32_t l_46 = 0xC9B6CD04;
    int32_t *l_47 = &l_44;
    int32_t *l_49 = &l_46;
    int32_t l_50 = (-1);
    int32_t *l_51 = &g_34;
    int32_t *l_52 = &l_50;
    int32_t *l_53 = &l_37;
    int32_t *l_54 = &g_34;
    int32_t l_55 = 0x91B05987;
    int32_t *l_56 = &l_55;
    int32_t *l_58 = &l_46;
    int32_t *l_59 = &l_46;
    int32_t *l_62 = &l_37;
    union U1 l_70 = {0x3780D777};
    g_31 = l_30;
    ++g_63;
    for (g_61 = 0; (g_61 <= 26); ++g_61)
    { 
        const int32_t *l_69 = &l_46;
        const int32_t **l_68 = &l_69;
        (*l_68) = (void*)0;
    }
    return l_70;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_29();
    transparent_crc_bytes (&g_3, sizeof(g_3), "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



