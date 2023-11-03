#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: array of Arguments
*
* Return: 0 followed by a new line if nonumber is passed,
* Error if one of the number passed contains symbols, follwed by a newline, then 1
*_

int main(int argc, char *argv[])
{
	int my_sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[j][i] != '\0'; j++)
		{
		if (argv[i][j] < '0' || argv [i][j] > '9')
		{	printf ("Error\n");
			return (1);
	}
}
	sum += atoi(argv[i]);
	}
	 printf ("%d\n", my_sum);
                        return (0);
}

