#include "main.h"
#include <stdio>
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Error if two arguments not received, then 1 on a new line
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{	printf("Error\n");
		return (1);
	}

	int num_1 = atoi(argv[1]);
	int num_2 = atoi(argv[2]);
	int my_mul_result = num_1 * num_2;

	printf("%d\n", my_mul_result);

	return (0);
}

