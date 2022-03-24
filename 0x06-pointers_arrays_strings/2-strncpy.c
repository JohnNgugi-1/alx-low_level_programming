#include "main.h"
/**
 * _strncat - function
 * @dest : string
 * @src : string
 * @n : integer
 * Return: copy string to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
