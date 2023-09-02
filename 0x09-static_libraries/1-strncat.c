#include "main.h"

/**
 * custom_strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to append from src
 *
 * Return: Pointer to the destination string
 */
char *custom_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len])
		dest_len++;

	while (src_len < n && src[src_len])
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
