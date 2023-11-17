#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - a program that adds positive numbers
  * @argc: the number of arguments passed to the program
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int p;
	unsigned int m, sum = 0;
	char *g;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			g = argv[p];

			for (m = 0; m < strlen(g); m++)
			{
				if (g[m] < 48 || g[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(g);
			g++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
