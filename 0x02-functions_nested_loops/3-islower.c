#include <main.h>

/**
 * _islower - checks for lowercase character
 * Return: num
 */
int _islower(int c)
{
	int num;

	if (c >= 'a' && c <= 'z')
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return (num);
}
