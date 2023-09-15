#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: The separator to use
 * @n: interger n
 * ...: other argument
 * Return: Nil if one of the string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *sent;
	unsigned int p;

	va_start(strings, p)
	for ( p = 0; p < n; p++;)
	{	sent = va_arg(char * ,strings);
		if (sent == NULL)
			printf("nil");
		else 
	}
}
