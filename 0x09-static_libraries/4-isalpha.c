#include "main.h"

/**
 * custom_isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int custom_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
