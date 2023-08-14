#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main
 *
 * Return : Always 0(Sucess)
 */
int main()
{	int n;
	int x = (n % 10);
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (x > 5)
	{	printf("The Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if(x < 6 && x!= 0)
	{	printf("The Last digit of %d is %d and is greater than 6 and not 0\n", n, x);
	}
	else
	{	printf("The Last digit %d is %d and is 0\n", n, x);
	}
	return 0;
	}
