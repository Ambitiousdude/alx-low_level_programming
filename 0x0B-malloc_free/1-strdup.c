#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory and which contains a copy of the string
 * @str: string duplicated
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dupstr;
	int i, j;
	int len = 0;

	if (str == NULL)

		return (NULL);


	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	dupstr = (char *)malloc((len + 1) * (sizeof(char)));

	if (dupstr == NULL)

		return (NULL);


	for (j = 0; j < len; j++)
	{
		dupstr[j] = str[j];
	}
	dupstr[j] = '\0';
	return (dupstr);
	free(dupstr);
}
