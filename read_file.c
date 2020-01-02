#include "monty.h"
/**
 * read_file - read the content of a monty file.
 * @fd: The file  to a file
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	int fd, rd;
	char *buff;

	buff = malloc(sizeof(char)* 1024);
	/*TODO Malloc validate null*/ 
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("%s %s\n", "Error: Can't open file", filename);
		exit(EXIT_FAILURE);
	}
	rd = read(fd, buff, 1024);
	if (rd > 0)
	{
		buff[rd] = '\0';
	}
	return (buff);
}
