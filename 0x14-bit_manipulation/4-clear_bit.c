#include <stdio.h>
#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: unsigned long integer
* @index: the index of n, starting frm 0
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size_sz;
	unsigned long int counting;

	size_sz = (sizeof(n) * 8 - 1);

	if (index > size_sz)
		return (-1);

	counting = 1 << index;

	*n = *n & ~counting;

	return (-1);

}

