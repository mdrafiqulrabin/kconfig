/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2083891650
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 15;
   signed f1 : 8;
   signed f2 : 10;
   unsigned f3 : 14;
   unsigned f4 : 5;
   volatile signed f5 : 8;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile struct S0 g_2 = {104,-8,15,50,2,10};/* VOLATILE GLOBAL g_2 */
static volatile struct S0 g_3[6] = {{174,14,-8,108,4,-9},{174,14,-8,108,4,-9},{174,14,-8,108,4,-9},{174,14,-8,108,4,-9},{174,14,-8,108,4,-9},{174,14,-8,108,4,-9}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_3
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    g_3[1] = g_2;
    return g_2.f5;
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
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_2.f5, "g_2.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_3[i].f0, "g_3[i].f0", print_hash_value);
        transparent_crc(g_3[i].f1, "g_3[i].f1", print_hash_value);
        transparent_crc(g_3[i].f2, "g_3[i].f2", print_hash_value);
        transparent_crc(g_3[i].f3, "g_3[i].f3", print_hash_value);
        transparent_crc(g_3[i].f4, "g_3[i].f4", print_hash_value);
        transparent_crc(g_3[i].f5, "g_3[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 6
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 1
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

