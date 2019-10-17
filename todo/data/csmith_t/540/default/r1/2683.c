/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1802519782
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile uint32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static volatile int32_t g_3 = (-1L);/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 0xF38C0887L;
static int32_t * volatile g_8 = (void*)0;/* VOLATILE GLOBAL g_8 */
static int32_t g_10 = 0xB9A733E3L;
static struct S0 g_11 = {3UL,0x5B0BB8BFL};/* VOLATILE GLOBAL g_11 */
static struct S0 g_12 = {1UL,0xA592C6EEL};/* VOLATILE GLOBAL g_12 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_10 g_11
 * writes: g_4 g_10 g_12 g_2
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_7 = 0x70A5L;
    for (g_4 = 0; (g_4 > (-19)); g_4 = safe_sub_func_int32_t_s_s(g_4, 2))
    { /* block id: 3 */
        int32_t *l_9 = &g_10;
        (*l_9) |= l_7;
    }
    g_12 = g_11;
    for (g_12.f0 = 0; g_12.f0 < 9; g_12.f0 += 1)
    {
        g_2[g_12.f0] = (-1L);
    }
    return l_7;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 2
XXX total union variables: 0

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

XXX total number of pointers: 2

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

