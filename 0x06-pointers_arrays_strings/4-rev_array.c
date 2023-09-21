#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - this is the function that reverses the array.
 * Return: void
 * @a: the pointer array
 * @n:  the length of the array*
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[i] = a[n - i - 1] = tmp;
	}
}
