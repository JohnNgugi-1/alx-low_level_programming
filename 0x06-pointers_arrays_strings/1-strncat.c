#include "main.h"
#include <string.h>

/**
 * _strcat - function
 * @dest : first string
 * @src : second string
 * @n : number of bytes
 * Return: @dest + @src
 */

char *_strncat(char *dest, char *src, int n)
{
        int length, j;

        length = 0;
        while (dest[length] != '\0')
        {
                ++length;
        }
        for (j = 0; src[j] != '\0'; ++j, ++length)
        {
                dest[length] = src[j];
        }
	if (strlen(src) < n)
	{
		dest[length] = '\0';
	}

        return (dest);
}

