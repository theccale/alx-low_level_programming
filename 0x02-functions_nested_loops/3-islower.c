#include "main.h"
/**
 * main - Entry point
 *
 * Description: _islower checks for lowercase character
 *
 * @c:is the char to be checked
 * Return: 1 if lowercase
 *	otherwise  0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
