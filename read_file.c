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

	m_var.buff = NULL, m_var.arg = NULL;
	m_var.buff = malloc(sizeof(char) * buffsize);
	if (m_var.buff == NULL)
	{	fprintf(stderr, "Error: malloc failed\n");
		free_all(&stack);
		exit(EXIT_FAILURE);
	}
		/*TODO Malloc validate null*/
	m_var.fd = fopen(filename, "r");
	if (m_var.fd == NULL)
	{	fprintf(stderr, "Error: Can't open file %s\n", filename);
		free_all(&stack);
		exit(EXIT_FAILURE);
	}
	m_var.line = 0;
	while (getline(&m_var.buff, &buffsize, m_var.fd) != -1)
	{	m_var.line++;
		opcode = strtok(m_var.buff, "\v\f\n\t\r ");
		m_var.arg = strtok(NULL, "\v\f\n\t\r ");
		if (opcode)
		{	f = opcode_handler(opcode);
			if (f)
				f(&stack, (unsigned int) m_var.line);
			else
			{	fprintf(stderr, "L%d: unknown instruction %s\n", m_var.line, opcode);
				free_all(&stack);
				exit(EXIT_FAILURE);
			}
		}
	}
	free(m_var.buff);
	fclose(m_var.fd);
	free_stack(&stack);
	(void) m_var.arg;
	return (opcode);
}
