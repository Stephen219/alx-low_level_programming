#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - this is the function that concats 2 strings
 * Return: the pointer of the resulting str
 * @s1: the string 1
 * @s2: the 2nd string
*/


char *str_concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 1);

	 strcpy(result, s1);
	strcat(result, s2);
	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
