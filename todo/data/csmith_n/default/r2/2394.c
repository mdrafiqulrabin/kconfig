/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3739778180
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   int16_t  f0;
   signed f1 : 1;
   int32_t  f2;
   volatile int8_t * const  f3;
   int32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_6[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static const int8_t g_9 = 0x4BL;
static const int8_t * const g_11 = &g_9;
static const int8_t * const *g_10 = &g_11;
static const int8_t * const ** volatile g_12 = (void*)0;/* VOLATILE GLOBAL g_12 */
static union U1 g_14 = {0L};


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);
static const int8_t * const * func_2(uint32_t  p_3, uint32_t  p_4, int32_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_10 g_14
 * writes: g_10
 */
static union U1  func_1(void)
{ /* block id: 0 */
    const int8_t * const **l_13[3][5] = {{&g_10,&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10,&g_10,&g_10}};
    int i, j;
    g_10 = func_2(g_6[0], g_6[0], g_6[0]);
    return g_14;
}


/* ------------------------------------------ */
/* 
 * reads : g_10
 * writes:
 */
static const int8_t * const * func_2(uint32_t  p_3, uint32_t  p_4, int32_t  p_5)
{ /* block id: 1 */
    const int8_t *l_8 = &g_9;
    const int8_t * const *l_7 = &l_8;
    return g_10;
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
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 4, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7
XXX number of pointers point to pointers: 4
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 14.3
XXX average alias set size: 1

XXX times a non-volatile is read: 6
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
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 30.8
XXX percentage an existing variable is used: 69.2
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

