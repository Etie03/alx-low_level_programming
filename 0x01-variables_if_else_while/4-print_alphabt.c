#include <stdio.h>
/**
 * main - The program prints alphabets in lowercase except q and e
 *
 * Return: this program returns 0
 */

int main(void)
{
char lowercase;

lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase != 'e' && lowercase != 'q')

putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}


