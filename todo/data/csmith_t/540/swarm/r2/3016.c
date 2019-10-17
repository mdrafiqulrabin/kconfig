/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --no-compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --unary-plus-operator --jumps --no-longlong --int8 --uint8 --float --no-math64 --no-inline-function --no-muls --safe-math --packed-struct --no-paranoid --pointers --structs --no-unions --volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      719707588
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S4 {
   int32_t  f0;
   uint32_t  f1;
   volatile uint32_t  f2;
   int16_t  f3;
   int8_t  f4;
   float  f5;
   volatile uint32_t  f6;
   uint32_t  f7;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_5[9] = {2,2,2,2,2,2,2,2,2};
static int32_t g_7 = 1;
static struct S4 g_8 = {3,8U,0x3D47941C,0x3CB5,-1,0xC.C8B166p-63,0U,0x3CA3691F};/* VOLATILE GLOBAL g_8 */


/* --- FORWARD DECLARATIONS --- */
static struct S4  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8
 * writes: g_7
 */
static struct S4  func_1(void)
{ /* block id: 0 */
    int32_t *l_6 = &g_7;
    (*l_6) = (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(g_5[0])), 2));
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
    func_1();
    for (i = 0; i < 9; i = i + 1)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    transparent_crc_bytes (&g_8.f5, sizeof(g_8.f5), "g_8.f5", print_hash_value);
    transparent_crc(g_8.f6, "g_8.f6", print_hash_value);
    transparent_crc(g_8.f7, "g_8.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 1

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
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
********************* end of statistics **********************/

