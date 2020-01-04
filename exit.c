#include "monty.h"
/**
 * exit_failure - check the code for Holberton School students.
 *@st: stack to be freed
 *@mess: out message
 * Return: Always 0.
 */
void exit_failure(stack_t **st, char *mess)
{
	(void) st;
	printf("%s", mess);
	exit(EXIT_FAILURE);
}
