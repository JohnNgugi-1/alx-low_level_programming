#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - function
 * Decsription: returns 1 if char is lowercase and 0 otherwise
 * Return: 0 or 1
 */

int _islower(int c)
{
	char k;
	while (c > 0)
	{
		char k;
		if (k >= 'a' && k <= 'z')
		{
		return (1);
		}
		else
		{
		return (0);
		}
		c++;
	}
}
