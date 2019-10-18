



static long __undefined;



static int32_t g_6[4][4] = {{1L,0x39BA095AL,0x39BA095AL,1L},{0x39BA095AL,1L,0L,0x011151C3L},{0x39BA095AL,0L,0x39BA095AL,0xD9A924C0L},{1L,0x011151C3L,0xD9A924C0L,0xD9A924C0L}};
static int32_t g_17 = 0xC3A065C2L;
static int32_t ** volatile g_30 = (void*)0;
static uint32_t g_38 = 4294967293UL;



inline static int32_t  func_29(void);





inline static int32_t  func_29(void)
{ 
    int32_t *l_32 = &g_6[3][2];
    int32_t **l_31 = &l_32;
    int8_t l_35 = (-6L);
    (*l_31) = &g_6[3][1];
    g_38 ^= (((uint8_t)g_17 >> (uint8_t)l_35) <= ((int8_t)(**l_31) >> (int8_t)(*l_32)));
    return g_6[2][2];
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_29();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



