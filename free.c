#include "monty.h"
/**
 *free_stack - check the code for Holberton School students.
 *@st: stack to be freed
 * Return: Always 0.
 */
void free_stack(stack_t **st)
{
	stack_t *next = *st;

	while (next)
	{
		next = (*st)->next;
		free(*st);
		*st = next;
	}

}
/**
 *free_all - Free all the project vars used.
 *@stack: stack to be freed
 * Return: void
 */
void free_all(stack_t **stack)
{
	free_stack(stack);
	if (m_var.buff)
		free(m_var.buff);
	if (m_var.fd)
		fclose(m_var.fd);
}
