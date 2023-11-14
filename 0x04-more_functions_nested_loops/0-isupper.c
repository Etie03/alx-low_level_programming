#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the character to be checked
 *
 * Return: return 1 if uppercase or else 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
