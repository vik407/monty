#include "monty.h"
void read_line(stack_t **stack);
/**
 * is_amonty_file - read the content of a monty file.
 * @filename: The file  to a file
 * Return: Always 0.
 */
int is_amonty_file(char *filename)
{
	int len = strlen(filename);

	len--;
	if (len > 1)
	{
		if (filename[len - 1] == '.' && filename[len] == 'm')
			return (1);
	}
	return (0);
}
/**
 * cant_open_file - read the content of a monty file.
 * @filename: The file  to a file
 * @stack: The file  to a file
 * Return: Always 0.
 */
void cant_open_file(char *filename, stack_t **stack)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	free_all(stack);
	exit(EXIT_FAILURE);
}
/**
 * read_file - read the content of a monty file.
 * @filename: The file  to a file
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	struct stat st;
	int s;
	stack_t *stack = NULL;

	s = stat(filename, &st);
	if (s == 0)
	{
		if ((st.st_mode & S_IFMT) != S_IFREG)
			cant_open_file(filename, &stack);
		/*if (!is_amonty_file(filename))*/
	} else
	{ cant_open_file(filename, &stack);
	}
	m_var.fd = fopen(filename, "r");
	if (m_var.fd == NULL)
		cant_open_file(filename, &stack);
	m_var.line = 0;
	read_line(&stack);

	free_all(&stack);
	return ("Success");
}
/**
 * read_line - read the content of line.
 * @stack: The stack to work
 * Return: void.
 */
void read_line(stack_t **stack)
{
	char *opcode = NULL;
	size_t buffsize = 1024;
	void (*f)(stack_t **, unsigned int);
	char *str = NULL;
	int check_comm = 0;

	m_var.buff = NULL, m_var.arg = NULL;
	m_var.buff = malloc(sizeof(char) * buffsize);
	if (m_var.buff == NULL)
	{	fprintf(stderr, "Error: malloc failed\n");
		free_all(stack);
		exit(EXIT_FAILURE);
	}
	while (getline(&m_var.buff, &buffsize, m_var.fd) != -1)
	{	m_var.line++;
		str = m_var.buff;
		check_comm = 0;
		while (*str != '\0')
		{
			if (*str == '#')
			{	check_comm = 1;
				break;
			}
			str++;
		}
		if (check_comm != 1)
		{
			opcode = strtok(m_var.buff, "\v\f\n\t\r ");
			m_var.arg = strtok(NULL, "\v\f\n\t\r ");
			if (opcode)
			{	f = opcode_handler(opcode);
				if (f)
					f(stack, (unsigned int) m_var.line);
				else
				{	fprintf(stderr, "L%d: unknown instruction %s\n", m_var.line, opcode);
					free_all(stack);
					exit(EXIT_FAILURE);
				}
			}
		}
	}
}
