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
	else
	{
		exit_failure(stack, "L%d: can't pint, stack empty\n");
	}
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

	if (!(*stack))
	{
		printf("\n");
	}
	else
	{
		while (st != NULL)
		{
			if (st->n >= 32 && st->n <= 126)
				printf("%c", st->n);
			else
			{
				break;
			}
			st = st->next;
		}
		printf("\n");
		fflush(stdout);
		(void) line_number;
	}
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
		if (st->n >= 32 && st->n <= 126)
			printf("%c\n", st->n);
		else
		{
			exit_failure(stack, "L%d: can't pchar, value out of range\n");
		}
		st = st->next;
	} else
	{
		exit_failure(stack, "L%d: can't pchar, stack empty\n");
	}

	(void) line_number;
}
