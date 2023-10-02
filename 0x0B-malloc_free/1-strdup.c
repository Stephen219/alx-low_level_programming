#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - the functuon that perfoms the tasks
 * Return: returns a pointer
 * @str: a string
 */

char *_strdup(char *str)
{
	int l = strlen(str);
	char *dest = (char *)malloc(l + 1);


	if (str == NULL)
	{
		return strdup("");

	}

	if (dest == NULL)
	{
		return (NULL);
	}
	strcpy(dest, str);
	return (dest);

}
