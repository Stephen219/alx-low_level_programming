#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - this is the function that returns the length
 * @s: the string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		if (*s)
		{
			l++;
			l += _strlen_recursion(s + 1);
		}
	}
	return (l);
}
