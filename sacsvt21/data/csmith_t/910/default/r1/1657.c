/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1566795904
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

union U1 {
   volatile int32_t  f0;
   uint16_t  f1;
   struct S0  f2;
   const uint64_t  f3;
   int32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static struct S0 g_2 = {4294967295UL};
static struct S0 g_5 = {4294967294UL};
static int32_t g_7[3][4] = {{0x8D3A18E4L,0L,0x8D3A18E4L,0x8D3A18E4L},{0L,0L,0x2733582FL,0L},{0L,0x8D3A18E4L,0x8D3A18E4L,0L}};
static const union U1 g_11 = {-1L};/* VOLATILE GLOBAL g_11 */


/* --- FORWARD DECLARATIONS --- */
static const union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7 g_11
 * writes: g_2 g_5 g_7
 */
static const union U1  func_1(void)
{ /* block id: 0 */
    struct S0 *l_3 = &g_2;
    struct S0 *l_4 = &g_5;
    int32_t *l_6[2][5][2] = {{{&g_7[2][0],(void*)0},{&g_7[2][0],&g_7[2][0]},{&g_7[2][0],(void*)0},{&g_7[2][0],&g_7[2][0]},{&g_7[2][0],(void*)0}},{{&g_7[2][0],&g_7[2][0]},{&g_7[2][0],(void*)0},{&g_7[2][0],&g_7[2][0]},{&g_7[2][0],(void*)0},{&g_7[2][0],&g_7[2][0]}}};
    uint32_t l_8 = 0UL;
    int i, j, k;
    (*l_4) = ((*l_3) = g_2);
    ++l_8;
    g_7[1][2] ^= 0xF3FAA32FL;
    return g_11;
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
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1.33

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

