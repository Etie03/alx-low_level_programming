#include <stdio.h>
/**
 * main - a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int m, sum = 0;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 5) == 0 || (m % 3) == 0)
			sum += m;
	}
	printf("%d\n", sum);
	return (0);
}
