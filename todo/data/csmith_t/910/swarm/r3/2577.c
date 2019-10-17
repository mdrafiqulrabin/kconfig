/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --no-comma-operators --no-compound-assignment --consts --no-divs --embedded-assigns --pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --post-decr-operator --unary-plus-operator --jumps --no-longlong --no-int8 --uint8 --no-float --no-math64 --no-inline-function --no-muls --safe-math --packed-struct --paranoid --pointers --structs --no-unions --no-volatiles --volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      145790608
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_8 = (-1);
static uint16_t g_10[3] = {0xF23B,0xF23B,0xF23B};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t * func_2(uint16_t  p_3, int32_t * p_4, int32_t  p_5, int32_t * p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes: g_10 g_8
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_7 = &g_8;
    uint16_t *l_9[4];
    int32_t **l_14 = &l_7;
    int i;
    for (i = 0; i < 4; i = i + 1)
        l_9[i] = &g_10[2];
lbl_15:
    (*l_14) = func_2((g_10[2] = (l_7 != (void*)0)), &g_8, (safe_rshift_func_int16_t_s_u((-1), g_8)), &g_8);
    g_8 = g_8;
    if (g_8)
        goto lbl_15;
    return (*l_7);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_8
 */
static int32_t * func_2(uint16_t  p_3, int32_t * p_4, int32_t  p_5, int32_t * p_6)
{ /* block id: 2 */
    int32_t l_13 = 8;
    (*p_4) = l_13;
    return &g_8;
    /* statement id: 4 */
    //assert (func_2_rv == &g_8);
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
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 3; i = i + 1)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 8
   depth: 8, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 11

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 18.2
XXX percentage an existing variable is used: 81.8
********************* end of statistics **********************/

