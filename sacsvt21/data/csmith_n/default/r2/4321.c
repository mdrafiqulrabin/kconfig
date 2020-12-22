/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3284237340
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   uint16_t  f0;
   const volatile int32_t  f1;
   volatile int32_t  f2;
   const unsigned f3 : 24;
   uint32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0xC34EEA2AL;/* VOLATILE GLOBAL g_2 */
static int32_t g_3 = 0xF365653DL;
static const union U2 g_6[4][3][3] = {{{{0x5D87L},{65535UL},{0UL}},{{0x1B68L},{0x5D87L},{0x5D87L}},{{0x5D87L},{3UL},{1UL}}},{{{0UL},{0UL},{1UL}},{{8UL},{1UL},{0x5D87L}},{{0xDA7EL},{8UL},{0UL}}},{{{1UL},{1UL},{8UL}},{{65535UL},{0UL},{0x8EB9L}},{{65535UL},{3UL},{0xDA7EL}}},{{{1UL},{0x5D87L},{0UL}},{{0xDA7EL},{65535UL},{0xDA7EL}},{{8UL},{0x6AA1L},{0x8EB9L}}}};
static const union U2 g_7 = {9UL};/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static const union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_6 g_7
 * writes: g_3
 */
static const union U2  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; (g_3 >= 20); ++g_3)
    { /* block id: 3 */
        return g_6[2][2][1];
    }
    return g_7;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_6[i][j][k].f0, "g_6[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 2

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

