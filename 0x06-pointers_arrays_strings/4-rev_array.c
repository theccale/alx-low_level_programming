#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array
 * @n: the integer
 * Return Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)

	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

