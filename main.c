#include "monty.h"
/**
 * main - check the code for Holberton School students.
 * @argc: The number of vars
 * @argv: The var values
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{	fprintf(stderr, "%s\n", "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1]);
	return (EXIT_SUCCESS);
}
