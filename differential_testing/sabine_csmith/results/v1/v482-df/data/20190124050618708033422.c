/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3739582752
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   volatile uint64_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2[6][8] = {{0x65AB3E90L,1L,1L,0x65AB3E90L,0L,0L,0L,0x65AB3E90L},{1L,0L,1L,(-1L),(-1L),(-1L),(-1L),1L},{0L,0L,(-1L),0L,0x624CDB8FL,0L,(-1L),0L},{0L,1L,(-1L),(-1L),(-1L),(-1L),1L,0L},{1L,0x65AB3E90L,0L,0L,0L,0x65AB3E90L,1L,1L},{0x65AB3E90L,0L,(-1L),(-1L),0L,0x65AB3E90L,0L,1L}};
static int16_t g_5[1][4] = {{6L,6L,6L,6L}};
static int32_t g_6 = 0xFE4D9EDBL;
static volatile struct S0 g_9 = {0x8100C430L,6UL,0x90611BC383C67EE3LL};/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_5 g_9
 * writes: g_2 g_6 g_9
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_8 = 0x3414B58EL;
    volatile struct S0 *l_10 = &g_9;
    for (g_2[0][2] = 0; (g_2[0][2] <= 4); ++g_2[0][2])
    { /* block id: 3 */
        const uint16_t l_7 = 0xA527L;
        for (g_6 = 0; (g_6 <= 0); g_6 += 1)
        { /* block id: 6 */
            int i, j;
            return g_5[g_6][(g_6 + 2)];
        }
        if (l_7)
            continue;
        if (l_8)
            continue;
    }
    (*l_10) = g_9;
    return g_9.f2;
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
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 3
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 72.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/

