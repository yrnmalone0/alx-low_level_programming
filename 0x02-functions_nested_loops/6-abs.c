#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: value
 * Return: num
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else
	{
		num = num * 1;
		return (num);
	}
}
