#include "main.h"
#include <stdio.h>
#include <string.h>
/***
 * print_rev - the function that helpsa to print the string in reverse
 * Return: void in case of success
 * @s: the string.
 */

void print_rev(char *s)
{
	int i, size;
	size = strlen(s);

	for (i = size-1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
