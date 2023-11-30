#include <stdio.h>
#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: the long integer
* @index: the starting point, 0, of the n
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size_sz;
	unsigned long int counting;

	size_sz = (sizeof(n) * 8 - 1);

	if (index > size_sz)
		return (-1);

	counting = 1 << index;

	*n = counting | *n;

	return (1);
}

