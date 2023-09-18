#include "main.h"
#include <stdio.h>
/**
 * _puts - the function that does the specified task
 * Return: void
 * @str: the param it takes.
 */
void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);

	}
	putchar('\n');
}
