#include <unistd.h>

/**
 * print_alphabet - prints alphabet in lwcase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lwcase = 'a';

	while (lwcase <= 'z')
	{
		putchar(1, &lwcase, 1);
		lwcase++;
	}
	putchar(1, "\n", 1);
}
