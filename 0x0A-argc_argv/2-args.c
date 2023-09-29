#include <stdio.h>

/**
 * main - the main func
 * @argc: the arg count
 * @agrv: the array of string args
 * Return: 0 for success execution
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
