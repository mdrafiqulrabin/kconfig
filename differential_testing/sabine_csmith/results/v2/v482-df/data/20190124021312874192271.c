/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4057145739
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   unsigned f0 : 4;
};

struct S4 {
   volatile struct S0  f0;
   unsigned f1 : 1;
   signed f2 : 28;
   volatile unsigned f3 : 26;
   signed f4 : 13;
};

/* --- GLOBAL VARIABLES --- */
static const struct S4 *g_6 = (void*)0;
static struct S4 g_8 = {{3},0,-7804,7987,-83};/* VOLATILE GLOBAL g_8 */
static uint32_t g_15 = 1UL;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static struct S4 * func_2(struct S4 * p_3);
static struct S4 * func_4(const struct S4 * p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_15 g_8.f0.f0
 * writes: g_15
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    struct S4 *l_11 = (void*)0;
    struct S4 **l_10 = &l_11;
    int32_t l_12 = (-9L);
    int32_t *l_13 = (void*)0;
    int32_t *l_14[3];
    int i;
    for (i = 0; i < 3; i++)
        l_14[i] = &l_12;
    (*l_10) = func_2(func_4(g_6));
    --g_15;
    return g_8.f0.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static struct S4 * func_2(struct S4 * p_3)
{ /* block id: 3 */
    struct S4 *l_9[6];
    int i;
    for (i = 0; i < 6; i++)
        l_9[i] = &g_8;
    return l_9[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static struct S4 * func_4(const struct S4 * p_5)
{ /* block id: 1 */
    struct S4 *l_7 = &g_8;
    return l_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0.f0, "g_8.f0.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 4
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 3
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 2
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 6
   depth: 3, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 4
XXX percent of pointers has null in alias set: 28.6
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 87.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 62.5
XXX percentage an existing variable is used: 37.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

