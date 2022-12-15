#include "monty.h"

/**
 * main - Entry Point
 *
 * @argc: Number of command line arguments.
 * @argv: An array containing the arguments.
 *
 * Return: Always Zero.
 */
int main(int argc, char* argv[])
{
	char *fileName = argv[1];
	FILE *file_d;

	if (argc != 2)
		return(usage_error());
	else
		file_d = fopen(fileName, "r");

	if (file_d == NULL)
		return(f_open_error(fileName));

	get_file_line(file_d);
	fclose(file_d);

	return EXIT_SUCCESS;
}
