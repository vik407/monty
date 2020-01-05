#include "monty.h"
/**
 * exit_failure - check the code for Holberton School students.
 *@st: stack to be freed
 *@mess: out message
 * Return: Always 0.
 */
void exit_failure(stack_t **st, const char *mess)
{
	fprintf(stderr, mess, m_var.line);
	free_all(st);
	exit(EXIT_FAILURE);
}
