/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1258828065
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   const unsigned f0 : 15;
   const volatile signed f1 : 10;
   signed f2 : 5;
   signed f3 : 28;
   const signed f4 : 29;
   const signed f5 : 2;
};

/* --- GLOBAL VARIABLES --- */
static const struct S0 g_6 = {111,-24,4,6722,-22171,0};/* VOLATILE GLOBAL g_6 */
static const struct S0 *g_5 = &g_6;
static int32_t g_9 = 0x09D01078L;
static uint8_t g_17 = 0x8BL;
static struct S0 g_26 = {96,21,1,1361,6871,-0};/* VOLATILE GLOBAL g_26 */


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);
static struct S0 * func_2(const struct S0 * p_3, int8_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6.f4 g_17 g_26.f0 g_9 g_6.f1
 * writes: g_17 g_5 g_9
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    struct S0 *l_29[4];
    struct S0 **l_28 = &l_29[1];
    int i;
    for (i = 0; i < 4; i++)
        l_29[i] = &g_26;
    (*l_28) = func_2(g_5, g_6.f4);
    return g_6.f1;
}


/* ------------------------------------------ */
/* 
 * reads : g_17 g_26.f0 g_9
 * writes: g_17 g_5 g_9
 */
static struct S0 * func_2(const struct S0 * p_3, int8_t  p_4)
{ /* block id: 1 */
    int16_t l_7 = 0L;
    int32_t *l_8 = &g_9;
    int32_t *l_10 = &g_9;
    int32_t *l_11 = &g_9;
    int32_t *l_12 = &g_9;
    int32_t *l_13 = &g_9;
    int32_t *l_14 = &g_9;
    int32_t *l_15 = &g_9;
    int32_t *l_16[2][6] = {{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9}};
    struct S0 *l_27 = &g_26;
    int i, j;
    g_17++;
    for (p_4 = 0; (p_4 < 29); ++p_4)
    { /* block id: 5 */
        struct S0 *l_25 = &g_26;
        struct S0 **l_24[10][10] = {{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,(void*)0,&l_25,(void*)0,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{(void*)0,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,&l_25,&l_25,&l_25,&l_25,(void*)0,&l_25,&l_25,(void*)0,&l_25},{(void*)0,&l_25,&l_25,&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,&l_25},{&l_25,&l_25,&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,&l_25,(void*)0},{&l_25,&l_25,(void*)0,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{(void*)0,&l_25,(void*)0,(void*)0,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_25,(void*)0,&l_25,&l_25,&l_25,(void*)0,&l_25}};
        int i, j;
        for (l_7 = 0; (l_7 == (-23)); l_7--)
        { /* block id: 8 */
            if (p_4)
                break;
        }
        g_5 = (void*)0;
        if (p_4)
            continue;
        (*l_13) ^= g_26.f0;
    }
    return l_27;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_6.f3, "g_6.f3", print_hash_value);
    transparent_crc(g_6.f4, "g_6.f4", print_hash_value);
    transparent_crc(g_6.f5, "g_6.f5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    transparent_crc(g_26.f4, "g_26.f4", print_hash_value);
    transparent_crc(g_26.f5, "g_26.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 6
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 4
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 4
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 3

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1

XXX total number of pointers: 16

XXX times a variable address is taken: 50
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 35

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 6
XXX percent of pointers has null in alias set: 12.5
XXX average alias set size: 1.12

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 8
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 26
XXX percentage of non-volatile access: 94.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 30.8
XXX percentage an existing variable is used: 69.2
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

