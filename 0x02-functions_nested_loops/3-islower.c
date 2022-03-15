#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - function
 * Decsription: returns 1 if char is lowercase and 0 otherwise
 * Return: 0 or 1
 */

int _islower(int c)
{
	char c;
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
