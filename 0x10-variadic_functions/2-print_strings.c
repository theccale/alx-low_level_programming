#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
<<<<<<< HEAD
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
* Return:Nil if one of the string is NULL
=======
* print_strings - prints strings, followed by a new line.
* @separator: The separator to use
* @n: interger n
* @...: other argument
* Return: Nil if one of the string is NULL
>>>>>>> b55796704233a86fec32aba79a0bba1f4514e203
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;

va_start(strings, n);

for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

<<<<<<< HEAD
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
=======
	va_start(strings, n);

	for (p = 0; p < n; p++)

	{
		sent = va_arg(char *,strings);

		if (sent == NULL)
			printf("(nil)");
		else
			printf("%s",sent);
		if (p > 0 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
>>>>>>> b55796704233a86fec32aba79a0bba1f4514e203
}
