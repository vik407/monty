#include "monty.h"
/**
 *rotl - check the code for Holberton School students.
 *@st: stack to be freed
 *@line_number: line number
 * Return: Always 0.
 */
void rotl(stack_t **st, unsigned int line_number)
{
	stack_t *next = *st, *top;

	if (!st || !(*st) || next->next == NULL)
		return;

	top = next->next;
	top->prev = NULL;

	while (next->next)
	{
		next = next->next;		
	}

	next->next = *st;

	(*st)->next = NULL;
	(*st)->prev =next;

	*st = top;

	(void) line_number;
}
/**
 *rotr - check the code for Holberton School students.
 *@st: stack to be freed
 *@line_number: line number
 * Return: Always 0.
 */
void rotr(stack_t **st, unsigned int line_number)
{
	stack_t *next = *st;

	while (next)
	{
		next = (*st)->next;
		free(*st);
		*st = next;
	}
	(void) line_number;
}
