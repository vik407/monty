#include "monty.h"
/**
*pall - print all the stack
*@stack: pointer to the top element
*Return: void
 */
void pall(stack_t **stack)
{
	stack_t *st = *stack;

	while (st != NULL)
	{
		printf("%d\n", st->n);
		st = st->next;
	}
}
/**
 *pint - print top element of the stack
 *@stack: pointer to the top element
 *Return: void
 */
void pint(stack_t **stack)
{
	stack_t *st = *stack;

	if (st != NULL)
		printf("%d\n", st->n);
}

