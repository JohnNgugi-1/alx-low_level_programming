#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - function
 * Decsription: returns 1 if char is lowercase and 0 otherwise
 * Return: 0 or 1
 */

int _islower(int c)
{
	int p;

	while (c > 0)
	{
		char k;
		if (k >= 'a' && k <= 'z')
		{
		p = 1;
		}
		else
		{
		p = 0;
		}
		c++;
	}
	return (p);
}
