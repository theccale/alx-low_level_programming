#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @spt: The string to be changed
 *
 * Return: char value.
 */
char *cap_string(char *spt)
{
	int a = 0, i;
	int spcc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (spt[a])
	{
		i = 0;

		while (i < spcc)
		{
			if ((a == 0 || spt[a - 1] == spc[i]) && (spt[a] >= 97 && spt[a] <= 122))
				spt[a] -= 32;

			i++;
		}

		a++;
	}

	return (spt);
}


