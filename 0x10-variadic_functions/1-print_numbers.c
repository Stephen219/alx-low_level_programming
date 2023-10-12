#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - the function that prints numbers
 * @separator: the thing to be printed in between texts
 * @n: the number of items args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int v;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i < n)
		{
			v = va_arg(list, int);
			printf("%d", v);
			printf("%s", separator);
		}
		 printf("%d", v);
	}
	printf("\n");
}
