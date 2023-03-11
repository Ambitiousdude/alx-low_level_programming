#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: number of argument count
 * @argv: one dimensional argument vector
 *
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if ((_checkifdigits(argv[i])))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _checkifdigits - function to check if the argument passed is a digit
 * @s: argument to check
 *
 * Return: 0 success else 1
 */
int _checkifdigits(char *s)
{
	int j;

	for (j = 0; s[j]; j++)
	{
		if (!(s[j] >= '0' && s[j] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}
