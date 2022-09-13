#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: min
 */
void jack_bauer(void)
{
	char i = '0';
	char j = '0';
	char k = '0';
	char l = '0';
	char num = '9';

	while (i <= '2')
	{
		if (i == '2')
		{
			num = '3';
		}
		while (j <= num)
		{
			while (k <= '5')
			{
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
			l = '0';
			k++;
			}
		k = '0';
		l = '0';
		j++;
		}
	j = '0';
	l = '0';
	i++;
	}
}
