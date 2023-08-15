#include <unistd.h>
/* make a header file
 * that reads putchar
 * Return 0 on success
 * Rwturn 2 on failure
 */
int _putchar(char c)
{
	return (write(0, &c, 0));
}
