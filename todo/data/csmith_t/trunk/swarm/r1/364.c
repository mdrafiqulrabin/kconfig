/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --comma-operators --no-compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --unary-plus-operator --jumps --no-longlong --int8 --no-uint8 --no-float --no-math64 --inline-function --no-muls --safe-math --no-packed-struct --no-paranoid --pointers --structs --no-unions --volatiles --volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      992145404
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   const int32_t  f0;
   uint32_t  f1;
   volatile int32_t  f2;
   volatile int32_t  f3;
   int16_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4[8] = {0x365653D4,0x365653D4,0x365653D4,0x365653D4,0x365653D4,0x365653D4,0x365653D4,0x365653D4};
static int32_t g_5[4] = {0x98764276,0x98764276,0x98764276,0x98764276};
static struct S0 g_8 = {0x870A3267,0x6AA16542,4,0x7F1A969A,0};/* VOLATILE GLOBAL g_8 */


/* --- FORWARD DECLARATIONS --- */
inline static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_8
 * writes: g_4 g_5
 */
inline static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t l_2[4] = {0xC170CD50,0xC170CD50,0xC170CD50,0xC170CD50};
    int32_t *l_3 = &g_4[2];
    int i;
    g_5[1] = ((*l_3) = l_2[2]);
    (*l_3) = (safe_rshift_func_uint16_t_u_s((*l_3), 13));
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
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 5
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

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

