#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings.
 *@src: the source string
 *@dest: where the pointer is returned
 * Return: A pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int connt = 0, l;

	while (dest[connt])
	{
		connt++;
	}
	for (l = 0; src[l] != 0; l++)
	{
		dest[connt] = src[l];
		connt++;
	}

	dest[connt] = '\0';
	return (dest);
}
