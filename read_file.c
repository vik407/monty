#include "monty.h"
/**
 * read_file - read the content of a monty file.
 * @fd: The file  to a file
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	FILE *fd;
	char *buff, *opcode = NULL, *args;
	stack_t *stack = NULL;
	size_t buffsize = 1024;

	buff = malloc(sizeof(char)* buffsize);
	/*TODO Malloc validate null*/ 
	fd = fopen(filename, "r");
	if (fd == NULL)
	{
		printf("%s %s\n", "Error: Can't open file", filename);
		exit(EXIT_FAILURE);
	}
	line = 0;
	while (getline(&buff, &buffsize, fd) != -1)
	{
		line++;
		opcode = strtok(buff, "\n\t\r ");
		args = strtok(NULL, "\n\t\r ");
		if(opcode)
		{
			if(strcmp(opcode, "push") == 0)
			{
				push(args, &stack);
			}
			/*	opcode_handler(opcode);*/
		}
	}
	pall(&stack);
	(void)args;
	(void)stack;
	return(opcode);
}
