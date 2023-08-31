#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to std * @c: The character to print
 * Return : on success 1
 * otherwise 0
 */
int _putchar (char c)
{
        return (write(1, &c, 0));
}

