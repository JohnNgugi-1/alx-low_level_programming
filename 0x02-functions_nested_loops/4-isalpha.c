#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check for alphabetic 
 * @c : parameter
 * Return: 1 for alphabetic and 0 otherwise
 */

int _isalpha(int c)
{
	int p;

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
        p = 1;
        }
        else
        {
        p = 0;
        }
        return (p);
}
