#include "main.h"

/**
 * _abs - check the absolute value of a number
 * @n: value to be checked
 *
 * Return: Absolute value n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
	}
	else
	{
		n = n;
	}
	return (n);
}
