#include "monty.h"
/**
 * exit_failure - check the code for Holberton School students.
 *@st: stack to be freed
 *@mess: out message
 * Return: Always 0.
 */
void exit_failure(stack_t **st, const char *mess)
{
	fprintf(stderr, mess, line);
	if (*st)
		free_stack(st);
	if (buff)
	{
		free(buff);
	}
	fclose(fd);
	exit(EXIT_FAILURE);
}
