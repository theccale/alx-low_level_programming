#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - adds the interger together
* @n: The interger
* @...: The parameter that will be
*
* Return: if n === 0, 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list apy;
	unsigned int i, sum = 0;

	va_start(apy, n);

	for (i = 0; i < n; i++)
		sum += va_arg(apy, int);

	va_end(apy);

	return (sum);

}
