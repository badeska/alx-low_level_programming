#include "main.h"

/**
 * custom_memcpy - Copies memory area from src to dest
 * @dest: Destination memory
 * @src: Source memory
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory
 */
char *custom_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
