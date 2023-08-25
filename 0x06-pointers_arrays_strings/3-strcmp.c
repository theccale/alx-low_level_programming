#include "main.h"
#include <stdio.h>

/**
 * _strcmp -  compares two strings.
 * @s1: The first string
 * @s2: The second string to compare with s1
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, result = 0, lim;

	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		lim = x;
	}
	else
	{
		lim = y;
	}
	while (z <= lim)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			result = s1[z] - s2[z];
			break;
		}

		z++;
	}
	return (result);
}
