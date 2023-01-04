#include "main.h"

/**
 * string_toupper- changes all lowercase letters o
 * f a string to uppercase
 * @str: string to changed
 * Return: pointer to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
