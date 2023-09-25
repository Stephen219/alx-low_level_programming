#include "main.h"
#include <stdio.h>
/**
 * set_string - the string thst sets the pointer to a pointer
 * @s: the string
 * @to: to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
