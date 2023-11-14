#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int m, j, p, j1, j2, p1, p2;

	j = 1;
	p = 2;

	printf("%lu", j);

	for (m = 1; m < 91; m++)
	{
		printf(", %lu", p);
		p = p + j;
		j = p - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	p1 = p / 1000000000;
	p2 = p % 1000000000;

	for (m = 92; m < 99; ++m)
	{
		printf(", %lu", p1 + (p2 / 1000000000));
		printf("%lu", p2 % 1000000000);
		p1 = p1 + j1;
		j1 = p1 - j1;
		p2 = p2 + j2;
		j2 = p2 - j2;
	}

	printf("\n");

	return (0);
}
