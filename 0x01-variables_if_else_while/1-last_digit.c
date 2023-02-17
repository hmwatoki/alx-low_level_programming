#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * description: prints random numbers
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* evaluate the numbers */
    int ln = n % 10;
    if(ln > 5)
    {
        printf("Last digit of %d is %d and is greater than 5", n, ln);
    }
    else if (ln == 0)
    {
         printf("Last digit of %d is %d and is 0", n, ln);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0", n, ln);
    }
	return (0);
}