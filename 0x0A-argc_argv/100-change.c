#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 if the number passed as argument is negative,
* if the numbeer of arguments passed to your program is not exactly 1,
* print Error
*/
int main(int argc, char *argv[])
{	int num, j, results;
	int coins[COINS] = {1, 2, 5, 10, 25};

	if (argc !=2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		 printf("0\n");
return (0);
	}

}
