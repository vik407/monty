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
