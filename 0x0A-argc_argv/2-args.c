#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
* @argc: number of arguments
* @argv: array of arguments
*
* Return: On success 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("argv%s", i, argv[i]);
	}
	printf("\n");
	return (0);
}
