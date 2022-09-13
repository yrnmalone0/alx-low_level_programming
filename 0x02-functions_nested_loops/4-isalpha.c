#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: value
 * Return: caps(0 or 1)
 */
int _isalpha(int c)
{
	int caps;

	if (c >= 'A' && c <= 'Z')
	{
		caps = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		caps = 1;
	}
	else
	{
		caps = 0;
	}
	return (caps);
}
