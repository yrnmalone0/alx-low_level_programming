#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long a, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			maxf = number / a;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}
