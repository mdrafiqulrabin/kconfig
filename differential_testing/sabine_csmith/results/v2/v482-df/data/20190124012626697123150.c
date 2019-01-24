/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2355983326
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   unsigned f0 : 11;
   volatile unsigned f1 : 16;
   signed f2 : 24;
   signed f3 : 7;
   unsigned f4 : 6;
   signed f5 : 6;
};

struct S2 {
   int32_t  f0;
   const int8_t  f1;
   struct S1  f2;
   int32_t  f3;
   int64_t  f4;
   const volatile struct S1  f5;
   const volatile int32_t  f6;
   uint16_t  f7;
   signed f8 : 6;
   int64_t  f9;
};

union U5 {
   volatile unsigned f0 : 17;
   int16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static union U5 g_4 = {0UL};/* VOLATILE GLOBAL g_4 */
static volatile union U5 * volatile g_5 = (void*)0;/* VOLATILE GLOBAL g_5 */
static struct S2 g_6 = {0xA3F30045L,0x02L,{44,71,3047,-7,4,6},-5L,-4L,{38,151,1471,-6,1,1},-8L,0UL,7,-1L};/* VOLATILE GLOBAL g_6 */


/* --- FORWARD DECLARATIONS --- */
static struct S2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_5
 */
static struct S2  func_1(void)
{ /* block id: 0 */
    union U5 *l_3 = &g_4;
    union U5 **l_2[6];
    int i;
    for (i = 0; i < 6; i++)
        l_2[i] = &l_3;
    g_5 = (void*)0;
    return g_6;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_6.f2.f0, "g_6.f2.f0", print_hash_value);
    transparent_crc(g_6.f2.f1, "g_6.f2.f1", print_hash_value);
    transparent_crc(g_6.f2.f2, "g_6.f2.f2", print_hash_value);
    transparent_crc(g_6.f2.f3, "g_6.f2.f3", print_hash_value);
    transparent_crc(g_6.f2.f4, "g_6.f2.f4", print_hash_value);
    transparent_crc(g_6.f2.f5, "g_6.f2.f5", print_hash_value);
    transparent_crc(g_6.f3, "g_6.f3", print_hash_value);
    transparent_crc(g_6.f4, "g_6.f4", print_hash_value);
    transparent_crc(g_6.f5.f0, "g_6.f5.f0", print_hash_value);
    transparent_crc(g_6.f5.f1, "g_6.f5.f1", print_hash_value);
    transparent_crc(g_6.f5.f2, "g_6.f5.f2", print_hash_value);
    transparent_crc(g_6.f5.f3, "g_6.f5.f3", print_hash_value);
    transparent_crc(g_6.f5.f4, "g_6.f5.f4", print_hash_value);
    transparent_crc(g_6.f5.f5, "g_6.f5.f5", print_hash_value);
    transparent_crc(g_6.f6, "g_6.f6", print_hash_value);
    transparent_crc(g_6.f7, "g_6.f7", print_hash_value);
    transparent_crc(g_6.f8, "g_6.f8", print_hash_value);
    transparent_crc(g_6.f9, "g_6.f9", print_hash_value);
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

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 1
   indirect level: 1, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 3

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 9
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 8
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

