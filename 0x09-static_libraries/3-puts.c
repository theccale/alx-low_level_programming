#include "main.h"
/**
* _puts - prints out the string
*
* @str: This is my entry
*
*/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}