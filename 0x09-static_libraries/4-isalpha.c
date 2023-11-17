#include "main.h"
/**
 * _isalpha - This function checks for lowercase character
 * @c: the character to be checked
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
