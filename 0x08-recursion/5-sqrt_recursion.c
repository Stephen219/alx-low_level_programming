#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - this is th efunction to find the sqrt    
 * reserch on the function
 * Return: the sqrt
 * @n the number*/

int _sqrt_recursion(int n)

{
	int m = sqrt(n);
	int v = (int)m;
	if (n == 0)
	{
		return (-1);

	}
	else if (m != v)
	{
		return (-1);

	}
	return (m);
}

