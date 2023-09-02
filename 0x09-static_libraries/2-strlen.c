#include "main.h"

/**
 * custom_strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int custom_strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
