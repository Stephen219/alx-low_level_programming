#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - the main
 * @argc: the count of the args
 * @argv: the array of string args
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
