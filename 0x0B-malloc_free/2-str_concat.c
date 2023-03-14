#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and the returned
 * pointer points to a newly allocated memory space
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}

	array = (char *)malloc((len1 + len2 + 1) * (sizeof(char)));
	if (array == NULL)

		return (NULL);

	while (i < len1)
	{
		array[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		array[i] = s2[j];
		i++;
		j++;
	}

	array[i] = '\0';
	return (array);
	free(array);
}
