/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      497270920
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S2 {
   const int32_t  f0;
   int32_t  f1;
   volatile uint8_t  f2;
   uint32_t  f3;
   volatile uint64_t  f4;
};

union U11 {
   volatile struct S2  f0;
   uint64_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = (-10L);
static int32_t *g_5 = &g_3;
static int32_t ** volatile g_4 = &g_5;/* VOLATILE GLOBAL g_4 */
static int8_t g_10[6] = {0x6FL,0x6FL,0x6FL,0x6FL,0x6FL,0x6FL};
static int8_t *g_11 = &g_10[4];
static uint32_t g_12[4][6] = {{6UL,6UL,4294967295UL,4294967295UL,6UL,6UL},{6UL,4294967295UL,4294967295UL,6UL,6UL,4294967295UL},{6UL,6UL,4294967295UL,4294967295UL,6UL,6UL},{6UL,4294967295UL,4294967295UL,6UL,6UL,4294967295UL}};
static union U11 g_13 = {{-1L,1L,0x12L,3UL,0x8140A9711F64DB2ALL}};/* VOLATILE GLOBAL g_13 */


/* --- FORWARD DECLARATIONS --- */
static union U11  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_11 g_10 g_5 g_13
 * writes: g_5 g_11 g_12 g_3
 */
static union U11  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int8_t *l_9 = &g_10[4];
    (*g_4) = l_2;
    (*g_5) = ((safe_sub_func_uint8_t_u_u(0x29L, ((safe_unary_minus_func_uint64_t_u((g_12[3][2] = ((g_11 = l_9) != &g_10[0])))) , (*g_11)))) == g_10[0]);
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_13.f0.f0, "g_13.f0.f0", print_hash_value);
    transparent_crc(g_13.f0.f1, "g_13.f0.f1", print_hash_value);
    transparent_crc(g_13.f0.f2, "g_13.f0.f2", print_hash_value);
    transparent_crc(g_13.f0.f3, "g_13.f0.f3", print_hash_value);
    transparent_crc(g_13.f0.f4, "g_13.f0.f4", print_hash_value);
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

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 4
   depth: 7, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 62.5
XXX percentage an existing variable is used: 37.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

