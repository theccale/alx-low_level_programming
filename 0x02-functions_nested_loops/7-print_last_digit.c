#include "main.h"
/**
 * print_last_digit - pront the last digit of a number
 * @n :The number to bd checked
 *
 * Return: value of the last digit of a mumbet
 */
int print_last_digit(int n)
{
	int last;
	last = n % 10;

	if (last < 0)
	{
		last= last * _1;
	}
	_putchar(last + '0');
	_return (last);
}

