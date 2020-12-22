/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      257592108
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile signed f0 : 4;
};
#pragma pack(pop)

struct S1 {
   volatile uint64_t  f0;
   struct S0  f1;
   struct S0  f2;
   uint16_t  f3;
   volatile struct S0  f4;
   uint32_t  f5;
   int32_t  f6;
};

/* --- GLOBAL VARIABLES --- */
static struct S1 g_5[1] = {{0xC752F67D50F82BAELL,{-3},{-2},0x9EDCL,{2},0xECF7921EL,-6L}};


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes:
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    uint32_t l_2 = 1UL;
    l_2++;
    return g_5[0];
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
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
        transparent_crc(g_5[i].f1.f0, "g_5[i].f1.f0", print_hash_value);
        transparent_crc(g_5[i].f2.f0, "g_5[i].f2.f0", print_hash_value);
        transparent_crc(g_5[i].f3, "g_5[i].f3", print_hash_value);
        transparent_crc(g_5[i].f4.f0, "g_5[i].f4.f0", print_hash_value);
        transparent_crc(g_5[i].f5, "g_5[i].f5", print_hash_value);
        transparent_crc(g_5[i].f6, "g_5[i].f6", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
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
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

