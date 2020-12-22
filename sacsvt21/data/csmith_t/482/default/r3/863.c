/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2740861956
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   uint16_t  f0;
   int8_t * f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 0xC8FC558BL;
static int32_t g_6 = 0xB40194DDL;
static volatile int16_t g_15[4] = {0x94D2L,0x94D2L,0x94D2L,0x94D2L};
static uint8_t g_16[10][10][2] = {{{0x85L,0UL},{4UL,0UL},{0xEBL,255UL},{0UL,254UL},{249UL,0xB0L},{0UL,0x26L},{0xE9L,0x24L},{1UL,252UL},{250UL,0x95L},{248UL,0UL}},{{1UL,254UL},{255UL,249UL},{0xA5L,0xA5L},{255UL,1UL},{0UL,0x87L},{255UL,1UL},{0xBAL,255UL},{0xFDL,0xEBL},{0xFDL,255UL},{0xBAL,1UL}},{{255UL,0x87L},{248UL,247UL},{0xB0L,250UL},{250UL,254UL},{0x26L,255UL},{0UL,0x4DL},{0xE9L,0xEBL},{1UL,0x85L},{255UL,0x07L},{1UL,1UL}},{{252UL,0x72L},{254UL,0UL},{0x4DL,0x26L},{0x0CL,0x95L},{0x5AL,248UL},{4UL,254UL},{0UL,0x5AL},{0x20L,255UL},{0xC1L,0UL},{0xEBL,0x24L}},{{0xBAL,0xA5L},{254UL,0xA5L},{0xBAL,0x24L},{0xEBL,0UL},{0xC1L,255UL},{0x20L,0x5AL},{0UL,254UL},{4UL,248UL},{0x5AL,0x95L},{0x0CL,0x26L}},{{0x4DL,0UL},{254UL,0x72L},{252UL,1UL},{1UL,0x07L},{255UL,0x85L},{1UL,0xEBL},{0xE9L,0x4DL},{0UL,255UL},{0x26L,254UL},{250UL,250UL}},{{0xB0L,247UL},{248UL,6UL},{255UL,0UL},{0UL,255UL},{254UL,0x0CL},{254UL,255UL},{0UL,0UL},{255UL,6UL},{248UL,247UL},{0xB0L,250UL}},{{250UL,254UL},{0x26L,255UL},{0UL,0x4DL},{0xE9L,0xEBL},{1UL,0x85L},{255UL,0x07L},{1UL,1UL},{252UL,0x72L},{254UL,0UL},{0x4DL,0x26L}},{{0x0CL,0x95L},{0x5AL,248UL},{4UL,254UL},{0UL,0x5AL},{0x20L,255UL},{0xC1L,0UL},{0xEBL,0x24L},{0xBAL,0xA5L},{254UL,0xA5L},{0xBAL,0x24L}},{{0xEBL,0UL},{0xC1L,255UL},{0x20L,0x5AL},{0UL,254UL},{4UL,248UL},{0x5AL,0x95L},{0x0CL,0x26L},{0x4DL,0UL},{254UL,0x72L},{252UL,1UL}}};


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_16
 * writes: g_16
 */
static union U1  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = &g_4;
    int32_t *l_5 = &g_4;
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = (void*)0;
    int32_t l_9[5][3] = {{0x30CC2FDCL,(-1L),0x30CC2FDCL},{0x30CC2FDCL,(-2L),(-1L)},{(-2L),0x30CC2FDCL,0x30CC2FDCL},{(-1L),0x30CC2FDCL,0x8F5F4990L},{3L,(-2L),(-1L)}};
    int32_t *l_10 = &l_9[1][0];
    int32_t *l_11 = &l_9[1][0];
    int32_t *l_12 = (void*)0;
    int32_t *l_13 = &l_9[2][1];
    int32_t *l_14[4][1];
    union U1 l_19 = {0x5DBDL};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_14[i][j] = &l_9[1][0];
    }
    --g_16[4][7][1];
    return l_19;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_16[i][j][k], "g_16[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 12

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 49
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 12
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

