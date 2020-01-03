#include "monty.h"
/**
 * main - check the code for Holberton School students.
 * @argc: The number of vars
 * @argv: The var values
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *content;

	if (argc != 2)
	{
		printf("%s\n", "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	content = read_file(argv[1]);
	(void)content;
	return (0);
}
