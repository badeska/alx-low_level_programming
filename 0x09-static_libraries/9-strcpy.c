#include "main.h"

/**
 * custom_strcpy - Copies the string pointed to by src to dest
 * @dest: The destination where the string will be copied
 * @src: The source string to copy from
 *
 * Return: Pointer to dest
 */
char *custom_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}

	for (int b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
