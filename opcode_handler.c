#include "monty.h"
/**
 * opcode_handler - read the content of a monty file.
 * @opcode: The file  to a file
 * Return: Always 0.
 */
void (*opcode_handler(char *opcode))(stack_t, unsigned int)
{
	int i = 0;

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"pop", pop},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mod", _mod},
		{"mul", _mul},
		{NULL, NULL}
	};

	while (i < 9)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			return (opcodes[i].f);
		}
	}
	return (NULL);
}
