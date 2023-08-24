#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 * *p: The string too be changed
 *
 * Return: Always 0.
 */
char *string_toupper(char *p)
{
	int x = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

			a++;
	}
	return (p);
}
