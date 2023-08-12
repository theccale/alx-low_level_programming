#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main
 *
 * Return : Always 0(Sucess)
 */
int main()				{int x;
	srand(time(0));
	x = rand() _ RAND_MAX / 2;
printf("%d \n",x);
	if (x > 0)
	{printf("The number is positive \n");
	}	
	else if(x < 0)			{printf("The number is negative \n");
	}
	else
	{
		printf("The number is zero \n");
	}
return 0; 
}
