/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2143248878
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   const volatile unsigned f0 : 5;
   signed f1 : 6;
   volatile signed f2 : 16;
   volatile signed f3 : 28;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   const uint64_t  f1;
   volatile uint16_t  f2;
   int32_t  f3;
   volatile uint16_t  f4;
};

union U6 {
   volatile uint16_t  f0;
   volatile uint32_t  f1;
   int8_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static int8_t g_3 = 0x24L;
static int8_t *g_2 = &g_3;
static int32_t g_5 = 9L;
static uint8_t g_8[1] = {0x49L};
static int32_t g_10 = 0L;
static struct S0 g_12 = {2,7,-15,5050};/* VOLATILE GLOBAL g_12 */
static volatile union U6 * volatile g_13 = (void*)0;/* VOLATILE GLOBAL g_13 */
static volatile union U6 * volatile * volatile g_14 = &g_13;/* VOLATILE GLOBAL g_14 */
static union U6 g_15 = {0xDB75L};/* VOLATILE GLOBAL g_15 */
static union U1 g_16 = {1L};/* VOLATILE GLOBAL g_16 */


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_5 g_8 g_13 g_14 g_15 g_16
 * writes: g_5 g_3 g_10 g_13
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = &g_5;
    (*l_4) = ((void*)0 == g_2);
    for (g_3 = (-4); (g_3 > 9); g_3 = safe_add_func_uint8_t_u_u(g_3, 3))
    { /* block id: 4 */
        struct S0 *l_11 = &g_12;
        for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
        { /* block id: 7 */
            int32_t *l_9 = &g_10;
            int i;
            (*l_9) = 0x5F432603L;
            (*l_9) = g_8[g_5];
        }
        l_11 = (void*)0;
        (*g_14) = g_13;
    }
    (*l_4) |= (g_15 , g_8[0]);
    return g_16;
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
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f2, "g_15.f2", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
    transparent_crc(g_16.f4, "g_16.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 2

XXX non-zero bitfields defined in structs: 4
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 3
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 4

XXX total number of pointers: 6

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 8

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1.17

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 11
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 85.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

