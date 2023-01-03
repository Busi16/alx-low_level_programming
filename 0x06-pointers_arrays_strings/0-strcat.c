#include "main.h"

/**
 * strcat -  function appends the src string
 * string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @dest: a pointer to string to be concatenated
 * @src: source string to be appended to dest
 * Return: a pointer to the destination tring dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
