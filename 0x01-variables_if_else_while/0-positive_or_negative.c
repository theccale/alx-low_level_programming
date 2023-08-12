#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main -Entry point
 *
 *Return: Always 0(Success)
 */

int main()
{
	int x:

	srand(time(0)):
	x= rand() RAND MAX / 2:

	printf("%d\n",x);

	if (x > 0)
	{
		printf("The number is positive \n")
	}
	else if(x < 0)
	{
		printf("The number is negative \n")
	}
	else
	{
		printf("The number is zero \n")
	}
	return 0;
}
