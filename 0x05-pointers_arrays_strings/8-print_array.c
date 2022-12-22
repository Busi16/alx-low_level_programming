#include "main.h"
#include <stdio.h>

/**
 *print_array - function that prints n elements
 * of an array of integers,
 * followed by a new line
 * @a: int type array pointer
 * @n: int type integer
 */

void print_array(int *a, int n)
{
	int i;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
