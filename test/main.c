#include "monty.h"
/**
*main - main test file
*Return: if success
 */
int main(void)
{
	stack_t *stack;

	stack = NULL;
	push(1, &stack);
	push(2, &stack);
	push(3, &stack);
	push(4, &stack);
	push(5, &stack);
	push(6, &stack);
	push(7, &stack);
	pall(&stack);
	printf("pall======\n");
	fflush(stdout);
	pint(&stack);
	printf("pint======\n");
	fflush(stdout);
	pop(&stack);
	pall(&stack);


	printf("add======\n");
	fflush(stdout);
	_add(&stack);
	pall(&stack);

	printf("sub======\n");
	fflush(stdout);
	_sub(&stack);
	pall(&stack);

	printf("mul======\n");
	fflush(stdout);
	_mul(&stack);
	pall(&stack);

	printf("div======\n");
	fflush(stdout);
	_div(&stack);
	pall(&stack);

	printf("mod======\n");
	fflush(stdout);
	_mod(&stack);
	pall(&stack);
	
	printf("======\n");
	return (0);
}
