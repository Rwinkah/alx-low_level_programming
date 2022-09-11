#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 *main - program entry point
 *
 *Description : 'function picks a random number and checks'
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is positive\n", n);
		}
	}
	return (0);

}
