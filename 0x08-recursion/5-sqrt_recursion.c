#include "main.h"
#include <stdio.h>



/**
 * my_root - the square root fn
 * @n: The number
 * @i: the iterator
 * Return: Always the root
 * First define the function to use
 */

int my_root(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n <= i)
		return (my_root(n + 1, i));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: The number
 * Return: Always -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (my_root(n, 2));
}

