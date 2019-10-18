


#define NO_LONGLONG



static long __undefined;



static uint32_t g_3 = 0xFC02E91A;
static int8_t g_33 = 0x9D;



static uint16_t  func_28(void);





static uint16_t  func_28(void)
{ 
    float l_29 = 0xE.0A3267p+3;
    int32_t l_30 = (-1);
    l_30 = l_29;
    l_30 = (g_33 = (safe_mul_func_float_f_f(g_3, (-0x9.1p+1))));
    return l_30;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_28();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



