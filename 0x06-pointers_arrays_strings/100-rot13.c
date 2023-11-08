#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
int t;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (t = 0; s[t] != '\0'; t++)
{
for (j = 0; j < 52; j++)
{
if (s[t] == data1[j])
{
s[t] = datarot[j];
break;
			}
}
}
return (s);
}


