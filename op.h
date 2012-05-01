enum OP {
	OP_NOP = 0,
	OP_ZERO,
	OP_MOV8, OP_MOV16, OP_MOV32,
	OP_PUSH, OP_POP,
	OP_SHL, OP_SHR,
	OP_AND, OP_OR, OP_XOR, OP_NOT,
	OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_MOD,
	OP_INT,
	OP_CMP,
	OP_B, OP_BZ, OP_BNZ, OP_BLT, OP_BGT, OP_BE, OP_BNE,
	OP_HALT,

	OP_COUNT_MINUS_ONE,
	OP_COUNT
};

static char* opnames[] = {
	"OP_NOP",
	"OP_ZERO",
	"OP_MOV8", "OP_MOV16", "OP_MOV32",
	"OP_PUSH", "OP_POP",
	"OP_SHL", "OP_SHR",
	"OP_AND", "OP_OR", "OP_XOR", "OP_NOT",
	"OP_ADD", "OP_SUB", "OP_MUL", "OP_DIV", "OP_MOD",
	"OP_INT",
	"OP_CMP",
	"OP_B", "OP_BZ", "OP_BNZ", "OP_BLT", "OP_BGT", "OP_BE", "OP_BNE",
	"OP_HALT",

	"OP_COUNT_MINUS_ONE",
	"OP_COUNT"
};

/* operand type codes */
enum {
        REGISTER = 0,
        MEMORY,
        DEREF,
        LITERAL
};

const char *op_tostr(int op);
