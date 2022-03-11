#include <stdio.h>
/**
 * main - function
 * Description: print alphabet in capital and letters
 * Return: 0
 */
int main(void)
{
	char ch;
	char cH;

        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);
	for (cH = 'A'; cH <= 'Z'; cH++)
                putchar(cH);
        putchar('\n');
        return (0);
}

