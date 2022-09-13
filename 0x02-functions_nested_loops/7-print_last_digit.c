#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: value
 * Return: lastDigit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
