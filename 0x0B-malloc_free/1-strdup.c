#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: char
* Return: Returns NULL if str = NULL
*/
char *_strdup(char *str)
{char *abip;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	abip = malloc(sizeof(char) * (i + 1));

	if (abip == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		abip[r] = str[r];

	return (abip);
}
