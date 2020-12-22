/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4101706894
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[8] = {0xAD9BACC5L,0xAD9BACC5L,0xAD9BACC5L,0xAD9BACC5L,0xAD9BACC5L,0xAD9BACC5L,0xAD9BACC5L,0xAD9BACC5L};
static volatile int32_t g_3[2][2][5] = {{{3L,0xB77278FAL,3L,1L,0xCFCE2949L},{0xCF33F23EL,0xB5486B6FL,0xCFCE2949L,0xB5486B6FL,0xCF33F23EL}},{{3L,0xB5486B6FL,0xB77278FAL,0xCF33F23EL,0xB77278FAL},{0xB77278FAL,0xB77278FAL,0xCFCE2949L,0xCF33F23EL,0xB9E9D60AL}}};
static int32_t g_4 = 0x6EE97341L;
static volatile int32_t g_7 = 0L;/* VOLATILE GLOBAL g_7 */
static volatile int32_t g_8 = 6L;/* VOLATILE GLOBAL g_8 */
static volatile int32_t g_9[4] = {8L,8L,8L,8L};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_2
 * writes: g_4 g_7 g_8 g_9 g_3
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    for (g_4 = (-20); (g_4 >= (-30)); g_4 = safe_sub_func_uint32_t_u_u(g_4, 8))
    { /* block id: 3 */
        for (g_7 = 0; g_7 < 2; g_7 += 1)
        {
            for (g_8 = 0; g_8 < 2; g_8 += 1)
            {
                for (g_9[3] = 0; g_9[3] < 5; g_9[3] += 1)
                {
                    g_3[g_7][g_8][g_9[3]] = 0xE10E5E53L;
                }
            }
        }
    }
    return g_2[2];
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
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

