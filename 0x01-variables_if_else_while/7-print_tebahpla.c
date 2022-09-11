#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
		if (ch == 'a')
			putchar('\n');
	}
	return (0);
}
