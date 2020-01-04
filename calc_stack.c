#include "monty.h"
/**
*_add - sum twotop values from the st
*@st: pointer to the top element
*@line_number: the line
*Return: result from the add
 */
void _add(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		(*st)->next->n = (*st)->next->n + (*st)->n;
		*st = (*st)->next;
		free((*st)->prev);
		(*st)->prev = NULL;
	}
	else
	{
		exit_failure(st, "L%d: can't add, stack too short\n");
	}
	(void) st;
	(void) line_number;
}
/**
*_sub - sum twotop values from the st
*@st: pointer to the top element
*@line_number: the line
*Return: result from the add
 */
void _sub(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		(*st)->next->n = (*st)->next->n - (*st)->n;
		*st = (*st)->next;
		free((*st)->prev);
		(*st)->prev = NULL;
	}
	else
	{
		exit_failure(st, "L%d: can't sub, stack too short\n");
	}
	(void) st;
	(void) line_number;
}

/**
*_div - sum twotop values from the st
*@st: pointer to the top element
*@line_number: the line
*Return: result from the add
 */
void _div(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		if ((*st)->n == 0)
		{
			exit_failure(st, "L%d: division by zero\n");
		}
		(*st)->next->n = (*st)->next->n / (*st)->n;
		*st = (*st)->next;
		free((*st)->prev);
		(*st)->prev = NULL;
	}
	else
	{
		exit_failure(st, "L%d: can't div, stack too short\n");
	}
	(void) st;
	(void) line_number;
}

/**
*_mul - sum twotop values from the st
*@st: pointer to the top element
*@line_number: the line
*Return: result from the add
 */
void _mul(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		(*st)->next->n = (*st)->next->n * (*st)->n;
		*st = (*st)->next;
		free((*st)->prev);
		(*st)->prev = NULL;
	}
	else
	{
		exit_failure(st, "L%d: can't mul, stack too short\n");
	}
	(void) st;
	(void) line_number;
}

/**
*_mod - sum twotop values from the st
*@st: pointer to the top element
*@line_number: the line
*Return: result from the add
 */
void _mod(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		if ((*st)->n == 0)
		{
			exit_failure(st, "L%d: division by zero\n");
		}
		(*st)->next->n = (*st)->next->n % (*st)->n;
		*st = (*st)->next;
		free((*st)->prev);
		(*st)->prev = NULL;
	}
	else
	{
		exit_failure(st, "L%d: can't mod, stack too short\n");
	}
	(void) st;
	(void) line_number;
}
