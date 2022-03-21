#include "main.h"

/**
 * _puts - function
 * @str : parameter
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; i > 1 ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
