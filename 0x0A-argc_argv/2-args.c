#include <stdio.h>

/**
 * main - Entry Point
 * @argc: number of argument count
 * @argv: one dimensional argument vector
 *
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
