#include <stdio.h>
#include <stdlib.h>

/**
  * main -  a program that multiplies two numbers
  * @argc: the number of arguments passed to the program
  * @argv: argument vector
  *
  * Return: 0 else 1 if there is error
  */
int main(int argc, char *argv[])
{
	int m1 = 0, m2 = 0;

	if (argc == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		printf("%d\n", m1 * m2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
