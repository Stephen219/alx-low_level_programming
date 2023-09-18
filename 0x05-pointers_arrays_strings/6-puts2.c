#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints the characters of a string.
 * Return: void.
 * @str: the string param to be reversed.
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		putchar(str[i]);

	}
	putchar('\n');
}
