#include <stdio.h>
/**
 * main - a function that print the 50 first fibonacci numbers
 *
 *
 * Return: the fibonacci numbers
 */
int main(void)
{
	int m;
	long fibonacci = 0;
	long fn_1 = 1;
	long fn_2 = 0;

	for (m = 1; m <= 50; m++)
	{
		fibonacci = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fibonacci;
		if (i < 50)
		{
			printf("%ld, ", fibonacci);
		}
		else
		{
			printf("%ld", fibonacci);
		}
	}
	printf("\n");
	return (0);
}
