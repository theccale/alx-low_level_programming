#include <stdio.h>
#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n - long integer
* Return:the converted number, or 0
* if there is one or more chars in the string b
* that is not 0 or 1 b is NULL
*/
void print_binary(unsigned long int n)
{       unsigned long int size_sz;
	char d;
	int flag;
size_sz = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	flag = 0;

	while (size_sz >= 0)
	{
		d = (n >> size_sz) & 1;

		if (flag == 1)
			putchar(d + '0');
		else
		{
			if (d == 1)
			{
				 putchar(d + '0');
				 flag = 1;

			}
		}
		size_sz -= 1;
	}
}

 










