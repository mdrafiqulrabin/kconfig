/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3459413618
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile signed f0 : 7;
   volatile unsigned : 0;
   signed f1 : 2;
   signed f2 : 6;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 23;
};

/* --- GLOBAL VARIABLES --- */
static struct S1 g_2 = {112};
static struct S0 g_5[2][1] = {{{-5,1,-5}},{{-5,1,-5}}};
static const struct S0 *g_4 = &g_5[0][0];
static const struct S0 *g_8[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
static const struct S0 ** volatile g_7[3][4][5] = {{{(void*)0,(void*)0,&g_8[0][1],&g_8[1][1],&g_8[0][1]},{&g_8[1][1],&g_8[0][1],&g_8[0][1],&g_8[0][0],&g_8[0][1]},{&g_8[0][1],(void*)0,&g_8[1][1],&g_8[1][1],(void*)0},{(void*)0,&g_8[0][1],&g_8[0][1],&g_8[1][0],(void*)0}},{{&g_8[0][1],&g_8[1][0],(void*)0,(void*)0,&g_8[0][1]},{&g_8[0][1],(void*)0,(void*)0,&g_8[0][1],&g_8[0][1]},{&g_8[0][1],&g_8[0][1],&g_8[0][1],(void*)0,&g_8[0][1]},{(void*)0,&g_8[0][1],&g_8[0][0],&g_8[0][1],&g_8[1][0]}},{{&g_8[1][0],&g_8[0][1],&g_8[1][1],&g_8[0][0],(void*)0},{&g_8[0][1],(void*)0,&g_8[0][1],(void*)0,&g_8[0][1]},{&g_8[0][1],&g_8[1][0],&g_8[0][1],(void*)0,&g_8[0][0]},{(void*)0,&g_8[0][1],(void*)0,&g_8[0][0],&g_8[0][1]}}};
static const struct S0 ** volatile g_9 = &g_8[0][1];/* VOLATILE GLOBAL g_9 */
static int32_t g_10 = 0xBB2C593CL;
static int32_t g_17 = (-1L);
static uint64_t g_24 = 0xD5D57D38C46158E9LL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_9 g_10 g_5.f0 g_17 g_24
 * writes: g_2 g_4 g_8 g_10 g_17 g_24
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    struct S1 l_3 = {-720};
    const struct S0 **l_6 = &g_4;
    int8_t l_20 = 0L;
    int16_t l_21[9] = {0x073EL,0x073EL,0x073EL,0x073EL,0x073EL,0x073EL,0x073EL,0x073EL,0x073EL};
    int32_t l_22 = 0x49EF57A5L;
    int32_t l_23[10] = {1L,0xE56A96DAL,1L,0xE56A96DAL,1L,0xE56A96DAL,1L,0xE56A96DAL,1L,0xE56A96DAL};
    int i;
    g_2 = g_2;
    l_3 = g_2;
    (*g_9) = ((*l_6) = g_4);
    for (g_10 = 0; (g_10 != (-24)); g_10 = safe_sub_func_uint32_t_u_u(g_10, 8))
    { /* block id: 7 */
        uint64_t l_13 = 0x20578CCA69919C44LL;
        int32_t *l_16 = &g_17;
        int32_t l_18 = 0x91F06E85L;
        int32_t *l_19[6][1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_19[i][j] = &g_17;
        }
        (*l_16) |= (((l_13--) < g_5[0][0].f0) > g_10);
        g_24++;
    }
    return g_2.f0;
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
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_5[i][j].f0, "g_5[i][j].f0", print_hash_value);
            transparent_crc(g_5[i][j].f1, "g_5[i][j].f1", print_hash_value);
            transparent_crc(g_5[i][j].f2, "g_5[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
XXX zero bitfields defined in structs: 1
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 2
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 2
   indirect level: 1, occurrence: 1
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 2
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 2

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 17
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 53

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 28.6
XXX average alias set size: 1.29

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 10
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 56
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 43.5
XXX percentage an existing variable is used: 56.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

