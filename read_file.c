#include "monty.h"
/**
 * read_file - read the content of a monty file.
 * @fd: The file  to a file
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	FILE *fd;
	char *buff, *tokens = NULL;
	size_t buffsize = 1024;
	unsigned int line = 0;

	buff = malloc(sizeof(char)* buffsize);
	/*TODO Malloc validate null*/ 
	fd = fopen(filename, "r");
	if (fd == NULL)
	{
		printf("%s %s\n", "Error: Can't open file", filename);
		exit(EXIT_FAILURE);
	}
	while (getline(&buff, &buffsize, fd) != -1)
	{
		line++;
		tokens = strtok(buff, "\n\t\r ");
	}

	return(tokens);
}
