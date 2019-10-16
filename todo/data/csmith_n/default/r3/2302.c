/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3502706416
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   int8_t * const  f0;
   uint16_t  f1;
   int32_t  f2;
   int8_t  f3;
};

union U3 {
   volatile uint32_t  f0;
   volatile int16_t  f1;
   uint32_t  f2;
   signed f3 : 23;
   uint32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static int16_t g_4[10][2] = {{(-1L),6L},{0xC3D0L,0x4CB8L},{0xC3D0L,6L},{(-1L),0xC3D0L},{6L,0x4CB8L},{6L,6L},{(-1L),6L},{6L,0x4CB8L},{6L,0xC3D0L},{(-1L),6L}};
static uint16_t g_6 = 0x6B17L;
static volatile union U1 g_7 = {0};/* VOLATILE GLOBAL g_7 */
static int16_t g_9 = 0xB583L;
static int32_t g_11[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static union U3 g_12 = {4294967290UL};/* VOLATILE GLOBAL g_12 */


/* --- FORWARD DECLARATIONS --- */
static union U3  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7 g_12
 * writes: g_6 g_9 g_11
 */
static union U3  func_1(void)
{ /* block id: 0 */
    uint16_t *l_5 = &g_6;
    int16_t *l_8 = &g_9;
    int32_t *l_10[6] = {&g_11[3],(void*)0,(void*)0,&g_11[3],(void*)0,(void*)0};
    int i;
    g_11[3] = (safe_rshift_func_uint16_t_u_s(((*l_5) = g_4[3][0]), (g_7 , ((*l_8) = g_4[3][0]))));
    return g_12;
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_12.f4, "g_12.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 2

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 2
   depth: 5, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1.25

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 5
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

