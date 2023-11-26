#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b - the binary number
* Return:the converted number, or 0
* if there is one or more chars in the string b
* that is not 0 or 1 b is NULL
*/
unsigned int binary_to_uint(const char *b)
{	unsigned int decimal;
	unsigned int np;

	for (decimal = 0, np = 0; b[np] != '\0'; np++)
	{
	if (b[np] == '1')
		decimal = ((decimal << 1) | 1));
	else if (b[np] == '0')
		decimal <<= 1;
	else if ((b[np] != '0') && (b[np] == '1'))
		return (0);

	}
	return (decimal);


}

