/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --no-arrays --bitfields --comma-operators --compound-assignment --consts --no-divs --embedded-assigns --no-pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --unary-plus-operator --jumps --no-longlong --int8 --uint8 --no-float --no-math64 --inline-function --muls --safe-math --packed-struct --paranoid --pointers --structs --unions --volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      3087303948
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
   uint16_t  f3;
   volatile int16_t  f4;
   int8_t  f5;
   volatile int16_t  f6;
   uint16_t  f7;
   int16_t  f8;
};
#pragma pack(pop)

struct S1 {
   unsigned f0 : 25;
   const volatile unsigned f1 : 4;
   signed f2 : 17;
   volatile signed f3 : 24;
   unsigned f4 : 4;
   volatile signed f5 : 1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_5 = 0xD0890515;
static volatile struct S0 g_7 = {0xD816F93B,0x5DE1FC65,-4,65535U,0xBD85,0x27,0xF9E3,5U,0xCF5A};/* VOLATILE GLOBAL g_7 */
static struct S1 g_9 = {3607,0,-272,3826,1,0};/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
inline static struct S1  func_1(void);
inline static int32_t * const  func_2(int32_t * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_7 g_9
 * writes: g_5 g_7
 */
inline static struct S1  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = &g_5;
    int32_t **l_6 = &l_4;
    volatile struct S0 *l_8 = &g_7;
    (*l_6) = func_2(l_4);
    (*l_8) = g_7;
    (*l_6) = (void*)0;
    /* statement id: 6 */
    assert (l_4 == 0);
    return g_9;
}


/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_5
 */
inline static int32_t * const  func_2(int32_t * p_3)
{ /* block id: 1 */
    (*p_3) &= 0;
    return &g_5;
    /* statement id: 3 */
    //assert (func_2_rv == &g_5);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_7.f4, "g_7.f4", print_hash_value);
    transparent_crc(g_7.f5, "g_7.f5", print_hash_value);
    transparent_crc(g_7.f6, "g_7.f6", print_hash_value);
    transparent_crc(g_7.f7, "g_7.f7", print_hash_value);
    transparent_crc(g_7.f8, "g_7.f8", print_hash_value);
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    transparent_crc(g_9.f3, "g_9.f3", print_hash_value);
    transparent_crc(g_9.f4, "g_9.f4", print_hash_value);
    transparent_crc(g_9.f5, "g_9.f5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 6
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 3
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 20
XXX average alias set size: 1.2

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 7
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 81.8

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

