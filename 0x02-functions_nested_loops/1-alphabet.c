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
		write(1, &lwcase, 1);
		lwcase++;
	}
	write(1, "\n", 1);
}
