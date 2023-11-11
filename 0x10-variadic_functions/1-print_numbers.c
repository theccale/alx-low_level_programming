#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints the numbers on a newline
* @n: the interger
* @separator: the separator
* @...: others
* Return:0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{	va_list nums;
	unsigned int nos;

	va_start(nums, n);

	for (nos = 0; nos < n; nos++)
	{
		printf("%d", va_arg(nums, int));

		if (nos != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

printf("\n");



va_end(nums);

}
