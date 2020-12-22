/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3692560292
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U5 {
   uint32_t  f0;
   int8_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0L;
static volatile int64_t g_8[7] = {0x72B5725D36729694LL,0x72B5725D36729694LL,0x72B5725D36729694LL,0x72B5725D36729694LL,0x72B5725D36729694LL,0x72B5725D36729694LL,0x72B5725D36729694LL};
static volatile uint32_t g_9 = 1UL;/* VOLATILE GLOBAL g_9 */
static int64_t g_12 = 0x2E3CA3691F6F49C2LL;
static uint32_t g_14 = 0xD8D955A6L;
static uint32_t g_15[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static union U5 g_22 = {0xBD55ADB5L};/* VOLATILE GLOBAL g_22 */


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);
static union U5 * func_18(uint64_t  p_19, uint8_t  p_20);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9 g_3 g_12 g_14 g_15
 * writes: g_9 g_12 g_3 g_14 g_15
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t l_4 = 4L;
    int32_t *l_5 = &g_3;
    int32_t *l_6 = &g_3;
    int32_t *l_7[1];
    int i;
    for (i = 0; i < 1; i++)
        l_7[i] = &l_4;
    ++g_9;
    g_12 &= g_3;
lbl_13:
    for (g_12 = 0; (g_12 <= 0); g_12 += 1)
    { /* block id: 5 */
        int i;
        (*l_2) ^= g_9;
        if (g_3)
            goto lbl_13;
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { /* block id: 11 */
        union U5 *l_23[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        g_14 |= g_3;
        --g_15[8];
        l_23[3] = func_18(g_15[8], g_3);
    }
    return g_15[4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static union U5 * func_18(uint64_t  p_19, uint8_t  p_20)
{ /* block id: 14 */
    union U5 *l_21 = &g_22;
    return l_21;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 14
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 43

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 10
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1.17

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 8
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 14
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 1
XXX backward jumps: 0

XXX stmts: 11
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 5

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

