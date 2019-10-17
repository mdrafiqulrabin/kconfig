/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1951967592
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   uint32_t  f0;
   uint8_t  f1;
   int16_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[9][1] = {{7L},{0x6A9EF72DL},{0x6A9EF72DL},{7L},{0x6A9EF72DL},{0x6A9EF72DL},{7L},{0x6A9EF72DL},{0x6A9EF72DL}};
static int32_t g_3[5][9] = {{0x5B054DBBL,(-1L),(-9L),0x9D94B4B1L,0xF7D65121L,0x5B054DBBL,0x5B054DBBL,0xF7D65121L,0x9D94B4B1L},{6L,(-1L),6L,(-9L),0xF7D65121L,6L,0x1D26EC17L,0L,(-9L)},{6L,0xF7D65121L,(-9L),6L,(-1L),6L,(-9L),0xF7D65121L,6L},{0x5B054DBBL,0xF7D65121L,0x9D94B4B1L,(-9L),(-1L),0x5B054DBBL,(-9L),(-10L),(-9L)},{(-9L),0x5B054DBBL,0x07858F9CL,0x07858F9CL,0x5B054DBBL,3L,1L,0x1D26EC17L,0x07858F9CL}};
static int32_t g_10 = 2L;
static int32_t * volatile g_9 = &g_10;/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t  func_6(union U1  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_9
 * writes: g_3 g_10
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    union U1 l_8 = {0x373EE763L};
    for (g_3[3][6] = 14; (g_3[3][6] == (-25)); g_3[3][6] = safe_sub_func_uint64_t_u_u(g_3[3][6], 3))
    { /* block id: 3 */
        (*g_9) = func_6(l_8);
        return g_3[2][0];
    }
    return l_8.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_6(union U1  p_7)
{ /* block id: 4 */
    return p_7.f0;
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
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 2

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

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 87.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 25
XXX percentage an existing variable is used: 75
********************* end of statistics **********************/

