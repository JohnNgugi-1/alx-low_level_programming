#include "main.h"

/**
 * _strcat - function
 * @dest : first string
 * @src : second string
 * Return: @dest + @src
 */

char *_strcat(char *dest, char *src)
{
	char *con;
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
	dest[length] = '\0';
	_putchar("%s", dest);
	con = &dest

	return (dest);
}
