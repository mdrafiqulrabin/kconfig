/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3805915108
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   unsigned f0 : 17;
};

union U1 {
   const volatile uint64_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const volatile uint8_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static volatile struct S0 g_2[5] = {{234},{234},{234},{234},{234}};
static volatile struct S0 * volatile g_3 = (void*)0;/* VOLATILE GLOBAL g_3 */
static union U1 g_7 = {0x47C9D5FAC12265E3LL};/* VOLATILE GLOBAL g_7 */
static int32_t g_9 = (-5L);
static uint8_t g_17 = 0UL;


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_17 g_9
 * writes: g_2 g_17
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    volatile struct S0 *l_4[6] = {&g_2[0],&g_2[4],&g_2[4],&g_2[0],&g_2[4],&g_2[4]};
    union U1 *l_6 = &g_7;
    union U1 **l_5 = &l_6;
    int32_t *l_8 = &g_9;
    int32_t *l_10 = &g_9;
    int32_t l_11[1];
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = &g_9;
    int32_t *l_14 = &l_11[0];
    int32_t *l_15 = &l_11[0];
    int32_t *l_16[6];
    int i;
    for (i = 0; i < 1; i++)
        l_11[i] = (-1L);
    for (i = 0; i < 6; i++)
        l_16[i] = &l_11[0];
    g_2[4] = g_2[4];
    (*l_5) = (void*)0;
    g_17--;
    return (*l_10);
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
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i].f0, "g_2[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
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
XXX times a bitfields struct's address is taken: 3
XXX times a bitfields struct on LHS: 1
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 7

XXX total number of pointers: 11

XXX times a variable address is taken: 11
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 30

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 7
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 27.3
XXX average alias set size: 1.09

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

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 30
XXX percentage an existing variable is used: 70
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

