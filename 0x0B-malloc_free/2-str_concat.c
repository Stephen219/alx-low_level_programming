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

	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len2 = (s2 != NULL) ? strlen(s2) : 0;

	char *result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	if (s2 != NULL)
	{
		strcat(result, s2);
	}
	return (result);	
}
