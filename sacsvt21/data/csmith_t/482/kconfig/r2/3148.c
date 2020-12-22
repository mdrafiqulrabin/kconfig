/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --comma-operators --compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --post-decr-operator --unary-plus-operator --jumps --longlong --int8 --uint8 --float --math64 --inline-function --no-muls --no-safe-math --packed-struct --no-paranoid --pointers --structs --unions --volatiles --volatile-pointers --const-pointers --global-variabless --builtins
 * Seed:      40552113
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   float  f0;
   const volatile int16_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static const int16_t g_10 = 0L;
static float g_32 = 0x8.EF3CF6p+24;
static float * volatile g_31 = &g_32;/* VOLATILE GLOBAL g_31 */
static int32_t g_34[3][4] = {{0xB5CF0ADCL,1L,0x34AB462AL,0x34AB462AL},{0x9C93E328L,0x9C93E328L,0xB5CF0ADCL,0x34AB462AL},{0L,1L,0L,0xB5CF0ADCL}};
static struct S1 g_35 = {0x0.7p-1,-10L,0xF7935DB5A26CDEE9LL,18446744073709551606UL,-1L};/* VOLATILE GLOBAL g_35 */


/* --- FORWARD DECLARATIONS --- */
inline static struct S1  func_29(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_31 g_35
 * writes: g_32 g_34
 */
inline static struct S1  func_29(void)
{ /* block id: 36 */
    uint8_t l_30[5];
    int32_t *l_33 = &g_34[1][3];
    int i;
    for (i = 0; i < 5; i++)
        l_30[i] = 0x88L;
    (*g_31) = l_30[0];
    (*l_33) = __builtin_popcountll(l_30[0]);
    return g_35;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_29();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc_bytes (&g_32, sizeof(g_32), "g_32", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc_bytes (&g_35.f0, sizeof(g_35.f0), "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_35.f4, "g_35.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 10
   depth: 1, occurrence: 1
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
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
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 21
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 96

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

