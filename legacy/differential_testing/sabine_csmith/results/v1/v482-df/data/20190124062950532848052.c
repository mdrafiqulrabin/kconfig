/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3776964767
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   uint64_t  f0;
   volatile uint16_t  f1;
   volatile uint8_t  f2;
   uint32_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0x498E64E6L;
static uint64_t g_6[3][8] = {{0x55073046773196E8LL,0UL,0x55073046773196E8LL,0x55073046773196E8LL,0UL,0x55073046773196E8LL,0x55073046773196E8LL,0UL},{0UL,0x55073046773196E8LL,0x55073046773196E8LL,0UL,0x55073046773196E8LL,0x55073046773196E8LL,0UL,0x55073046773196E8LL},{0UL,0UL,0x1D65F4E26C12A7B0LL,0UL,0UL,0x1D65F4E26C12A7B0LL,0UL,0UL}};
static union U1 g_7 = {0xD857289C089CED66LL};/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_7
 * writes: g_2 g_6
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int8_t l_5 = (-8L);
    for (g_2 = (-10); (g_2 < (-28)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 7))
    { /* block id: 3 */
        g_6[2][6] ^= l_5;
    }
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

