



static long __undefined;


union U0 {
   float  f0;
   int32_t  f1;
   volatile int32_t  f2;
   uint16_t  f3;
   volatile uint16_t  f4;
};


static uint8_t g_5 = 1UL;
static uint8_t g_30 = 0xF0L;
static union U0 g_31 = {-0x3.0p+1};



static union U0  func_26(void);





static union U0  func_26(void)
{ 
    float l_29 = 0x1.2C6EEDp+25;
    g_30 = (safe_sub_func_float_f_f((-0x1.0p-1), l_29));
    return g_31;
    
    }





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc_bytes (&g_31.f0, sizeof(g_31.f0), "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4, "g_31.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



