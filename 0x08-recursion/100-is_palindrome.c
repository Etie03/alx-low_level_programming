#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - a function that returns 1
  * if a string is a palindrome and 0 if not
  * @s: the string value to be checked
  *
  * Return: solution
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparator - a function that compares each character of the string
 * @s: the  string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: nothing
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
  * _strlen_recursion - a function that gets the length of a string
  * @s: the string
  *
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
