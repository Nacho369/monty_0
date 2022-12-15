#include "monty.h"


int main(int argc, char* argv[])
{
	FILE *file_ptr;
	char const* const fileName = argv[1];
	char buff_line[BUFF_SIZE];

	if (buff_line == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		EXIT_FAILURE;
	}

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		EXIT_FAILURE;
	}
	else
		file_ptr = fopen(fileName, "r");

	if (file_ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fileName);
		EXIT_FAILURE;
	}

	while (fgets(buff_line, BUFF_SIZE, file_ptr))
	{
		printf("%s", buff_line);
	}

	return (0);
}
