/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --no-bitfields --comma-operators --compound-assignment --no-consts --divs --embedded-assigns --pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --post-decr-operator --no-unary-plus-operator --jumps --longlong --int8 --uint8 --float --no-math64 --no-inline-function --muls --no-safe-math --packed-struct --paranoid --pointers --structs --no-unions --no-volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      1666179358
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S1  f0;
   uint8_t  f1;
   float  f2;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static struct S2 g_5[2][3] = {{{{0xC7747BB7L},1UL,0xE.583DC0p+7},{{0xE4562513L},255UL,0x0.3p+1},{{0xC7747BB7L},1UL,0xE.583DC0p+7}},{{{0xC7747BB7L},1UL,0xE.583DC0p+7},{{0xE4562513L},255UL,0x0.3p+1},{{0xC7747BB7L},1UL,0xE.583DC0p+7}}};
static float g_9 = 0x1.7p-1;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_5.f2 g_9
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    struct S2 **l_2 = (void*)0;
    struct S2 *l_4[7] = {&g_5[0][1],&g_5[0][1],&g_5[0][1],&g_5[0][1],&g_5[0][1],&g_5[0][1],&g_5[0][1]};
    struct S2 **l_3 = &l_4[4];
    int32_t l_6 = 0x6D6DBC1CL;
    float *l_7 = &g_5[0][1].f2;
    float *l_8 = &g_9;
    int i;
    (*l_3) = (void*)0;
    /* statement id: 1 */
    //assert (l_4[0] == 0 || (l_4[0] >= &g_5[0][0] && l_4[0] <= &g_5[1][2]));
    (*l_8) = ((*l_7) = l_6);
    return l_6;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i = i + 1)
    {
        for (j = 0; j < 3; j = j + 1)
        {
            transparent_crc(g_5[i][j].f0.f0, "g_5[i][j].f0.f0", print_hash_value);
            transparent_crc(g_5[i][j].f1, "g_5[i][j].f1", print_hash_value);
            transparent_crc_bytes(&g_5[i][j].f2, sizeof(g_5[i][j].f2), "g_5[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc_bytes (&g_9, sizeof(g_9), "g_9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 40
XXX average alias set size: 1.2

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 6
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

