#include <stdlib.h>
#include <time.h>

/**
 * -keygen - generates random valid passwords
 *  for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{       int password [64];
        int i;
        int sum = 0;
        int n;
        srand(time(NULL));
        for (i = 0; i < 64; i++)
        {
                password [i] = rand() % 78 ;
                sum += password [i] + '0';
                printf(password [i] + '0');

                if ((2772 - sum) - '0' < 78)
                {
                        n = 2772 - sum - '0';
                        sum += n;
			printf(n + '0');
                        break ;
                }
        }       return (0);
}
