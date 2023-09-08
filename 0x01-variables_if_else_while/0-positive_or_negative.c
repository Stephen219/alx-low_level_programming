#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point of the program.
 * return: 0(Succes).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the if conditions that does the logic*/
	if (n > 0)
	{
		printf("is positive \n");
	} else if (n == 0)
	{
		printf("is zero \n");

	} else
	{
		printf("is negative \n");
	}
	return (0);
}
