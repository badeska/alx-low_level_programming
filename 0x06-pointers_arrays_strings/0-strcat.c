#include <stddef.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end)
	dest_end++;

	while (*src)
	{
	*dest_end = *src;
	dest_end++;
	src++;
	}

	*dest_end = '\0';

	return (dest);
}
