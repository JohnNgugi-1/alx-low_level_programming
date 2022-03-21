#include "main.h"

/**
 * swap_int - function
 * @a : first parameter
 * @b : second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
