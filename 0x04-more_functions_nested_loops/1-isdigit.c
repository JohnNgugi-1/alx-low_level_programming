#include "main.h"

/**
 * _isdigit - check if is digit
 * @c : parameter passed
 * Return:0 or 1
 */

int _isdigit(int c)
{
	int k;

	if (c >= 0 && c <= 9)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	
	return (k);
}
