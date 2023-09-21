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
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
