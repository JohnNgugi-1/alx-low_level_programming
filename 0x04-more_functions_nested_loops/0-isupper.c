#include "main.h"

/**
 * _isupper - check for uppercase character
 * Return: 0
 */

int _isupper(int c)
{
	int k;

	if (c >= 65 && c <= 90)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}

	return (k);
}
