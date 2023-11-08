#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
int y, z;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (y = 0; n[y] != '\0'; y++)
{
for (z = 0; z < 10; z++)
{
if (n[y] == s1[z])
{
n[y] = s2[z];
			}
}
}
return (n);
}


