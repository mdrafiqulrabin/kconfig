/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      268556578
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U3 {
   const uint16_t  f0;
   volatile uint32_t  f1;
   const volatile uint8_t  f2;
   uint8_t  f3;
   int32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2 = 0xD0L;/* VOLATILE GLOBAL g_2 */
static int32_t g_3 = 8L;
static int64_t g_15 = 0x90C6D21CD4309642LL;
static volatile uint32_t g_16 = 0x6364D64EL;/* VOLATILE GLOBAL g_16 */
static union U3 g_22[3][1][1] = {{{{0x62CCL}}},{{{0x62CCL}}},{{{0x62CCL}}}};
static int32_t g_23 = (-8L);


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_16 g_22 g_15 g_23 g_22.f2
 * writes: g_3 g_16 g_23
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &g_3;
    int32_t *l_7 = (void*)0;
    int32_t l_8 = 0xF8D19C92L;
    int32_t *l_9 = &g_3;
    int32_t *l_10 = &l_8;
    int32_t *l_11 = &l_8;
    int32_t *l_12 = &l_8;
    int32_t *l_13 = &g_3;
    int32_t *l_14[2];
    int i;
    for (i = 0; i < 2; i++)
        l_14[i] = &g_3;
    g_3 |= g_2;
    --g_16;
    g_23 |= ((*l_11) = (safe_sub_func_int64_t_s_s((+(g_22[0][0][0] , (*l_9))), g_15)));
    return g_22[0][0][0].f2;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_22[i][j][k].f0, "g_22[i][j][k].f0", print_hash_value);
                transparent_crc(g_22[i][j][k].f2, "g_22[i][j][k].f2", print_hash_value);
                transparent_crc(g_22[i][j][k].f3, "g_22[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_23, "g_23", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 6
   depth: 4, occurrence: 1

XXX total number of pointers: 10

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 40

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 9
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 10
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 30
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 4
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 72.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

