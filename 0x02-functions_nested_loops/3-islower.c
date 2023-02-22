#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the int character to be checked
 *
 * Return: result
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
