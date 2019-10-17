/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3952802046
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int16_t  f1;
};

union U4 {
   uint32_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static struct S0 g_6 = {-4L,0xC71BL};
static struct S0 *g_5 = &g_6;
static int32_t g_23 = 0x3AE4C7BAL;
static volatile int16_t g_24[4] = {0xD711L,0xD711L,0xD711L,0xD711L};
static volatile int32_t g_25 = 1L;/* VOLATILE GLOBAL g_25 */
static volatile uint32_t g_26 = 2UL;/* VOLATILE GLOBAL g_26 */
static struct S0 ** volatile g_30 = &g_5;/* VOLATILE GLOBAL g_30 */


/* --- FORWARD DECLARATIONS --- */
static union U4  func_1(void);
static struct S0 * func_2(struct S0 * p_3, int32_t  p_4);
static uint64_t  func_8(int8_t  p_9, uint16_t  p_10, const struct S0 * p_11, const struct S0 * const  p_12, struct S0 * p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_26 g_30
 * writes: g_26 g_5
 */
static union U4  func_1(void)
{ /* block id: 0 */
    uint64_t l_7 = 0xAF07207182B4746ALL;
    struct S0 *l_29 = &g_6;
    union U4 l_31 = {4294967295UL};
    (*g_30) = (l_29 = func_2(g_5, l_7));
    return l_31;
}


/* ------------------------------------------ */
/* 
 * reads : g_26
 * writes: g_26
 */
static struct S0 * func_2(struct S0 * p_3, int32_t  p_4)
{ /* block id: 1 */
    struct S0 *l_20[9] = {&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6};
    uint8_t l_21 = 0x4FL;
    int32_t *l_22[8] = {&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23};
    int i;
    l_21 = (func_8((safe_mod_func_uint8_t_u_u(4UL, p_4)), (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(0xE81720D7L, (p_3 == &g_6))), (&g_6 == (void*)0))), p_3, &g_6, l_20[1]) > 0x062A4B15D3E99730LL);
    --g_26;
    return &g_6;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint64_t  func_8(int8_t  p_9, uint16_t  p_10, const struct S0 * p_11, const struct S0 * const  p_12, struct S0 * p_13)
{ /* block id: 2 */
    return p_9;
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
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
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

XXX max expression depth: 12
breakdown:
   depth: 1, occurrence: 7
   depth: 4, occurrence: 1
   depth: 12, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 12
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 1
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 5
XXX percent of pointers has null in alias set: 14.3
XXX average alias set size: 1.14

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 84.6

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 45
XXX percentage an existing variable is used: 55
********************* end of statistics **********************/

