/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      524703206
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   uint16_t  f1;
   volatile signed f2 : 12;
   uint8_t  f3;
   uint64_t  f4;
   const unsigned f5 : 10;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = (-8L);
static struct S0 g_6[4] = {{-8L,0x33E3L,20,253UL,0UL,15},{-8L,0x33E3L,20,253UL,0UL,15},{-8L,0x33E3L,20,253UL,0UL,15},{-8L,0x33E3L,20,253UL,0UL,15}};
static struct S0 g_7 = {0x36FE5AB0L,0xC0E2L,6,0xC5L,2UL,17};/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_7
 * writes: g_2
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    uint64_t l_5 = 1UL;
    for (g_2 = 0; (g_2 < 23); ++g_2)
    { /* block id: 3 */
        if (l_5)
            break;
        return g_6[0];
    }
    return g_7;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_6[i].f0, "g_6[i].f0", print_hash_value);
        transparent_crc(g_6[i].f1, "g_6[i].f1", print_hash_value);
        transparent_crc(g_6[i].f2, "g_6[i].f2", print_hash_value);
        transparent_crc(g_6[i].f3, "g_6[i].f3", print_hash_value);
        transparent_crc(g_6[i].f4, "g_6[i].f4", print_hash_value);
        transparent_crc(g_6[i].f5, "g_6[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_7.f4, "g_7.f4", print_hash_value);
    transparent_crc(g_7.f5, "g_7.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

