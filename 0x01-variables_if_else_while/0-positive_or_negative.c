#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program.
 * Return: 0(Succes).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the if conditions that does the logic*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);

	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
