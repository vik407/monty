#include "monty.h"
/**
*_add - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _add(stack_t **st)
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
		printf("L<%d>: can't add stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
}
/**
*_sub - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _sub(stack_t **st)
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
		printf("L<%d>: can't sub stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
}

/**
*_div - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _div(stack_t **st)
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
		printf("L<%d>: can't div stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
}

/**
*_mul - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _mul(stack_t **st)
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
		printf("L<%d>: can't mul stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
}

/**
*_mod - sum twotop values from the st
*@st: pointer to the top element
*Return: result from the add
 */
void _mod(stack_t **st)
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
		printf("L<%d>: can't mod stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	(void) st;
}
