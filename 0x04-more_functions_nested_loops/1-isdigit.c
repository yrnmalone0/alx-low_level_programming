#include "main.h"

/**
 * _isdigit - check for digits
 * @c: checks character or number
 * Return: 1 (Success) and 0 (Fail)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
