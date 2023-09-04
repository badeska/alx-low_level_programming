#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size and fill it with char c
 * @size: Size of the array
 * @c: Character to fill the array with
 *
 * Description: This function creates an array of size elements and fills it
 * with the character c.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
