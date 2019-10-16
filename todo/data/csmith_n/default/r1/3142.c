/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2608940054
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2[8] = {0x2491E29EL,4294967290UL,0x2491E29EL,0x2491E29EL,4294967290UL,0x2491E29EL,0x2491E29EL,4294967290UL};
static volatile int32_t * volatile g_3 = (void*)0;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_5 = (-1L);/* VOLATILE GLOBAL g_5 */
static int32_t g_8 = 0xE1DFE009L;
static volatile uint8_t g_9 = 255UL;/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9
 * writes: g_5 g_9
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    volatile int32_t *l_4 = &g_5;
    int32_t *l_6 = (void*)0;
    int32_t *l_7[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_7[i][j] = &g_8;
    }
    (*l_4) = g_2[2];
    ++g_9;
    return g_2[2];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
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
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 5

XXX total number of pointers: 4

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 24

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 20

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
********************* end of statistics **********************/

