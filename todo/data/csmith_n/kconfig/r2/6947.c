/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --no-compound-assignment --no-consts --divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --no-post-decr-operator --unary-plus-operator --no-jumps --no-longlong --int8 --uint8 --no-float --no-math64 --no-inline-function --no-muls --safe-math --packed-struct --paranoid --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      577301648
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_7 = 4;
static uint16_t g_8[2] = {6U,6U};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_2(uint32_t  p_3, int8_t  p_4, uint32_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8
 * writes: g_8
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_6 = (-1);
    g_8[0] = func_2(l_6, g_7, l_6);
    return g_8[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes:
 */
static int32_t  func_2(uint32_t  p_3, int8_t  p_4, uint32_t  p_5)
{ /* block id: 1 */
    return g_7;
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
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
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

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

