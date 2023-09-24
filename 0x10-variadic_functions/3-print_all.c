#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
=======
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* ...: other arguments
* Return: Always 0
>>>>>>> 8cc1cabe55448f952769eb41bf61eb26148f02e2
*/
=======

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: other variables
 */
>>>>>>> b55796704233a86fec32aba79a0bba1f4514e203
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
<<<<<<< HEAD
}

<<<<<<< HEAD
=======
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
>>>>>>> 8cc1cabe55448f952769eb41bf61eb26148f02e2
=======
}

>>>>>>> b55796704233a86fec32aba79a0bba1f4514e203
