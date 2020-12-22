/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3848398534
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   const uint16_t  f0;
   volatile signed f1 : 5;
   uint8_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static union U1 g_2[6][9] = {{{9UL},{0x01AAL},{0x0289L},{2UL},{0xA5F9L},{9UL},{0UL},{0xC6F8L},{0xC6F8L}},{{0x7688L},{0x505BL},{65526UL},{0xC6F8L},{65526UL},{0x505BL},{0x7688L},{0x2C9CL},{0xC6F8L}},{{65535UL},{1UL},{0xD744L},{0x9570L},{0x33E3L},{1UL},{1UL},{0UL},{9UL}},{{1UL},{0x33E3L},{0x9570L},{0xD744L},{1UL},{65535UL},{0x2C9CL},{0x2C9CL},{65535UL}},{{0x505BL},{65526UL},{0xC6F8L},{65526UL},{0x505BL},{0x7688L},{0x2C9CL},{0xC6F8L},{0x9570L}},{{9UL},{0x7104L},{1UL},{3UL},{0x4B9AL},{1UL},{0UL},{0x01AAL},{0xA5F9L}}};


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static union U1  func_1(void)
{ /* block id: 0 */
    return g_2[2][8];
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
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2[i][j].f0, "g_2[i][j].f0", print_hash_value);
            transparent_crc(g_2[i][j].f2, "g_2[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 1
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

