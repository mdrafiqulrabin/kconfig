/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      297271560
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2 = 0xA75CL;/* VOLATILE GLOBAL g_2 */
static int32_t g_5[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t * volatile g_7 = &g_5[7];/* VOLATILE GLOBAL g_7 */
static uint8_t g_9 = 0x33L;
static uint8_t g_11 = 251UL;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_9 g_7
 * writes: g_5 g_7 g_2 g_9 g_11
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = &g_5[3];
    (*l_4) &= g_2;
    g_5[7] &= 1L;
    if (((*l_4) = (*l_4)))
    { /* block id: 4 */
        int32_t **l_6[4] = {&l_4,&l_4,&l_4,&l_4};
        int i;
        g_7 = (void*)0;
        (*l_4) = g_5[2];
        for (g_2 = 0; g_2 < 4; g_2 += 1)
        {
            l_6[g_2] = (void*)0;
        }
    }
    else
    { /* block id: 8 */
        uint8_t *l_8 = &g_9;
        uint8_t *l_10[9] = {&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11};
        int32_t l_12 = (-1L);
        int32_t **l_13 = &l_3;
        int i;
        (*g_7) = ((-5L) < (((g_11 = ((*l_8) |= (*l_4))) , l_12) == 0xE2L));
        (*l_13) = (void*)0;
        for (g_9 = 0; g_9 < 9; g_9 += 1)
        {
            l_10[g_9] = &g_11;
        }
        (*l_4) = (!(g_9 != 6UL));
    }
    return g_9;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 15
   depth: 2, occurrence: 2
   depth: 6, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 7
breakdown:
   depth: 1, occurrence: 7
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 13

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 12
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 42.9
XXX average alias set size: 1.29

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 15
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 8
XXX percentage of non-volatile access: 88.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 11
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 7

XXX percentage a fresh-made variable is used: 20
XXX percentage an existing variable is used: 80
********************* end of statistics **********************/

