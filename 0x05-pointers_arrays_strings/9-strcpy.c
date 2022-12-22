#include "main.h"

/**
 *char *_strcpy(char *dest, char *src) - function that copies
 *the string pointed to by src,
 *including the terminating null byte (\0), to the buffer
 *pointed to by dest copies the string pointed to by src
 * @src: char type string
 *
 * Description: Copy the string pointed to by pointer `src` to
 *the buffer pointed to by `dest`
 *Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)

{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}

	while (src[i] != '\0');

	return (dest);

}
