/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      978164784
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 6;
   volatile unsigned f1 : 3;
   unsigned f2 : 25;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
   volatile uint32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
   unsigned f4 : 6;
   int16_t  f5;
   struct S0  f6;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0xBBD0A708L;
static int32_t g_5 = (-2L);
static int32_t g_8 = 1L;
static int32_t * const  volatile g_7 = &g_8;/* VOLATILE GLOBAL g_7 */
static int64_t g_9[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
static struct S1 g_10 = {249UL,0x80D68F98L,0x589B58331C587C7ALL,1UL,3,-7L,{7,1,2192}};/* VOLATILE GLOBAL g_10 */


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_3 g_10
 * writes: g_3 g_5 g_8
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_5;
    int32_t *l_6 = (void*)0;
    (*g_7) = ((*l_4) = ((*l_2) = 0x5B2906C9L));
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { /* block id: 6 */
        return g_10;
    }
    return g_10;
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
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3, "g_10.f3", print_hash_value);
    transparent_crc(g_10.f4, "g_10.f4", print_hash_value);
    transparent_crc(g_10.f5, "g_10.f5", print_hash_value);
    transparent_crc(g_10.f6.f0, "g_10.f6.f0", print_hash_value);
    transparent_crc(g_10.f6.f1, "g_10.f6.f1", print_hash_value);
    transparent_crc(g_10.f6.f2, "g_10.f6.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX total union variables: 0

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
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 90

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

