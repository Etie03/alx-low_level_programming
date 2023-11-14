#include <stdio.h>
/**
 * main - print the sum of the even-valued terms followed by a new line
 *
 *
 * Return: the sum of the series
 */
int main(void)
{
	int m;
	long fibonacci = 0;
	long fn_1 = 1;
	long fn_2 = 0;
	long sum_even = 0;

	for (m = 1; m <= 32; m++)
	{
		fibonacci = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fibonacci;

		if ((fibonacci % 2) == 0)
		{
			sum_even = sum_even + fibonacci;
		}
	}

	printf("%ld\n", sum_even);
	return (0);
}
