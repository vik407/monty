#include "monty.h"
/**
*is_dig - push value to the stack
*@argu: value to be pushed
*Return: void
 */
int is_dig(char *argu)
{
	int pos = 0;

	if (argu == NULL)
		return (0);

	while (argu[pos] != '\0')
	{
		if ((argu[pos] >= 48 && argu[pos] <= 57) || (argu[pos] == '-' && pos == 0))
		{
			pos++;
		} else
		{
			return (0);
		}
	}
	return (1);
}

/**
*push - push value to the stack
*@stack: pointer to the top element
*@line_number: pointer to the top element
*Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *stack_new;
	int value;
	bool failed;

	if (m_var.arg)
	{
		failed = is_dig(m_var.arg) ? true : false;
		if (!failed)
		{
			exit_failure(stack, "L%d: usage: push integer\n");
		} else
		{
			value = atoi(m_var.arg);
		}
	}
	else
	{
		exit_failure(stack, "L%d: usage: push integer\n");
	}
	stack_new = malloc(sizeof(stack_t));
	if (!stack_new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_all(stack);
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
	(void) line_number;
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
	} else
	{	exit_failure(stack, "L%d: can't pop an empty stack\n");
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
		exit_failure(st, "L%d: can't swap, stack too short\n");
	}
	(void) st;
	(void) line_number;

}
