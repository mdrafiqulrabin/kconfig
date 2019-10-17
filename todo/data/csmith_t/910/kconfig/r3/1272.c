/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --comma-operators --compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --post-decr-operator --unary-plus-operator --jumps --longlong --int8 --uint8 --float --math64 --inline-function --no-muls --no-safe-math --packed-struct --no-paranoid --pointers --structs --unions --volatiles --volatile-pointers --const-pointers --global-variabless --builtins
 * Seed:      431897392
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   volatile float  f0;
   uint64_t  f1;
   volatile uint64_t  f2;
   const int64_t  f3;
   int32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static float g_6[4] = {0xA.B6182Ep-83,0xA.B6182Ep-83,0xA.B6182Ep-83,0xA.B6182Ep-83};
static uint8_t g_8 = 3UL;
static union U0 g_33 = {-0x7.2p-1};/* VOLATILE GLOBAL g_33 */
static union U0 *g_32[3] = {&g_33,&g_33,&g_33};
static union U0 g_35 = {-0x1.8p-1};/* VOLATILE GLOBAL g_35 */


/* --- FORWARD DECLARATIONS --- */
inline static uint32_t  func_31(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_32 g_35.f4 g_33.f4 g_8
 * writes: g_33.f4 g_35.f4
 */
inline static uint32_t  func_31(void)
{ /* block id: 36 */
    union U0 *l_34 = &g_35;
    int32_t *l_36 = (void*)0;
    int32_t *l_37 = &g_33.f4;
    int32_t *l_38 = &g_35.f4;
    uint32_t l_40 = 0x97B09B37L;
    l_34 = g_32[2];
    (*l_38) ^= ((*l_37) = (l_34 == l_34));
    for (g_33.f4 = 0; (g_33.f4 <= 3); g_33.f4 += 1)
    { /* block id: 42 */
        int32_t *l_39 = &g_35.f4;
        l_40++;
    }
    return g_8;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_31();
    for (i = 0; i < 4; i++)
    {
        transparent_crc_bytes(&g_6[i], sizeof(g_6[i]), "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc_bytes (&g_33.f0, sizeof(g_33.f0), "g_33.f0", print_hash_value);
    transparent_crc(g_33.f4, "g_33.f4", print_hash_value);
    transparent_crc_bytes (&g_35.f0, sizeof(g_35.f0), "g_35.f0", print_hash_value);
    transparent_crc(g_35.f4, "g_35.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 14
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 1
XXX times a pointer is qualified to be dereferenced: 10

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1

XXX times a non-volatile is read: 23
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 8
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 51.9
XXX percentage an existing variable is used: 48.1
********************* end of statistics **********************/

