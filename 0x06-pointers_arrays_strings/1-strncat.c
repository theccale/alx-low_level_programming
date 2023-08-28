#include "main.h"

/**
* _strncat -  concatenates two strings.
* @src: The string source
*
* @dest: The destination string
* @n: The number of bytes
* Return: A pointer to the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int connt = 0, m = 0;

	while (dest[connt])
	{
		connt++;
	}

	while (m < n && src[m])
	{
		dest[connt] = src[m];
		connt++;
		m++;
	}

	dest[connt + n + 1] = '\0';

	return (dest);
}
