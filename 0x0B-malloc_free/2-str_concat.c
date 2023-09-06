#include "main.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int ate, aci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ate = aci = 0;
	while (s1[ate] != '\0')
		ate++;
	while (s2[aci] != '\0')
		aci++;
	conct = malloc(sizeof(char) * (ate + aci + 1));

	if (conct == NULL)
		return (NULL);
	ate = aci = 0;
	while (s1[ate] != '\0')
	{
		conct[ate] = s1[ate];
		ate++;
	}

	while (s2[aci] != '\0')
	{
		conct[ate] = s2[aci];
		ate++, aci++;
	}
	conct[ate] = '\0';
	return (conct);
}

