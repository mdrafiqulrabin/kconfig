/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --no-arrays --bitfields --no-comma-operators --no-compound-assignment --no-consts --no-divs --no-embedded-assigns --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-jumps --no-longlong --no-int8 --uint8 --no-float --no-math64 --no-inline-function --no-muls --no-safe-math --packed-struct --no-paranoid --no-pointers --structs --unions --volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      26408555
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   signed f0 : 20;
};

union U2 {
   volatile int16_t  f0;
   signed f1 : 31;
   volatile int32_t  f2;
   uint8_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static struct S0 g_3 = {-29};
static union U2 g_4 = {0xCC24};/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4
 * writes: g_3
 */
static union U2  func_1(void)
{ /* block id: 0 */
    struct S0 l_2 = {-951};
    g_3 = l_2;
    g_3.f0 = (-6);
    l_2 = g_3;
    return g_4;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f3, "g_4.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 2
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 3
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 2
XXX times a bitfields struct on RHS: 3
XXX times a single bitfield on LHS: 1
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 7

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

