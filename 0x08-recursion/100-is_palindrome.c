#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string
 *
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
		return (0);
}

#include "main.h"
/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: The string to check.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
