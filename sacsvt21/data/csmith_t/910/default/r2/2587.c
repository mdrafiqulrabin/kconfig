/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      793429676
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint16_t  f0;
   uint64_t  f1;
   int8_t * f2;
   volatile int64_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[7] = {0x099CFE04L,0x099CFE04L,0x099CFE04L,0x099CFE04L,0x099CFE04L,0x099CFE04L,0x099CFE04L};
static int32_t * volatile g_2 = &g_3[4];/* VOLATILE GLOBAL g_2 */
static int8_t *g_7 = (void*)0;
static const int8_t g_9 = (-2L);
static int32_t g_12 = 0x27213EC7L;
static union U0 g_13[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};


/* --- FORWARD DECLARATIONS --- */
static union U0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_7 g_12 g_13
 * writes: g_12
 */
static union U0  func_1(void)
{ /* block id: 0 */
    int32_t * volatile l_4 = &g_3[4];/* VOLATILE GLOBAL l_4 */
    const int8_t *l_8 = &g_9;
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = &g_12;
    l_4 = g_2;
    (*l_11) &= (safe_sub_func_uint32_t_u_u((*l_4), (g_3[4] > (g_7 == l_8))));
    return g_13[3];
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
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_13[i].f0, "g_13[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 4
   depth: 4, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 1
XXX times a pointer is qualified to be dereferenced: 6

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 2
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 70

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 71.4
XXX percentage an existing variable is used: 28.6
********************* end of statistics **********************/

