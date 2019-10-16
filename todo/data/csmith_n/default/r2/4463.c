/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      792705730
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S2 {
   signed f0 : 21;
   unsigned f1 : 23;
   volatile int32_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0x7008B15EL;
static volatile int32_t g_4[3][3][7] = {{{3L,1L,1L,3L,0xD21CD430L,0xFD03B15AL,0x1462CCD2L},{9L,1L,0x28787D63L,9L,0xD21CD430L,(-9L),0xD21CD430L},{9L,1L,1L,9L,0x1462CCD2L,0xFD03B15AL,0xD21CD430L}},{{3L,1L,1L,3L,0xD21CD430L,0xFD03B15AL,0x1462CCD2L},{9L,1L,0x28787D63L,9L,0xD21CD430L,(-9L),0xD21CD430L},{9L,1L,1L,9L,0x1462CCD2L,0xFD03B15AL,0xD21CD430L}},{{3L,1L,1L,3L,0xE11914CCL,1L,0L},{1L,0xFD03B15AL,0L,1L,0xE11914CCL,(-3L),0xE11914CCL},{1L,(-9L),(-9L),1L,0L,1L,0xE11914CCL}}};
static struct S2 g_5 = {-926,1313,0x4595A2E7L,-2L};/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static struct S2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_5
 * writes: g_3 g_4
 */
static struct S2  func_1(void)
{ /* block id: 0 */
    uint8_t l_2[1];
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x8AL;
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { /* block id: 3 */
        for (g_4[0][2][6] = 0; g_4[0][2][6] < 1; g_4[0][2][6] += 1)
        {
            l_2[g_4[0][2][6]] = 0UL;
        }
    }
    return g_5;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
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
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

