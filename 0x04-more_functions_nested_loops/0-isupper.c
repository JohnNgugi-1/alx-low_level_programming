#include "main.h"

/**
 * _isupper - check for uppercase character
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int k;
	k = 0;

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
