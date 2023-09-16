#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return : on success 1
 * otherwise 0
 */
int _putchar (char c)
{
        return (write(1, &c, 0));
}
