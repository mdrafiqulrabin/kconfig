/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --comma-operators --compound-assignment --no-consts --no-divs --embedded-assigns --pre-incr-operator --pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --jumps --no-longlong --int8 --uint8 --float --math64 --inline-function --muls --no-safe-math --no-packed-struct --no-paranoid --pointers --no-structs --unions --no-volatiles --volatile-pointers --no-const-pointers --global-variabless --builtins
 * Seed:      3611145114
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint16_t  f1;
   int16_t  f2;
   float  f3;
};

/* --- GLOBAL VARIABLES --- */
static uint16_t g_3 = 0x5710;
static int8_t g_31 = 0x49;
static int32_t g_32[8][1] = {{(-1)},{(-1)},{(-1)},{(-1)},{(-1)},{(-1)},{(-1)},{(-1)}};
static float g_34 = 0x1.EA3DE8p-98;
static union U0 g_35 = {0U};


/* --- FORWARD DECLARATIONS --- */
static union U0  func_27(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_31 g_3 g_35
 * writes: g_31 g_32 g_34
 */
static union U0  func_27(void)
{ /* block id: 36 */
    int32_t l_30 = 0x9EC0021F;
    float *l_33 = &g_34;
    g_31 &= ((uint16_t)(0x0CE9 && l_30) % (uint16_t)65535U);
    (*l_33) = (g_32[2][0] = g_3);
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
    func_27();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 8; i = i + 1)
    {
        for (j = 0; j < 1; j = j + 1)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc_bytes (&g_34, sizeof(g_34), "g_34", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc_bytes (&g_35.f3, sizeof(g_35.f3), "g_35.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 11
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
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1

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

XXX times a non-volatile is read: 21
XXX times a non-volatile is write: 4
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

XXX percentage a fresh-made variable is used: 45.8
XXX percentage an existing variable is used: 54.2
********************* end of statistics **********************/

