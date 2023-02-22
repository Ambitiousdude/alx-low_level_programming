#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 * Return: Void Success
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
