#include "monty.h"

/**
 * read_file - Reads the content of a file line by line.
 * @fd: Pointer to a file descriptor of an open file
 */

void get_file_line(FILE *file_d)
{
	int line_n;
	char *buffer;
	size_t buff_size;

	buffer = NULL;
	buff_size = 0;

	/* Getting each line in the file */
	for (line_n = 1; getline(&buffer, &buff_size, file_d) != EOF; line_n++)
	{

	}

	free(buffer);
}
