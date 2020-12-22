



static long __undefined;



static int32_t g_6 = 0L;
static int32_t * volatile g_5 = &g_6;



static int32_t  func_1(void);





static int32_t  func_1(void)
{ 
    int16_t l_4 = 0xB8C3L;
    (*g_5) = ((int16_t)l_4 >> (int16_t)l_4);
    return l_4;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



