/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --no-comma-operators --no-compound-assignment --consts --no-divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --no-post-incr-operator --post-decr-operator --unary-plus-operator --jumps --no-longlong --int8 --uint8 --no-float --no-math64 --inline-function --no-muls --safe-math --packed-struct --paranoid --pointers --structs --unions --no-volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      1872634935
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   uint16_t  f1;
   int32_t  f2;
   uint8_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static union U0 g_5 = {0U};
static int32_t g_7 = 0;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t * func_2(union U0  p_3, int32_t * p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_7
 * writes:
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_6 = &g_7;
    l_6 = func_2(g_5, l_6);
    return g_7;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_2(union U0  p_3, int32_t * p_4)
{ /* block id: 1 */
    return p_4;
    /* statement id: 2 */
    //assert (func_2_rv == &g_7);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 1

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
   depth: 1, occurrence: 3
   depth: 3, occurrence: 1

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

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 1
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

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

