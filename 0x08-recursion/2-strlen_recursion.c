#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - this is the function that returns the length
 * @s: the string
 */
int l;

int _strlen_recursion(char *s)
{
	if (*s)
	{
		if (s != "\0")
		{
			l++;
			_strlen_recursion(s + 1);
		}
	}
	return (l);
}
