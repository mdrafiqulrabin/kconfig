/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1799265814
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   signed f0 : 25;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_2[4][4] = {{0UL,1UL,1UL,0UL},{1UL,0UL,0x67215912L,0x37B04800L},{1UL,0x67215912L,1UL,0x41449C9FL},{0UL,0x37B04800L,0x41449C9FL,0x41449C9FL}};
static int32_t g_4 = (-10L);
static int32_t *g_6 = &g_4;
static uint64_t g_16 = 0xF92E6C0B333EE676LL;
static union U1 g_20 = {1L};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_4 g_16 g_20.f0
 * writes: g_6 g_4 g_16
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_5 = &g_4;
    int32_t l_14 = 0x38EC3268L;
    int32_t l_15 = 0xC93CC254L;
    const union U1 *l_19 = &g_20;
    if (g_2[0][1])
    { /* block id: 1 */
        int32_t *l_3 = &g_4;
        g_6 = (l_5 = l_3);
    }
    else
    { /* block id: 4 */
        int32_t *l_7 = (void*)0;
        int32_t *l_8 = &g_4;
        int32_t *l_9 = &g_4;
        int32_t l_10 = 0xD714F98CL;
        int32_t *l_11 = &l_10;
        int32_t *l_12 = (void*)0;
        int32_t *l_13[10];
        const union U1 **l_21 = &l_19;
        int i;
        for (i = 0; i < 10; i++)
            l_13[i] = &g_4;
        (*g_6) = (*g_6);
        g_16--;
        (*l_21) = l_19;
    }
    return g_20.f0;
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
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
XXX times a single bitfield on RHS: 1

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 1

XXX total number of pointers: 11

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 54

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 9
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 18.2
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

