/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      256007096
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   int16_t  f0;
   volatile uint32_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_5[4] = {0x7963BA20L,0x7963BA20L,0x7963BA20L,0x7963BA20L};
static int32_t *g_8 = &g_5[2];
static int32_t ** volatile g_7[7][3] = {{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8},{&g_8,&g_8,&g_8}};
static union U1 g_14 = {0L};/* VOLATILE GLOBAL g_14 */


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);
static int32_t * func_2(int32_t * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_14
 * writes: g_8
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = &g_5[0];
    int32_t **l_9 = &g_8;
    int32_t *l_10[1];
    uint16_t l_11[2];
    int i;
    for (i = 0; i < 1; i++)
        l_10[i] = &g_5[3];
    for (i = 0; i < 2; i++)
        l_11[i] = 65531UL;
    (*l_9) = func_2(l_4);
    ++l_11[0];
    return g_14;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_2(int32_t * p_3)
{ /* block id: 1 */
    int32_t *l_6 = &g_5[1];
    return l_6;
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 1

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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 15

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1.17

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 57.1
XXX percentage an existing variable is used: 42.9
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

