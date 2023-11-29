#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int m, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < bytes; m++)
	{
		printf("%02x", opc[m] & 0xFF);
		if (m != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
