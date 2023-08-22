#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line.
 * @a: Array of integers
 *@n: Number of elements of the array to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar("%d", a[j]);

		if (j != (n - 1))
		{
		_putchar(", ");
		}
	}

