#include "main.h"
/** main - a function that prints the sign of a number
 *
 * print-sign
 * Return 0 if n is zero otherwise returns -1 and prints -
 * @n :the int to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (1);
}
