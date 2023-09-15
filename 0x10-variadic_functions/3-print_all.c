#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* ...: other arguments
* Return: Always 0
*/
void print_all(const char * const format, ...)
{

int a = 0;

char *str, *virt = "";



va_list others;

va_start(others, format);


if (format)

{

while (format[a])

{

switch (format[a])

{

case 'c':

printf("%s%c", virt, va_arg(others, int));

break;

case 'i':

printf("%s%d", virt, va_arg(others, int));

break;

case 'f':

printf("%s%f", virt, va_arg(others, double));

break;

case 's':

str = va_arg(others, char *);

if (!str)

str = "(nil)";

printf("%s%s", virt, str);

break;

default:

a++;

continue;

}

virt = ", ";

a++;

}

}



printf("\n");

va_end(virt);

}
