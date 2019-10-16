/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      320880160
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   const signed f0 : 10;
   const volatile unsigned f1 : 14;
   const unsigned f2 : 23;
   const uint32_t  f3;
   volatile unsigned f4 : 22;
   signed f5 : 30;
   volatile unsigned f6 : 18;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static volatile int32_t * const  volatile g_2 = &g_3[4];/* VOLATILE GLOBAL g_2 */
static struct S1 g_5 = {8,12,1350,0UL,1203,26169,147};/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5
 * writes:
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    volatile int32_t * volatile l_4 = (void*)0;/* VOLATILE GLOBAL l_4 */
    l_4 = g_2;
    return g_5;
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
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
    transparent_crc(g_5.f5, "g_5.f5", print_hash_value);
    transparent_crc(g_5.f6, "g_5.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 6
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 3
XXX volatile bitfields defined in structs: 3
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

XXX total number of pointers: 2

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 33.3

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

