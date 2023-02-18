#include <stdio.h>

/**
 * main - entry oint
 * Return: 0 Always (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
