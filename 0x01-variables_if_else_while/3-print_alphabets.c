#include <stdio.h>

/**
 * main - This  program prints the alphabet in lowercase and then in uppercase
 *
 * Return: it should return  0
 */

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
