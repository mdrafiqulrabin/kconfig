/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --no-comma-operators --no-compound-assignment --consts --divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --no-post-incr-operator --post-decr-operator --unary-plus-operator --jumps --no-longlong --int8 --uint8 --no-float --no-math64 --inline-function --muls --safe-math --packed-struct --paranoid --pointers --structs --unions --no-volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      663554576
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = (-9);
static union U0 g_13[7][4] = {{{4294967295U},{4294967295U},{4294967295U},{4294967295U}},{{4294967295U},{4294967295U},{4294967295U},{4294967295U}},{{4294967295U},{4294967295U},{4294967295U},{4294967295U}},{{4294967295U},{4294967295U},{4294967295U},{4294967295U}},{{4294967295U},{4294967295U},{4294967295U},{4294967295U}},{{4294967295U},{4294967295U},{4294967295U},{4294967295U}},{{4294967295U},{4294967295U},{4294967295U},{4294967295U}}};


/* --- FORWARD DECLARATIONS --- */
static union U0  func_1(void);
static int32_t *** func_6(int32_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_13
 * writes: g_3
 */
static union U0  func_1(void)
{ /* block id: 0 */
    const int32_t *l_2 = &g_3;
    const int32_t **l_4 = (void*)0;
    const int32_t **l_5 = (void*)0;
    int32_t *l_12[5][3][10] = {{{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}},{{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}},{{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}},{{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}},{{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3}}};
    int32_t **l_11 = &l_12[2][2][4];
    int32_t ***l_10[3];
    int i, j, k;
    for (i = 0; i < 3; i = i + 1)
        l_10[i] = &l_11;
    l_2 = l_2;
    l_10[2] = func_6(g_3);
    /* statement id: 5 */
    //assert (l_10[0] == 0 || l_10[0] == &l_11);
    return g_13[3][3];
    /* statement id: 6 */
    }


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_3
 */
static int32_t *** func_6(int32_t  p_7)
{ /* block id: 2 */
    int32_t *l_8 = &g_3;
    int32_t ***l_9 = (void*)0;
    (*l_8) = 0xD1D8F8F5;
    return l_9;
    /* statement id: 4 */
    //assert (func_6_rv == 0);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 7; i = i + 1)
    {
        for (j = 0; j < 4; j = j + 1)
        {
            transparent_crc(g_13[i][j].f0, "g_13[i][j].f0", print_hash_value);
            transparent_crc(g_13[i][j].f1, "g_13[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 9

XXX times a variable address is taken: 51
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 48

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 6
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 66.7
XXX average alias set size: 1.22

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 57.1
XXX percentage an existing variable is used: 42.9
********************* end of statistics **********************/

