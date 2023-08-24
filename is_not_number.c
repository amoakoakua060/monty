#include "monty.h"

/**
 * is_not_number - Checks if a string doesn't represent a valid integer number.
 * @str: The string to check.
 * Return: 1 if not stringr, 0 otherwise.
 */
int is_not_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}

	return (0);
}
