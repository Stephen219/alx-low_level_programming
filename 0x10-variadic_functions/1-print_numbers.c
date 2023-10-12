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
	v = va_arg(list, int);


	for (i = 0; i < n; i++)
	{
		v = va_arg(list, int);
		printf("%d", v);

		if (i < n - 1 && separator != NULL)
		
		{
			printf("%s", separator);
		}

				



	}
	va_end(list);
	printf("\n");

}
