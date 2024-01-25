#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <input>\n", argv[0]);
		return (1);
	}

	const char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int len = strlen(argv[1]);

	char password[7];
	int tmp = len ^ 59;

	for (int i = 0; i < 6; i++)
	{
		password[i] = codex[tmp & 63];
		tmp = 0;

		for (int j = 0; j < len; j++)
		{
			tmp += (i % 2 == 0) ? argv[1][j] : argv[1][j] * argv[1][j];
		}

		if (i == 3)
		{
			srand(tmp ^ 14);
			password[i] = codex[rand() & 63];
		}
	}

	password[6] = '\0';
	printf("%s\n", password);

	return (0);
}
