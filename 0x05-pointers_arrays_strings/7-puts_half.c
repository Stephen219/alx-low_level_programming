#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints the other half of the string.
 * @str: param
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i, j;
	switch (length % 2)
	{
		case 0:
			j= length  / 2;
			for (i  = j; str[i] != '\0';  i ++)
			{
				putchar(str[i]);
			}
			putchar('\n');
			break;
		default:
			j = (length - 1) / 2;
			for (i  = j; str[i] != '\0';  i ++)
			{
				putchar(str[i]);
			}
			putchar('\n');
	}
}
