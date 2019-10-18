


#define NO_LONGLONG



static long __undefined;



static volatile uint8_t g_6 = 0xD8;
static uint32_t g_9 = 4294967290U;
static int32_t g_20 = (-3);
static uint32_t g_21 = 4U;



static uint8_t  func_1(void);





static uint8_t  func_1(void)
{ 
    int8_t l_16 = 0x1B;
    int32_t l_17 = (-1);
    g_21 = (l_17 = (((int16_t)((uint16_t)g_6 % (uint16_t)(((uint32_t)g_9 - (uint32_t)(g_20 = ((int16_t)((uint8_t)g_9 + (uint8_t)((g_9 || ((l_16 = ((int16_t)g_9 << (int16_t)8)) <= (l_17 == (((g_9 != (0x2EF7 | ((int16_t)(-7) << (int16_t)9))) , g_9) < l_17)))) ^ g_9)) >> (int16_t)g_9))) , g_9)) >> (int16_t)12) , g_9));
    return g_21;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



