#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string the method that reverses our string.
 * Returns: void in a successiful event
 * @s: this is the input string param to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	while s[length] != '\0'
	{
		length++;
	}
	int i;

	for (i = length - 1; i>=0: i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
