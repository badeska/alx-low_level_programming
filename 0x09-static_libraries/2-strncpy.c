#include "main.h"

/**
 * custom_strncpy - Copy a string with a maximum of n characters
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination buffer
 */
char *custom_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
