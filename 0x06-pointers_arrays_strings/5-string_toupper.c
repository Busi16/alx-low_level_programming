#include "main.h"

/**
 * I will edit later
 */

char *string_toupper(char *)
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
