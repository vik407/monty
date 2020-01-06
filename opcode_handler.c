#include "monty.h"
/**
 * opcode_handler - read the content of a monty file.
 * @opcode: The file  to a file
 * Return: Opcodes.
 */
void (*opcode_handler(char *opcode))(stack_t **, unsigned int)
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
		{"pchar", pchar},
		{"pstr", pstr},
		{"nop", _nop},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	while (opcodes[i].f != NULL)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}
	return (NULL);
}
