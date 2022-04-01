#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: contains argument count
 * @argv: contains argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;

	if (argc == 3)
	{
		i = argv[1];
		j = argv[2];
		int result = i * j;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
