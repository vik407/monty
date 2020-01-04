#include "monty.h"
/**
 * read_file - read the content of a monty file.
 * @filename: The file  to a file
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	char *opcode = NULL;
	stack_t *stack = NULL;
	size_t buffsize = 1024;
	void (*f)(stack_t **, unsigned int);

	buff = NULL;
	arg = NULL;
	buff = malloc(sizeof(char) * buffsize);
	if (buff == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
		/*TODO Malloc validate null*/
	fd = fopen(filename, "r");
	if (fd == NULL)
	{	free(buff);
		if (fd)
			fclose(fd);
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	line = 0;
	while (getline(&buff, &buffsize, fd) != -1)
	{
		line++;
		opcode = strtok(buff, "\n\t\r ");
		arg = strtok(NULL, "\n\t\r ");
		if (opcode)
		{	f = opcode_handler(opcode);
			if (f)
				f(&stack, (unsigned int) line);
		}
	}
	free(buff);
	fclose(fd);
	free_stack(&stack);
	(void) arg;
	return (opcode);
}
