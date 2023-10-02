
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - this is the function that perfoms the task
 * Return:  pointer to the array, or NULL if it fails
 * @size:  the size of the array
 * @c: members of the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(c));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
