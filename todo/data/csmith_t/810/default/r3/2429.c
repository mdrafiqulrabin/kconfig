/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4018392890
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   int8_t  f0;
   const volatile signed f1 : 14;
   signed f2 : 27;
   uint32_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static const union U2 g_2 = {-1L};/* VOLATILE GLOBAL g_2 */
static int8_t g_4 = 2L;
static int32_t g_6 = 0L;
static int16_t g_8[5][1] = {{0xA0C8L},{4L},{0xA0C8L},{4L},{0xA0C8L}};
static uint32_t g_10 = 0xA6FF609DL;
static int32_t g_13 = 0x8F9ED02EL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_2.f0 g_6 g_8 g_13
 * writes: g_4 g_6 g_8 g_10 g_13
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int8_t *l_3 = &g_4;
    int32_t *l_5 = &g_6;
    int16_t *l_7 = &g_8[4][0];
    uint32_t *l_9 = &g_10;
    int32_t *l_11 = (void*)0;
    int32_t *l_12 = &g_13;
    (*l_5) = ((g_2 , ((*l_3) |= 0xB6L)) ^ (g_2.f0 <= g_2.f0));
    (*l_12) &= (((*l_9) = (((*l_7) ^= (*l_5)) , ((void*)0 != l_3))) ^ (*l_5));
    return g_13;
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
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 1
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 3
   depth: 5, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 6

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 12
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 10
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 14.3
XXX percentage an existing variable is used: 85.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

