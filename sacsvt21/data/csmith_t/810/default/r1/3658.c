/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2715307442
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 7;
   int32_t  f1;
   signed f2 : 8;
   unsigned f3 : 10;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static struct S0 g_6 = {4,-1L,-13,18};


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);
static int32_t  func_2(const int8_t  p_3, struct S0  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_6.f1
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    const uint32_t l_5 = 0x72759951L;
    int32_t *l_7[1][10] = {{&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1,&g_6.f1}};
    uint16_t l_8[4] = {0xBB2CL,0xBB2CL,0xBB2CL,0xBB2CL};
    int i, j;
    l_8[2] ^= (g_6.f1 = func_2(l_5, g_6));
    return g_6.f0;
}


/* ------------------------------------------ */
/* 
 * reads : g_6.f3
 * writes:
 */
static int32_t  func_2(const int8_t  p_3, struct S0  p_4)
{ /* block id: 1 */
    return g_6.f3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    transparent_crc(g_6.f3, "g_6.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 3
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
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 2

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 4, occurrence: 1

XXX total number of pointers: 1

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 39
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
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
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 21.4
XXX percentage an existing variable is used: 78.6
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

