#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n :The number in question
 *
 * Return: value of the last digit of a mumbet
 */
int print_last_digit(int n)
{
	int last;
	last = n % 10;

	if (last < 0)
	{
		last *= -1;

	}
		_putchar(last + '0');
		return (last);
}

