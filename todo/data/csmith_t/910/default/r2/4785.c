/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      668737818
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   volatile int16_t  f0;
   int32_t  f1;
   const volatile int32_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static uint8_t g_7 = 0x6BL;
static union U1 g_10 = {-8L};/* VOLATILE GLOBAL g_10 */
static int32_t g_12 = (-5L);
static const int32_t *g_14 = &g_12;
static const int32_t ** volatile g_13 = &g_14;/* VOLATILE GLOBAL g_13 */
static int32_t * volatile g_15[10] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static uint8_t  func_5(uint32_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_13 g_12 g_10.f0
 * writes: g_14
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int16_t l_4 = (-9L);
    int32_t *l_16[7];
    int16_t l_17 = 0xE356L;
    int i;
    for (i = 0; i < 7; i++)
        l_16[i] = &g_12;
    l_17 = (safe_lshift_func_int8_t_s_u(l_4, func_5(g_7)));
    return g_10.f0;
}


/* ------------------------------------------ */
/* 
 * reads : g_13 g_12
 * writes: g_14
 */
static uint8_t  func_5(uint32_t  p_6)
{ /* block id: 1 */
    union U1 *l_9 = &g_10;
    union U1 **l_8 = &l_9;
    const int32_t *l_11 = &g_12;
    (*l_8) = (void*)0;
    (*g_13) = l_11;
    return (*l_11);
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
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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
   depth: 1, occurrence: 7
   depth: 3, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 48

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 14.3
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 40
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 30.8
XXX percentage an existing variable is used: 69.2
********************* end of statistics **********************/

