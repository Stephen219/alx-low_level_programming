
#include "main.h"
#include <stdio.h>
/**
 * swap_int - the function that swaps the ints provided
 * Return: void
 * @a: first int
 * @b: seconfd int
 */
void swap_int(int *a, int *b)
{
	int m, n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;

}
