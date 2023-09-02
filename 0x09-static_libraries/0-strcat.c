#include "main.h"

/**
 * custom_strcat - Concatenates two strings
 * @dest: The destination string to which src will be appended
 * @src: The source string to append to dest
 *
 * Return: Pointer to the destination string
 */
char *custom_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Calculate the length of the source string */
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	/* Append the source string to the destination string */
	for (int i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Null-terminate the concatenated string */
	dest[dest_len + src_len] = '\0';

	return (dest);
}
