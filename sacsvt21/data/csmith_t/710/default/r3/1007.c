/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1953499380
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 0UL;
static int32_t g_6 = 7L;
static int32_t * volatile g_5 = &g_6;/* VOLATILE GLOBAL g_5 */
static volatile uint8_t g_19[9][2] = {{246UL,0UL},{255UL,255UL},{0UL,246UL},{252UL,246UL},{0UL,255UL},{255UL,0UL},{246UL,252UL},{246UL,0UL},{255UL,255UL}};
static int32_t * volatile g_22 = &g_6;/* VOLATILE GLOBAL g_22 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t  func_2(uint16_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_19 g_6 g_22
 * writes: g_4 g_19 g_6
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    (*g_22) = func_2(g_4);
    return g_6;
}


/* ------------------------------------------ */
/* 
 * reads : g_5 g_4 g_19 g_6
 * writes: g_4 g_19
 */
static int32_t  func_2(uint16_t  p_3)
{ /* block id: 1 */
    int32_t * volatile l_7 = &g_6;/* VOLATILE GLOBAL l_7 */
    int32_t l_16 = (-1L);
    int32_t l_17 = 0x66D210ECL;
    int32_t l_18 = 0xD14CD495L;
    l_7 = g_5;
    for (g_4 = 12; (g_4 >= 8); --g_4)
    { /* block id: 5 */
        int32_t *l_10 = &g_6;
        int32_t *l_11 = (void*)0;
        int32_t l_12 = 0x2121F90EL;
        int32_t *l_13 = &g_6;
        int32_t *l_14 = &l_12;
        int32_t *l_15[8] = {&g_6,&l_12,&g_6,&g_6,&l_12,&g_6,&g_6,&l_12};
        int i;
        g_19[5][1]++;
    }
    return (*g_5);
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 8

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 37

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 12.5
XXX average alias set size: 1.12

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 3
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 30
XXX percentage of non-volatile access: 54.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 61.5
XXX percentage an existing variable is used: 38.5
********************* end of statistics **********************/

