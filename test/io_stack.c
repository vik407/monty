#include "monty.h"
/**
*push - push value to the stack
*@value: value to be pushed
*@stack: pointer to the top element
*Return: void
 */
stack_t *push(int value, stack_t **stack)
{
	/*printf("%d\n", value);*/
	stack_t *stack_new;

	stack_new = malloc(sizeof(stack_t));
	if (!stack_new)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack_new->prev = NULL;
	stack_new->n = value;
	stack_new->next = *stack;
	if (!(*stack))
		*stack = stack_new;
	else
	{
		(*stack)->prev = stack_new;
		*stack = stack_new;
	}
	return (stack_new);
}

/**
 *pop - print top element of the stack
 *@stack: pointer to the top element
 *Return: void
 */
void pop(stack_t **stack)
{
	stack_t *st = *stack;

	if (st != NULL)
	{
		if (st->next)
			st->next->prev = NULL;
		*stack = st->next;
		free(st);
	}
}
