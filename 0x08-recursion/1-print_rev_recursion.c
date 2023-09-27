#include <stdio.h>
/**
 * void _print_rev_recursion - this is the function reversing the string
 * @s: the string parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		putchar(*s);
	}
}
