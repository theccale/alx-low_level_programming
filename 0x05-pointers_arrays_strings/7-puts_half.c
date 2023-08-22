#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: The string to be considered
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int s = 0;
	int t;

	while (str[s] != '\0')
	{
		s++;
	}

	if (s % 2 == 1)
	{
		t = (s - 1) / 2;
		t += 1;
	}
	else
	{
		t = s / 2;
	}

	for (; t < s; t++)
	{
		_putchar(str[t]);
	}

	_putchar('\n');
}
