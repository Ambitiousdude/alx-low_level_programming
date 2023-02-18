#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(b + '0');
		if (b < 9)
		{
			putchar(44);
			putchar(32);
		}
		b++;
	}
	putchar('\n');

	return (0);
}
