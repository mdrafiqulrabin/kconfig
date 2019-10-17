/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1191824816
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   unsigned f1 : 3;
   const uint16_t  f2;
   volatile uint32_t  f3;
   int32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3[1][3][8] = {{{0xA9565E08L,0xDAFBBD0AL,(-9L),(-9L),0xDAFBBD0AL,0xA9565E08L,0xDAFBBD0AL,(-9L)},{0xC7516A20L,0xDAFBBD0AL,0xC7516A20L,0xA9565E08L,0xA9565E08L,0xC7516A20L,0xDAFBBD0AL,0xC7516A20L},{1L,0xA9565E08L,(-9L),0xA9565E08L,1L,1L,0xA9565E08L,(-9L)}}};
static volatile int32_t g_4 = 0xD069F498L;/* VOLATILE GLOBAL g_4 */
static const union U0 g_5 = {-6L};/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static const union U0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_3 g_4
 */
static const union U0  func_1(void)
{ /* block id: 0 */
    uint32_t l_2[10][1] = {{0x3C69AED2L},{1UL},{0x3C69AED2L},{1UL},{0x3C69AED2L},{1UL},{0x3C69AED2L},{1UL},{0x3C69AED2L},{1UL}};
    int i, j;
    for (g_3[0][2][4] = 0; g_3[0][2][4] < 10; g_3[0][2][4] += 1)
    {
        for (g_4 = 0; g_4 < 1; g_4 += 1)
        {
            l_2[g_3[0][2][4]][g_4] = 18446744073709551615UL;
        }
    }
    return g_5;
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
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

