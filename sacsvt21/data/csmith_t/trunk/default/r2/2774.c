/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3976566754
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * f0;
   const unsigned f1 : 5;
   signed f2 : 13;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[3][6] = {{(-1L),(-10L),(-1L),(-1L),(-10L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-10L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-10L),(-1L)}};
static int32_t g_4 = 0xC58BDFADL;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes: g_3 g_4
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_2[6][6] = {{0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL},{0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL},{0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL},{0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL},{0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL},{0x6EL,0x6EL,0x6EL,0x6EL,0x6EL,0x6EL}};
    int i, j;
    for (g_3[0][1] = 0; g_3[0][1] < 6; g_3[0][1] += 1)
    {
        for (g_4 = 0; g_4 < 6; g_4 += 1)
        {
            l_2[g_3[0][1]][g_4] = 254UL;
        }
    }
    return g_3[0][1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
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

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

