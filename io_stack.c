#include "monty.h"
/**
*is_dig - push value to the stack
*@arg: value to be pushed
*Return: void
 */
int is_dig(char *arg)
{
	int pos = 0;

	while (arg[pos] != '\0')
	{
		if (arg[pos] >= 48 && arg[pos] <= 57)
		{
			pos++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
*push - push value to the stack
*@arg: value to be pushed
*@stack: pointer to the top element
*Return: void
 */
void push(char *arg, stack_t **stack)
{
	/*printf("%d\n", value);*/
	stack_t *stack_new;
	int value;
	bool failed;

	if (arg)
	{
		failed = is_dig(arg) ? true : false;
		if (!failed)
			exit_failure(stack, "L%d: usage: push integer\n");
		else
			value = atoi(arg);
	}
	else
	{
		exit_failure(stack, "L%d: usage: push integer\n");
	}
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
}

/**
 *pop - print top element of the stack
 *@stack: pointer to the top element
 *@line_number: the line
 *Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *st = *stack;

	if (st != NULL)
	{
		if (st->next)
			st->next->prev = NULL;
		*stack = st->next;
		free(st);
	}
	(void) line_number;
}
/**
 *swap - print top element of the stack
 *@st: pointer to the top element
 *@line_number: the line
 *Return: void
 */
void swap(stack_t **st, unsigned int line_number)
{
	int tmp;

	if (*st && (*st)->next)
	{
		tmp = (*st)->n;
		(*st)->n = (*st)->next->n;
		(*st)->next->n = tmp;
	}
	else
	{
		exit_failure(st, "L%d: can't swap stack too short\n");
	}
	(void) st;
	(void) line_number;

}
