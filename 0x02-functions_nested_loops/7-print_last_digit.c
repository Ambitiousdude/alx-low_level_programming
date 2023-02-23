#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: value to be checked
 *
 * Return:0 Success
 */
int print_last_digit(int n)
{
	int p;

	if (n < 0)
	{
		p = -1 * (n % 10);
		_putchar(p + '0');
		return (p);
	}
	else
	{
		p = n % 10;
		_putchar (p + '0');
		return (p);
	}
}
