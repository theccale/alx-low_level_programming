#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer to swap
  * @b: Another integer to be swapped
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int sed;

	sed = *a;
	*a = *b;
	*b = sed;
}
