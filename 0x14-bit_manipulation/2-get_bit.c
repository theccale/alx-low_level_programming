#include <stdio.h>
#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
* @n: the integer
* @index: index of n
* Return:the value of the bit at index
* index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size_sz;

	size_sz = (sizeof(n) * 8 - 1);

	if (index > size_sz)
		return (-1);

	return ((n >> index) & 1);


}


