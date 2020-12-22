/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4031100320
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   const int32_t  f0;
   const volatile uint64_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static struct S1 g_4 = {-1L,0xCDB8FAAAEB9AE77ALL};/* VOLATILE GLOBAL g_4 */
static struct S1 g_6[2][4] = {{{-1L,18446744073709551607UL},{-1L,18446744073709551607UL},{-1L,18446744073709551607UL},{-1L,18446744073709551607UL}},{{-1L,18446744073709551607UL},{-1L,18446744073709551607UL},{-1L,18446744073709551607UL},{-1L,18446744073709551607UL}}};
static struct S1 * volatile g_5 = &g_6[0][2];/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_5
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    struct S1 *l_3 = &g_4;
    struct S1 **l_2[8] = {&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3};
    int32_t l_7[10] = {0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL,0xEE39F3FAL};
    int i;
    g_5 = (void*)0;
    return l_7[3];
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
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j].f0, "g_6[i][j].f0", print_hash_value);
            transparent_crc(g_6[i][j].f1, "g_6[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

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

XXX total number of pointers: 3

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

