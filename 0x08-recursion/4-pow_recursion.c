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
	int tem, sqr;
	if (y < 0)
	{

		return (-1);
	}
	else if (y % 2 == 0)
	{
		sqr = _pow_recursion(x, y / 2);
		return (sqr * sqr);

	
	}
	tem = _pow_recursion(x, (y - 1) / 2 );
	return (x * tem * tem);
}
