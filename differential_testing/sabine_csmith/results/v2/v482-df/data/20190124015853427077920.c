/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3510360302
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[6][6][2] = {{{(-5L),0x23ED15DEL},{0x5CDBE8E5L,0x5CDBE8E5L},{0x23ED15DEL,(-5L)},{1L,(-5L)},{0x23ED15DEL,0x5CDBE8E5L},{0x5CDBE8E5L,0x23ED15DEL}},{{(-5L),1L},{(-5L),0x23ED15DEL},{0x5CDBE8E5L,0x5CDBE8E5L},{0x23ED15DEL,(-5L)},{1L,(-5L)},{0x23ED15DEL,0x5CDBE8E5L}},{{0x5CDBE8E5L,0x23ED15DEL},{(-5L),1L},{(-5L),0x23ED15DEL},{0x5CDBE8E5L,0x5CDBE8E5L},{0x23ED15DEL,(-5L)},{1L,(-5L)}},{{0x23ED15DEL,0x5CDBE8E5L},{0x5CDBE8E5L,0x23ED15DEL},{(-5L),1L},{(-5L),0x23ED15DEL},{0x5CDBE8E5L,0x5CDBE8E5L},{1L,0x23ED15DEL}},{{0x16210B99L,0x23ED15DEL},{1L,7L},{7L,1L},{0x23ED15DEL,0x16210B99L},{0x23ED15DEL,1L},{7L,7L}},{{1L,0x23ED15DEL},{0x16210B99L,0x23ED15DEL},{1L,7L},{7L,1L},{0x23ED15DEL,0x16210B99L},{0x23ED15DEL,1L}}};
static int32_t g_3 = 0x585B7F37L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_3 g_2
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 26; (g_3 < 6); g_3--)
    { /* block id: 3 */
        g_2[0][4][0] = 1L;
    }
    return g_2[0][4][0];
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
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 50

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

