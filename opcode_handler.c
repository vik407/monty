#include "monty.h"
/**
 * opcode_handler - read the content of a monty file.
 * @opcode: The file  to a file
 * Return: Always 0.
 */
void opcode_handler(char *opcode)
{
	int i = 0;

	instruction_t opcodes[] = {
		{"push", op_push},
		{NULL, NULL}
	};
}
