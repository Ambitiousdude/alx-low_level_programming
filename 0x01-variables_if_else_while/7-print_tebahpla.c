#include <stdio.h>

/**
 * main - Entry Point Here
 * Return: 0 Success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}
