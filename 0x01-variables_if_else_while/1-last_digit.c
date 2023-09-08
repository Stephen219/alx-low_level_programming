#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry of the program
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10; /* Extract the last digit of n*/

	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

