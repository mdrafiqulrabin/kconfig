/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3046577924
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   unsigned f0 : 16;
};

union U4 {
   uint8_t  f0;
   int32_t  f1;
   volatile uint16_t  f2;
   int32_t  f3;
   const int8_t * const  f4;
};

/* --- GLOBAL VARIABLES --- */
static struct S0 g_4[5][2] = {{{131},{231}},{{88},{131}},{{43},{43}},{{43},{131}},{{88},{231}}};
static union U4 g_6[3] = {{252UL},{252UL},{252UL}};
static union U4 *g_5[6] = {&g_6[0],&g_6[0],&g_6[0],&g_6[0],&g_6[0],&g_6[0]};
static union U4 ** volatile g_8 = &g_5[2];/* VOLATILE GLOBAL g_8 */
static int32_t g_10 = 0x76AB2AEEL;
static uint64_t g_14 = 1UL;
static int16_t g_18[2] = {0x1F6FL,0x1F6FL};


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);
static int32_t  func_2(struct S0  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_8 g_14 g_10 g_18
 * writes: g_5 g_14 g_18
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_17 = (void*)0;
    int32_t l_19 = 0L;
    g_18[0] &= func_2(g_4[3][1]);
    return l_19;
}


/* ------------------------------------------ */
/* 
 * reads : g_5 g_8 g_14 g_10
 * writes: g_5 g_14
 */
static int32_t  func_2(struct S0  p_3)
{ /* block id: 1 */
    union U4 **l_7 = (void*)0;
    int32_t *l_9 = &g_10;
    int32_t *l_11 = &g_10;
    int32_t *l_12 = &g_10;
    int32_t *l_13[1];
    int i;
    for (i = 0; i < 1; i++)
        l_13[i] = &g_10;
    (*g_8) = g_5[2];
    --g_14;
    return (*l_12);
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
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j].f0, "g_4[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_6[i].f0, "g_6[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_18[i], "g_18[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 9

XXX times a variable address is taken: 8
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
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 22.2
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 37
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 45.5
XXX percentage an existing variable is used: 54.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

