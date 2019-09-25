 
 
 

 

typedef enum opcode
{
	OP_A,
	OP_B,
	OP_END
} opcode;

typedef struct op
{
	opcode opcode;
	int arg;
} op;

extern void do_stuff_b(int arg);
extern void do_stuff_c(int arg);

extern int someglobal;

void
eval(op *op)
{
	static const void *dispatch_table[] = {
		&&CASE_OP_A,
		&&CASE_OP_B,
		&&CASE_OP_C,
		&&CASE_OP_END
	};

	goto *dispatch_table[op->opcode];
CASE_OP_A:
	someglobal++;
	op++;
	goto *dispatch_table[op->opcode];
CASE_OP_B:
	do_stuff_b(op->arg);
	op++;
	goto *dispatch_table[op->opcode];
CASE_OP_C:
	do_stuff_c(op->arg);
	op++;
	goto *dispatch_table[op->opcode];
CASE_OP_END:
	return;
}

