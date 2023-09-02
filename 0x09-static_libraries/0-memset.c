#include "main.h"

/**
 * custom_memset - Fills a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: Pointer to the updated memory block
 */
char *custom_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	for (; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}
