#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: contains argument count
 * @argv: contains argument values
 * Return: integer to be returned
 */

int main(int argc, char *argv[])
{
	print("%s\n", argv[argc -1]);

	return (0);
}