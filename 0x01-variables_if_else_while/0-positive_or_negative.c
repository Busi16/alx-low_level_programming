#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*headers goes here*/

/**
 * main - entry point
 * prints if random genrated # +, 0, -
 * return: always (0)
 * */

int main(void)
{
	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is postive\n", n);
	return (0);
}
