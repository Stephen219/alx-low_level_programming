#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - the function that ssums all the args
 * @n: the first argument
 * @...: all the other params
 * Return: returns the sum as an int for a success event.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg_list, int);
	}
	return (sum);
}
