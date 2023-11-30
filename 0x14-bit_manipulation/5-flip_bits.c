#include <stdio.h>
#include "main.h"

/**
* flip_bits - returns the number of bits you would
* need to flip to get from one number to another.
* @n: unsigned long integer
* @m: unsigned long integer
* Return: Always 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size_sz;
	unsigned long int to_flip;
	unsigned long int np;

	size_sz = (sizeof(n) * 8 - 1);

	to_flip = 0;
	np = 0;

	while (np <= size_sz)
	{
		if ((n & 1) != (m & 1))
			to_flip++;

		n = n >> 1;
		m = m >> 1;

		np++;
	}
		return (to_flip);
}

