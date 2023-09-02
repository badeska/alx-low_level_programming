#include "main.h"

/**
 * custom_isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int custom_isdigit(int c)
{
	/* Check if the character is a digit (0 through 9) */
	return (c >= '0' && c <= '9');
}
