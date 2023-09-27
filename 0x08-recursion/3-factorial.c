#include <stdio.h>
#include "main.h"

/**
 * factorial - this is the function of factorial
 * @n: the param
 * Return:  the answer.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));


}
