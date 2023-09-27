#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - the main function.
 * @x: is the first param
 * @y: is the second param
 * Return: an int
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (-1);

	}
	return (x * _pow_recursion(x, y - 1));

}
