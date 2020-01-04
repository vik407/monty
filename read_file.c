#include "monty.h"
/**
 * read_file - read the content of a monty file.
 * @filename: The file  to a file
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	char *opcode = NULL, *args;
	stack_t *stack = NULL;
	size_t buffsize = 1024;
	void (*f)(stack_t **, unsigned int);

	buff = NULL;
	buff = malloc(sizeof(char) * buffsize);
	if (buff == NULL)
		exit_failure(&stack, "Error: malloc failed\n");
		/*TODO Malloc validate null*/
	fd = fopen(filename, "r");
	if (fd == NULL)
	{	free(buff);
		free_stack(&stack);
		if (fd)
			fclose(fd);
		printf("%s %s\n", "Error: Can't open file", filename);
		exit(EXIT_FAILURE);
	}
	line = 0;
	while (getline(&buff, &buffsize, fd) != -1)
	{
		opcode = strtok(buff, "\n\t\r ");
		args = strtok(NULL, "\n\t\r ");
		if (opcode)
		{
			if (strcmp(opcode, "push") == 0)
				push(args, &stack);
			else
			{	f = opcode_handler(opcode);
				if (f)
				{	line++;
					f(&stack, (unsigned int) line);
				}
			}
		}
	}
	fclose(fd);
	free_stack(&stack);
	return (opcode);
}
