#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 Alway (Success)
 */
int main(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (ch < 'g')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
