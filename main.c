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
	char const* const fileName = argv[1];
	FILE *file_d;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		EXIT_FAILURE;
	}
	else
		file_d = fopen(fileName, "r");

	if (file_d == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fileName);
		EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
