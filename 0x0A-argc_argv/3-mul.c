#include <stdio.h>
#include <stdlib.h>
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

	if (argc = 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int result = i * j;
		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
