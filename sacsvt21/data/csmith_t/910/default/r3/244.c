/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1497333502
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
   volatile uint64_t  f1;
   uint16_t  f2;
   volatile uint64_t  f3;
   int16_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U5 {
   signed f0 : 30;
   struct S2  f1;
   uint8_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[2] = {1L,1L};
static volatile int32_t g_3 = (-6L);/* VOLATILE GLOBAL g_3 */
static int32_t g_4[2][3] = {{0x6ACB8F2BL,0xAE2FE817L,0xAE2FE817L},{0x6ACB8F2BL,0xAE2FE817L,0xAE2FE817L}};
static union U5 g_7 = {-1L};/* VOLATILE GLOBAL g_7 */
static int32_t * volatile g_10[9] = {(void*)0,&g_4[1][2],&g_4[1][2],(void*)0,&g_4[1][2],&g_4[1][2],(void*)0,&g_4[1][2],&g_4[1][2]};
static int32_t * volatile g_11 = &g_4[0][2];/* VOLATILE GLOBAL g_11 */


/* --- FORWARD DECLARATIONS --- */
static union U5  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7 g_7.f1.f5 g_7.f0 g_11
 * writes: g_4 g_7.f1.f5
 */
static union U5  func_1(void)
{ /* block id: 0 */
    int32_t *l_12 = &g_4[0][0];
    uint16_t l_13 = 0xA3F3L;
    for (g_4[0][2] = (-7); (g_4[0][2] < 14); g_4[0][2] = safe_add_func_int8_t_s_s(g_4[0][2], 5))
    { /* block id: 3 */
        return g_7;
    }
    for (g_7.f1.f5 = 0; (g_7.f1.f5 < 7); g_7.f1.f5 = safe_add_func_int32_t_s_s(g_7.f1.f5, 5))
    { /* block id: 8 */
        (*g_11) |= g_7.f0;
        return g_7;
    }
    ++l_13;
    return g_7;
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
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 3
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 3

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1.33

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 10
XXX percentage of non-volatile access: 90.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

