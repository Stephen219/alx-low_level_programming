#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main func that multiplies
 * @argc: the arg count.
 * @argv: all the args
 * Return: 1 if error and 0n for succes
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
