#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			if (b == 7)
			{
				_putchar(a[c][b]);
				_putchar('\n');
			}
			else
				_putchar(a[c][b]);
		}

	}
}
