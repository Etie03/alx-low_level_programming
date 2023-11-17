#include <stdio.h>
/**
 * main -  a program that prints the number of arguments passed into it
 * @argc: the number of arguments passed to the program
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
