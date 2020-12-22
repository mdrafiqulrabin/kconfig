/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --comma-operators --compound-assignment --no-consts --no-divs --embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --no-post-decr-operator --unary-plus-operator --no-jumps --no-longlong --int8 --uint8 --float --no-math64 --no-inline-function --muls --no-safe-math --packed-struct --no-paranoid --no-pointers --structs --unions --volatiles --volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      2441839878
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   float  f0;
   volatile int32_t  f1;
   float  f2;
   int16_t  f3;
   float  f4;
   int8_t  f5;
};

union U1 {
   int8_t  f0;
   volatile int16_t  f1;
   int16_t  f2;
   uint16_t  f3;
   struct S0  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile struct S0 g_2[3] = {{0x6.9A6957p-20,3,0xF.0A50B5p+51,0x101A,-0x1.Bp-1,1},{0x6.9A6957p-20,3,0xF.0A50B5p+51,0x101A,-0x1.Bp-1,1},{0x6.9A6957p-20,3,0xF.0A50B5p+51,0x101A,-0x1.Bp-1,1}};
static volatile struct S0 g_3 = {0x0.5AB06Cp-46,1,0x4.5B641Bp-36,-6,0x0.1p-1,0x50};/* VOLATILE GLOBAL g_3 */
static union U1 g_4 = {1};/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4
 * writes: g_3
 */
static union U1  func_1(void)
{ /* block id: 0 */
    g_3 = g_2[2];
    return g_4;
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
    for (i = 0; i < 3; i++)
    {
        transparent_crc_bytes(&g_2[i].f0, sizeof(g_2[i].f0), "g_2[i].f0", print_hash_value);
        transparent_crc(g_2[i].f1, "g_2[i].f1", print_hash_value);
        transparent_crc_bytes(&g_2[i].f2, sizeof(g_2[i].f2), "g_2[i].f2", print_hash_value);
        transparent_crc(g_2[i].f3, "g_2[i].f3", print_hash_value);
        transparent_crc_bytes(&g_2[i].f4, sizeof(g_2[i].f4), "g_2[i].f4", print_hash_value);
        transparent_crc(g_2[i].f5, "g_2[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc_bytes (&g_3.f0, sizeof(g_3.f0), "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc_bytes (&g_3.f2, sizeof(g_3.f2), "g_3.f2", print_hash_value);
    transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
    transparent_crc_bytes (&g_3.f4, sizeof(g_3.f4), "g_3.f4", print_hash_value);
    transparent_crc(g_3.f5, "g_3.f5", print_hash_value);
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 2
XXX total union variables: 1

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 33.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
********************* end of statistics **********************/

