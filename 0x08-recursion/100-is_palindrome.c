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

	return (check_palindrome(s));
}

/**
  * check_palindrome - a function that checks if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: solution
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
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
