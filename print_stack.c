#include "monty.h"
/**
*pall - print all the stack
*@stack: pointer to the top element
*@line_number: line number
*Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *st = *stack;

	while (st != NULL)
	{
		printf("%d\n", st->n);
		st = st->next;
	}
	(void) line_number;
}
/**
 *pint - print top element of the stack
 *@stack: pointer to the top element
*@line_number: line number
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *st = *stack;

	if (st != NULL)
		printf("%d\n", st->n);
	(void) line_number;
}

/**
 *pstr - print top element of the stack
 *@stack: pointer to the top element
 *@line_number: line number
 *Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *st = *stack;

	while (st != NULL)
	{
		if (st->n >= 33 && st->n <= 127)
			printf("%c\n", st->n);
		else
		{
			exit_failure(stack, "can't pchar, value out of range\n");
		}
		st = st->next;
	}
	(void) line_number;
}
/**
 *pchar - print top element of the stack
 *@stack: pointer to the top element
 *@line_number: line number
 *Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *st = *stack;

	if (st != NULL)
	{
		if (st->n >= 33 && st->n <= 127)
			printf("%c\n", st->n);
		else
		{
			exit_failure(stack, "can't pchar, value out of range\n");
		}
		st = st->next;
	}
	(void) line_number;
}
