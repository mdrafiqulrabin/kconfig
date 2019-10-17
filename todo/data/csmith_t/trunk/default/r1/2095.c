/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      932075887
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
   volatile unsigned f1 : 21;
   volatile uint32_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static volatile union U0 g_16[5] = {{0x70669599L},{0x70669599L},{0x70669599L},{0x70669599L},{0x70669599L}};
static uint16_t g_18 = 1UL;
static int8_t g_26[6][4] = {{(-5L),0xB2L,0xB2L,(-5L)},{0xB2L,(-5L),0xB2L,0xB2L},{(-5L),(-5L),0L,(-5L)},{(-5L),0xB2L,0xB2L,(-5L)},{0xB2L,(-5L),0xB2L,0xB2L},{(-5L),(-5L),0L,(-5L)}};
static uint64_t g_29 = 1UL;
static int8_t g_30 = 0xB9L;
static int32_t g_32[5][1][3] = {{{7L,(-1L),(-1L)}},{{0xFA2E5769L,0L,0L}},{{7L,(-1L),(-1L)}},{{0xFA2E5769L,0L,0L}},{{7L,(-1L),(-1L)}}};


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);
static uint64_t  func_10(int32_t  p_11, int8_t  p_12, uint8_t  p_13, int64_t  p_14, int64_t  p_15);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_16 g_16.f0 g_26 g_30 g_32
 * writes: g_18 g_29 g_32
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    int8_t l_9[1];
    uint16_t *l_17 = &g_18;
    int8_t l_27 = 0x21L;
    uint64_t *l_28 = &g_29;
    int32_t *l_31 = &g_32[1][0][1];
    int i;
    for (i = 0; i < 1; i++)
        l_9[i] = 0x92L;
    (*l_31) &= (safe_div_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((safe_mul_func_int16_t_s_s((1L | (safe_mul_func_int16_t_s_s((l_9[0] >= func_10((((((g_16[0] , 1UL) , g_16[0].f0) != (l_9[0] == ((-8L) & ((*l_17) = l_9[0])))) != ((safe_lshift_func_uint16_t_u_u(((((*l_28) = (safe_add_func_int64_t_s_s((((~(((safe_sub_func_int32_t_s_s((l_9[0] == g_26[3][3]), g_26[5][0])) <= g_26[5][2]) , g_26[4][3])) , 1L) <= l_27), g_26[5][2]))) > 0xA81D5F49DCB7BE74LL) && 0x5744L), l_9[0])) , g_26[3][3])) , l_9[0]), g_26[3][3], g_26[3][3], g_26[3][3], g_30)), 0L))), 7L)) && l_9[0]))), 0xBC41L));
    (*l_31) &= g_30;
    return g_32[4][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : g_26
 * writes:
 */
static uint64_t  func_10(int32_t  p_11, int8_t  p_12, uint8_t  p_13, int64_t  p_14, int64_t  p_15)
{ /* block id: 3 */
    return g_26[4][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_16[i].f0, "g_16[i].f0", print_hash_value);
        transparent_crc(g_16[i].f1, "g_16[i].f1", print_hash_value);
        transparent_crc(g_16[i].f2, "g_16[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_26[i][j], "g_26[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_32[i][j][k], "g_32[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 32
breakdown:
   depth: 1, occurrence: 5
   depth: 32, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 21
XXX times a non-volatile is write: 8
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 93.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 21.7
XXX percentage an existing variable is used: 78.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

