#include <unistd.h>

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lwcase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char lwcase = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (lwcase <= 'z')
		{
			write(1, &lwcase, 1);
			lwcase++;
		}
		write(1, "\n", 1);
		i++;
		lwcase = 'a'
	}
}
