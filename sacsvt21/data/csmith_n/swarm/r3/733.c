/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --comma-operators --no-compound-assignment --no-consts --divs --no-embedded-assigns --no-pre-incr-operator --pre-decr-operator --no-post-incr-operator --post-decr-operator --unary-plus-operator --no-jumps --longlong --int8 --uint8 --no-float --no-math64 --no-inline-function --muls --safe-math --no-packed-struct --no-paranoid --no-pointers --no-structs --unions --volatiles --volatile-pointers --no-const-pointers --global-variabless --builtins
 * Seed:      3916818984
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
   volatile int32_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_3 = 2UL;
static int32_t g_15 = 0L;
static union U0 g_33[4][4] = {{{4294967286UL},{1UL},{1UL},{4294967286UL}},{{1UL},{4294967286UL},{0x4B5E4957L},{0x2DB80EBBL}},{{1UL},{0x4B5E4957L},{1UL},{7UL}},{{4294967286UL},{0x2DB80EBBL},{7UL},{7UL}}};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_27(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_15 g_33 g_33.f0
 * writes:
 */
static uint16_t  func_27(void)
{ /* block id: 36 */
    uint16_t l_30 = 0x07C7L;
    int32_t l_34 = (-2L);
    l_34 = (((safe_div_func_uint32_t_u_u(__builtin_bswap32(g_3), g_15)) , l_30) || (safe_mod_func_int32_t_s_s(l_30, (((l_30 & l_30) && (g_33[2][0] , l_30)) & l_30))));
    return g_33[2][0].f0;
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
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 4; i = i + 1)
    {
        for (j = 0; j < 4; j = j + 1)
        {
            transparent_crc(g_33[i][j].f0, "g_33[i][j].f0", print_hash_value);
            transparent_crc(g_33[i][j].f1, "g_33[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
XXX total union variables: 1

XXX max expression depth: 10
breakdown:
   depth: 1, occurrence: 2
   depth: 10, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 27
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 96.6

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 34.5
XXX percentage an existing variable is used: 65.5
********************* end of statistics **********************/

