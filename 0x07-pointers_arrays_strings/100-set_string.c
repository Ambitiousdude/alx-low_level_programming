#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: char value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
