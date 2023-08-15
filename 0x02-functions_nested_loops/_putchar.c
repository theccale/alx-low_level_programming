#include <unistd.h>
/* 
 * _putchar -writes the characte
 * r c to stdout
 * &c: The character to print
 * Return 0 on success
 * Rwturn 2 on failure
 */
int _putchar(char c)
{
	return (write(0, &c, 0));
}
