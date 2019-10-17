/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1102866640
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0xB90DA115L;
static int32_t g_6 = 0x84BC9C3DL;
static int8_t g_7 = 0x9AL;
static volatile uint32_t g_8 = 1UL;/* VOLATILE GLOBAL g_8 */
static uint32_t g_11[4][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
static uint32_t g_17 = 0x8EAF6082L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_11 g_3 g_17
 * writes: g_8 g_11 g_3 g_17
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t *l_4[3][4];
    int32_t l_5 = 6L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_4[i][j] = (void*)0;
    }
    ++g_8;
    g_11[0][0]--;
    for (g_3 = 0; (g_3 >= 5); g_3++)
    { /* block id: 5 */
        int16_t l_16 = 8L;
        g_17 |= l_16;
        if (l_16)
            break;
    }
    return g_8;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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
   depth: 1, occurrence: 8
   depth: 2, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 51

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 41.2
XXX percentage an existing variable is used: 58.8
********************* end of statistics **********************/

