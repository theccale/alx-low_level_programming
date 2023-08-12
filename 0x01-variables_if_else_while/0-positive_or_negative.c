#include <stdoo
#include <stdlib.h>
#include <time.h>
/**
 *main -Entry point
 *
 *Return: Always 0(Success)
 */

int main(void)
{int x;
	srand(time(0));
	x= rand() - RAND_MAX / 2;
	printf("%d\n",x);
	if (x > 0)
	{
		printf("%d is positive \n");
	}
	else if (x < 0)
	{
                printf("%d is negative \n");
        }
	else
	{
		printf("%d is zero \n");
	}
	return 0;
}
