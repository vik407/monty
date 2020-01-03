#include "monty.h"
/**
*_add - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _add(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		(*st)->next->n = (*st)->next->n + (*st)->n;
		(*st)->next->prev = NULL;
		free(*st);
		*st = (*st)->next;
	}
	else
	{
		printf("L<%d>: can't add st too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
	(void) line_number;
}
/**
*_sub - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _sub(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		(*st)->next->n = (*st)->next->n - (*st)->n;
		(*st)->next->prev = NULL;
		free(*st);
		*st = (*st)->next;
	}
	else
	{
		printf("L<%d>: can't sub st too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
	(void) line_number;
}

/**
*_div - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _div(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		if ((*st)->n == 0)
		{
			printf("L<%d>: division by zero\n", __LINE__);
			exit(EXIT_FAILURE);
		}
		(*st)->next->n = (*st)->next->n / (*st)->n;
		(*st)->next->prev = NULL;
		free(*st);
		*st = (*st)->next;
	}
	else
	{
		printf("L<%d>: can't div st too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
	(void) line_number;
}

/**
*mul - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _mul(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		(*st)->next->n = (*st)->next->n * (*st)->n;
		(*st)->next->prev = NULL;
		free(*st);
		*st = (*st)->next;
	}
	else
	{
		printf("L<%d>: can't mul st too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
	(void) line_number;
}

/**
*_mod - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _mod(stack_t **st, unsigned int line_number)
{
	if (*st && (*st)->next)
	{
		if ((*st)->n == 0)
		{
			printf("L<%d>: division by zero\n", __LINE__);
			exit(EXIT_FAILURE);
		}
		(*st)->next->n = (*st)->next->n % (*st)->n;
		(*st)->next->prev = NULL;
		free(*st);
		*st = (*st)->next;
	}
	else
	{
		printf("L<%d>: can'mod st too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
	(void) line_number;
}