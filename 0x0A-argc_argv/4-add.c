#include <stdlib.h>
#include <stdio.h>
/**
 * main  - the main function 
 * Return: 0 for a success event 
 * @argv: this is an array of argument
 * @argc: this is the count of the argument
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	if (argc != 3)
	{
		printf("Error");
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 + num2);
	return (0);
}
